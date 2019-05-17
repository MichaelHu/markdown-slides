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

static void show_rule(char *str, int level) {
    if (_ISDEBUGPARSER) {
        if (level <= MAX_RULE_LEVEL) {
            fprintf(stderr, "%s[> %s\n", str_padding_left("", level * 4), str);
        }
    }
}

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


%}


%union{
    char *text;
    t_node *node;
};

    /* bind union part with terminal symbol */
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

    /* bind union part with nonterminal symbol */
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

%%

markdownfile: 
    blocks { 
            /**
             * 1. _root_node == $1
             */
            show_rule("markdownfile: blocks", 0);
            parse_doc();
            is_doc_parsed = 1;
        }
    /*
    | error { 
            show_rule("markdownfile: error", 0);
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
            show_rule("blocks: blocks block", 1);
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
            show_rule("blocks: /* NULL */", 1);
            _root_node = block_node_create(
                TAG_ROOT
                , -100
                , 0
            );
            $$ = _root_node;
        }
    ;



block:
    lines { 
            show_rule("block: lines", 2);
            $$ = $1;
        }
    | header {
            show_rule("block: header", 2);
            $$ = $1;
        }
    | tablerows {
            show_rule("block: tablerows", 2);

            $$ = $1;
        }
    | block_p {
            show_rule("block: block_p", 2);
            $$ = $1;
        }
    | block_ul {
            show_rule("block: block_ul", 2); 
            $$ = $1;
        }
    | block_ol {
            show_rule("block: block_ol", 2);
            $$ = $1;
        }
    | block_indent_ul {
            show_rule("block: block_indent_ul", 2);
            $$ = $1;
        }
    | block_indent_ol {
            show_rule("block: block_indent_ol", 2);
            $$ = $1;
        }
    | block_indent_text {
            show_rule("block: block_indent_text", 2);
            $$ = $1;
        }
    | block_blank {
            show_rule("block: block_blank", 2);
            $$ = $1;
        }
    | block_pre {
            show_rule("block: block_pre", 2);
            $$ = $1;
        }
    | block_indented_pre {
            show_rule("block: block_indented_pre", 2);
            $$ = $1;
        }

    /* blockquote */
    | block_quote_h {
            show_rule("block: block_quote_h", 2);
            $$ = $1;
        }
    | block_quote_ul {
            show_rule("block: block_quote_ul", 2);
            $$ = $1;
        }
    | block_quote_ol {
            show_rule("block: block_quote_ol", 2);
            $$ = $1;
        }
    | block_quote_p {
            show_rule("block: block_quote_p", 2);
            $$ = $1;
        }
    | block_quote_blank {
            show_rule("block: block_quote_blank", 2);
            $$ = $1;
        }

    /* other grammar */
    | pairedblock {
            show_rule("block: pairedblock", 2);
            $$ = $1;
        }
    | raw_text {
            show_rule("block: raw_text", 2);
            $$ = $1;
        }

    /* error recovery */
    | error {
            show_rule("block: error", 2);
            _node = block_node_create(
                TAG_ERROR
                , 0
                , 0
            );

            $$ = _node;
        }
    ;

