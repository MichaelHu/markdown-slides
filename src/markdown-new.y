%{
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "strutils.h"
#include "logutils.h"
#include "markdown-utils.h" 
#include "node.h"
#include "nodetree.h"

#define _ISDEBUGPARSER 1
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
    "block: paragraph", "1",
    "block: unorderlist_0", "1",
    "block: codeblock", "1",
    "block: quote_block", "1",
    "block: error",     "1",

    "quote_block: quote_block quote_header", "1",
    "quote_block: quote_block quote_unorderlist_0", "1",
    "quote_block: quote_block quote_paragraph", "1",
    "quote_block: quote_block quote_codeblock", "1",
    "quote_block: NULL", "1",

        "header: LF_H inline_elements LINEBREAK", "2",

        "paragraph: lines", "2",

        "unorderlist_0: LF_UL line", "2",
        "unorderlist_0: unorderlist_0 LF_UL line", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT line", "2",
        "unorderlist_0: unorderlist_0 lf_indents2_codeblock", "2",
        "unorderlist_0: unorderlist_0 unorderlist_1", "2",

        "codeblock: lf_indents code_text LINEBREAK", "2",
        "codeblock: codeblock lf_indents code_text LINEBREAK", "2",

        "lf_indents2_codeblock: lf_indents2 code_text LINEBREAK", "2",
        "lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK", "2",

        "quote_header: LF_Q_H inline_elements LINEBREAK", "2",

        "quote_unorderlist_0: LF_Q_UL line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK", "2",
        "quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1", "2",

        "quote_paragraph: LF_Q line", "2",
        "quote_paragraph: quote_paragraph LF_Q line", "2",

        "quote_codeblock: LF_Q_INDENT code_text LINEBREAK", "2",
        "quote_codeblock: quote_codeblock LF_Q_INDENT code_text LINEBREAK", "2",
        "quote_codeblock: quote_codeblock LF_Q_INDENT2 code_text LINEBREAK", "2",
        "quote_codeblock: quote_codeblock LF_Q_INDENT3 code_text LINEBREAK", "2",

            "lines: line", "3",
            "lines: lines line", "3",

            "unorderlist_1: LF_INDENT_UL line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT_UL line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT2 line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT3 code_text LINEBREAK", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT4 code_text LINEBREAK", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT5 code_text LINEBREAK", "3",
            "unorderlist_1: unorderlist_1 unorderlist_2", "3",

            "quote_unorderlist_1: LF_Q_INDENT_UL line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK", "3",
            /*
            "quote_unorderlist_1: quote_unorderlist_1 quote_unorderlist_3", "3",
            */

            "lf_indents: LF_INDENT", "3",
            "lf_indents: lf_indents2", "3",

            "lf_indents2: LF_INDENT2", "3",
            "lf_indents2: lf_indents3", "3",

            "lf_indents3: LF_INDENT3", "3",
            "lf_indents3: lf_indents4", "3",

            "lf_indents4: LF_INDENT4", "3",
            "lf_indents4: lf_indents5", "3",

            "lf_indents5: LF_INDENT5", "3",

                "line: inline_elements LINEBREAK", "4",
                "line: inline_elements", "4",
                "line: BLANKLINE", "4",

                "unorderlist_2: LF_INDENT2_UL line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT2_UL line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT3 line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT4 code_text LINEBREAK", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT5 code_text LINEBREAK", "4",

                    "inline_elements: inline_elements inline_element", "5",
                    "inline_elements: inline_element", "5",

                        "inline_element: inline_text", "6",
                        "inline_element: link", "6",
                        "inline_element: image", "6",
                        "inline_element: italic", "6",
                        "inline_element: strong", "6",
                        "inline_element: linethrough", "6",
                        "inline_element: inlinecode", "6",

                            "inline_text: inline_text inline_text_item", "7",
                            "inline_text: inline_text_item", "7",

                                "inline_text_item: LESSTHAN", "8",
                                "inline_text_item: LARGERTHAN", "8",
                                "inline_text_item: TRIPLEBACKTICK", "8",
                                "inline_text_item: VERTICAL", "8",
                                "inline_text_item: PLUS", "8",
                                "inline_text_item: MINUS", "8",
                                "inline_text_item: DIGIT", "8",
                                "inline_text_item: DOT", "8",
                                "inline_text_item: SPACE", "8",
                                "inline_text_item: RIGHTSQUARE", "8",
                                "inline_text_item: LEFTBRACKET", "8",
                                "inline_text_item: RIGHTBRACKET", "8",
                                "inline_text_item: UNDERSCORE", "8",
                                "inline_text_item: DOUBLEUNDERSCORE", "8",
                                "inline_text_item: LEFTPARENTHESIS", "8",
                                "inline_text_item: RIGHTPARENTHESIS", "8",
                                "inline_text_item: TEXT", "8",

                            "inline_code_text: inline_code_text inline_code_text_item", "7",
                            "inline_code_text: inline_code_text_item", "7",

                                "inline_code_text_item: inline_text_item", "8",
                                "inline_code_text_item: ASTERISK", "8",
                                "inline_code_text_item: DOUBLEASTERISK", "8",
                                "inline_code_text_item: DOUBLETILDE", "8",
                                "inline_code_text_item: LEFTSQUARE", "8",
                                "inline_code_text_item: EXCLAMATION", "8",

                            "code_text: code_text code_text_item", "7",
                            "code_text: code_text_item", "7",

                                "code_text_item: inline_code_text_item", "8",
                                "code_text_item: BACKTICK", "8",

                            "link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET error", "7",
                            "link: LEFTSQUARE inline_text RIGHTSQUARE error", "7",
                            "link: LEFTSQUARE inline_text error", "7",
                            "link: LEFTSQUARE error", "7",
                            "link: error", "7",

                            "image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET", "7",
                            "image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET", "7",
                            "image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error", "7",
                            "image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET error", "7",
                            "image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error", "7",
                            "image: EXCLAMATION LEFTSQUARE inline_text error", "7",
                            "image: EXCLAMATION LEFTSQUARE error", "7",
                            "image: EXCLAMATION error", "7",
                            "image: error", "7",

                            "italic: ASTERISK inline_text ASTERISK %prec ITALICSTART", "7",
                            "italic: ASTERISK inline_text error %prec ITALICSTART", "7",
                            "italic: ASTERISK error %prec ITALICSTART", "7",

                            "strong: DOUBLEASTERISK inline_text DOUBLEASTERISK", "7",
                            "strong: DOUBLEASTERISK inline_text error", "7",
                            "strong: DOUBLEASTERISK error", "7",

                            "linethrough: DOUBLETILDE inline_text DOUBLETILDE", "7",
                            "linethrough: DOUBLETILDE inline_text error", "7",
                            "linethrough: DOUBLETILDE error", "7",

                            "inlinecode: BACKTICK inline_code_text BACKTICK", "7",
                            "inlinecode: BACKTICK inline_code_text error", "7",
                            "inlinecode: BACKTICK error", "7"
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


%}


