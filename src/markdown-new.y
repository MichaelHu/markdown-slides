    /**
     * ========== note: It's an auto-generated file, don't modify it directly! ===========
     */
%{
    /**
     * ========== header begin ===========
     */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "strutils.h"
#include "logutils.h"
#include "markdown-utils.h" 
#include "node.h"
#include "nodetree.h"

#define _ISDEBUGPARSER 0
#define _SHOW_TREE_AFTER_LEVEL_FIX 0
#define _SHOW_TREE_AFTER_COMPLEMENT_BLOCK_NODES 0
#define _SHOW_TREE_AFTER_REARRANGE_BLOCK_NODES 0
#define _SHOW_TREE_AFTER_MERGE_BLOCK_NODES 0
#define _SHOW_TREE_AFTER_MERGE_QUOTED_BLOCK_NODES 0

#define MAX_RULE_LEVEL 10
#define YYERROR_VERBOSE

/* prototypes */
extern int yylex(void);
extern void yyerror(char *s);
extern void markdown(void);

int _inner_pre_level = -1;
t_tag_info *tag_info;
t_node *_root_node;
t_node *_node, *_tail_node, *_tmp_node;
char *str;
int is_doc_parsed = 0;

/**
 * @sed_append_to_tail_and_return_the_first
 */

static void parse_doc(void) {
    check_null_string_pointer(_root_node);

    // log_str("==== fix node level ===="); 
    fix_node_level(_root_node);

    if (_SHOW_TREE_AFTER_LEVEL_FIX) {
        log_str("==== tree after level-fix ===="); 
        traverse_nodes(_root_node); 
    }

    // log_str("==== complement block nodes ===="); 
    complement_block_nodes(_root_node); 

    if (_SHOW_TREE_AFTER_COMPLEMENT_BLOCK_NODES) {
        log_str("==== tree after complement block nodes ===="); 
        traverse_nodes(_root_node); 
    }

    // log_str("==== rearrange block nodes ===="); 
    rearrange_block_nodes(_root_node);

    if (_SHOW_TREE_AFTER_REARRANGE_BLOCK_NODES) {
        log_str("==== tree after rearrange block nodes ===="); 
        traverse_nodes(_root_node); 
    }

    // log_str("==== merge block nodes ===="); 
    merge_block_nodes(_root_node);

    if (_SHOW_TREE_AFTER_MERGE_BLOCK_NODES) {
        log_str("==== tree after merge block nodes ===="); 
        traverse_nodes(_root_node); 
    }

    // log_str("==== merge quoted block nodes ===="); 
    merge_quoted_block_nodes(_root_node);

    if (_SHOW_TREE_AFTER_MERGE_QUOTED_BLOCK_NODES) {
        log_str("==== tree after merge quoted block nodes ===="); 
        traverse_nodes(_root_node); 
    }

    // log_str("==== parse doc tree ===="); 
    parse_node_tree(_root_node);
}

static char* grammar_rules[] = {

"markdownfile: blocks", "-1",

"blocks: blocks block", "0",
"blocks: NULL",         "0",

    "block: header",    "1",

        "header: LF_H inline_elements LINEBREAK", "2",

    "block: paragraph", "1",

        "paragraph: lines", "2",

    "block: BLANKLINE", "1",

    "block: HTMLTAG", "1",

    "block: unorderlist_0", "1",

        "unorderlist_0: LF_UL line", "2",
        "unorderlist_0: unorderlist_0 LF_UL line", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT line", "2",
        "unorderlist_0: unorderlist_0 lf_indents2_codeblock", "2",
        "unorderlist_0: unorderlist_0 unorderlist_1", "2",

            "unorderlist_1: LF_INDENT_UL line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT_UL line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT2 line", "3",
            "unorderlist_1: unorderlist_1 lf_indents3_codeblock", "3",
            "unorderlist_1: unorderlist_1 unorderlist_2", "3",

                "unorderlist_2: LF_INDENT2_UL line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT2_UL line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT3 line", "4",
                "unorderlist_2: unorderlist_2 lf_indents4_codeblock", "4",

    "block: codeblock", "1",

        "codeblock: lf_indents code_text LINEBREAK", "2",
        "codeblock: codeblock lf_indents code_text LINEBREAK", "2",

    "block: table", "1",

        "table: table_head table_body", "2",
        "table: table_body", "2",

            "table_head: table_row table_head_separator", "3",

            "table_head_separator: table_separator_row", "3",

            "table_body: table_rows", "3",

            "table_rows: table_row", "3",
            "table_rows: table_rows table_row", "3",

                /* sep row: LF_VERTICAL_HEAD_SEP ... LINEBREAK */
                "table_separator_row: LF_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK", "4",

                /* row: LF_VERTICAL ... LINEBREAK */
                "table_row: LF_VERTICAL table_cells LINEBREAK", "4",

                "table_cells: table_cell", "4",
                "table_cells: table_cells table_cell", "4",

                "table_separator_cells: table_separator_cell", "4",
                "table_separator_cells: table_separator_cells table_separator_cell", "4",

                    /* cell: item VERTICAL */
                    "table_separator_cell: table_separator_item", "5",

                    "table_cell: line VERTICAL", "5",

                        "table_separator_item: MINUSSERIES_SEMI_VERTICAL", "6",
                        "table_separator_item: SEMI_MINUSSERIES_VERTICAL", "6",
                        "table_separator_item: SEMI_MINUSSERIES_SEMI_VERTICAL", "6",
                        "table_separator_item: MINUSSERIES_VERTICAL", "6",

    "block: quote_block", "1",

    "quote_block: quote_block quote_header", "1",

        "quote_header: LF_Q_H inline_elements LINEBREAK", "2",

    "quote_block: quote_block quote_unorderlist_0", "1",

        "quote_unorderlist_0: LF_Q_UL line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 lf_q_indents2_codeblock", "2",
        "quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1", "2",

            "quote_unorderlist_1: LF_Q_INDENT_UL line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 lf_q_indents3_codeblock", "3",
            /*
            "quote_unorderlist_1: quote_unorderlist_1 quote_unorderlist_3", "3",
            */

    "quote_block: quote_block quote_paragraph", "1",

        "quote_paragraph: LF_Q line", "2",
        "quote_paragraph: quote_paragraph LF_Q line", "2",

    "quote_block: quote_block quote_codeblock", "1",

        "quote_codeblock: lf_q_indents code_text LINEBREAK", "2",
        "quote_codeblock: quote_codeblock lf_q_indents code_text LINEBREAK", "2",

    "quote_block: NULL", "1",

    "block: error",     "1",


        "lf_indents2_codeblock: lf_indents2 code_text LINEBREAK", "2",
        "lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK", "2",

            "lf_indents3_codeblock: lf_indents3 code_text LINEBREAK", "3",
            "lf_indents3_codeblock: lf_indents3_codeblock lf_indents3 code_text LINEBREAK", "3",

                    "lf_indents4_codeblock: lf_indents4 code_text LINEBREAK", "5",
                    "lf_indents4_codeblock: lf_indents4_codeblock lf_indents4 code_text LINEBREAK", "5",

        "lf_q_indents2_codeblock: lf_q_indents2 code_text LINEBREAK", "2",
        "lf_q_indents2_codeblock: lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK", "2",

            "lf_q_indents3_codeblock: lf_q_indents3 code_text LINEBREAK", "2",
            "lf_q_indents3_codeblock: lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK", "2",

            "lf_indents: LF_INDENT", "3",
            "lf_indents: lf_indents2", "3",

                "lf_indents2: LF_INDENT2", "4",
                "lf_indents2: lf_indents3", "4",

                    "lf_indents3: LF_INDENT3", "5",
                    "lf_indents3: lf_indents4", "5",

                        "lf_indents4: LF_INDENT4", "6",
                        "lf_indents4: lf_indents5", "6",

                            "lf_indents5: LF_INDENT5", "7",

            "lf_q_indents: LF_Q_INDENT", "3",
            "lf_q_indents: lf_q_indents2", "3",

                "lf_q_indents2: LF_Q_INDENT2", "4",
                "lf_q_indents2: lf_q_indents3", "4",

                    "lf_q_indents3: LF_Q_INDENT3", "5",

            "lines: line", "3",
            "lines: lines line", "3",

                "line: inline_elements LINEBREAK", "4",
                "line: inline_elements", "4",

                    "inline_elements: inline_elements inline_element", "5",
                    "inline_elements: inline_element", "5",

                        "inline_element: inline_text", "6",
                        "inline_element: link", "6",
                        "inline_element: image", "6",
                        "inline_element: italic", "6",
                        "inline_element: strong", "6",
                        "inline_element: linethrough", "6",
                        "inline_element: inlinecode", "6",

                            "uri_text: uri_text uri_text_item", "7",
                            "uri_text: uri_text_item", "7",

                            "inline_text: inline_text inline_text_item", "7",
                            "inline_text: inline_text_item", "7",

                            "inline_code_text: inline_code_text inline_code_text_item", "7",
                            "inline_code_text: inline_code_text_item", "7",

                            "code_text: code_text code_text_item", "7",
                            "code_text: code_text_item", "7",

                            "link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error", "7",
                            "link: LEFTSQUARE inline_text error", "7",
                            "link: LEFTSQUARE error", "7",
                            "link: SIMPLELINK", "7",

                            "image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET", "7",
                            "image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET", "7",
                            "image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error", "7",
                            "image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error", "7",
                            "image: EXCLAMATION_LEFTSQUARE inline_text error", "7",
                            "image: EXCLAMATION_LEFTSQUARE error", "7",

                            "italic: ASTERISK inline_text ASTERISK", "7",
                            "italic: ASTERISK inline_text error", "7",
                            "italic: ASTERISK error", "7",
                            "italic: UNDERSCORE inline_text UNDERSCORE", "7",
                            "italic: UNDERSCORE inline_text error", "7",
                            "italic: UNDERSCORE error", "7",

                            "strong: DOUBLEASTERISK inline_text DOUBLEASTERISK", "7",
                            "strong: DOUBLEASTERISK inline_text error", "7",
                            "strong: DOUBLEASTERISK error", "7",
                            "strong: DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE", "7",
                            "strong: DOUBLEUNDERSCORE inline_text error", "7",
                            "strong: DOUBLEUNDERSCORE error", "7",

                            "linethrough: DOUBLETILDE inline_text DOUBLETILDE", "7",
                            "linethrough: DOUBLETILDE inline_text error", "7",
                            "linethrough: DOUBLETILDE error", "7",

                            "inlinecode: BACKTICK inline_code_text BACKTICK", "7",
                            "inlinecode: BACKTICK inline_code_text error", "7",
                            "inlinecode: BACKTICK error", "7",

                                "uri_text_item: TEXT", "8",

                                "inline_text_item: uri_text_item", "8",
                                "inline_text_item: ESCAPEDCHAR", "8",
                                "inline_text_item: SPACE", "8",

                                "inline_code_text_item: inline_text_item", "8",
                                /* strong italic */
                                "inline_code_text_item: TRIPLEASTERISK", "8",
                                "inline_code_text_item: TRIPLEUNDERSCORE", "8",
                                /* strong */
                                "inline_code_text_item: DOUBLEASTERISK", "8",
                                "inline_code_text_item: DOUBLEUNDERSCORE", "8",
                                /* italic */
                                "inline_code_text_item: ASTERISK", "8",
                                "inline_code_text_item: UNDERSCORE", "8",
                                /* line-through */
                                "inline_code_text_item: DOUBLETILDE", "8",
                                /* image and link */
                                "inline_code_text_item: EXCLAMATION_LEFTSQUARE", "8",
                                "inline_code_text_item: LEFTSQUARE", "8",
                                "inline_code_text_item: RIGHTSQUARE_LEFTBRACKET", "8",
                                "inline_code_text_item: RIGHTBRACKET", "8",
                                /* table */
                                "inline_code_text_item: VERTICAL", "8",
                                /* code block */
                                "inline_code_text_item: TRIPLEBACKTICK", "8",

                                "code_text_item: inline_code_text_item", "8",
                                "code_text_item: BACKTICK", "8"

};

static int rule_count = sizeof(grammar_rules) / sizeof(char**);

static void show_rule( char *str ){
    int i = 0;
    char *level = NULL;
    int indent = 0;

    if( _ISDEBUGPARSER ){
        for( i = 0; i < rule_count; i+=2 ){
            if( strcmp(grammar_rules[i], str ) == 0) {
                level = grammar_rules[i+1];
                break;
            } 
        } 
        if( level ){
            indent = atoi( level );
            if( indent <= MAX_RULE_LEVEL ){
                if( strstr( str, "error" ) ) {
                    fprintf(stderr, "\033[4;31;42m %s[> %s \033[0m\n", str_padding_left("", indent * 4), str);
                }
                else{
                    fprintf(stderr, "%s[> %s\n", str_padding_left("", indent * 4), str);
                }
            }
        }
        else{
            fprintf(stderr, "\033[25;31;40m rule info not found: %s \033[0m\n", str);
        }
    }
}


    /**
     * ========== header end ===========
     */
%}

    /**
     * ========== token begin ===========
     */
