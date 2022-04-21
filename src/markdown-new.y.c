/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BLANKLINE = 258,
     QUOTEBLANKLINE = 259,
     LINEBREAK = 260,
     LF_H = 261,
     LF_UL = 262,
     UL = 263,
     LF_VERTICAL = 264,
     LF_VERTICAL_HEAD_SEP = 265,
     LF_INDENT_UL = 266,
     LF_INDENT2_UL = 267,
     LF_INDENT3_UL = 268,
     LF_INDENT4_UL = 269,
     LF_INDENT_VERTICAL = 270,
     LF_INDENT = 271,
     LF_INDENT2 = 272,
     LF_INDENT3 = 273,
     LF_INDENT4 = 274,
     LF_INDENT5 = 275,
     LF_Q_H = 276,
     LF_Q_UL = 277,
     LF_Q_VERTICAL = 278,
     LF_Q_INDENT_UL = 279,
     LF_Q_INDENT2_UL = 280,
     LF_Q_INDENT_VERTICAL = 281,
     LF_Q_INDENT = 282,
     LF_Q_INDENT2 = 283,
     LF_Q_INDENT3 = 284,
     LF_Q = 285,
     SIMPLELINK = 286,
     HTMLTAG = 287,
     SCRIPTSTART = 288,
     SCRIPTEND = 289,
     STYLESTART = 290,
     STYLEEND = 291,
     SVGSTART = 292,
     SVGEND = 293,
     ESCAPEDCHAR = 294,
     TRIPLEBACKTICK = 295,
     BACKTICK = 296,
     VERTICAL = 297,
     TRIPLEASTERISK = 298,
     DOUBLEASTERISK = 299,
     ASTERISK = 300,
     TRIPLEUNDERSCORE = 301,
     DOUBLEUNDERSCORE = 302,
     UNDERSCORE = 303,
     EXCLAMATION_LEFTSQUARE = 304,
     LEFTSQUARE = 305,
     RIGHTSQUARE_LEFTBRACKET = 306,
     RIGHTBRACKET = 307,
     DOUBLETILDE = 308,
     RIGHTSQUARE = 309,
     SEMI_MINUSSERIES_VERTICAL = 310,
     MINUSSERIES_SEMI_VERTICAL = 311,
     SEMI_MINUSSERIES_SEMI_VERTICAL = 312,
     MINUSSERIES_VERTICAL = 313,
     SPACE = 314,
     TEXT = 315,
     ITALICSTART = 316,
     LISTSTART = 317
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define QUOTEBLANKLINE 259
#define LINEBREAK 260
#define LF_H 261
#define LF_UL 262
#define UL 263
#define LF_VERTICAL 264
#define LF_VERTICAL_HEAD_SEP 265
#define LF_INDENT_UL 266
#define LF_INDENT2_UL 267
#define LF_INDENT3_UL 268
#define LF_INDENT4_UL 269
#define LF_INDENT_VERTICAL 270
#define LF_INDENT 271
#define LF_INDENT2 272
#define LF_INDENT3 273
#define LF_INDENT4 274
#define LF_INDENT5 275
#define LF_Q_H 276
#define LF_Q_UL 277
#define LF_Q_VERTICAL 278
#define LF_Q_INDENT_UL 279
#define LF_Q_INDENT2_UL 280
#define LF_Q_INDENT_VERTICAL 281
#define LF_Q_INDENT 282
#define LF_Q_INDENT2 283
#define LF_Q_INDENT3 284
#define LF_Q 285
#define SIMPLELINK 286
#define HTMLTAG 287
#define SCRIPTSTART 288
#define SCRIPTEND 289
#define STYLESTART 290
#define STYLEEND 291
#define SVGSTART 292
#define SVGEND 293
#define ESCAPEDCHAR 294
#define TRIPLEBACKTICK 295
#define BACKTICK 296
#define VERTICAL 297
#define TRIPLEASTERISK 298
#define DOUBLEASTERISK 299
#define ASTERISK 300
#define TRIPLEUNDERSCORE 301
#define DOUBLEUNDERSCORE 302
#define UNDERSCORE 303
#define EXCLAMATION_LEFTSQUARE 304
#define LEFTSQUARE 305
#define RIGHTSQUARE_LEFTBRACKET 306
#define RIGHTBRACKET 307
#define DOUBLETILDE 308
#define RIGHTSQUARE 309
#define SEMI_MINUSSERIES_VERTICAL 310
#define MINUSSERIES_SEMI_VERTICAL 311
#define SEMI_MINUSSERIES_SEMI_VERTICAL 312
#define MINUSSERIES_VERTICAL 313
#define SPACE 314
#define TEXT 315
#define ITALICSTART 316
#define LISTSTART 317




