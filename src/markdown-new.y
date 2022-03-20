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
    "block: error",     "1",

        "header: LF_H inline_elements LINEBREAK", "2",

        "paragraph: lines",                       "2",
        "paragraph: NULL",                        "2",

            "lines: lines line", "3",
            "lines: line", "3",

                "line: inline_elements LINEBREAK", "4",
                "line: inline_elements", "4",
                "line: BLANKLINE", "4",

                    "inline_elements: inline_elements inline_element", "5",
                    "inline_elements: inline_element", "5",

                        "inline_element: inline_text", "6",
                        "inline_element: link", "6",

                            "inline_text: inline_text inline_text_item", "7",
                            "inline_text: inline_text_item", "7",

                                "inline_text_item: LESSTHAN", "8",
                                "inline_text_item: LARGERTHAN", "8",
                                "inline_text_item: TRIPLEBACKTICK", "8",
                                "inline_text_item: BACKTICK", "8",
                                "inline_text_item: VERTICAL", "8",
                                "inline_text_item: DOUBLEASTERISK", "8",
                                "inline_text_item: ASTERISK", "8",
                                "inline_text_item: PLUS", "8",
                                "inline_text_item: MINUS", "8",
                                "inline_text_item: DIGIT", "8",
                                "inline_text_item: DOT", "8",
                                "inline_text_item: INDENT", "8",
                                "inline_text_item: SPACE", "8",
                                "inline_text_item: EXCLAMATION", "8",
                                "inline_text_item: DOUBLEUNDERSCORE", "8",
                                "inline_text_item: UNDERSCORE", "8",
                                "inline_text_item: LEFTPARENTHESIS", "8",
                                "inline_text_item: RIGHTPARENTHESIS", "8",
                                "inline_text_item: TEXT", "8",

                            "link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET", "7"
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
                fprintf(stderr, "%s[> %s\n", str_padding_left("", indent * 4), str);
            }
        }
        else{
            fprintf(stderr, "rule info not found: %s\n", str);
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

%token BLANKLINE
%token LINEBREAK           
%token H                   
%token LF_H                
%token SPECIALCHAR         
%token LESSTHAN            
%token LARGERTHAN          
%token TRIPLEBACKTICK      
%token BACKTICK            
%token VERTICAL            
%token DOUBLEASTERISK      
%token ASTERISK            
%token PLUS                
%token MINUS               
%token DIGIT               
%token DOT                 
%token INDENT              
%token SPACE               
%token LEFTSQUARE          
%token RIGHTSQUARE         
%token LEFTBRACKET         
%token RIGHTBRACKET        
%token EXCLAMATION         
%token DOUBLEUNDERSCORE    
%token UNDERSCORE          
%token LEFTPARENTHESIS     
%token RIGHTPARENTHESIS    
%token TEXT                

%%

/**
 */

markdownfile: 
    blocks { 
            /**
             * 1. _root_node == $1
             */
            show_rule("markdownfile: blocks");
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
        }
    | /* NULL */{
            show_rule("blocks: NULL");
        }
    ;



block:
    header {
            show_rule("block: header");
        }
    | paragraph {
            show_rule("block: paragraph");
        }
    /* error recovery */
    | error {
            show_rule("block: error");
        }
    ;

header:
    LF_H inline_elements LINEBREAK {              
            show_rule("header: LF_H inline_elements LINEBREAK");
        }   
    ;

paragraph:
    lines {
            show_rule("paragraph: lines");
        }
    ;

lines:
     lines line {
            show_rule("lines: lines line");
        }
    | line {
            show_rule("lines: line");
        }
    ;

line:
    inline_elements LINEBREAK {
            show_rule("line: inline_elements LINEBREAK");
        }
    | inline_elements {
            show_rule("line: inline_elements");
        }
    | BLANKLINE {
            show_rule("line: BLANKLINE");
        }
    ;

inline_elements:
    inline_elements inline_element {
            show_rule("inline_elements: inline_elements inline_element");
        }
    | inline_element {
            show_rule("inline_elements: inline_element");
        }
    ;

inline_element:
    inline_text {
            show_rule("inline_element: inline_text");
        }
    | link {
            show_rule("inline_element: link");
        }
    ;

inline_text:
    inline_text inline_text_item {
            show_rule("inline_text: inline_text inline_text_item");
        }
    | inline_text_item {
            show_rule("inline_text: inline_text_item");
        }
    ;

inline_text_item:
    LESSTHAN {
            show_rule("inline_text_item: LESSTHAN");
        }           
    | LARGERTHAN {
            show_rule("inline_text_item: LARGERTHAN");
        }           
    | TRIPLEBACKTICK {
            show_rule("inline_text_item: TRIPLEBACKTICK");
        }           
    | BACKTICK {
            show_rule("inline_text_item: BACKTICK");
        }           
    | VERTICAL {
            show_rule("inline_text_item: VERTICAL");
        }           
    | DOUBLEASTERISK {
            show_rule("inline_text_item: DOUBLEASTERISK");
        }           
    | ASTERISK {
            show_rule("inline_text_item: ASTERISK");
        }           
    | PLUS {
            show_rule("inline_text_item: PLUS");
        }           
    | MINUS {
            show_rule("inline_text_item: MINUS");
        }           
    | DIGIT  {
            show_rule("inline_text_item: DIGIT");
        }           
    | DOT  {
            show_rule("inline_text_item: DOT");
        }           
    | INDENT {
            show_rule("inline_text_item: INDENT");
        }           
    | SPACE {
            show_rule("inline_text_item: SPACE");
        }           
    | EXCLAMATION {
            show_rule("inline_text_item: EXCLAMATION");
        }           
    | DOUBLEUNDERSCORE {
            show_rule("inline_text_item: DOUBLEUNDERSCORE");
        }           
    | UNDERSCORE {
            show_rule("inline_text_item: UNDERSCORE");
        }           
    | LEFTPARENTHESIS {
            show_rule("inline_text_item: LEFTPARENTHESIS");
        }           
    | RIGHTPARENTHESIS {
            show_rule("inline_text_item: RIGHTPARENTHESIS");
        }           
    | TEXT {
            show_rule("inline_text_item: TEXT");
        }           
    ;          

link: 
    LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        }
    ;

%%


/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}