%union{
    char *text;
    /* t_node *node; */
};

    /* bind union part with terminal symbol */
/*
%token <text> TEXT SPECIALCHAR CODETEXT H QUOTEH HTMLBLOCK SECTION VSECTION SCRIPTSTART SCRIPTEND
%token <text> STYLESTART STYLEEND SVGSTART SVGEND LINK BACKTICK TRIPLEBACKTICK
%token <text> TABLEROWSTART TABLECEILEND
%token <text> ULINDENT OLINDENT TEXTINDENT PRE_INDENT INDENTED_PRE_INDENT TABLE_INDENT QUOTE_INDENT
%token <text> LEFTSQUARE RIGHTSQUARE_LEFTBRACKET RIGHTBRACKET EXCLAMATION_LEFTSQUARE
%token <text> ATTRLEFT ATTRRIGHT EMPTYATTR
%token <text> EM_BEGIN EM_END STRONG_BEGIN STRONG_END
%token <text> INDENT_QUOTEBLANKLINE

%token MINUS PLUS RIGHTPARENTHESES LEFTPARENTHESES 
%token UNDERSCORE STAR BLANKLINE LINEBREAK LARGERTHAN
%token DOUBLESTAR DOUBLEUNDERSCORE OLSTART ULSTART QUOTEBLANKLINE QUOTEOLSTART QUOTEULSTART
*/

    /* bind union part with nonterminal symbol */
