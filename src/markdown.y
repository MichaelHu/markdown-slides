%{
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "htmltags.h" 
#include "blocknode.h" 
#include "node.h"
#include "nodetree.h"

#define YYERROR_VERBOSE

/* prototypes */
extern int yylex(void);
extern void yyerror(char *s);
extern void markdown(void);

int _inner_pre_level = -1;
t_tag_info *tag_info;
t_node *_node, *_tail_node;

/**
 * @sed_append_to_tail_and_return_the_first
 */


%}


%union{
    char *text;
    t_blocknode *block_node;
    t_node *node;
};

    /* bind union part with terminal symbol */
%token <text> TEXT SPECIALCHAR CODETEXT H QUOTEH HTMLBLOCK SECTION VSECTION SCRIPTSTART SCRIPTEND
%token <text> STYLESTART STYLEEND SVGSTART SVGEND LINK BACKTICK TRIPLEBACKTICK
%token <text> TABLEROWSTART TABLECEILEND
%token <text> ULINDENT OLINDENT TEXTINDENT PRE_INDENT INDENTED_PRE_INDENT
%token EXCLAMATION MINUS PLUS RIGHTPARENTHESES LEFTPARENTHESES RIGHTSQUARE LEFTSQUARE
%token UNDERSCORE STAR BLANKLINE LINEBREAK LARGERTHAN
%token DOUBLESTAR DOUBLEUNDERSCORE OLSTART ULSTART QUOTEBLANKLINE QUOTEOLSTART QUOTEULSTART

    /* bind union part with nonterminal symbol */
%type <text> inlineelements inlineelement plaintext text_list headertext link
%type <text> codespan code_list error
%type <node> blocks block
%type <node> lines line
%type <node> header
%type <node> tablerows tablerow tableceils tableceil
%type <node> block_p line_p
%type <node> block_blank line_blank
%type <node> block_quote_p line_quote_p
%type <node> block_ul line_ul block_ol line_ol
%type <node> block_indent_ul line_indent_ul block_indent_ol line_indent_ol block_indent_text line_indent_text
%type <node> block_quote_ul line_quote_ul block_quote_ol line_quote_ol
%type <node> block_pre line_pre block_indented_pre line_indented_pre

%nonassoc TEXT SPECIALCHAR EXCLAMATION LEFTSQUARE STAR DOUBLESTAR UNDERSCORE DOUBLEUNDERSCORE BACKTICK TRIPLEBACKTICK LEFTPARENTHESES RIGHTSQUARE RIGHTPARENTHESES error
%nonassoc STARX

%%