%union{
    char *text;
    /* t_node *node; */
};

    /* bind union part with terminal symbol */

%token <text> BLANKLINE
%token <text> LINEBREAK           

%token <text> LF_H                

%token <text> LF_UL                
%token <text> UL                

%token <text> LF_VERTICAL                
%token <text> LF_VERTICAL_HEAD_SEP 

%token <text> LF_INDENT_UL                
%token <text> LF_INDENT2_UL                
%token <text> LF_INDENT3_UL                
%token <text> LF_INDENT4_UL                

%token <text> LF_INDENT_VERTICAL                

%token <text> LF_INDENT              
%token <text> LF_INDENT2
%token <text> LF_INDENT3
%token <text> LF_INDENT4
%token <text> LF_INDENT5

%token <text> LF_Q_H
%token <text> LF_Q_UL
%token <text> LF_Q_VERTICAL

%token <text> LF_Q_INDENT_UL                
%token <text> LF_Q_INDENT2_UL                

%token <text> LF_Q_INDENT_VERTICAL

%token <text> LF_Q_INDENT              
%token <text> LF_Q_INDENT2
%token <text> LF_Q_INDENT3

%token <text> LF_Q

%token <text> SIMPLELINK         
%token <text> HTMLTAG         

%token <text> ESCAPEDCHAR         
%token <text> TRIPLEBACKTICK      
%token <text> BACKTICK            
%token <text> VERTICAL            
%token <text> TRIPLEASTERISK      
%token <text> DOUBLEASTERISK      
%token <text> ASTERISK            
%token <text> TRIPLEUNDERSCORE    
%token <text> DOUBLEUNDERSCORE    
%token <text> UNDERSCORE          