/*
%type <text> text_list
%type <text> codespan code_list error
%type <node> blocks block
%type <node> lines line
%type <node> header raw_text pairedblock
%type <node> tablerows tablerow tableceils tableceil
%type <node> block_p line_p
%type <node> block_blank line_blank
%type <node> block_ul line_ul block_ol line_ol
%type <node> block_indent_ul line_indent_ul block_indent_ol line_indent_ol block_indent_text line_indent_text
%type <node> block_pre line_pre block_indented_pre line_indented_pre
%type <node> inline_elements inline_element inline_text_collection inline_text
%type <node> plaintext link inline_code standard_link standard_image inline_emphasis inline_strong

%type <node> block_quote_h
%type <node> block_quote_blank line_quote_blank
%type <node> block_quote_p line_quote_p
%type <node> block_quote_ul line_quote_ul block_quote_ol line_quote_ol

%nonassoc TEXT SPECIALCHAR EXCLAMATION LEFTSQUARE STAR DOUBLESTAR UNDERSCORE DOUBLEUNDERSCORE BACKTICK TRIPLEBACKTICK error
%nonassoc STARX
*/


    /* bind union part with terminal symbol */
%token <text> BLANKLINE
%token <text> LINEBREAK           

%token <text> LF_H                

%token <text> LF_UL                
%token <text> UL                

%token <text> LF_INDENT_UL                
%token <text> LF_INDENT2_UL                
%token <text> LF_INDENT3_UL                
%token <text> LF_INDENT4_UL                

%token <text> LF_INDENT              
%token <text> LF_INDENT2
%token <text> LF_INDENT3
%token <text> LF_INDENT4
%token <text> LF_INDENT5

%token <text> LF_Q_H
%token <text> LF_Q_UL

%token <text> LF_Q_INDENT_UL                
%token <text> LF_Q_INDENT2_UL                

%token <text> LF_Q_INDENT              
%token <text> LF_Q_INDENT2
%token <text> LF_Q_INDENT3

%token <text> LF_Q

%token <text> SPECIALCHAR         
%token <text> LESSTHAN            
%token <text> LARGERTHAN          
%token <text> TRIPLEBACKTICK      
%token <text> BACKTICK            
%token <text> VERTICAL            
%token <text> DOUBLEASTERISK      
%token <text> DOUBLETILDE      
%token <text> ASTERISK            
%token <text> PLUS                
%token <text> MINUS               
%token <text> DIGIT               
%token <text> DOT                 

%token <text> SPACE               
%token <text> LEFTSQUARE          
%token <text> RIGHTSQUARE         
%token <text> LEFTBRACKET         
%token <text> RIGHTBRACKET        
%token <text> EXCLAMATION         
%token <text> DOUBLEUNDERSCORE    
%token <text> UNDERSCORE          
%token <text> LEFTPARENTHESIS     
%token <text> RIGHTPARENTHESIS    
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
%type <text> quote_header
%type <text> quote_unorderlist_0
%type <text> quote_paragraph
%type <text> quote_codeblock
%type <text> lines
%type <text> unorderlist_1
%type <text> quote_unorderlist_1
%type <text> lf_indents
%type <text> lf_indents2
%type <text> lf_indents3
%type <text> lf_indents4
%type <text> lf_indents5
%type <text> line
%type <text> unorderlist_2
%type <text> inline_elements
%type <text> inline_element
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