markdownfile: 
    blocks { 
            blocknode_create(TAG_EOF, -2, 1, ""); 
            blocklist_parse(); 
            complement_block_nodes($1); 
            rearrange_block_nodes($1);
            // fprintf( stderr, "==== traverse ====\n" ); 
            // traverse_nodes($1); 
            fprintf( stderr, "==== merge block nodes ====\n" ); 
            merge_block_nodes($1);
            fprintf( stderr, "==== traverse again ====\n" ); 
            traverse_nodes($1); 
            fprintf( stderr, "==== parse doc tree ====\n" ); 
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
    ;

header:
    H headertext LINEBREAK {              
            tag_check_stack(TAG_H, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_H
                , 0
                , 3
                , $1
                , tag_info->attr
                , tag_info->content
            );

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
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_p:
    inlineelements LINEBREAK { 
            tag_check_stack(TAG_P, 0); 
            tag_info = markdown_get_tag_info($1);
            blocknode_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            $$ = _node;
        } 
    | TRIPLEBACKTICK codespan error     { 
            blocknode_create(TAG_EOF, -2, 1, str_concat( $1, $2 )); 
            blocklist_parse(); 

            tag_info = markdown_get_tag_info(str_concat($1, $2));
            _node = block_node_create(
                TAG_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
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
            blocknode_create(TAG_BLANK, 100, 1, "");

            _node = block_node_create(
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
                , 0
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_quote_p:
    LARGERTHAN inlineelements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_P, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_QUOTE_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
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
    ULSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_UL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            $$ = _node;
        } 

    | ULSTART LINEBREAK { 
            tag_check_stack(TAG_UL, 0); 
            blocknode_create(
                TAG_UL
                , 0
                , 2
                , ""
                , ""
            );

            _node = block_node_create(
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
    ULINDENT ULSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_INDENT_UL, indent_level($1)); 
            tag_info = markdown_get_tag_info($3);
            blocknode_create(
                TAG_INDENT_UL
                , indent_level($1)
                , 3
                , $1
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_INDENT_UL
                , indent_level($1)
                , 3
                , tag_info -> attr
                , tag_info -> content
                , $1
            );
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
    QUOTEULSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_UL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
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
    OLSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_OL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            $$ = _node;
        } 
    | OLSTART LINEBREAK { 
            tag_check_stack(TAG_OL, 0); 
            blocknode_create(
                TAG_OL
                , 0
                , 2
                , ""
                , ""
            );

            _node = block_node_create(
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
    OLINDENT OLSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_INDENT_OL, indent_level($1)); 
            tag_info = markdown_get_tag_info($3);
            blocknode_create(
                TAG_INDENT_OL
                , indent_level($1)
                , 3
                , $1
                , tag_info -> attr
                , tag_info -> content
            );

            _node = block_node_create(
                TAG_INDENT_OL
                , indent_level($1)
                , 3
                , tag_info -> attr
                , tag_info -> content
                , $1
            );
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
    QUOTEOLSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_OL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
                );

            _node = block_node_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
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
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_indent_text:
    TEXTINDENT inlineelements LINEBREAK { 
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
            if(is_last_tag_blank()){
                tag_check_stack(TAG_INDENT_P, indent_level($1)); 
                tag_info = markdown_get_tag_info($2);
                blocknode_create(
                    TAG_INDENT_P
                    , indent_level($1)
                    , 3
                    , $1
                    , tag_info -> attr
                    , tag_info -> content
                );
            }
            else {
                tag_check_stack(TAG_INDENT_TEXT, indent_level($1)); 
                tag_info = markdown_get_tag_info($2);
                blocknode_create(
                    TAG_INDENT_TEXT
                    , indent_level($1)
                    , 3
                    , $1
                    , tag_info -> attr
                    , tag_info -> content
                );
            }

            _node = block_node_create(
                TAG_INDENT_TEXT
                , indent_level($1)
                , 3
                , tag_info -> attr
                , tag_info -> content
                , $1
            );
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
                , 0
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
            blocknode_create(
                    TAG_PRE
                    , 0
                    , 2
                    , tag_info -> attr
                    , str_padding_left( 
                        tag_info -> content
                        , 4 * ( indent_level($1) - 1 ) 
                    ) 
                );

            _node = inline_node_create(
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
                , 0
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
            blocknode_create(
                    TAG_INDENT_PRE
                    , _inner_pre_level
                    , 2
                    , tag_info -> attr
                    , str_padding_left( 
                        tag_info -> content
                        , 4 * ( indent_level($1) - _inner_pre_level - 1 ) 
                    )
                );

            _node = inline_node_create(
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
    | TRIPLEBACKTICK codespan TRIPLEBACKTICK LINEBREAK  {
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                    TAG_PRE
                    , 0
                    , 2
                    , tag_info -> attr
                    , tag_info -> content
                );

            _node = block_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            $$ = _node;
        }
    ;




line:
    QUOTEBLANKLINE { 
            tag_check_stack(TAG_QUOTE_BLANK, 0); 
            blocknode_create(TAG_QUOTE_BLANK, 0, 1, "");
        }

    | SECTION LINEBREAK {
            tag_check_stack(TAG_SECTION, -1); 
            blocknode_create(TAG_SECTION, -1, 1, $1);
        }

    | VSECTION LINEBREAK {
            tag_check_stack(TAG_VSECTION, -1); 
            blocknode_create(TAG_VSECTION, -1, 1, $1);
        }

    | QUOTEH plaintext LINEBREAK { 
            tag_check_stack(TAG_QUOTE_H, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_H
                , 0
                , 3
                , $1
                , tag_info->attr
                , tag_info->content
            );
        }   


    | HTMLBLOCK TEXT LINEBREAK {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , $1
                    , $2
                );
        }

    | HTMLBLOCK LINEBREAK {
            tag_check_stack(TAG_HTMLBLOCK, 0);
            blocknode_create(
                    TAG_HTMLBLOCK
                    , 0
                    , 2
                    , $1
                    , ""
                );
        }

    | SCRIPTSTART inlineelements SCRIPTEND {
            tag_check_stack(TAG_SCRIPTBLOCK, 0);
            blocknode_create(
                    TAG_SCRIPTBLOCK
                    , 0
                    , 3
                    , $1
                    , $2
                    , $3
                );
        } 

    | SCRIPTSTART SCRIPTEND {
            tag_check_stack(TAG_SCRIPTBLOCK, 0);
            blocknode_create(
                    TAG_SCRIPTBLOCK
                    , 0
                    , 3
                    , $1
                    , ""
                    , $2
                );
        } 

    | SCRIPTSTART error LINEBREAK {
            fprintf(stderr, "expect </script>\n");
        } 

    | SVGSTART inlineelements SVGEND {
            tag_check_stack(TAG_SVGBLOCK, 0);
            blocknode_create(
                    TAG_SVGBLOCK
                    , 0
                    , 3
                    , $1
                    , $2
                    , $3
                );
        } 

    | SVGSTART SVGEND {
            tag_check_stack(TAG_SVGBLOCK, 0);
            blocknode_create(
                    TAG_SVGBLOCK
                    , 0
                    , 3
                    , $1
                    , ""
                    , $2
                );
        } 

    | SVGSTART error LINEBREAK {
            fprintf(stderr, "expect </svg>\n");
        } 

    | STYLESTART inlineelements STYLEEND {
            tag_check_stack(TAG_STYLEBLOCK, 0);
            blocknode_create(
                    TAG_STYLEBLOCK
                    , 0
                    , 3
                    , $1
                    , $2
                    , $3
                );
        } 

    | STYLESTART STYLEEND {
            tag_check_stack(TAG_STYLEBLOCK, 0);
            blocknode_create(
                    TAG_STYLEBLOCK
                    , 0
                    , 3
                    , $1
                    , ""
                    , $2
                );
        } 

    | error LINEBREAK { 
            /* set error indent level: 100 */
            blocknode_create(TAG_ERROR, 100, 1, str_format("%s", "@error@")); 
            yyerrok; 
            yyclearin; 
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
                                                            _node = inline_node_create(
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
    inlineelements TABLECEILEND                         {
                                                            tag_info = markdown_get_tag_info($1);
                                                            // fprintf(stderr, "inlineelements: %s; attr: %s; content: %s\n", $1, tag_info->attr, tag_info->content);
                                                            _node = inline_node_create(
                                                                TAG_TD
                                                                , 2
                                                                , 2
                                                                , tag_info -> attr
                                                                , tag_info -> content
                                                            );
                                                            $$ = _node;
                                                        }
    ;

inlineelements:  
    inlineelements inlineelement                        { $$ = str_concat($1, $2); }
    | inlineelement                     { $$ = $1; }
    ;

inlineelement:
    TEXT                                { $$ = $1; }
    | SPECIALCHAR                       { $$ = $1; }

    | STAR inlineelements STAR %prec STARX              { $$ = create_emphasis($2); } 
    | UNDERSCORE inlineelements UNDERSCORE %prec STARX             { $$ = create_emphasis($2); } 
    | DOUBLESTAR inlineelements DOUBLESTAR %prec STARX              { $$ = create_strong($2); }
    | DOUBLEUNDERSCORE inlineelements DOUBLEUNDERSCORE %prec STARX  { $$ = create_strong($2); }

    | BACKTICK codespan BACKTICK        { 
                                            tag_info = markdown_get_tag_info($2);
                                            $$ = create_codespan( 
                                                tag_info -> attr
                                                , html_escape(tag_info -> content) 
                                            ); 
                                        }
    | BACKTICK codespan error           { 
                                            $$ = str_concat( $1, $2 );
                                            // fprintf( stderr, "BACKTICK codespan error: \n\n%s\n\n", $2 );
                                            yyerrok;
                                            yyclearin;
                                        }
    | BACKTICK error                    { 
                                            $$ = $1;
                                            // fprintf( stderr, "BACKTICK error: \n\n%s\n\n", $1 );
                                            yyerrok;
                                        }

    | LEFTSQUARE plaintext RIGHTSQUARE LEFTPARENTHESES plaintext RIGHTPARENTHESES {
                                 $$ = create_link($2, $5);
                                } 
    | EXCLAMATION LEFTSQUARE plaintext RIGHTSQUARE LEFTPARENTHESES plaintext RIGHTPARENTHESES {
                                 $$ = create_image($3, $6);
                                } 
    | link                      { 
                                    $$ = $1; 
                                }
    ;

headertext:
    headertext TEXT                 { $$ = str_concat($1, $2); }
    | headertext link               { $$ = str_concat($1, $2); }
    | headertext CODETEXT           { $$ = str_concat($1, $2); }
    | headertext SPECIALCHAR        { $$ = str_concat($1, $2); }
    | /* NULL */                    { $$ = ""; }
    ;

link:                        
    LINK                            {
                                        tag_info = markdown_get_tag_info($1);
                                        $$ = create_link( 
                                            tag_info -> content
                                            , html_escape(tag_info -> content) 
                                        ); 
                                    }
    ;

plaintext:
    plaintext text_list             { $$ = str_concat($1, $2); }
    | text_list                     { $$ = $1; }
    ;

text_list:
    TEXT                            { $$ = str_format("%s", $1); }
    | SPECIALCHAR                   { $$ = str_format("%s", $1); }
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