%token <text> EXCLAMATION_LEFTSQUARE 
%token <text> LEFTSQUARE          
%token <text> RIGHTSQUARE_LEFTBRACKET 
%token <text> RIGHTBRACKET        
%token <text> DOUBLETILDE      
%token <text> RIGHTSQUARE         
%token <text> SEMI_MINUSSERIES_VERTICAL 
%token <text> MINUSSERIES_SEMI_VERTICAL 
%token <text> SEMI_MINUSSERIES_SEMI_VERTICAL 
%token <text> MINUSSERIES_VERTICAL 
%token <text> SPACE
%token <text> TEXT                

    /* bind union part with nonterminal symbol */
%type <text> markdownfile
%type <text> blocks
%type <text> block
%type <text> quote_block
%type <text> header
%type <text> paragraph
%type <text> unorderlist_0
%type <text> codeblock
%type <text> lf_indents2_codeblock
%type <text> lf_indents3_codeblock
%type <text> lf_indents4_codeblock
%type <text> quote_header
%type <text> quote_unorderlist_0
%type <text> quote_paragraph
%type <text> quote_codeblock
%type <text> lines
%type <text> unorderlist_1
%type <text> quote_unorderlist_1
%type <text> lf_q_indents2_codeblock
%type <text> lf_q_indents3_codeblock
%type <text> lf_indents
%type <text> lf_indents2
%type <text> lf_indents3
%type <text> lf_indents4
%type <text> lf_indents5
%type <text> lf_q_indents
%type <text> lf_q_indents2
%type <text> lf_q_indents3
%type <text> line
%type <text> unorderlist_2
%type <text> inline_elements
%type <text> inline_element
%type <text> uri_text
%type <text> uri_text_item
%type <text> inline_text
%type <text> inline_text_item
%type <text> inline_code_text
%type <text> inline_code_text_item
%type <text> code_text
%type <text> code_text_item
%type <text> link
%type <text> image
%type <text> italic
%type <text> strong
%type <text> linethrough
%type <text> inlinecode