%nonassoc ITALICSTART
%nonassoc LISTSTART

%%

/**
 */

markdownfile: 
    blocks { 
            /**
             * 1. _root_node == $1
             */

            show_rule("markdownfile: blocks");

            /*
            fprintf(stdout, "==================================\n");
            fprintf(stdout, "%s", $1);
            fprintf(stdout, "==================================\n");
            */

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



block:
    header {
            show_rule("block: header");
            $$ = $1;
        }
    | paragraph {
            show_rule("block: paragraph");
            $$ = $1;
        }
    | unorderlist_0 {
            show_rule("block: unorderlist_0");
            $$ = $1;
        }
    | codeblock {
            show_rule("block: codeblock");
            $$ = $1;
        }
    | quote_block {
            show_rule("block: quote_block");
            $$ = $1;
        }
    /* error recovery */
    | error {
            show_rule("block: error");
        }
    ;

quote_block:
    quote_block quote_header {
            show_rule("quote_block: quote_block quote_header");
        }
    | quote_block quote_unorderlist_0 {
            show_rule("quote_block: quote_block quote_unorderlist_0");
        }
    | quote_block quote_paragraph {
            show_rule("quote_block: quote_block quote_paragraph");
        }
    | quote_block quote_codeblock {
            show_rule("quote_block: quote_block quote_codeblock");
        }
    | /* NULL */ {
            show_rule("quote_block: NULL");
        }
    ;

header:
    LF_H inline_elements LINEBREAK {              
            show_rule("header: LF_H inline_elements LINEBREAK");
            $$ = str_format("<h?>%s</h?>", $2);
        }   
    ;

paragraph:
    lines {
            show_rule("paragraph: lines");
            $$ = $1;
        }
    ;

unorderlist_0: 
    LF_UL line {
            show_rule("unorderlist_0: LF_UL line");
            $$ = str_format("<li>%s</li>", $2);
        }
    | unorderlist_0 LF_UL line {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            $$ = str_format("%s<li>%s</li>", $1, $2);
        }
    | unorderlist_0 LF_INDENT line {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
            $$ = str_format("%s%s</li>", str_replace_right($1,"</li>", ""), $2);
        }
    | unorderlist_0 lf_indents2_codeblock {
            show_rule("unorderlist_0: unorderlist_0 lf_indents2_codeblock");
            $$ = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right($1,"</li>", ""), $2);
        }
    | unorderlist_0 unorderlist_1 {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
        }
    ;

codeblock: 
    lf_indents code_text LINEBREAK {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
        }
    | codeblock lf_indents code_text LINEBREAK {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
        }
    ;

lf_indents2_codeblock: 
    lf_indents2 code_text LINEBREAK {
            show_rule("lf_indents2_codeblock: lf_indents2 code_text LINEBREAK");
        }
    | lf_indents2_codeblock lf_indents2 code_text LINEBREAK {
            show_rule("lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK");
        }
    ;

quote_header: 
    LF_Q_H inline_elements LINEBREAK {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
        }
    ;

quote_unorderlist_0: 
    LF_Q_UL line {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
        }
    | quote_unorderlist_0 LF_Q_UL line {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
        }
    | quote_unorderlist_0 LF_Q_INDENT line {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
        }
    | quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK");
        }
    | quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK");
        }
    | quote_unorderlist_0 quote_unorderlist_1 {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
        }
    ;

quote_paragraph: 
    LF_Q line {
            show_rule("quote_paragraph: LF_Q line");
        }
    | quote_paragraph LF_Q line {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
        }
    ;