header:
    H inline_elements LINEBREAK {              
            show_rule("header: H inline_elements LINEBREAK", 3);
            tag_check_stack(TAG_H, 0); 

            _node = block_node_create(
                TAG_H
                , 0
                , 3
                , *($2->ops) 
                , "" 
                , $1
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        }   
    ;


raw_text: 
    HTMLBLOCK TEXT LINEBREAK {
            show_rule("raw_text: HTMLBLOCK TEXT LINEBREAK", 3);
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
            show_rule("raw_text: HTMLBLOCK LINEBREAK", 3);
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
            show_rule("raw_text: SCRIPTSTART inline_elements error", 3);
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
            show_rule("raw_text: STYLESTART inline_elements error", 3);
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
            show_rule("raw_text: SVGSTART inline_elements error", 3);
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

    | TRIPLEBACKTICK codespan error { 
            show_rule("raw_text: TRIPLEBACKTICK codespan error", 3);
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
            show_rule("lines: lines line", 3);
            $$ = $1;
        }
    | line {
            show_rule("lines: line", 3);
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
            show_rule("block_p: block_p line_p", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_p { 
            show_rule("block_p: line_p", 3);
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
            show_rule("line_p: inline_elements LINEBREAK", 4);
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
            show_rule("block_blank: block_blank line_blank", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_blank {
            show_rule("block_blank: line_blank", 3);
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
            show_rule("line_blank: BLANKLINE", 4);
            tag_check_stack(TAG_BLANK, 100); 

            _node = line_node_create(
                TAG_BLANK
                , 0
                , 0
            );
            $$ = _node;
        }
    ;

block_quote_blank: 
    block_quote_blank line_quote_blank {
            show_rule("block_quote_blank: block_quote_blank line_quote_blank", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_blank {
            show_rule("block_quote_blank: line_quote_blank", 3);
            _node = block_node_create(
                TAG_BLOCK_QUOTE_BLANK
                , $1->level
                , 0
            );
            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

line_quote_blank:
    QUOTEBLANKLINE { 
            show_rule("line_quote_blank: QUOTEBLANKLINE", 4);
            tag_check_stack(TAG_QUOTE_BLANK, 100); 

            _node = line_node_create(
                TAG_QUOTE_BLANK
                , 0
                , 0
            );
            $$ = _node;
        }

    | INDENT_QUOTEBLANKLINE {
            show_rule("line_quote_blank: INDENT_QUOTEBLANKLINE", 4);
            tag_check_stack(TAG_QUOTE_BLANK, indent_level($1)); 

            _node = line_node_create(
                TAG_QUOTE_BLANK
                , indent_level($1)
                , 0
            );
            $$ = _node;
        }
    ;

block_quote_h:
    QUOTEH inline_elements LINEBREAK { 
            show_rule("block_quote_h: QUOTEH inline_elements LINEBREAK", 3);
            tag_check_stack(TAG_QUOTE_H, 0); 

            _node = block_node_create(
                TAG_QUOTE_H
                , 0
                , 3
                , *($2->ops)
                , ""
                , $1
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        }   
    ;

block_quote_p:
    block_quote_p line_quote_p {
            show_rule("block_quote_p: block_quote_p line_quote_p", 3);
            tag_check_stack(TAG_BLANK, 100); 
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_p {
            show_rule("block_quote_p: line_quote_p", 3);
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
            show_rule("line_quote_p: LARGERTHAN inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_P, 0); 

            _node = line_node_create(
                TAG_QUOTE_P
                , 0
                , 1
                , *($2->ops)
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        } 

    | QUOTE_INDENT LARGERTHAN inline_elements LINEBREAK {
            show_rule("line_quote_p: QUOTE_INDENT LARGERTHAN inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_P, indent_level($1)); 

            _node = line_node_create(
                TAG_QUOTE_P
                , indent_level($1)
                , 1
                , *($3->ops)
            );

            _node->children = $3;
            $3->parent = _node;
            $$ = _node;
        }
    ;

block_ul:
    block_ul line_ul {
            show_rule("block_ul: block_ul line_ul", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_ul {
            show_rule("block_ul: line_ul", 3);
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
            show_rule("line_ul: ULSTART inline_elements LINEBREAK", 4);
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
            show_rule("line_ul: ULSTART LINEBREAK", 4);
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
            show_rule("block_indent_ul: block_indent_ul line_indent_ul", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indent_ul {
            show_rule("block_indent_ul: line_indent_ul", 4);
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
            show_rule("line_indent_ul: ULINDENT ULSTART inline_elements LINEBREAK", 4);
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
            show_rule("block_quote_ul: block_quote_ul line_quote_ul", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_ul {
            show_rule("block_quote_ul: line_quote_ul", 3);
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
            show_rule("line_quote_ul: QUOTEULSTART inline_elements LINEBREAK", 4);
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
            show_rule("block_ol: block_ol line_ol", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_ol {
            show_rule("block_ol: line_ol", 3);
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
            show_rule("line_ol: OLSTART inline_elements LINEBREAK", 4);
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
            show_rule("line_ol: OLSTART LINEBREAK", 4);
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
            show_rule("block_indent_ol: block_indent_ol line_indent_ol", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indent_ol {
            show_rule("block_indent_ol: line_indent_ol", 3);
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
            show_rule("line_indent_ol: OLINDENT OLSTART inline_elements LINEBREAK", 4);
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
            show_rule("block_quote_ol: block_indent_ol line_quote_ol", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_quote_ol {
            show_rule("block_quote_ol: line_quote_ol", 3);
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
            show_rule("line_quote_ol: QUOTEOLSTART inline_elements LINEBREAK", 4);
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
            show_rule("block_indent_text: block_indent_text line_indent_text", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indent_text {
            show_rule("block_indent_text: line_indent_text", 3);
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
            show_rule("line_indent_text: TEXTINDENT inline_elements LINEBREAK", 4);

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
            show_rule("block_pre: block_pre line_pre", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_pre {
            show_rule("block_pre: line_pre", 3);
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
    PRE_INDENT CODETEXT LINEBREAK {
            show_rule("line_pre: PRE_INDENT CODETEXT LINEBREAK", 4);
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
            show_rule("line_pre: TRIPLEBACKTICK codespan TRIPLEBACKTICK LINEBREAK", 4);
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
            show_rule("block_indented_pre: block_indented_pre line_indented_pre", 3);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | line_indented_pre {
            show_rule("block_indented_pre: line_indented_pre", 3);
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
    INDENTED_PRE_INDENT CODETEXT LINEBREAK {
            show_rule("line_indented_pre: INDENTED_PRE_INDENT CODETEXT LINEBREAK", 4);
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
            show_rule("pairedblock: SCRIPTSTART inline_elements SCRIPTEND", 3);
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
            show_rule("pairedblock: SCRIPTSTART SCRIPTEND", 3);
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
            show_rule("pairedblock: STYLESTART inline_elements STYLEEND", 3);
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
            show_rule("pairedblock: STYLESTART STYLEEND", 3);
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
            show_rule("pairedblock: SVGSTART inline_elements SVGEND", 3);
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
            show_rule("pairedblock: SVGSTART SVGEND", 3);
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
                                                            show_rule("tablerows: tablerows tablerow", 3);
                                                            _tail_node = tail_node_in_list($1->children);
                                                            _tail_node->next = $2;
                                                            $2->prev = _tail_node; 
                                                            $2->parent = _tail_node->parent;
                                                            $$ = $1; 
                                                        }
    | tablerow                                          {
                                                            show_rule("tablerows: tablerow", 3);
                                                            _node = block_node_create(
                                                                TAG_TABLE
                                                                , $1->level - 1
                                                                , 0
                                                            );
                                                            _node->children = $1;
                                                            $1->parent = _node;
                                                            $$ = _node; 
                                                        }

tablerow:
    TABLEROWSTART tableceils LINEBREAK                  {
                                                            show_rule("tablerow: TABLEROWSTART tableceils LINEBREAK", 4);
                                                            $$ = $2;
                                                        }
    | TABLEROWSTART tableceils error LINEBREAK          {
                                                            show_rule("tablerow: TABLEROWSTART tableceils error LINEBREAK", 4);
                                                            $$ = $2;
                                                            yyerrok;
                                                        }
    | TABLE_INDENT TABLEROWSTART tableceils LINEBREAK                  {
                                                            show_rule("tablerow: TABLE_INDENT TABLEROWSTART tableceils LINEBREAK", 4);
                                                            $3->level = indent_level($1) + 1;
                                                            $$ = $3;
                                                        }
    | TABLE_INDENT TABLEROWSTART tableceils error LINEBREAK          {
                                                            show_rule("tablerow: TABLE_INDENT TABLEROWSTART tableceils error LINEBREAK", 4);
                                                            $3->level = indent_level($1) + 1;
                                                            $$ = $3;
                                                            yyerrok;
                                                        }
    ;


tableceils:
    tableceils tableceil                                { 
                                                            show_rule("tableceils: tableceils tableceil",5);
                                                            _tail_node = tail_node_in_list($1->children); 
                                                            _tail_node->next = $2; 
                                                            $2->prev = _tail_node;
                                                            $2->parent = _tail_node->parent;
                                                            $$ = $1;
                                                        }
    | tableceil                                         {
                                                            show_rule("tableceils: tableceil", 5);
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
            show_rule("tableceil: inline_elements TABLECEILEND", 6);
            _node = inline_node_create(
                TAG_TD
                , NODE_LEVEL_SPECIAL
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    | inline_elements error {
            show_rule("tableceil: inline_elements error", 6);
            _node = inline_node_create(
                TAG_TD
                , NODE_LEVEL_SPECIAL
                , 1
                , *($1->ops)
            );

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
            
            yyerrok;
        }
    | TABLECEILEND {
            show_rule("tableceil: TABLECEILEND", 6);
            _node = inline_node_create(
                TAG_TD
                , NODE_LEVEL_SPECIAL
                , 1
                , ""
            );

            $$ = _node;
        }
    ;



line:
    SECTION LINEBREAK {
            show_rule("line: SECTION LINEBREAK", 4);
            tag_check_stack(TAG_SECTION, -1); 
        }

    | VSECTION LINEBREAK {
            show_rule("line: VSECTION LINEBREAK", 4);
            tag_check_stack(TAG_VSECTION, -1); 
        }
    ;



inline_elements:
    inline_elements inline_element {
            show_rule("inline_elements: inline_elements inline_element", 5);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | inline_element {
            show_rule("inline_elements: inline_element", 5);
            if (
                /**
                 * 1. if the first child is a link or image
                 * 2. then, the attr and content attributes will not be transfer to parent
                 */
                TAG_INLINE_LINK == $1->tag
                || TAG_INLINE_IMAGE == $1->tag
                ) {
                _node = inline_node_create(
                    TAG_INLINE_ELEMENTS
                    , NODE_LEVEL_SPECIAL
                    , 2
                    /* attr of the first child */
                    , ""
                    , ""
                );
            }
            else {
                _node = inline_node_create(
                    TAG_INLINE_ELEMENTS
                    , NODE_LEVEL_SPECIAL
                    , 2
                    /* attr of the first child */
                    , *$1->ops
                    , *($1->ops + 1)
                );
            }

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

inline_element:
    plaintext { 
            show_rule("inline_element: plaintext", 6);
            tag_info = markdown_get_tag_info(*($1->ops + 1));     
            *($1->ops) = tag_info->attr;
            *($1->ops + 1) = tag_info->content;

            $$ = $1; 
        }
    | link { show_rule("inline_element: link", 6); $$ = $1; }
    | standard_link { show_rule("inline_element: standard_link", 6); $$ = $1; }
    | standard_image { show_rule("inline_element: standard_image", 6); $$ = $1; }
    | inline_code { show_rule("inline_element: inline_code", 6); $$ = $1; }
    | inline_emphasis { show_rule("inline_element: inline_emphasis", 6); $$ = $1; }
    | inline_strong { show_rule("inline_element: inline_strong", 6); $$ = $1; }
    ;


inline_emphasis:
    EM_BEGIN inline_text_collection EM_END {
            show_rule("inline_emphasis: EM_BEGIN inline_text_collection EM_END", 7);
            _node = inline_node_create(
                TAG_INLINE_EM
                , NODE_LEVEL_SPECIAL
                , 2
                , *($2->ops)
                , ""
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        }

    | EM_BEGIN inline_text_collection error {
            show_rule("inline_emphasis: EM_BEGIN inline_text_collection error", 7);
            str = str_concat($1, *($2->children->ops + 1));
            *($2->children->ops + 1) = str;

            $$ = $2;
            yyerrok;
        }

    | EM_BEGIN EM_END {
            show_rule("inline_emphasis: EM_BEGIN EM_END", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_concat($1, $2)
            );

            $$ = _node;
        }
    ;


inline_strong:
    STRONG_BEGIN inline_text_collection STRONG_END {
            show_rule("inline_strong: STRONG_BEGIN inline_text_collection STRONG_END", 7);
            _node = inline_node_create(
                TAG_INLINE_STRONG
                , NODE_LEVEL_SPECIAL
                , 2
                , *($2->ops)
                , ""
            );

            _node->children = $2;
            $2->parent = _node;
            $$ = _node;
        }

    | STRONG_BEGIN inline_text_collection error {
            show_rule("inline_strong: STRONG_BEGIN inline_text_collection error", 7);
            str = str_concat($1, *($2->children->ops + 1));
            *($2->children->ops + 1) = str;

            $$ = $2;
            yyerrok;
        }

    | STRONG_BEGIN STRONG_END {
            show_rule("inline_strong: STRONG_BEGIN STRONG_END", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_concat($1, $2)
            );

            $$ = _node;
        }
    ;



    /*
    | STAR inlineelements STAR %prec STARX              { $$ = create_emphasis($2); } 
    | UNDERSCORE inlineelements UNDERSCORE %prec STARX             { $$ = create_emphasis($2); } 
    | DOUBLESTAR inlineelements DOUBLESTAR %prec STARX              { $$ = create_strong($2); }
    | DOUBLEUNDERSCORE inlineelements DOUBLEUNDERSCORE %prec STARX  { $$ = create_strong($2); }
    ;
    */

inline_text_collection:
    inline_text_collection inline_text {
            show_rule("inline_text_collection: inline_text_collection inline_text", 5);
            _tail_node = tail_node_in_list($1->children);
            _tail_node->next = $2;
            $2->prev = _tail_node;
            $2->parent = _tail_node->parent;
            $$ = $1;
        }
    | inline_text {
            show_rule("inline_text_collection: inline_text", 5);
            if (
                /**
                 * 1. if the first child is a link or image
                 * 2. then, the attr and content attributes will not be transfer to parent
                 */
                TAG_INLINE_LINK == $1->tag
                || TAG_INLINE_IMAGE == $1->tag
                ) {
                _node = inline_node_create(
                    TAG_INLINE_ELEMENTS
                    , NODE_LEVEL_SPECIAL
                    , 2
                    /* attr of the first child */
                    , ""
                    , ""
                );
            }
            else {
                _node = inline_node_create(
                    TAG_INLINE_ELEMENTS
                    , NODE_LEVEL_SPECIAL
                    , 2
                    /* attr of the first child */
                    , *$1->ops
                    , *($1->ops + 1)
                );
            }

            _node->children = $1;
            $1->parent = _node;
            $$ = _node;
        }
    ;

    /**
     * 1. inline_text may contain plaintext, link or standard_link
     * 2. it's a sub-collection of inline_element
     */
inline_text:
    plaintext {
            show_rule("inline_text: plaintext", 6);
            tag_info = markdown_get_tag_info(*($1->ops + 1));     
            *($1->ops) = tag_info->attr;
            *($1->ops + 1) = tag_info->content;

            $$ = $1; 
        }
    | link { show_rule("inline_text: link", 6); $$ = $1; }
    | standard_link { show_rule("inline_text: standard_link", 6); $$ = $1; }
    ;










link:                        
    LINK {
            show_rule("link: LINK", 7);
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
    LEFTSQUARE plaintext RIGHTSQUARE_LEFTBRACKET plaintext RIGHTBRACKET {
            show_rule("standard_link: LEFTSQUARE plaintext RIGHTSQUARE_LEFTBRACKET plaintext RIGHTBRACKET", 7);
            tag_info = markdown_get_standard_link_tag_info(*($2->ops + 1), *($4->ops + 1));

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

standard_image:
    EXCLAMATION_LEFTSQUARE plaintext RIGHTSQUARE_LEFTBRACKET plaintext RIGHTBRACKET {
            show_rule("standard_image: EXCLAMATION_LEFTSQUARE plaintext RIGHTSQUARE_LEFTBRACKET plaintext RIGHTBRACKET", 7);
            tag_info = markdown_get_standard_image_tag_info(*($2->ops + 1), *($4->ops + 1));

            _node = inline_node_create(
                TAG_INLINE_IMAGE
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            $$ = _node;
        } 
    ;


plaintext:
    plaintext text_list {
            show_rule("plaintext: plaintext text_list", 7);
            *($1->ops + 1) = str_concat(*($1->ops + 1), $2);
            $$ = $1;
        } 
    | text_list {
            show_rule("plaintext: text_list", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , $1 
            );

            $$ = _node;
        }
    | ATTRLEFT plaintext ATTRRIGHT {
            show_rule("plaintext: ATTRLEFT plaintext ATTRRIGHT", 7);
            *($2->ops + 1) = str_concat(
                $1
                /**
                 * 1. @[data-title="def\]"]abc => @[data-title="def&#93;"]abc
                 */
                , str_replace(*($2->ops + 1), "]", "&#93;")
            );
            *($2->ops + 1) = str_concat(*($2->ops + 1), $3);
            $$ = $2;
        }
    | ATTRLEFT plaintext error {
            show_rule("plaintext: ATTRLEFT plaintext error", 7);
            *($2->ops + 1) = str_concat(
                $1
                , str_replace(*($2->ops + 1), "]", "&#93;")
            );
            $$ = $2;
            yyerrok;
        }
    ;

text_list:
    TEXT                            { show_rule("text_list: TEXT", 8); $$ = str_format("%s", $1); }
    | SPECIALCHAR                   { show_rule("text_list: SPECIALCHAR", 8); $$ = str_format("%s", $1); }
    | EMPTYATTR                     { show_rule("text_list: EMPTYATTR", 8); $$ = str_format("%s", $1); }
    ;

inline_code:
    BACKTICK codespan BACKTICK { 
            show_rule("inline_code: BACKTICK codespan BACKTICK", 7);
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

    | BACKTICK codespan error { 
            show_rule("inline_code: BACKTICK codespan error", 7);
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

    | BACKTICK error { 
            show_rule("inline_code: BACKTICK error", 7);
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
    codespan code_list              { show_rule("codespan: codespan code_list", 8); $$ = str_concat($1, $2); }
    | code_list                     { show_rule("codespan: code_list", 8); $$ = $1; }
    ;

code_list:
    CODETEXT                        { show_rule("code_list: CODETEXT", 9); $$ = str_format("%s", $1); }
    | SPECIALCHAR                   { show_rule("code_list: SPECIALCHAR", 9); $$ = str_format("%s", $1); }
    ;

%%


/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}

