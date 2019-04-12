%{
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "strutils.h"
#include "markdown-utils.h" 
#include "node.h"
#include "nodetree.h"

#define YYERROR_VERBOSE

/* prototypes */
extern int yylex(void);
extern void yyerror(char *s);
extern void markdown(void);

int _inner_pre_level = -1;
t_tag_info *tag_info;
t_node *_node, *_tail_node, *_tmp_node;

/**
 * @sed_append_to_tail_and_return_the_first
 */


%}


%union{
    char *text;
    t_node *node;
};

    /* bind union part with terminal symbol */
%token <text> TEXT SPECIALCHAR CODETEXT H QUOTEH HTMLBLOCK SECTION VSECTION SCRIPTSTART SCRIPTEND
%token <text> STYLESTART STYLEEND SVGSTART SVGEND LINK BACKTICK TRIPLEBACKTICK
%token <text> TABLEROWSTART TABLECEILEND
%token <text> ULINDENT OLINDENT TEXTINDENT PRE_INDENT INDENTED_PRE_INDENT
%token <text> LEFTSQUARE RIGHTSQUARE LEFTBRACKET RIGHTBRACKET EXCLAMATION_LEFTSQUARE

%token MINUS PLUS RIGHTPARENTHESES LEFTPARENTHESES 
%token UNDERSCORE STAR BLANKLINE LINEBREAK LARGERTHAN
%token DOUBLESTAR DOUBLEUNDERSCORE OLSTART ULSTART QUOTEBLANKLINE QUOTEOLSTART QUOTEULSTART

    /* bind union part with nonterminal symbol */
%type <text> text_list headertext
%type <text> codespan code_list error
%type <node> blocks block
%type <node> lines line
%type <node> header raw_text pairedblock
%type <node> tablerows tablerow tableceils tableceil
%type <node> block_p line_p
%type <node> block_blank line_blank
%type <node> block_quote_p line_quote_p
%type <node> block_ul line_ul block_ol line_ol
%type <node> block_indent_ul line_indent_ul block_indent_ol line_indent_ol block_indent_text line_indent_text
%type <node> block_quote_ul line_quote_ul block_quote_ol line_quote_ol
%type <node> block_pre line_pre block_indented_pre line_indented_pre
%type <node> inline_elements inline_element
%type <node> plaintext link inline_code standard_link standard_image

%nonassoc TEXT SPECIALCHAR EXCLAMATION LEFTSQUARE STAR DOUBLESTAR UNDERSCORE DOUBLEUNDERSCORE BACKTICK TRIPLEBACKTICK RIGHTSQUARE error
%nonassoc STARX

%%

markdownfile: 
    blocks { 
            fix_node_level($1);
            fprintf( stderr, "==== traverse ====\n" ); 
            traverse_nodes($1); 

            complement_block_nodes($1); 

            // fprintf( stderr, "==== traverse ====\n" ); 
            // traverse_nodes($1); 

            rearrange_block_nodes($1);

            fprintf( stderr, "==== traverse ====\n" ); 
            traverse_nodes($1); 

            fprintf( stderr, "==== merge block nodes ====\n" ); 
            merge_block_nodes($1);

            // fprintf( stderr, "==== parse doc tree ====\n" ); 
            parse_node_tree($1);
        }
    | error { 
            fprintf( stderr, "==== error ====\n" ); 
        }
    ;

blocks:
    blocks block {
            if (!$1->children) {
                $1->children = $2;
                $2->parent = $1;
            }

            _tail_node = tail_node_in_list($1->children);

            // must avoid self-linking
            if (_tail_node != $2) {
                _tail_node->next = $2;
                $2->prev = _tail_node;
                $2->parent = _tail_node->parent;
            }

            $$ = $1;
        }
    | /* NULL */{
            _node = block_node_create(
                TAG_ROOT
                , -100
                , 0
            );
            $$ = _node;
        }
    ;



block:
    lines { 
            $$ = $1;
        }
    | header {
            $$ = $1;
        }
    | tablerows {
            $$ = $1;
        }
    | block_p {
            $$ = $1;
        }
    | block_ul {
            $$ = $1;
        }
    | block_ol {
            $$ = $1;
        }
    | block_indent_ul {
            $$ = $1;
        }
    | block_indent_ol {
            $$ = $1;
        }
    | block_indent_text {
            $$ = $1;
        }
    | block_quote_ul {
            $$ = $1;
        }
    | block_quote_ol {
            $$ = $1;
        }
    | block_blank {
            $$ = $1;
        }
    | block_quote_p {
            $$ = $1;
        }
    | block_pre {
            $$ = $1;
        }
    | block_indented_pre {
            $$ = $1;
        }
    | pairedblock {
            $$ = $1;
        }
    | raw_text {
            $$ = $1;
        }
    ;