/* Copy the first part of user declarations.  */
#line 4 "markdown-new.y"

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

    "block: SCRIPTSTART code_text SCRIPTEND", "1",

    "block: STYLESTART code_text STYLEEND", "1",

    "block: SVGSTART code_text SVGEND", "1",

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

                    "table_cell: inline_elements VERTICAL", "5",

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

    "quote_block: quote_block QUOTEBLANKLINE", "1",

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 390 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 193 of yacc.c.  */
#line 608 "markdown-new.y.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 633 "markdown-new.y.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   972

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    21,
      25,    27,    29,    31,    33,    35,    38,    39,    42,    44,
      46,    48,    52,    57,    61,    67,    75,    81,    86,    90,
      93,    96,    98,   100,   102,   104,   106,   108,   110,   112,
     114,   116,   118,   120,   122,   124,   126,   128,   130,   132,
     134,   136,   138,   140,   143,   145,   148,   150,   152,   154,
     156,   159,   161,   163,   167,   171,   174,   178,   182,   185,
     189,   193,   196,   198,   200,   202,   204,   206,   208,   210,
     212,   214,   218,   223,   227,   232,   236,   241,   243,   245,
     247,   249,   251,   255,   260,   264,   269,   273,   277,   280,
     283,   285,   288,   294,   302,   308,   313,   317,   320,   322,
     324,   327,   330,   333,   336,   339,   340,   344,   349,   353,
     356,   360,   363,   367,   371,   374,   377,   380,   384,   388,
     391,   395,   399,   402,   406,   410,   413,   416,   420,   424,
     427,   430,   433,   437,   441,   444,   447,   450,   454,   458,
     461,   464,   466,   468,   471,   473,   476,   479,   481,   485,
     487,   490,   492,   494,   497,   499,   501,   503,   505
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    66,    -1,    70,    -1,    99,    -1,     3,
      -1,    32,    -1,    33,    67,    34,    -1,    35,    67,    36,
      -1,    37,    67,    38,    -1,   107,    -1,    69,    -1,   110,
      -1,   100,    -1,     1,    -1,    66,    65,    -1,    -1,    67,
      68,    -1,    68,    -1,    73,    -1,    41,    -1,    82,    67,
       5,    -1,    69,    82,    67,     5,    -1,     6,    75,     5,
      -1,    49,    76,    51,    78,    52,    -1,    49,    76,    51,
      78,    59,    78,    52,    -1,    49,    76,    51,    78,     1,
      -1,    49,    76,    51,     1,    -1,    49,    76,     1,    -1,
      49,     1,    -1,    72,    73,    -1,    73,    -1,    77,    -1,
      43,    -1,    46,    -1,    44,    -1,    47,    -1,    45,    -1,
      48,    -1,    53,    -1,    49,    -1,    50,    -1,    51,    -1,
      52,    -1,    42,    -1,    40,    -1,    76,    -1,    98,    -1,
      71,    -1,    81,    -1,   106,    -1,    95,    -1,    80,    -1,
      75,    74,    -1,    74,    -1,    76,    77,    -1,    77,    -1,
      79,    -1,    39,    -1,    59,    -1,    78,    79,    -1,    79,
      -1,    60,    -1,    41,    72,    41,    -1,    41,    72,     1,
      -1,    41,     1,    -1,    45,    76,    45,    -1,    45,    76,
       1,    -1,    45,     1,    -1,    48,    76,    48,    -1,    48,
      76,     1,    -1,    48,     1,    -1,    16,    -1,    83,    -1,
      17,    -1,    84,    -1,    18,    -1,    85,    -1,    19,    -1,
      86,    -1,    20,    -1,    83,    67,     5,    -1,    87,    83,
      67,     5,    -1,    84,    67,     5,    -1,    88,    84,    67,
       5,    -1,    85,    67,     5,    -1,    89,    85,    67,     5,
      -1,    27,    -1,    91,    -1,    28,    -1,    92,    -1,    29,
      -1,    91,    67,     5,    -1,    93,    91,    67,     5,    -1,
      92,    67,     5,    -1,    94,    92,    67,     5,    -1,    53,
      76,    53,    -1,    53,    76,     1,    -1,    53,     1,    -1,
      75,     5,    -1,    96,    -1,    97,    96,    -1,    50,    76,
      51,    78,    52,    -1,    50,    76,    51,    78,    59,    78,
      52,    -1,    50,    76,    51,    78,     1,    -1,    50,    76,
      51,     1,    -1,    50,    76,     1,    -1,    50,     1,    -1,
      31,    -1,    97,    -1,   100,   102,    -1,   100,   104,    -1,
     100,   103,    -1,   100,   101,    -1,   100,     4,    -1,    -1,
      90,    67,     5,    -1,   101,    90,    67,     5,    -1,    21,
      75,     5,    -1,    30,    96,    -1,   103,    30,    96,    -1,
      22,    96,    -1,   104,    22,    96,    -1,   104,    27,    96,
      -1,   104,    93,    -1,   104,   105,    -1,    24,    96,    -1,
     105,    24,    96,    -1,   105,    28,    96,    -1,   105,    94,
      -1,    44,    76,    44,    -1,    44,    76,     1,    -1,    44,
       1,    -1,    47,    76,    47,    -1,    47,    76,     1,    -1,
      47,     1,    -1,     7,    96,    -1,   107,     7,    96,    -1,
     107,    16,    96,    -1,   107,    87,    -1,   107,   108,    -1,
      11,    96,    -1,   108,    11,    96,    -1,   108,    17,    96,
      -1,   108,    88,    -1,   108,   109,    -1,    12,    96,    -1,
     109,    12,    96,    -1,   109,    18,    96,    -1,   109,    89,
      -1,   114,   111,    -1,   111,    -1,   117,    -1,    75,    42,
      -1,   112,    -1,   113,   112,    -1,   116,   115,    -1,   121,
      -1,     9,   113,     5,    -1,   116,    -1,   117,   116,    -1,
     120,    -1,   118,    -1,   119,   118,    -1,    56,    -1,    55,
      -1,    57,    -1,    58,    -1,    10,   119,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   538,   538,   571,   575,   580,   584,   588,   592,   596,
     600,   604,   609,   613,   618,   624,   628,   637,   641,   649,
     653,   660,   664,   672,   680,   684,   688,   691,   694,   697,
     704,   708,   716,   720,   724,   728,   732,   736,   740,   744,
     748,   752,   756,   760,   764,   768,   776,   780,   784,   787,
     791,   795,   799,   807,   811,   819,   823,   831,   835,   839,
     847,   851,   859,   867,   871,   874,   882,   887,   890,   893,
     898,   901,   908,   912,   919,   923,   930,   934,   941,   945,
     952,   960,   964,   971,   975,   982,   986,   993,   997,  1004,
    1008,  1015,  1023,  1027,  1034,  1038,  1045,  1049,  1052,  1059,
    1067,  1071,  1079,  1083,  1087,  1090,  1093,  1096,  1099,  1108,
    1116,  1120,  1124,  1128,  1132,  1136,  1144,  1148,  1156,  1164,
    1168,  1176,  1180,  1184,  1188,  1192,  1200,  1204,  1208,  1212,
    1220,  1224,  1227,  1230,  1234,  1237,  1244,  1249,  1254,  1258,
    1262,  1270,  1274,  1278,  1282,  1286,  1294,  1298,  1302,  1306,
    1314,  1318,  1325,  1333,  1340,  1344,  1351,  1359,  1365,  1371,
    1375,  1381,  1388,  1392,  1400,  1404,  1408,  1412,  1419
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BLANKLINE", "QUOTEBLANKLINE",
  "LINEBREAK", "LF_H", "LF_UL", "UL", "LF_VERTICAL",
  "LF_VERTICAL_HEAD_SEP", "LF_INDENT_UL", "LF_INDENT2_UL", "LF_INDENT3_UL",
  "LF_INDENT4_UL", "LF_INDENT_VERTICAL", "LF_INDENT", "LF_INDENT2",
  "LF_INDENT3", "LF_INDENT4", "LF_INDENT5", "LF_Q_H", "LF_Q_UL",
  "LF_Q_VERTICAL", "LF_Q_INDENT_UL", "LF_Q_INDENT2_UL",
  "LF_Q_INDENT_VERTICAL", "LF_Q_INDENT", "LF_Q_INDENT2", "LF_Q_INDENT3",
  "LF_Q", "SIMPLELINK", "HTMLTAG", "SCRIPTSTART", "SCRIPTEND",
  "STYLESTART", "STYLEEND", "SVGSTART", "SVGEND", "ESCAPEDCHAR",
  "TRIPLEBACKTICK", "BACKTICK", "VERTICAL", "TRIPLEASTERISK",
  "DOUBLEASTERISK", "ASTERISK", "TRIPLEUNDERSCORE", "DOUBLEUNDERSCORE",
  "UNDERSCORE", "EXCLAMATION_LEFTSQUARE", "LEFTSQUARE",
  "RIGHTSQUARE_LEFTBRACKET", "RIGHTBRACKET", "DOUBLETILDE", "RIGHTSQUARE",
  "SEMI_MINUSSERIES_VERTICAL", "MINUSSERIES_SEMI_VERTICAL",
  "SEMI_MINUSSERIES_SEMI_VERTICAL", "MINUSSERIES_VERTICAL", "SPACE",
  "TEXT", "ITALICSTART", "LISTSTART", "$accept", "markdownfile", "block",
  "blocks", "code_text", "code_text_item", "codeblock", "header", "image",
  "inline_code_text", "inline_code_text_item", "inline_element",
  "inline_elements", "inline_text", "inline_text_item", "uri_text",
  "uri_text_item", "inlinecode", "italic", "lf_indents", "lf_indents2",
  "lf_indents3", "lf_indents4", "lf_indents5", "lf_indents2_codeblock",
  "lf_indents3_codeblock", "lf_indents4_codeblock", "lf_q_indents",
  "lf_q_indents2", "lf_q_indents3", "lf_q_indents2_codeblock",
  "lf_q_indents3_codeblock", "linethrough", "line", "lines", "link",
  "paragraph", "quote_block", "quote_codeblock", "quote_header",
  "quote_paragraph", "quote_unorderlist_0", "quote_unorderlist_1",
  "strong", "unorderlist_0", "unorderlist_1", "unorderlist_2", "table",
  "table_body", "table_cell", "table_cells", "table_head",
  "table_head_separator", "table_row", "table_rows",
  "table_separator_cell", "table_separator_cells", "table_separator_item",
  "table_separator_row", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    79,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   103,
     103,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     106,   106,   106,   106,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   108,   108,   108,   109,   109,   109,   109,
     110,   110,   111,   112,   113,   113,   114,   115,   116,   117,
     117,   118,   119,   119,   120,   120,   120,   120,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     2,     0,     2,     1,     1,
       1,     3,     4,     3,     5,     7,     5,     4,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       2,     1,     1,     3,     3,     2,     3,     3,     2,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     4,     3,     4,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     3,     3,     2,     2,
       1,     2,     5,     7,     5,     4,     3,     2,     1,     1,
       2,     2,     2,     2,     2,     0,     3,     4,     3,     2,
       3,     2,     3,     3,     2,     2,     2,     3,     3,     2,
       3,     3,     2,     3,     3,     2,     2,     3,     3,     2,
       2,     2,     3,     3,     2,     2,     2,     3,     3,     2,
       2,     1,     1,     2,     1,     2,     2,     1,     3,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,     0,     0,     1,    14,     5,     0,     0,     0,    72,
      74,    76,    78,    80,   108,     6,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    62,
      15,    11,     3,    48,    54,     0,    46,    56,    57,    52,
      49,     0,    73,    75,    77,    79,    51,   100,   109,    47,
       4,    13,    50,    10,    12,   151,     0,   159,   152,     0,
     136,     0,   154,     0,    45,    20,    44,    33,    35,    37,
      34,    36,    38,    40,    41,    42,    43,    39,     0,    18,
      19,    32,     0,     0,    65,     0,    31,   132,     0,    68,
       0,   135,     0,    71,     0,    29,     0,   107,     0,    98,
       0,     0,    99,    53,    55,     0,   101,   114,     0,     0,
      87,    89,    91,     0,     0,    88,    90,   113,   110,   112,
     111,     0,     0,     0,     0,   139,   140,   150,   159,     0,
     156,   157,   160,    23,   153,   158,   155,     7,    17,     8,
       9,    64,    63,    30,   131,   130,    67,    66,   134,   133,
      70,    69,    28,     0,   106,     0,    97,    96,     0,    21,
       0,   121,   119,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   137,   141,   138,     0,     0,     0,     0,     0,
       0,   144,   145,   165,   164,   166,   167,   162,     0,   161,
      27,     0,    61,   105,     0,    22,   118,   116,     0,   120,
     122,   126,   123,     0,     0,     0,     0,     0,   129,    81,
       0,   142,   146,   143,     0,     0,     0,     0,     0,   149,
     168,   163,    26,    24,     0,    60,   104,   102,     0,   117,
      92,     0,   127,   128,     0,     0,    82,    83,     0,   147,
     148,     0,     0,     0,     0,    93,    94,     0,    84,    85,
       0,    25,   103,    95,    86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    30,     2,    78,    79,    31,    32,    33,    85,
      80,    34,    35,    36,    81,   191,    38,    39,    40,    41,
      42,    43,    44,    45,   125,   181,   219,   114,   115,   116,
     170,   208,    46,    47,    48,    49,    50,    51,   117,   118,
     119,   120,   171,    52,    53,   126,   182,    54,    55,    62,
      63,    56,   130,    57,    58,   187,   188,   189,   131
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -169
static const yytype_int16 yypact[] =
{
    -169,    15,   264,  -169,  -169,  -169,   823,   823,   823,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,   912,   912,   912,  -169,
     309,   177,   188,   195,   201,   305,   339,   341,  -169,  -169,
    -169,   302,  -169,  -169,  -169,   708,   -22,  -169,  -169,  -169,
    -169,   912,  -169,  -169,  -169,  -169,  -169,  -169,   823,  -169,
    -169,   367,  -169,   356,  -169,  -169,    34,    35,    34,   731,
    -169,   800,  -169,   754,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,   845,  -169,
    -169,  -169,   867,   890,  -169,   286,  -169,  -169,    22,  -169,
      31,  -169,    56,  -169,    82,  -169,    84,  -169,   117,  -169,
      98,   912,  -169,  -169,  -169,   365,  -169,  -169,   823,   823,
    -169,  -169,  -169,   823,   912,  -169,  -169,    59,  -169,    20,
     138,   823,   823,   823,   912,   403,   431,  -169,  -169,   442,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,    18,  -169,    41,  -169,  -169,   387,  -169,
     777,  -169,  -169,   414,   912,   823,   823,   823,   823,   912,
      -7,   100,  -169,  -169,  -169,   436,   912,   823,   823,   823,
     912,   135,    29,  -169,  -169,  -169,  -169,  -169,   156,  -169,
    -169,    79,  -169,  -169,   198,  -169,  -169,  -169,   463,  -169,
    -169,  -169,  -169,   485,   912,   823,   823,   912,    26,  -169,
     512,  -169,  -169,  -169,   534,   912,   823,   823,   912,   126,
    -169,  -169,  -169,  -169,     9,  -169,  -169,  -169,     9,  -169,
    -169,   561,  -169,  -169,   583,   912,  -169,  -169,   610,  -169,
    -169,   632,   912,   -16,    -6,  -169,  -169,   659,  -169,  -169,
     681,  -169,  -169,  -169,  -169
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -169,  -169,   -17,    28,  -169,  -169,  -169,  -169,
     -13,   -26,    -3,   360,     4,  -151,  -135,  -169,  -169,    40,
     -51,  -113,  -168,  -169,  -169,  -169,  -169,   -38,  -112,  -155,
    -169,  -169,  -169,    27,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,    58,    57,
    -169,  -169,  -169,     6,  -169,   -69,  -169,  -169,  -169
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -116
static const yytype_int16 yytable[] =
{
      82,    83,   124,    59,   194,    61,    37,    86,   169,   103,
      37,    37,    37,   180,   218,     3,   207,    19,   192,   190,
     192,   111,   112,   144,   105,    37,    37,    37,    37,    37,
      37,    37,   146,   103,    60,   103,   251,    28,    29,    37,
     104,   216,   193,     8,    29,   129,   252,   217,    12,    13,
     165,   242,    37,   235,    29,   112,   225,   148,   204,   225,
      61,    19,   128,    37,   132,    37,   145,    37,   215,    29,
      19,   101,   143,   243,   176,   106,   147,   244,    29,   164,
     222,    28,    29,   150,   158,   152,   110,   111,   112,   192,
      28,    29,   104,   192,   104,    19,   104,   163,   104,   156,
     104,    29,   104,   149,   104,   160,   138,   175,   225,   225,
     138,   138,    37,    37,   127,    28,    29,    37,   154,   221,
     136,    19,     0,    19,   205,    37,    37,    37,   206,   112,
     151,   223,     0,   138,   103,   153,   161,    19,   224,    29,
     162,    28,    29,    28,    29,    12,    13,   198,   172,   173,
     174,   157,   203,    11,    12,    13,    19,    28,    29,   210,
     166,   220,   167,   214,    37,   168,   111,   112,   155,    37,
      37,    37,    37,     0,     0,     0,    28,    29,    87,     0,
       0,    37,    37,    37,     0,     0,   138,   231,     0,    89,
     234,   138,   199,   200,   201,   202,    91,     0,   238,   226,
       0,   241,    93,   138,   211,   212,   213,     0,     0,    37,
      37,   183,   184,   185,   186,     0,    19,     0,   247,     0,
      37,    37,     0,     0,     0,   250,   138,    19,     0,     0,
       0,   138,   232,   233,    19,     0,    28,    29,   138,     0,
      19,     0,   138,   239,   240,     0,     0,    28,    29,     0,
     227,     0,     0,     0,    28,    29,     0,   228,    29,   138,
      28,    29,   138,     0,    -2,     4,   138,     5,  -115,   138,
       6,     7,     0,     8,     0,   138,     0,     0,   138,     0,
       9,    10,    11,    12,    13,  -115,  -115,   141,     0,     0,
       0,  -115,  -115,  -115,  -115,    14,    15,    16,     0,    17,
       0,    18,     0,    19,     0,    20,    95,     0,    21,    22,
      84,    23,    24,    25,    26,     0,     0,    27,     9,    10,
      11,    12,    13,    28,    29,    19,    64,   142,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      97,     0,    99,     0,    19,    28,    29,     0,    19,    64,
       0,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   121,    28,    29,     0,   122,    28,    29,
     159,   107,   123,    10,    11,    12,    13,     0,    19,     0,
      19,    88,    90,    92,    94,    96,    98,   100,   108,   109,
       0,     0,   195,     0,   110,   111,   112,   113,    28,    29,
      28,    29,     0,     0,    19,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   197,
      10,    11,    12,    13,    28,    29,    19,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,   209,   177,   178,     0,     0,    28,    29,   179,    11,
      12,    13,     0,    19,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   229,     0,
       0,     0,     0,    28,    29,    19,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
     230,     0,     0,     0,     0,    28,    29,   183,   184,   185,
     186,     0,    19,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   236,     0,     0,
       0,     0,    28,    29,    19,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   237,
       0,     0,     0,     0,    28,    29,     0,     0,     0,     0,
       0,    19,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   245,     0,     0,     0,
       0,    28,    29,    19,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   246,     0,
       0,     0,     0,    28,    29,     0,     0,     0,     0,     0,
      19,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   248,     0,     0,     0,     0,
      28,    29,    19,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   249,     0,     0,
       0,     0,    28,    29,     0,     0,     0,     0,     0,    19,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   253,     0,     0,     0,     0,    28,
      29,    19,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   254,     0,     0,     0,
       0,    28,    29,     0,     0,     0,     0,     0,    19,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   102,     0,     0,     0,     0,    28,    29,
      19,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,   133,     0,     0,    14,
      28,    29,     0,     0,     0,     0,     0,    19,     0,    20,
       0,     0,    21,    22,     0,    23,    24,    25,    26,   135,
       0,    27,    14,     0,     0,     0,     0,    28,    29,     0,
      19,     0,    20,     0,     0,    21,    22,     0,    23,    24,
      25,    26,   196,     0,    27,    14,     0,     0,     0,     0,
      28,    29,     0,    19,     0,    20,     0,     0,    21,    22,
       0,    23,    24,    25,    26,     0,     0,    27,    14,     0,
       0,     0,     0,    28,    29,     0,    19,     0,    20,     0,
       0,    21,    22,     0,    23,    24,    25,    26,     0,     0,
      27,    14,     0,     0,     0,     0,    28,    29,     0,    19,
       0,    20,   134,     0,    21,    22,     0,    23,    24,    25,
      26,     0,     0,    27,    14,     0,     0,     0,     0,    28,
      29,     0,    19,     0,    20,     0,     0,    21,    22,     0,
      23,    24,    25,    26,     0,     0,    27,     0,     0,   137,
       0,     0,    28,    29,    19,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,   139,    28,    29,    19,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,    28,    29,   140,    19,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    28,
      29,    19,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,    28,    29
};

static const yytype_int16 yycheck[] =
{
      17,    18,    53,     6,   155,     8,     2,    20,   120,    35,
       6,     7,     8,   126,   182,     0,   171,    39,   153,     1,
     155,    28,    29,     1,    41,    21,    22,    23,    24,    25,
      26,    27,     1,    59,     7,    61,    52,    59,    60,    35,
      36,    12,     1,     9,    60,    10,    52,    18,    19,    20,
      30,   219,    48,   208,    60,    29,   191,     1,   170,   194,
      63,    39,    56,    59,    58,    61,    44,    63,   181,    60,
      39,    31,    85,   224,   125,    48,    45,   228,    60,   117,
       1,    59,    60,     1,   101,     1,    27,    28,    29,   224,
      59,    60,    88,   228,    90,    39,    92,   114,    94,     1,
      96,    60,    98,    47,   100,   108,    78,   124,   243,   244,
      82,    83,   108,   109,    56,    59,    60,   113,     1,   188,
      63,    39,    -1,    39,    24,   121,   122,   123,    28,    29,
      48,    52,    -1,   105,   160,    51,   109,    39,    59,    60,
     113,    59,    60,    59,    60,    19,    20,   164,   121,   122,
     123,    53,   169,    18,    19,    20,    39,    59,    60,   176,
      22,     5,    24,   180,   160,    27,    28,    29,    51,   165,
     166,   167,   168,    -1,    -1,    -1,    59,    60,     1,    -1,
      -1,   177,   178,   179,    -1,    -1,   158,   204,    -1,     1,
     207,   163,   165,   166,   167,   168,     1,    -1,   215,     1,
      -1,   218,     1,   175,   177,   178,   179,    -1,    -1,   205,
     206,    55,    56,    57,    58,    -1,    39,    -1,   235,    -1,
     216,   217,    -1,    -1,    -1,   242,   198,    39,    -1,    -1,
      -1,   203,   205,   206,    39,    -1,    59,    60,   210,    -1,
      39,    -1,   214,   216,   217,    -1,    -1,    59,    60,    -1,
      52,    -1,    -1,    -1,    59,    60,    -1,    59,    60,   231,
      59,    60,   234,    -1,     0,     1,   238,     3,     4,   241,
       6,     7,    -1,     9,    -1,   247,    -1,    -1,   250,    -1,
      16,    17,    18,    19,    20,    21,    22,     1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      -1,    37,    -1,    39,    -1,    41,     1,    -1,    44,    45,
       1,    47,    48,    49,    50,    -1,    -1,    53,    16,    17,
      18,    19,    20,    59,    60,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       1,    -1,     1,    -1,    39,    59,    60,    -1,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     7,    59,    60,    -1,    11,    59,    60,
       5,     4,    16,    17,    18,    19,    20,    -1,    39,    -1,
      39,    21,    22,    23,    24,    25,    26,    27,    21,    22,
      -1,    -1,     5,    -1,    27,    28,    29,    30,    59,    60,
      59,    60,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     5,
      17,    18,    19,    20,    59,    60,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     5,    11,    12,    -1,    -1,    59,    60,    17,    18,
      19,    20,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     5,    -1,
      -1,    -1,    -1,    59,    60,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       5,    -1,    -1,    -1,    -1,    59,    60,    55,    56,    57,
      58,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     5,    -1,    -1,
      -1,    -1,    59,    60,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     5,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     5,    -1,    -1,    -1,
      -1,    59,    60,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     5,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,
      59,    60,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     5,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     5,    -1,    -1,    -1,    -1,    59,
      60,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     5,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     5,    -1,    -1,    -1,    -1,    59,    60,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,     5,    -1,    -1,    31,
      59,    60,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      -1,    -1,    44,    45,    -1,    47,    48,    49,    50,     5,
      -1,    53,    31,    -1,    -1,    -1,    -1,    59,    60,    -1,
      39,    -1,    41,    -1,    -1,    44,    45,    -1,    47,    48,
      49,    50,     5,    -1,    53,    31,    -1,    -1,    -1,    -1,
      59,    60,    -1,    39,    -1,    41,    -1,    -1,    44,    45,
      -1,    47,    48,    49,    50,    -1,    -1,    53,    31,    -1,
      -1,    -1,    -1,    59,    60,    -1,    39,    -1,    41,    -1,
      -1,    44,    45,    -1,    47,    48,    49,    50,    -1,    -1,
      53,    31,    -1,    -1,    -1,    -1,    59,    60,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    -1,    47,    48,    49,
      50,    -1,    -1,    53,    31,    -1,    -1,    -1,    -1,    59,
      60,    -1,    39,    -1,    41,    -1,    -1,    44,    45,    -1,
      47,    48,    49,    50,    -1,    -1,    53,    -1,    -1,    34,
      -1,    -1,    59,    60,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    36,    59,    60,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    66,     0,     1,     3,     6,     7,     9,    16,
      17,    18,    19,    20,    31,    32,    33,    35,    37,    39,
      41,    44,    45,    47,    48,    49,    50,    53,    59,    60,
      65,    69,    70,    71,    74,    75,    76,    77,    79,    80,
      81,    82,    83,    84,    85,    86,    95,    96,    97,    98,
      99,   100,   106,   107,   110,   111,   114,   116,   117,    75,
      96,    75,   112,   113,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    67,    68,
      73,    77,    67,    67,     1,    72,    73,     1,    76,     1,
      76,     1,    76,     1,    76,     1,    76,     1,    76,     1,
      76,    82,     5,    74,    77,    67,    96,     4,    21,    22,
      27,    28,    29,    30,    90,    91,    92,   101,   102,   103,
     104,     7,    11,    16,    83,    87,   108,   111,   116,    10,
     115,   121,   116,     5,    42,     5,   112,    34,    68,    36,
      38,     1,    41,    73,     1,    44,     1,    45,     1,    47,
       1,    48,     1,    51,     1,    51,     1,    53,    67,     5,
      75,    96,    96,    67,    90,    30,    22,    24,    27,    91,
      93,   105,    96,    96,    96,    67,    83,    11,    12,    17,
      84,    88,   109,    55,    56,    57,    58,   118,   119,   120,
       1,    78,    79,     1,    78,     5,     5,     5,    67,    96,
      96,    96,    96,    67,    91,    24,    28,    92,    94,     5,
      67,    96,    96,    96,    67,    84,    12,    18,    85,    89,
       5,   118,     1,    52,    59,    79,     1,    52,    59,     5,
       5,    67,    96,    96,    67,    92,     5,     5,    67,    96,
      96,    67,    85,    78,    78,     5,     5,    67,     5,     5,
      67,    52,    52,     5,     5
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 538 "markdown-new.y"
    { 
            /**
             * 1. _root_node == $1
             */

            show_rule("markdownfile: blocks");

            if( !_ISDEBUGPARSER ){
                fprintf(stdout, "==================================\n");
                fprintf(stdout, "%s", (yyvsp[(1) - (1)].text));
                fprintf(stdout, "==================================\n");
            }

            /**
            parse_doc();
            is_doc_parsed = 1;
            */
        ;}
    break;

  case 3:
#line 571 "markdown-new.y"
    {
            show_rule("block: header");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 4:
#line 575 "markdown-new.y"
    {
            show_rule("block: paragraph");
            tag_info = markdown_get_tag_info((yyvsp[(1) - (1)].text));
            (yyval.text) = str_format("<p%s>%s</p>", tag_info->attr, tag_info->content);
        ;}
    break;

  case 5:
#line 580 "markdown-new.y"
    {
            show_rule("block: BLANKLINE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 6:
#line 584 "markdown-new.y"
    {
            show_rule("block: HTMLTAG");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 7:
#line 588 "markdown-new.y"
    {
            show_rule("block: SCRIPTSTART code_text SCRIPTEND");
            (yyval.text) = str_format("%s%s%s", (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 8:
#line 592 "markdown-new.y"
    {
            show_rule("block: STYLESTART code_text STYLEEND");
            (yyval.text) = str_format("%s%s%s", (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 9:
#line 596 "markdown-new.y"
    {
            show_rule("block: SVGSTART code_text SVGEND");
            (yyval.text) = str_format("%s%s%s", (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 10:
#line 600 "markdown-new.y"
    {
            show_rule("block: unorderlist_0");
            (yyval.text) = str_format("<ul>%s</ul>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 11:
#line 604 "markdown-new.y"
    {
            show_rule("block: codeblock");
            tag_info = markdown_get_tag_info((yyvsp[(1) - (1)].text));
            (yyval.text) = str_format("<pre%s><code>%s</code></pre>", tag_info->attr, tag_info->content);
        ;}
    break;

  case 12:
#line 609 "markdown-new.y"
    {
            show_rule("block: table");
            (yyval.text) = str_format("<table>%s</table>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 13:
#line 613 "markdown-new.y"
    {
            show_rule("block: quote_block");
            (yyval.text) = str_format("<blockquote>%s</blockquote>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 14:
#line 618 "markdown-new.y"
    {
            show_rule("block: error");
        ;}
    break;

  case 15:
#line 624 "markdown-new.y"
    {
            show_rule("blocks: blocks block");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 16:
#line 628 "markdown-new.y"
    {
            show_rule("blocks: NULL");
            (yyval.text) = "";
        ;}
    break;

  case 17:
#line 637 "markdown-new.y"
    {
            show_rule("code_text: code_text code_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 18:
#line 641 "markdown-new.y"
    {
            show_rule("code_text: code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 19:
#line 649 "markdown-new.y"
    {
            show_rule("code_text_item: inline_code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 20:
#line 653 "markdown-new.y"
    {
            show_rule("code_text_item: BACKTICK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 21:
#line 660 "markdown-new.y"
    {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 1), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 22:
#line 664 "markdown-new.y"
    {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 1), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 23:
#line 672 "markdown-new.y"
    {              
            show_rule("header: LF_H inline_elements LINEBREAK");
            (yyval.text) = str_format("<h%d>%s</h%d>%s", strlen((yyvsp[(1) - (3)].text)), (yyvsp[(2) - (3)].text), strlen((yyvsp[(1) - (3)].text)), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 24:
#line 680 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", (yyvsp[(4) - (5)].text), (yyvsp[(2) - (5)].text), "");
        ;}
    break;

  case 25:
#line 684 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", (yyvsp[(4) - (7)].text), (yyvsp[(2) - (7)].text), (yyvsp[(6) - (7)].text));
        ;}
    break;

  case 26:
#line 688 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        ;}
    break;

  case 27:
#line 691 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        ;}
    break;

  case 28:
#line 694 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text error");
        ;}
    break;

  case 29:
#line 697 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE error");
        ;}
    break;

  case 30:
#line 704 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 31:
#line 708 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 32:
#line 716 "markdown-new.y"
    {
            show_rule("inline_code_text_item: inline_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 33:
#line 720 "markdown-new.y"
    {
            show_rule("inline_code_text_item: TRIPLEASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 34:
#line 724 "markdown-new.y"
    {
            show_rule("inline_code_text_item: TRIPLEUNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 35:
#line 728 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 36:
#line 732 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEUNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 37:
#line 736 "markdown-new.y"
    {
            show_rule("inline_code_text_item: ASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 38:
#line 740 "markdown-new.y"
    {
            show_rule("inline_code_text_item: UNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 39:
#line 744 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLETILDE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 40:
#line 748 "markdown-new.y"
    {
            show_rule("inline_code_text_item: EXCLAMATION_LEFTSQUARE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 41:
#line 752 "markdown-new.y"
    {
            show_rule("inline_code_text_item: LEFTSQUARE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 42:
#line 756 "markdown-new.y"
    {
            show_rule("inline_code_text_item: RIGHTSQUARE_LEFTBRACKET");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 43:
#line 760 "markdown-new.y"
    {
            show_rule("inline_code_text_item: RIGHTBRACKET");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 44:
#line 764 "markdown-new.y"
    {
            show_rule("inline_code_text_item: VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 45:
#line 768 "markdown-new.y"
    {
            show_rule("inline_code_text_item: TRIPLEBACKTICK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 46:
#line 776 "markdown-new.y"
    {
            show_rule("inline_element: inline_text");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 47:
#line 780 "markdown-new.y"
    {
            show_rule("inline_element: link");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 48:
#line 784 "markdown-new.y"
    {
            show_rule("inline_element: image");
        ;}
    break;

  case 49:
#line 787 "markdown-new.y"
    {
            show_rule("inline_element: italic");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 50:
#line 791 "markdown-new.y"
    {
            show_rule("inline_element: strong");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 51:
#line 795 "markdown-new.y"
    {
            show_rule("inline_element: linethrough");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 52:
#line 799 "markdown-new.y"
    {
            show_rule("inline_element: inlinecode");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 53:
#line 807 "markdown-new.y"
    {
            show_rule("inline_elements: inline_elements inline_element");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 54:
#line 811 "markdown-new.y"
    {
            show_rule("inline_elements: inline_element");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 55:
#line 819 "markdown-new.y"
    {
            show_rule("inline_text: inline_text inline_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 56:
#line 823 "markdown-new.y"
    {
            show_rule("inline_text: inline_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 57:
#line 831 "markdown-new.y"
    {
            show_rule("inline_text_item: uri_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 58:
#line 835 "markdown-new.y"
    {
            show_rule("inline_text_item: ESCAPEDCHAR");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 59:
#line 839 "markdown-new.y"
    {
            show_rule("inline_text_item: SPACE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 60:
#line 847 "markdown-new.y"
    {
            show_rule("uri_text: uri_text uri_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 61:
#line 851 "markdown-new.y"
    {
            show_rule("uri_text: uri_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 62:
#line 859 "markdown-new.y"
    {
            show_rule("uri_text_item: TEXT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 63:
#line 867 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
            (yyval.text) = str_format("<code>%s</code>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 64:
#line 871 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        ;}
    break;

  case 65:
#line 874 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK error");
        ;}
    break;

  case 66:
#line 882 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text ASTERISK");
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            (yyval.text) = str_format("<i%s>%s</i>", tag_info->attr, tag_info->content);
        ;}
    break;

  case 67:
#line 887 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text error");
        ;}
    break;

  case 68:
#line 890 "markdown-new.y"
    {
            show_rule("italic: ASTERISK error");
        ;}
    break;

  case 69:
#line 893 "markdown-new.y"
    {
            show_rule("italic: UNDERSCORE inline_text UNDERSCORE");
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));
            (yyval.text) = str_format("<i%s>%s</i>", tag_info->attr, tag_info->content);
        ;}
    break;

  case 70:
#line 898 "markdown-new.y"
    {
            show_rule("italic: UNDERSCORE inline_text error");
        ;}
    break;

  case 71:
#line 901 "markdown-new.y"
    {
            show_rule("italic: UNDERSCORE error");
        ;}
    break;

  case 72:
#line 908 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 73:
#line 912 "markdown-new.y"
    {
            show_rule("lf_indents: lf_indents2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 74:
#line 919 "markdown-new.y"
    {
            show_rule("lf_indents2: LF_INDENT2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 75:
#line 923 "markdown-new.y"
    {
            show_rule("lf_indents2: lf_indents3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 76:
#line 930 "markdown-new.y"
    {
            show_rule("lf_indents3: LF_INDENT3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 77:
#line 934 "markdown-new.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
            show_rule("lf_indents3: lf_indents4");
        ;}
    break;

  case 78:
#line 941 "markdown-new.y"
    {
            show_rule("lf_indents4: LF_INDENT4");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 79:
#line 945 "markdown-new.y"
    {
            show_rule("lf_indents4: lf_indents5");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 80:
#line 952 "markdown-new.y"
    {
            show_rule("lf_indents5: LF_INDENT5");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 81:
#line 960 "markdown-new.y"
    {
            show_rule("lf_indents2_codeblock: lf_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 2), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 82:
#line 964 "markdown-new.y"
    {
            show_rule("lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 2), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 83:
#line 971 "markdown-new.y"
    {
            show_rule("lf_indents3_codeblock: lf_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 3), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 84:
#line 975 "markdown-new.y"
    {
            show_rule("lf_indents3_codeblock: lf_indents3_codeblock lf_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 3), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 85:
#line 982 "markdown-new.y"
    {
            show_rule("lf_indents4_codeblock: lf_indents4 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 4), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 86:
#line 986 "markdown-new.y"
    {
            show_rule("lf_indents4_codeblock: lf_indents4_codeblock lf_indents4 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 4), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 87:
#line 993 "markdown-new.y"
    {
            show_rule("lf_q_indents: LF_Q_INDENT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 88:
#line 997 "markdown-new.y"
    {
            show_rule("lf_q_indents: lf_q_indents2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 89:
#line 1004 "markdown-new.y"
    {
            show_rule("lf_q_indents2: LF_Q_INDENT2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 90:
#line 1008 "markdown-new.y"
    {
            show_rule("lf_q_indents2: lf_q_indents3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 91:
#line 1015 "markdown-new.y"
    {
            show_rule("lf_q_indents3: LF_Q_INDENT3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 92:
#line 1023 "markdown-new.y"
    {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left((yyvsp[(1) - (3)].text), "> ", ""), 2), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 93:
#line 1027 "markdown-new.y"
    {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents(str_replace_left((yyvsp[(2) - (4)].text), "> ", ""), 2), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 94:
#line 1034 "markdown-new.y"
    {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left((yyvsp[(1) - (3)].text), "> ", ""), 3), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 95:
#line 1038 "markdown-new.y"
    {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents(str_replace_left((yyvsp[(2) - (4)].text), "> ", ""), 3), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 96:
#line 1045 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
            (yyval.text) = str_format("<del>%s</del>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 97:
#line 1049 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        ;}
    break;

  case 98:
#line 1052 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE error");
        ;}
    break;

  case 99:
#line 1059 "markdown-new.y"
    {
            show_rule("line: inline_elements LINEBREAK");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 100:
#line 1067 "markdown-new.y"
    {
            show_rule("lines: line");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 101:
#line 1071 "markdown-new.y"
    {
            show_rule("lines: lines line");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 102:
#line 1079 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<a href=\"%s\">%s</a>", (yyvsp[(4) - (5)].text), (yyvsp[(2) - (5)].text));
        ;}
    break;

  case 103:
#line 1083 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<a href=\"%s\" title=\"%s\">%s</a>", (yyvsp[(4) - (7)].text), (yyvsp[(6) - (7)].text), (yyvsp[(2) - (7)].text));
        ;}
    break;

  case 104:
#line 1087 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        ;}
    break;

  case 105:
#line 1090 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        ;}
    break;

  case 106:
#line 1093 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text error");
        ;}
    break;

  case 107:
#line 1096 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE error");
        ;}
    break;

  case 108:
#line 1099 "markdown-new.y"
    {
            show_rule("link: SIMPLELINK");
            tag_info = markdown_get_tag_info((yyvsp[(1) - (1)].text));
            (yyval.text) = str_format("<a href=\"%s\">%s</a>", tag_info->content, tag_info->content);
        ;}
    break;

  case 109:
#line 1108 "markdown-new.y"
    {
            show_rule("paragraph: lines");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 110:
#line 1116 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_header");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 111:
#line 1120 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_unorderlist_0");
            (yyval.text) = str_format("%s<ul>%s</ul>", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 112:
#line 1124 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_paragraph");
            (yyval.text) = str_format("%s<p>%s</p>", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 113:
#line 1128 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre>", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 114:
#line 1132 "markdown-new.y"
    {
            show_rule("quote_block: quote_block QUOTEBLANKLINE");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), str_replace_left((yyvsp[(2) - (2)].text), ">", ""));
        ;}
    break;

  case 115:
#line 1136 "markdown-new.y"
    {
            show_rule("quote_block: NULL");
            (yyval.text) = "";
        ;}
    break;

  case 116:
#line 1144 "markdown-new.y"
    {
            show_rule("quote_codeblock: lf_q_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left((yyvsp[(1) - (3)].text), "> ", ""), 1), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 117:
#line 1148 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock lf_q_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents(str_replace_left((yyvsp[(2) - (4)].text), "> ", ""), 1), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 118:
#line 1156 "markdown-new.y"
    {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
            (yyval.text) = str_format("<h%d>%s</h%d>%s", strlen(str_replace_left((yyvsp[(1) - (3)].text), "> ", "")), (yyvsp[(2) - (3)].text), strlen(str_replace_left((yyvsp[(1) - (3)].text), "> ", "")), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 119:
#line 1164 "markdown-new.y"
    {
            show_rule("quote_paragraph: LF_Q line");
            (yyval.text) = (yyvsp[(2) - (2)].text);
        ;}
    break;

  case 120:
#line 1168 "markdown-new.y"
    {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
            (yyval.text) = str_concat((yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 121:
#line 1176 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 122:
#line 1180 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 123:
#line 1184 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text), "</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 124:
#line 1188 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 lf_q_indents2_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 125:
#line 1192 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
            (yyval.text) = str_format("%s<ul>%s</ul></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 126:
#line 1200 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 127:
#line 1204 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 128:
#line 1208 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text), "</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 129:
#line 1212 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 lf_q_indents3_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 130:
#line 1220 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
            (yyval.text) = str_format("<strong>%s</strong>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 131:
#line 1224 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        ;}
    break;

  case 132:
#line 1227 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK error");
        ;}
    break;

  case 133:
#line 1230 "markdown-new.y"
    {
            show_rule("strong: DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE");
            (yyval.text) = str_format("<strong>%s</strong>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 134:
#line 1234 "markdown-new.y"
    {
            show_rule("strong: DOUBLEUNDERSCORE inline_text error");
        ;}
    break;

  case 135:
#line 1237 "markdown-new.y"
    {
            show_rule("strong: DOUBLEUNDERSCORE error");
        ;}
    break;

  case 136:
#line 1244 "markdown-new.y"
    {
            show_rule("unorderlist_0: LF_UL line");
            tag_info = markdown_get_tag_info((yyvsp[(2) - (2)].text));
            (yyval.text) = str_format("<li%s>%s</li>", tag_info->attr, tag_info->content);
        ;}
    break;

  case 137:
#line 1249 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            tag_info = markdown_get_tag_info((yyvsp[(3) - (3)].text));
            (yyval.text) = str_format("%s<li%s>%s</li>", (yyvsp[(1) - (3)].text), tag_info->attr, tag_info->content);
        ;}
    break;

  case 138:
#line 1254 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 139:
#line 1258 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 lf_indents2_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 140:
#line 1262 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
            (yyval.text) = str_format("%s<ul>%s</ul></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 141:
#line 1270 "markdown-new.y"
    {
            show_rule("unorderlist_1: LF_INDENT_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 142:
#line 1274 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 143:
#line 1278 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 144:
#line 1282 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 lf_indents3_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text), "</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 145:
#line 1286 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
            (yyval.text) = str_format("%s<ul>%s</ul></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 146:
#line 1294 "markdown-new.y"
    {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 147:
#line 1298 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 148:
#line 1302 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 149:
#line 1306 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 lf_indents4_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text), "</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 150:
#line 1314 "markdown-new.y"
    {
            show_rule("table: table_head table_body");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 151:
#line 1318 "markdown-new.y"
    {
            show_rule("table: table_body");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 152:
#line 1325 "markdown-new.y"
    {
            show_rule("table_body: table_rows");
            (yyval.text) = str_format("<tbody>%s</tbody>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 153:
#line 1333 "markdown-new.y"
    {
            show_rule("table_cell: inline_elements VERTICAL");
            (yyval.text) = str_format("<td>%s</td>", (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 154:
#line 1340 "markdown-new.y"
    {
            show_rule("table_cells: table_cell");
            (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 155:
#line 1344 "markdown-new.y"
    {
            show_rule("table_cells: table_cells table_cell");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 156:
#line 1351 "markdown-new.y"
    {
            show_rule("table_head: table_row table_head_separator");
            (yyval.text) = str_format("<thead>%s</thead>", (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 157:
#line 1359 "markdown-new.y"
    {
            show_rule("table_head_separator: table_separator_row");
            (yyval.text) = "";
        ;}
    break;

  case 158:
#line 1365 "markdown-new.y"
    {
            show_rule("table_row: LF_VERTICAL table_cells LINEBREAK");
            (yyval.text) = str_format("<tr>%s</tr>", (yyvsp[(2) - (3)].text));
    ;}
    break;

  case 159:
#line 1371 "markdown-new.y"
    {
            show_rule("table_rows: table_row");
            (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text));
    ;}
    break;

  case 160:
#line 1375 "markdown-new.y"
    {
            show_rule("table_rows: table_rows table_row");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
    ;}
    break;

  case 161:
#line 1381 "markdown-new.y"
    {
            show_rule("table_separator_cell: table_separator_item");
            (yyval.text) = str_format("<td>%s</td>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 162:
#line 1388 "markdown-new.y"
    {
            show_rule("table_separator_cells: table_separator_cell");
            (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 163:
#line 1392 "markdown-new.y"
    {
            show_rule("table_separator_cells: table_separator_cells table_separator_cell");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 164:
#line 1400 "markdown-new.y"
    {
            show_rule("table_separator_item: MINUSSERIES_SEMI_VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 165:
#line 1404 "markdown-new.y"
    {
            show_rule("table_separator_item: SEMI_MINUSSERIES_VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 166:
#line 1408 "markdown-new.y"
    {
            show_rule("table_separator_item: SEMI_MINUSSERIES_SEMI_VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 167:
#line 1412 "markdown-new.y"
    {
            show_rule("table_separator_item: MINUSSERIES_VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 168:
#line 1419 "markdown-new.y"
    {
            show_rule("table_separator_row: LF_VERTICAL_HEAD_SEP table_separator_cells LINEBREAK");
            (yyval.text) = str_format("<tr>%s</tr>", (yyvsp[(2) - (3)].text));
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3605 "markdown-new.y.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1429 "markdown-new.y"


void markdown( void ){
    /* export yyparse through markdown */
    yyparse();
}