quote_codeblock: 
    LF_Q_INDENT code_text LINEBREAK {
            show_rule("quote_codeblock: LF_Q_INDENT code_text LINEBREAK");
        }
    | quote_codeblock LF_Q_INDENT code_text LINEBREAK {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT code_text LINEBREAK");
        }
    | quote_codeblock LF_Q_INDENT2 code_text LINEBREAK {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT2 code_text LINEBREAK");
        }
    | quote_codeblock LF_Q_INDENT3 code_text LINEBREAK {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT3 code_text LINEBREAK");
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

unorderlist_1: 
    LF_INDENT_UL line {
            show_rule("unorderlist_1: LF_INDENT_UL line");
        }
    | unorderlist_1 LF_INDENT_UL line {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
        }
    | unorderlist_1 LF_INDENT2 line {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
        }
    | unorderlist_1 LF_INDENT3 code_text LINEBREAK {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT3 code_text LINEBREAK");
        }
    | unorderlist_1 LF_INDENT4 code_text LINEBREAK {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT4 code_text LINEBREAK");
        }
    | unorderlist_1 LF_INDENT5 code_text LINEBREAK {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT5 code_text LINEBREAK");
        }
    | unorderlist_1 unorderlist_2 {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
        }
    ;

quote_unorderlist_1: 
    LF_Q_INDENT_UL line {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
        }
    | quote_unorderlist_1 LF_Q_INDENT_UL line {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
        }
    | quote_unorderlist_1 LF_Q_INDENT2 line {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
        }
    | quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK");
        }
    ;

lf_indents: 
    LF_INDENT {
            show_rule("lf_indents: LF_INDENT");
        }
    | lf_indents2 {
            show_rule("lf_indents: lf_indents2");
        }
    ;

lf_indents2: 
    LF_INDENT2 {
            show_rule("lf_indents2: LF_INDENT2");
        }
    | lf_indents3 {
            show_rule("lf_indents2: lf_indents3");
        }
    ;

lf_indents3: 
    LF_INDENT3 {
            show_rule("lf_indents3: LF_INDENT3");
        }
    | lf_indents4 {
            show_rule("lf_indents3: lf_indents4");
        }
    ;

lf_indents4: 
    LF_INDENT4 {
            show_rule("lf_indents4: LF_INDENT4");
        }
    | lf_indents5 {
            show_rule("lf_indents4: lf_indents5");
        }
    ;