%type <text> table
%type <text> table_head
%type <text> table_head_separator
%type <text> table_body
%type <text> table_rows
%type <text> table_row
%type <text> table_cells
%type <text> table_cell
%type <text> table_separator_row
%type <text> table_separator_cells
%type <text> table_separator_cell
%type <text> table_separator_item

%nonassoc ITALICSTART
%nonassoc LISTSTART


%%
    /**
     * ========== grammar rules begin ===========
     */
markdownfile: 
    blocks { 
            /**
             * 1. _root_node == $1
             */

            show_rule("markdownfile: blocks");

            if( !_ISDEBUGPARSER ){
                fprintf(stdout, "==================================\n");
                fprintf(stdout, "%s", $1);
                fprintf(stdout, "==================================\n");
            }

            /**
            parse_doc();
            is_doc_parsed = 1;
            */
        }
    /*
    | error { 
            show_rule("markdownfile: error");
            if (!is_doc_parsed) {
                parse_doc();
            }
            is_doc_parsed = 1;

            yyclearin;
        }
    */
    ;


block:
    header {
            show_rule("block: header");
            $$ = $1;
        }
    | paragraph {
            show_rule("block: paragraph");
            tag_info = markdown_get_tag_info($1);
            $$ = str_format("<p%s>%s</p>", tag_info->attr, tag_info->content);
        }
    | BLANKLINE {
            show_rule("block: BLANKLINE");
            $$ = $1;
        }
    | HTMLTAG {
            show_rule("block: HTMLTAG");
            $$ = $1;
        }
    | unorderlist_0 {
            show_rule("block: unorderlist_0");
            $$ = str_format("<ul>%s</ul>", $1);
        }
    | codeblock {
            show_rule("block: codeblock");
            tag_info = markdown_get_tag_info($1);
            $$ = str_format("<pre%s><code>%s</code></pre>", tag_info->attr, tag_info->content);
        }
    | table {
            show_rule("block: table");
            $$ = str_format("<table>%s</table>", $1);
        }
    | quote_block {
            show_rule("block: quote_block");
            $$ = str_format("<blockquote>%s</blockquote>", $1);
        }
    /* error recovery */
    | error {
            show_rule("block: error");
        }
    ;

blocks:
    blocks block {
            show_rule("blocks: blocks block");
            $$ = str_concat($1, $2);
        }
    | /* NULL */{
            show_rule("blocks: NULL");
            $$ = "";
        }
    ;



code_text:
    code_text code_text_item {
            show_rule("code_text: code_text code_text_item");
            $$ = str_concat($1, $2);
        }
    | code_text_item {
            show_rule("code_text: code_text_item");
            $$ = $1;
        }
    ;