header:
    H headertext LINEBREAK {              
            tag_check_stack(TAG_H, 0); 
            tag_info = markdown_get_tag_info($2);

            _node = block_node_create(
                TAG_H
                , 0
                , 3
                , tag_info->attr
                , tag_info->content
                , $1
            );

            $$ = _node;
        }   

    | QUOTEH headertext LINEBREAK { 
            tag_check_stack(TAG_QUOTE_H, 0); 
            tag_info = markdown_get_tag_info($2);

            _node = block_node_create(
                TAG_QUOTE_H
                , 0
                , 3
                , tag_info->attr
                , tag_info->content
                , $1
            );

            $$ = _node;
        }   
    ;


raw_text: 
    HTMLBLOCK TEXT LINEBREAK {
            tag_check_stack(TAG_RAW_TEXT, 0);
            _node = block_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , $1
                , $2
            );

            $$ = _node;
        }

    | HTMLBLOCK LINEBREAK {
            tag_check_stack(TAG_RAW_TEXT, 0);
            _node = block_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , $1
                , ""
            );

            $$ = _node;
        }

    | SCRIPTSTART inline_elements error {
            tag_info = markdown_get_tag_info(str_concat($1, *($2->ops + 1)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );

            $$ = _node;
            yyerrok;
        } 

    | STYLESTART inline_elements error {
            tag_info = markdown_get_tag_info(str_concat($1, *($2->ops + 1)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );

            $$ = _node;
            yyerrok;
        } 

    | SVGSTART inline_elements error {
            tag_info = markdown_get_tag_info(str_concat($1, *($2->ops + 1)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );

            $$ = _node;
            yyerrok;
        } 

    | TRIPLEBACKTICK codespan error     { 
            tag_info = markdown_get_tag_info(str_concat($1, $2));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );
            $$ = _node;
            yyerrok;
        }
    ;


lines:
    lines line {
            $$ = $1;
        }
    | line {
            _node = block_node_create(
                TAG_LINES
                , 0
                , 0
            );    

            $$ = _node;
        }
    ;


block_p:
    block_p line_p {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_p { 
            _node = block_node_create(
                TAG_BLOCK_P
                , 0
                , 1
                , *($1->ops)
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_p:
    inline_elements LINEBREAK { 
            tag_check_stack(TAG_P, 0); 

            _node = line_node_create(
                TAG_P
                , 0
                , 1
                , *($1->ops) 
            );

            _node->children = $1;
            $1->parent = _node;

            $$ = _node;
        } 
    ;

block_blank: 
    block_blank line_blank {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_blank {
            _node = block_node_create(
                TAG_BLOCK_BLANK
                , 0
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_blank:
    BLANKLINE { 
            tag_check_stack(TAG_BLANK, 100); 

            _node = line_node_create(
                TAG_BLANK
                , 0
                , 0
            );
            $$ = _node;
        }
    ;

block_quote_p:
    block_quote_p line_quote_p {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_p {
            _node = block_node_create(
                TAG_BLOCK_QUOTE_P
                , $1->level
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_quote_p:
    LARGERTHAN inline_elements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_P, 0); 
            tag_info = markdown_get_tag_info(*($2->ops + 1));

            _node = line_node_create(
                TAG_QUOTE_P
                , 0
                , 2
                , *($2->ops)
                , *($2->ops + 1)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 
    ;

block_ul:
    block_ul line_ul {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_ul {
            _node = block_node_create(
                TAG_BLOCK_UL
                , 0
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_ul:
    ULSTART inline_elements LINEBREAK { 
            tag_check_stack(TAG_UL, 0); 
            tag_info = markdown_get_tag_info(*($2->ops + 1));

            _node = line_node_create(
                TAG_UL
                , 0
                , 2
                , *($2->ops)
                , *($2->ops + 1)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 

    | ULSTART LINEBREAK { 
            tag_check_stack(TAG_UL, 0); 
            _node = line_node_create(
                TAG_UL
                , 0
                , 2
                , "" 
                , ""
            );
            $$ = _node;
        } 
    ;

block_indent_ul:
    block_indent_ul line_indent_ul {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indent_ul {
            _node = block_node_create(
                TAG_BLOCK_INDENT_UL
                , $1->level
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_indent_ul:
    ULINDENT ULSTART inline_elements LINEBREAK { 
            tag_check_stack(TAG_INDENT_UL, indent_level($1)); 
            tag_info = markdown_get_tag_info(*($3->ops + 1));

            _node = line_node_create(
                TAG_INDENT_UL
                , indent_level($1)
                , 2
                , *($3->ops)
                , *($3->ops + 1)
            );

            _node->children = $3;
            $3->parent = _node;
            $$ = _node;
        } 
    ;

block_quote_ul:
    block_quote_ul line_quote_ul {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_ul {
            _node = block_node_create(
                TAG_BLOCK_QUOTE_UL
                , $1->level
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_quote_ul:
    QUOTEULSTART inline_elements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_UL, 0); 
            tag_info = markdown_get_tag_info(*($2->ops + 1));

            _node = line_node_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , *($2->ops)
                , *($2->ops + 1)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 
    ;




block_ol:
    block_ol line_ol {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_ol {
            _node = block_node_create(
                TAG_BLOCK_OL
                , 0
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_ol:
    OLSTART inline_elements LINEBREAK { 
            tag_check_stack(TAG_OL, 0); 
            tag_info = markdown_get_tag_info(*($2->ops + 1));

            _node = line_node_create(
                TAG_OL
                , 0
                , 2
                , *($2->ops)
                , *($2->ops + 1)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 
    | OLSTART LINEBREAK { 
            tag_check_stack(TAG_OL, 0); 

            _node = line_node_create(
                TAG_OL
                , 0
                , 2
                , "" 
                , ""
            );
            $$ = _node;
        } 
    ;

block_indent_ol:
    block_indent_ol line_indent_ol {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indent_ol {
            _node = block_node_create(
                TAG_BLOCK_INDENT_OL
                , $1->level
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_indent_ol:
    OLINDENT OLSTART inline_elements LINEBREAK { 
            tag_check_stack(TAG_INDENT_OL, indent_level($1)); 
            tag_info = markdown_get_tag_info(*($3->ops + 1));

            _node = line_node_create(
                TAG_INDENT_OL
                , indent_level($1)
                , 2
                , *($3->ops)
                , *($3->ops + 1)
            );

            _node->children = $3;
            $3->parent = _node;
            $$ = _node;
        } 
    ;

block_quote_ol:
    block_quote_ol line_quote_ol {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_ol {
            _node = block_node_create(
                TAG_BLOCK_QUOTE_OL
                , $1->level
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_quote_ol:
    QUOTEOLSTART inline_elements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_OL, 0); 
            tag_info = markdown_get_tag_info(*($2->ops + 1));

            _node = line_node_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , *($2->ops)
                , *($2->ops + 1)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 
    ;


block_indent_text:
    block_indent_text line_indent_text {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indent_text {
            _node = block_node_create(
                TAG_BLOCK_INDENT_TEXT
                , $1->level
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_indent_text:
    TEXTINDENT inline_elements LINEBREAK { 

            /*
             *      * list
             *          content
             * 
             *      输出：
             *      <ul><li>listcontent</li>
             *
             *      * list
             *
             *          content
             *
             *      输出：
             *      <ul><li>list
             *      <p>content</p></li>
             */

            tag_check_stack(TAG_INDENT_TEXT, indent_level($1)); 
            tag_info = markdown_get_tag_info(*($2->ops + 1));

            _node = line_node_create(
                TAG_INDENT_TEXT
                , indent_level($1)
                , 2
                , *($2->ops)
                , *($2->ops + 1)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 
    ;


block_pre:
    block_pre line_pre {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_pre {
            _node = block_node_create(
                TAG_BLOCK_PRE 
                , $1->level
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;

            $$ = _node;
        }
    ;

line_pre:
    PRE_INDENT CODETEXT {
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info($2);

            _node = line_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , str_padding_left( 
                    tag_info -> content
                    , 4 * ( indent_level($1) - 1 ) 
                ) 
            );
            $$ = _node;
        }
    | TRIPLEBACKTICK codespan TRIPLEBACKTICK LINEBREAK  {
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info($2);

            _node = line_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            $$ = _node;
        }
    ;


block_indented_pre:
    block_indented_pre line_indented_pre {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indented_pre {
            _node = block_node_create(
                TAG_BLOCK_INDENT_PRE 
                , $1->level
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;

            $$ = _node;
        }
    ;

line_indented_pre:
    INDENTED_PRE_INDENT CODETEXT {
            _inner_pre_level = inner_pre_level(indent_level($1));

            /* PRE indent level is 1 less than the literal indent */
            tag_check_stack(TAG_INDENT_PRE, _inner_pre_level); 
            tag_info = markdown_get_tag_info($2);

            _node = line_node_create(
                TAG_INDENT_PRE
                , _inner_pre_level
                , 2
                , tag_info -> attr
                , str_padding_left( 
                    tag_info -> content
                    , 4 * ( indent_level($1) - _inner_pre_level - 1 ) 
                )
            );
            $$ = _node;
        }
    ;


pairedblock:
    SCRIPTSTART inline_elements SCRIPTEND {
            tag_check_stack(TAG_SCRIPTBLOCK, 0);

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 2
                , $1
                , $3
            );

            _node->children = $2;
            $2->parent = _node;

            $$ = _node;
        } 

    | SCRIPTSTART SCRIPTEND {
            tag_check_stack(TAG_SCRIPTBLOCK, 0);

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 2
                , $1
                , $2
            );

            $$ = _node;
        } 

    | STYLESTART inline_elements STYLEEND {
            tag_check_stack(TAG_STYLEBLOCK, 0);

            _node = block_node_create(
                TAG_STYLEBLOCK
                , 0
                , 2
                , $1
                , $3
            );

            _node->children = $2;
            $2->parent = _node;

            $$ = _node;
        } 

    | STYLESTART STYLEEND {
            tag_check_stack(TAG_STYLEBLOCK, 0);

            _node = block_node_create(
                TAG_STYLEBLOCK
                , 0
                , 2
                , $1
                , $2
            );

            $$ = _node;
        } 

    | SVGSTART inline_elements SVGEND {
            tag_check_stack(TAG_SVGBLOCK, 0);

            _node = block_node_create(
                TAG_SVGBLOCK
                , 0
                , 2
                , $1
                , $3
            );

            _node->children = $2;
            $2->parent = _node;

            $$ = _node;
        } 

    | SVGSTART SVGEND {
            tag_check_stack(TAG_SVGBLOCK, 0);

            _node = block_node_create(
                TAG_SVGBLOCK
                , 0
                , 2
                , $1
                , $2
            );

            $$ = _node;
        } 
    ;



tablerows:
    tablerows tablerow                                  {
                                                            _tail_node = tail_node_in_list($1->children);
                                                            _tail_node->next = $2;
                                                            $2->prev = _tail_node; 
                                                            $2->parent = _tail_node->parent;
                                                            $$ = $1; 
                                                        }
    | tablerow                                          {
                                                            _node = block_node_create(
                                                                TAG_TABLE
                                                                , 0
                                                                , 0
                                                            );
                                                            _node->children = $1;
                                                            $1->parent = _node;
                                                            $$ = _node; 
                                                        }

tablerow:
    TABLEROWSTART tableceils LINEBREAK                  {
                                                            $$ = $2;
                                                        }
    ;


tableceils:
    tableceils tableceil                                { 
                                                            _tail_node = tail_node_in_list($1->children); 
                                                            _tail_node->next = $2; 
                                                            $2->prev = _tail_node;
                                                            $2->parent = _tail_node->parent;
                                                            $$ = $1;
                                                        }
    | tableceil                                         {
                                                            _node = line_node_create(
                                                                TAG_TR
                                                                , 1
                                                                , 0
                                                            );

                                                            _node->children = $1;
                                                            $1->parent = _node;
                                                            $$ = _node;
                                                        }
    ;

tableceil:
    inline_elements TABLECEILEND {
            _node = inline_node_create(
                TAG_TD
                , 2
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;



line:
    QUOTEBLANKLINE { 
            tag_check_stack(TAG_QUOTE_BLANK, 0); 
        }

    | SECTION LINEBREAK {
            tag_check_stack(TAG_SECTION, -1); 
        }

    | VSECTION LINEBREAK {
            tag_check_stack(TAG_VSECTION, -1); 
        }
    ;





inline_elements:
    inline_elements inline_element {
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | inline_element {
            _node = inline_node_create(
                TAG_INLINE_ELEMENTS
                , NODE_LEVEL_SPECIAL
                , 2
                /* attr of the first child */
                , *$1->ops
                , *($1->ops + 1)
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

inline_element:
    plaintext { 
            tag_info = markdown_get_tag_info(*($1->ops + 1));     
            *($1->ops) = tag_info->attr;
            *($1->ops + 1) = tag_info->content;

            $$ = $1; 
        }
    | link { $$ = $1; }
    | standard_link { $$ = $1; }
    | standard_image { $$ = $1; }
    | inline_code { $$ = $1; }
    ;



    /*

    TEXT                                { $$ = $1; }
    | SPECIALCHAR                       { $$ = $1; }

    | STAR inlineelements STAR %prec STARX              { $$ = create_emphasis($2); } 
    | UNDERSCORE inlineelements UNDERSCORE %prec STARX             { $$ = create_emphasis($2); } 
    | DOUBLESTAR inlineelements DOUBLESTAR %prec STARX              { $$ = create_strong($2); }
    | DOUBLEUNDERSCORE inlineelements DOUBLEUNDERSCORE %prec STARX  { $$ = create_strong($2); }


    | LEFTSQUARE plaintext RIGHTSQUARE LEFTPARENTHESES plaintext RIGHTPARENTHESES {
                                 $$ = create_link($2, $5);
                                } 
    | EXCLAMATION LEFTSQUARE plaintext RIGHTSQUARE LEFTPARENTHESES plaintext RIGHTPARENTHESES {
                                 $$ = create_image($3, $6);
                                } 
    ;
    */



headertext:
    headertext TEXT                 { $$ = str_concat($1, $2); }
    /*
    | headertext link               { $$ = str_concat($1, $2); }
    */
    | headertext CODETEXT           { $$ = str_concat($1, $2); }
    | headertext SPECIALCHAR        { $$ = str_concat($1, $2); }
    | /* NULL */                    { $$ = ""; }
    ;

link:                        
    LINK {
            // get content A between `<` and `>`
            tag_info = markdown_get_tag_info($1);
            // get tag info from A
            tag_info = markdown_get_tag_info(tag_info->content);

            _node = inline_node_create(
                TAG_INLINE_LINK
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            $$ = _node;
        }
    ;

standard_link:
    LEFTSQUARE plaintext RIGHTSQUARE LEFTBRACKET plaintext RIGHTBRACKET {
            fprintf(stderr, "%s %s %s %s %s %s\n", $1, *($2->ops + 1), $3, $4, *($5->ops + 1), $6);
            $$ = $2;
        } 
    ;

standard_image:
    EXCLAMATION_LEFTSQUARE plaintext RIGHTSQUARE LEFTBRACKET plaintext RIGHTBRACKET {
            fprintf(stderr, "%s %s %s %s %s %s\n", $1, *($2->ops + 1), $3, $4, *($5->ops + 1), $6);
            $$ = $2;
        } 
    ;


plaintext:
    plaintext text_list {
            *($1->ops + 1) = str_concat(*($1->ops + 1), $2);
            $$ = $1;
        } 
    | text_list {
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , $1 
            );

            $$ = _node;
        }
    ;

text_list:
    TEXT                            { $$ = str_format("%s", $1); }
    | SPECIALCHAR                   { $$ = str_format("%s", $1); }
    ;



inline_code:
    BACKTICK codespan BACKTICK { 
            tag_info = markdown_get_tag_info($2);

            _node = inline_node_create(
                TAG_INLINE_CODE
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            $$ = _node;
        }

    | BACKTICK codespan error       { 
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_format("%s%s", $1, $2)
            );

            $$ = _node;

            yyerrok; 
        }

    | BACKTICK error                { 
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_format("%s", $1)
            );

            $$ = _node;

            yyerrok; 
        }
    ;




codespan:
    codespan code_list              { $$ = str_concat($1, $2); }
    | code_list                     { $$ = $1; }
    ;

code_list:
    CODETEXT                        { $$ = str_format("%s", $1); }
    | SPECIALCHAR                   { $$ = str_format("%s", $1); }
    ;

%%


/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}