lf_indents5: 
    LF_INDENT5 {
            show_rule("lf_indents5: LF_INDENT5");
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
    | BLANKLINE {
            show_rule("line: BLANKLINE");
            $$ = "\n";
        }
    ;

unorderlist_2: 
    LF_INDENT2_UL line {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
        }
    | unorderlist_2 LF_INDENT2_UL line {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
        }
    | unorderlist_2 LF_INDENT3 line {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
        }
    | unorderlist_2 LF_INDENT4 code_text LINEBREAK {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT4 code_text LINEBREAK");
        }
    | unorderlist_2 LF_INDENT5 code_text LINEBREAK {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT5 code_text LINEBREAK");
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
        }
    | strong {
            show_rule("inline_element: strong");
        }
    | linethrough {
            show_rule("inline_element: linethrough");
        }
    | inlinecode {
            show_rule("inline_element: inlinecode");
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
    LESSTHAN {
            show_rule("inline_text_item: LESSTHAN");
            $$ = $1;
        }           
    | LARGERTHAN {
            show_rule("inline_text_item: LARGERTHAN");
            $$ = $1;
        }           
    | TRIPLEBACKTICK {
            show_rule("inline_text_item: TRIPLEBACKTICK");
            $$ = $1;
        }           
    | VERTICAL {
            show_rule("inline_text_item: VERTICAL");
            $$ = $1;
        }           
    | PLUS {
            show_rule("inline_text_item: PLUS");
            $$ = $1;
        }           
    | MINUS {
            show_rule("inline_text_item: MINUS");
            $$ = $1;
        }           
    | DIGIT  {
            show_rule("inline_text_item: DIGIT");
            $$ = $1;
        }           
    | DOT  {
            show_rule("inline_text_item: DOT");
            $$ = $1;
        }           
    | SPACE {
            show_rule("inline_text_item: SPACE");
            $$ = $1;
        }           
    | RIGHTSQUARE {
            show_rule("inline_text_item: RIGHTSQUARE");
            $$ = $1;
        }           
    | LEFTBRACKET {
            show_rule("inline_text_item: LEFTBRACKET");
            $$ = $1;
        }           
    | RIGHTBRACKET {
            show_rule("inline_text_item: RIGHTBRACKET");
            $$ = $1;
        }           
    | UNDERSCORE {
            show_rule("inline_text_item: UNDERSCORE");
            $$ = $1;
        }           
    | DOUBLEUNDERSCORE {
            show_rule("inline_text_item: DOUBLEUNDERSCORE");
            $$ = $1;
        }           
    | LEFTPARENTHESIS {
            show_rule("inline_text_item: LEFTPARENTHESIS");
            $$ = $1;
        }           
    | RIGHTPARENTHESIS {
            show_rule("inline_text_item: RIGHTPARENTHESIS");
            $$ = $1;
        }           
    | TEXT {
            show_rule("inline_text_item: TEXT");
            $$ = $1;
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
    | ASTERISK {
            show_rule("inline_code_text_item: ASTERISK");
            $$ = $1;
        }
    | DOUBLEASTERISK {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            $$ = $1;
        }
    | DOUBLETILDE {
            show_rule("inline_code_text_item: DOUBLETILDE");
            $$ = $1;
        }
    | EXCLAMATION {
            show_rule("inline_text_item: EXCLAMATION");
            $$ = $1;
        }           
    | LEFTSQUARE {
            show_rule("inline_text_item: LEFTSQUARE");
            $$ = $1;
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

link: 
    LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\">%s</a>", $5, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            $$ = str_format("<a href=\"%s\" title=\"%s\">%s</a>", $5, $7, $2);
        }
    | LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        }
    | LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        }
    | LEFTSQUARE inline_text RIGHTSQUARE error {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE error");
        }
    | LEFTSQUARE inline_text error {
            show_rule("link: LEFTSQUARE inline_text error");
        }
    | LEFTSQUARE error {
            show_rule("link: LEFTSQUARE error");
        }
    ;

image: 
    EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        }
    | EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error");
        }
    | EXCLAMATION LEFTSQUARE inline_text error {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text error");
        }
    | EXCLAMATION LEFTSQUARE error {
            show_rule("image: EXCLAMATION LEFTSQUARE error");
        }
    | EXCLAMATION error {
            show_rule("image: EXCLAMATION error");
        }
    ;

italic: 
    ASTERISK inline_text ASTERISK %prec ITALICSTART {
            show_rule("italic: ASTERISK inline_text ASTERISK %prec ITALICSTART");
        }
    | ASTERISK inline_text error %prec ITALICSTART {
            show_rule("italic: ASTERISK inline_text error %prec ITALICSTART");
        }
    | ASTERISK error %prec ITALICSTART {
            show_rule("italic: ASTERISK error %prec ITALICSTART");
        }
    ;

strong:
    DOUBLEASTERISK inline_text DOUBLEASTERISK {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
        }
    | DOUBLEASTERISK inline_text error {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        }
    | DOUBLEASTERISK error {
            show_rule("strong: DOUBLEASTERISK error");
        }
    ;

linethrough:
    DOUBLETILDE inline_text DOUBLETILDE {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
        }
    | DOUBLETILDE inline_text error {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        }
    | DOUBLETILDE error {
            show_rule("linethrough: DOUBLETILDE error");
        }
    ;

inlinecode:
    BACKTICK inline_code_text BACKTICK {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
            $$ = str_format("<pre>%s</pre>", $2);
        }
    | BACKTICK inline_code_text error {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        }
    | BACKTICK error {
            show_rule("inlinecode: BACKTICK error");
        }
    ;

%%


/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}