code_text_item:
    inline_code_text_item {
            show_rule("code_text_item: inline_code_text_item");
            $$ = $1;
        }
    | BACKTICK {
            show_rule("code_text_item: BACKTICK");
            $$ = $1;
        }


codeblock: 
    lf_indents code_text LINEBREAK {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 1), $2, $3);
        }
    | codeblock lf_indents code_text LINEBREAK {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 1), $3, $4);
        }
    ;


header:
    LF_H inline_elements LINEBREAK {              
            show_rule("header: LF_H inline_elements LINEBREAK");
            $$ = str_format("<h%d>%s</h%d>%s", strlen($1), $2, strlen($1), $3);
        }   
    ;


image: 
    EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            $$ = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", $4, $2, "");
        }
    | EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            $$ = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", $4, $2, $6);
        }
    | EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        }
    | EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        }
    | EXCLAMATION_LEFTSQUARE inline_text error {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text error");
        }
    | EXCLAMATION_LEFTSQUARE error {
            show_rule("image: EXCLAMATION_LEFTSQUARE error");
        }
    ;


inline_code_text:
    inline_code_text inline_code_text_item {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
            $$ = str_concat($1, $2);
        }
    | inline_code_text_item {
            show_rule("inline_code_text: inline_code_text_item");
            $$ = $1;
        }
    ;


inline_code_text_item:
    inline_text_item {
            show_rule("inline_code_text_item: inline_text_item");
            $$ = $1;
        }
    | TRIPLEASTERISK {
            show_rule("inline_code_text_item: TRIPLEASTERISK");
            $$ = $1;
        }           
    | TRIPLEUNDERSCORE {
            show_rule("inline_code_text_item: TRIPLEUNDERSCORE");
            $$ = $1;
        }           
    | DOUBLEASTERISK {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            $$ = $1;
        }           
    | DOUBLEUNDERSCORE {
            show_rule("inline_code_text_item: DOUBLEUNDERSCORE");
            $$ = $1;
        }           
    | ASTERISK {
            show_rule("inline_code_text_item: ASTERISK");
            $$ = $1;
        }
    | UNDERSCORE {
            show_rule("inline_code_text_item: UNDERSCORE");
            $$ = $1;
        }           
    | DOUBLETILDE {
            show_rule("inline_code_text_item: DOUBLETILDE");
            $$ = $1;
        }
    | EXCLAMATION_LEFTSQUARE {
            show_rule("inline_code_text_item: EXCLAMATION_LEFTSQUARE");
            $$ = $1;
        }           
    | LEFTSQUARE {
            show_rule("inline_code_text_item: LEFTSQUARE");
            $$ = $1;
        }           
    | RIGHTSQUARE_LEFTBRACKET {
            show_rule("inline_code_text_item: RIGHTSQUARE_LEFTBRACKET");
            $$ = $1;
        }           
    | RIGHTBRACKET {
            show_rule("inline_code_text_item: RIGHTBRACKET");
            $$ = $1;
        }           
    | VERTICAL {
            show_rule("inline_code_text_item: VERTICAL");
            $$ = $1;
        }           
    | TRIPLEBACKTICK {
            show_rule("inline_code_text_item: TRIPLEBACKTICK");
            $$ = $1;
        }           
    ;


inline_element:
    inline_text {
            show_rule("inline_element: inline_text");
            $$ = $1;
        }
    | link {
            show_rule("inline_element: link");
            $$ = $1;
        }
    | image {
            show_rule("inline_element: image");
        }
    | italic {
            show_rule("inline_element: italic");
            $$ = $1;
        }
    | strong {
            show_rule("inline_element: strong");
            $$ = $1;
        }
    | linethrough {
            show_rule("inline_element: linethrough");
            $$ = $1;
        }
    | inlinecode {
            show_rule("inline_element: inlinecode");
            $$ = $1;
        }
    ;


inline_elements:
    inline_elements inline_element {
            show_rule("inline_elements: inline_elements inline_element");
            $$ = str_concat($1, $2);
        }
    | inline_element {
            show_rule("inline_elements: inline_element");
            $$ = $1;
        }
    ;


inline_text:
    inline_text inline_text_item {
            show_rule("inline_text: inline_text inline_text_item");
            $$ = str_concat($1, $2);
        }
    | inline_text_item {
            show_rule("inline_text: inline_text_item");
            $$ = $1;
        }
    ;


inline_text_item:
    uri_text_item {
            show_rule("inline_text_item: uri_text_item");
            $$ = $1;
        }           
    | ESCAPEDCHAR {
            show_rule("inline_text_item: ESCAPEDCHAR");
            $$ = $1;
        }           
    | SPACE {
            show_rule("inline_text_item: SPACE");
            $$ = $1;
        }           
    ;          


uri_text:
    uri_text uri_text_item {
            show_rule("uri_text: uri_text uri_text_item");
            $$ = str_concat($1, $2);
        }
    | uri_text_item {
            show_rule("uri_text: uri_text_item");
            $$ = $1;
        }
    ;


