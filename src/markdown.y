%{
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "htmltags.h" 
#include "blocknode.h" 
#include "node.h"

#define YYERROR_VERBOSE

/* prototypes */
extern int yylex(void);
extern void yyerror(char *s);
extern void markdown(void);

int _inner_pre_level = -1;
t_tag_info *tag_info;
t_node *_node, *_tail_node;

%}


%union{
    char *text;
    t_blocknode *block_node;
    t_node *node;
};

    /* bind union part with terminal symbol */
%token <text> TEXT SPECIALCHAR CODETEXT INDENT H QUOTEH HTMLBLOCK SECTION VSECTION SCRIPTSTART SCRIPTEND
%token <text> STYLESTART STYLEEND SVGSTART SVGEND LINK BACKTICK TRIPLEBACKTICK
%token <text> TABLEROWSTART TABLECEILEND
%token EXCLAMATION MINUS PLUS RIGHTPARENTHESES LEFTPARENTHESES RIGHTSQUARE LEFTSQUARE
%token UNDERSCORE STAR BLANKLINE LINEBREAK LARGERTHAN
%token DOUBLESTAR DOUBLEUNDERSCORE OLSTART ULSTART QUOTEBLANKLINE QUOTEOLSTART QUOTEULSTART

    /* bind union part with nonterminal symbol */
%type <text> inlineelements inlineelement plaintext text_list headertext link
%type <text> codespan code_list error
%type <node> lines line tablerows tablerow tableceils tableceil
%type <node> block_p line_p
%type <node> block_blank line_blank

%nonassoc TEXT SPECIALCHAR EXCLAMATION LEFTSQUARE STAR DOUBLESTAR UNDERSCORE DOUBLEUNDERSCORE BACKTICK TRIPLEBACKTICK LEFTPARENTHESES RIGHTSQUARE RIGHTPARENTHESES error
%nonassoc STARX

%%

markdownfile: 
    lines { blocknode_create(TAG_EOF, -2, 1, ""); blocklist_parse(); node_traverse($1); }
    | error { fprintf( stderr, "==== error ====\n" ); }
    ;

lines:
    lines line  { 
            $$ = $1;
        }
    | lines tablerows {
            _tail_node = tail_node_in_list($1);
            _tail_node->next = $2;
            $$ = $1;
        }
    | lines block_p {
            _tail_node = tail_node_in_list($1);
            _tail_node->next = $2;
            $$ = $1;
        }
    | lines block_blank {
            _tail_node = tail_node_in_list($1);
            _tail_node->next = $2;
            $$ = $1;
        }
    | /* NULL */{
            _node = block_node_create(
                TAG_P
                , 0
                , 0
            );
            $$ = _node;
        }
    ;


block_p:
    block_p line_p {
            _tail_node = tail_node_in_list($1);
            _tail_node->next = $2;
            $$ = $1;
        }
    | line_p { $$ = $1; }
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
    ;

block_blank: 
    block_blank line_blank {
            _tail_node = tail_node_in_list($1);
            _tail_node->next = $2;
            $$ = $1;
        }
    | line_blank { $$ = $1; }
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

    | H headertext LINEBREAK {              
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


    | LARGERTHAN inlineelements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_P, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_P
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
        } 

    | OLSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_OL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
        } 

    | QUOTEOLSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_OL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
                );
        } 

    | INDENT OLSTART inlineelements LINEBREAK { 
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
        } 

    | ULSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_UL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
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
        } 

    | INDENT ULSTART inlineelements LINEBREAK { 
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
        } 

    | QUOTEULSTART inlineelements LINEBREAK { 
            tag_check_stack(TAG_QUOTE_UL, 0); 
            tag_info = markdown_get_tag_info($2);
            blocknode_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
        } 

    | INDENT inlineelements LINEBREAK { 
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
        } 
    | INDENT CODETEXT {
            _inner_pre_level = inner_pre_level(indent_level($1));
            if(_inner_pre_level > -1){
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
            }
            else{
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
            }
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

            node_show(_node);
            // fprintf( stderr, "CODETEXT: %s\n PARSED: %s\n", $2, tag_info -> content ); 
        }
    | TRIPLEBACKTICK error     { 
            blocknode_create(TAG_EOF, -2, 1, str_concat( $1, $2 )); 
            blocklist_parse(); 
            YYABORT;
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
    tablerows tablerow                                  { _tail_node = tail_node_in_list($1); _tail_node->next = $2; $$ = $1; }
    | tablerow                                          { $$ = $1; }

tablerow:
    TABLEROWSTART tableceils LINEBREAK                  {
                                                            _node = block_node_create(
                                                                TAG_TR
                                                                , 0
                                                                , 0
                                                            );
                                                            _node->children = $2;
                                                            $$ = _node;
                                                        }
    ;


tableceils:
    tableceils tableceil                                { _tail_node = tail_node_in_list($1); _tail_node->next = $2; $$ = $1; }
    | tableceil                                         { $$ = $1; }
    ;

tableceil:
    inlineelements TABLECEILEND                         {
                                                            tag_info = markdown_get_tag_info($1);
                                                            // fprintf(stderr, "inlineelements: %s; attr: %s; content: %s\n", $1, tag_info->attr, tag_info->content);
                                                            _node = inline_node_create(
                                                                TAG_TD
                                                                , 0
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
    plaintext link                  { $$ = str_concat($1, $2); }
    | plaintext                     { $$ = $1; }
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
    TEXT                        { $$ = str_format("%s", $1); }
    | SPECIALCHAR                   { $$ = str_format("%s", $1); }
    ;

codespan:
    codespan code_list             { $$ = str_concat($1, $2); }
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