uri_text_item:
    TEXT {
            show_rule("uri_text_item: TEXT");
            $$ = $1;
        }           
    ;          


inlinecode:
    BACKTICK inline_code_text BACKTICK {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
            $$ = str_format("<code>%s</code>", $2);
        }
    | BACKTICK inline_code_text error {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        }
    | BACKTICK error {
            show_rule("inlinecode: BACKTICK error");
        }
    ;



italic: 
    ASTERISK inline_text ASTERISK {
            show_rule("italic: ASTERISK inline_text ASTERISK");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<i%s>%s</i>", tag_info->attr, tag_info->content);
        }
    | ASTERISK inline_text error {
            show_rule("italic: ASTERISK inline_text error");
        }
    | ASTERISK error {
            show_rule("italic: ASTERISK error");
        }
    | UNDERSCORE inline_text UNDERSCORE {
            show_rule("italic: UNDERSCORE inline_text UNDERSCORE");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<i%s>%s</i>", tag_info->attr, tag_info->content);
        }
    | UNDERSCORE inline_text error {
            show_rule("italic: UNDERSCORE inline_text error");
        }
    | UNDERSCORE error {
            show_rule("italic: UNDERSCORE error");
        }
    ;


lf_indents: 
    LF_INDENT {
            show_rule("lf_indents: LF_INDENT");
            $$ = $1;
        }
    | lf_indents2 {
            show_rule("lf_indents: lf_indents2");
            $$ = $1;
        }
    ;

lf_indents2: 
    LF_INDENT2 {
            show_rule("lf_indents2: LF_INDENT2");
            $$ = $1;
        }
    | lf_indents3 {
            show_rule("lf_indents2: lf_indents3");
            $$ = $1;
        }
    ;

lf_indents3: 
    LF_INDENT3 {
            show_rule("lf_indents3: LF_INDENT3");
            $$ = $1;
        }
    | lf_indents4 {
            $$ = $1;
            show_rule("lf_indents3: lf_indents4");
        }
    ;

lf_indents4: 
    LF_INDENT4 {
            show_rule("lf_indents4: LF_INDENT4");
            $$ = $1;
        }
    | lf_indents5 {
            show_rule("lf_indents4: lf_indents5");
            $$ = $1;
        }
    ;

lf_indents5: 
    LF_INDENT5 {
            show_rule("lf_indents5: LF_INDENT5");
            $$ = $1;
        }
    ;


lf_indents2_codeblock: 
    lf_indents2 code_text LINEBREAK {
            show_rule("lf_indents2_codeblock: lf_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 2), $2, $3);
        }
    | lf_indents2_codeblock lf_indents2 code_text LINEBREAK {
            show_rule("lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 2), $3, $4);
        }
    ;

lf_indents3_codeblock: 
    lf_indents3 code_text LINEBREAK {
            show_rule("lf_indents3_codeblock: lf_indents3 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 3), $2, $3);
        }
    | lf_indents3_codeblock lf_indents3 code_text LINEBREAK {
            show_rule("lf_indents3_codeblock: lf_indents3_codeblock lf_indents3 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 3), $3, $4);
        }
    ;

lf_indents4_codeblock: 
    lf_indents4 code_text LINEBREAK {
            show_rule("lf_indents4_codeblock: lf_indents4 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents($1, 4), $2, $3);
        }
    | lf_indents4_codeblock lf_indents4 code_text LINEBREAK {
            show_rule("lf_indents4_codeblock: lf_indents4_codeblock lf_indents4 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents($2, 4), $3, $4);
        }
    ;

lf_q_indents: 
    LF_Q_INDENT {
            show_rule("lf_q_indents: LF_Q_INDENT");
            $$ = $1;
        }
    | lf_q_indents2 {
            show_rule("lf_q_indents: lf_q_indents2");
            $$ = $1;
        }
    ;

lf_q_indents2: 
    LF_Q_INDENT2 {
            show_rule("lf_q_indents2: LF_Q_INDENT2");
            $$ = $1;
        }
    | lf_q_indents3 {
            show_rule("lf_q_indents2: lf_q_indents3");
            $$ = $1;
        }
    ;

lf_q_indents3: 
    LF_Q_INDENT3 {
            show_rule("lf_q_indents3: LF_Q_INDENT3");
            $$ = $1;
        }
    ;


lf_q_indents2_codeblock: 
    lf_q_indents2 code_text LINEBREAK {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left($1, "> ", ""), 2), $2, $3);
        }
    | lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents(str_replace_left($2, "> ", ""), 2), $3, $4);
        }
    ;

lf_q_indents3_codeblock: 
    lf_q_indents3 code_text LINEBREAK {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3 code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left($1, "> ", ""), 3), $2, $3);
        }
    | lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents(str_replace_left($2, "> ", ""), 3), $3, $4);
        }
    ;

linethrough:
    DOUBLETILDE inline_text DOUBLETILDE {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
            $$ = str_format("<del>%s</del>", $2);
        }
    | DOUBLETILDE inline_text error {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        }
    | DOUBLETILDE error {
            show_rule("linethrough: DOUBLETILDE error");
        }
    ;


line:
    inline_elements LINEBREAK {
            show_rule("line: inline_elements LINEBREAK");
            $$ = str_concat($1, $2);
        }
    | inline_elements {
            show_rule("line: inline_elements");
            $$ = $1;
        }
    ;


lines:
    line {
            show_rule("lines: line");
            $$ = $1;
        }
    | lines line {
            show_rule("lines: lines line");
            $$ = str_concat($1, $2);
        }
    ;


link: 
    LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\">%s</a>", $4, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\" title=\"%s\">%s</a>", $4, $6, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        }
    | LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        }
    | LEFTSQUARE inline_text error {
            show_rule("link: LEFTSQUARE inline_text error");
        }
    | LEFTSQUARE error {
            show_rule("link: LEFTSQUARE error");
        }
    | SIMPLELINK {
            show_rule("link: SIMPLELINK");
            tag_info = markdown_get_tag_info($1);
            $$ = str_format("<a href=\"%s\">%s</a>", tag_info->content, tag_info->content);
        }
    ;


paragraph:
    lines {
            show_rule("paragraph: lines");
            $$ = $1;
        }
    ;


quote_block:
    quote_block quote_header {
            show_rule("quote_block: quote_block quote_header");
            $$ = str_concat($1, $2);
        }
    | quote_block quote_unorderlist_0 {
            show_rule("quote_block: quote_block quote_unorderlist_0");
            $$ = str_format("%s<ul>%s</ul>", $1, $2);
        }
    | quote_block quote_paragraph {
            show_rule("quote_block: quote_block quote_paragraph");
            $$ = str_format("%s<p>%s</p>", $1, $2);
        }
    | quote_block quote_codeblock {
            show_rule("quote_block: quote_block quote_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre>", $1, $2);
        }
    | /* NULL */ {
            show_rule("quote_block: NULL");
            $$ = "";
        }
    ;


quote_codeblock: 
    lf_q_indents code_text LINEBREAK {
            show_rule("quote_codeblock: lf_q_indents code_text LINEBREAK");
            $$ = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left($1, "> ", ""), 1), $2, $3);
        }
    | quote_codeblock lf_q_indents code_text LINEBREAK {
            show_rule("quote_codeblock: quote_codeblock lf_q_indents code_text LINEBREAK");
            $$ = str_format("%s%s%s%s", $1, str_trim_left_n_lf_indents(str_replace_left($2, "> ", ""), 1), $3, $4);
        }
    ;


quote_header: 
    LF_Q_H inline_elements LINEBREAK {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
            $$ = str_format("<h%d>%s</h%d>%s", strlen(str_replace_left($1, "> ", "")), $2, strlen(str_replace_left($1, "> ", "")), $3);
        }
    ;


quote_paragraph: 
    LF_Q line {
            show_rule("quote_paragraph: LF_Q line");
            $$ = $2;
        }
    | quote_paragraph LF_Q line {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
            $$ = str_concat($1, $3);
        }
    ;


quote_unorderlist_0: 
    LF_Q_UL line {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | quote_unorderlist_0 LF_Q_UL line {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | quote_unorderlist_0 LF_Q_INDENT line {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
            $$ = str_format("%s%s</li>", str_replace_right($1, "</li>", ""), $3);
        }
    | quote_unorderlist_0 lf_q_indents2_codeblock {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 lf_q_indents2_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    | quote_unorderlist_0 quote_unorderlist_1 {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
            $$ = str_format("%s<ul>%s</ul></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;


quote_unorderlist_1: 
    LF_Q_INDENT_UL line {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | quote_unorderlist_1 LF_Q_INDENT_UL line {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | quote_unorderlist_1 LF_Q_INDENT2 line {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
            $$ = str_format("%s%s</li>", str_replace_right($1, "</li>", ""), $3);
        }
    | quote_unorderlist_1 lf_q_indents3_codeblock{
            show_rule("quote_unorderlist_1: quote_unorderlist_1 lf_q_indents3_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;


strong:
    DOUBLEASTERISK inline_text DOUBLEASTERISK {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
            $$ = str_format("<strong>%s</strong>", $2);
        }
    | DOUBLEASTERISK inline_text error {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        }
    | DOUBLEASTERISK error {
            show_rule("strong: DOUBLEASTERISK error");
        }
    | DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE {
            show_rule("strong: DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE");
            $$ = str_format("<strong>%s</strong>", $2);
        }
    | DOUBLEUNDERSCORE inline_text error {
            show_rule("strong: DOUBLEUNDERSCORE inline_text error");
        }
    | DOUBLEUNDERSCORE error {
            show_rule("strong: DOUBLEUNDERSCORE error");
        }
    ;


unorderlist_0: 
    LF_UL line {
            show_rule("unorderlist_0: LF_UL line");
            tag_info = markdown_get_tag_info($2);
            $$ = str_format("<li%s>%s</li>", tag_info->attr, tag_info->content);
        }
    | unorderlist_0 LF_UL line {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            tag_info = markdown_get_tag_info($3);
            $$ = str_format("%s<li%s>%s</li>", $1, tag_info->attr, tag_info->content);
        }
    | unorderlist_0 LF_INDENT line {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $3);
        }
    | unorderlist_0 lf_indents2_codeblock {
            show_rule("unorderlist_0: unorderlist_0 lf_indents2_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    | unorderlist_0 unorderlist_1 {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
            $$ = str_format("%s<ul>%s</ul></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;


unorderlist_1: 
    LF_INDENT_UL line {
            show_rule("unorderlist_1: LF_INDENT_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | unorderlist_1 LF_INDENT_UL line {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | unorderlist_1 LF_INDENT2 line {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $3);
        }
    | unorderlist_1 lf_indents3_codeblock {
            show_rule("unorderlist_1: unorderlist_1 lf_indents3_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1, "</li>", ""), $2);
        }
    | unorderlist_1 unorderlist_2 {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
            $$ = str_format("%s<ul>%s</ul></li>", str_replace_right($1,"</li>", ""), $2);
        }
    ;


unorderlist_2: 
    LF_INDENT2_UL line {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | unorderlist_2 LF_INDENT2_UL line {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $3);
        }
    | unorderlist_2 LF_INDENT3 line {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $3);
        }
    | unorderlist_2 lf_indents4_codeblock {
            show_rule("unorderlist_2: unorderlist_2 lf_indents4_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1, "</li>", ""), $2);
        }
    ;


table:
    table_head table_body {
            show_rule("table: table_head table_body");
            $$ = str_format("%s%s", $1, $2);
        }
    | table_body {
            show_rule("table: table_body");
            $$ = $1;
        }
    ;

table_body:
    table_rows {
            show_rule("table_body: table_rows");
            $$ = str_format("<tbody>%s</tbody>", $1);
        }
    ;


table_cell:
    line VERTICAL {
            show_rule("table_cell: line VERTICAL");
            $$ = str_format("<td>%s</td>", $1);
        }
    ;

table_cells:
    table_cell {
            show_rule("table_cells: table_cell");
            $$ = str_format("%s", $1);
        }
    | table_cells table_cell {
            show_rule("table_cells: table_cells table_cell");
            $$ = str_format("%s%s", $1, $2);
        }
    ;

table_head:
    table_row table_head_separator {
            show_rule("table_head: table_row table_head_separator");
            $$ = str_format("<thead>%s</thead>", $1);
        }
    ;


table_head_separator:
    table_separator_row {
            show_rule("table_head_separator: table_separator_row");
            $$ = "";
        }
    ;
table_row:
    LF_VERTICAL table_cells LINEBREAK {
            show_rule("table_row: LF_VERTICAL table_cells LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
    }
    ;
table_rows:
    table_row {
            show_rule("table_rows: table_row");
            $$ = str_format("%s", $1);
    }
    | table_rows table_row {
            show_rule("table_rows: table_rows table_row");
            $$ = str_format("%s%s", $1, $2);
    }
    ;
table_separator_cell:
    table_separator_item {
            show_rule("table_separator_cell: table_separator_item");
            $$ = str_format("<td>%s</td>", $1);
        }
    ;

table_separator_cells:
    table_separator_cell {
            show_rule("table_separator_cells: table_separator_cell");
            $$ = str_format("%s", $1);
        }
    | table_separator_cells table_separator_cell {
            show_rule("table_separator_cells: table_separator_cells table_separator_cell");
            $$ = str_format("%s%s", $1, $2);
        }
    ;


table_separator_item:
    MINUSSERIES_SEMI_VERTICAL {
            show_rule("table_separator_item: MINUSSERIES_SEMI_VERTICAL");
            $$ = $1;
        }
    | SEMI_MINUSSERIES_VERTICAL {
            show_rule("table_separator_item: SEMI_MINUSSERIES_VERTICAL");
            $$ = $1;
        }
    | SEMI_MINUSSERIES_SEMI_VERTICAL {
            show_rule("table_separator_item: SEMI_MINUSSERIES_SEMI_VERTICAL");
            $$ = $1;
        }
    | MINUSSERIES_VERTICAL {
            show_rule("table_separator_item: MINUSSERIES_VERTICAL");
            $$ = $1;
        }
    ;

table_separator_row:
    LF_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK {
            show_rule("table_separator_row: LF_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK");
            $$ = str_format("<tr>%s</tr>", $2);
        }
    ;


    /**
     * ========== grammar rules end ===========
     */
%%

void markdown( void ){
    /* export yyparse through markdown */
    yyparse();
}


