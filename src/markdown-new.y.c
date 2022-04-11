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
     LINEBREAK = 259,
     LF_H = 260,
     LF_UL = 261,
     UL = 262,
     LF_VERTICAL = 263,
     LF_INDENT_UL = 264,
     LF_INDENT2_UL = 265,
     LF_INDENT3_UL = 266,
     LF_INDENT4_UL = 267,
     LF_INDENT_VERTICAL = 268,
     LF_INDENT = 269,
     LF_INDENT2 = 270,
     LF_INDENT3 = 271,
     LF_INDENT4 = 272,
     LF_INDENT5 = 273,
     LF_Q_H = 274,
     LF_Q_UL = 275,
     LF_Q_VERTICAL = 276,
     LF_Q_INDENT_UL = 277,
     LF_Q_INDENT2_UL = 278,
     LF_Q_INDENT_VERTICAL = 279,
     LF_Q_INDENT = 280,
     LF_Q_INDENT2 = 281,
     LF_Q_INDENT3 = 282,
     LF_Q = 283,
     ESCAPEDCHAR = 284,
     LESSTHAN = 285,
     LARGERTHAN = 286,
     TRIPLEBACKTICK = 287,
     BACKTICK = 288,
     VERTICAL = 289,
     TRIPLEASTERISK = 290,
     DOUBLEASTERISK = 291,
     ASTERISK = 292,
     TRIPLEUNDERSCORE = 293,
     DOUBLEUNDERSCORE = 294,
     UNDERSCORE = 295,
     EXCLAMATION_LEFTSQUARE = 296,
     LEFTSQUARE = 297,
     RIGHTSQUARE_LEFTBRACKET = 298,
     RIGHTBRACKET = 299,
     DOUBLETILDE = 300,
     RIGHTSQUARE = 301,
     MINUSSERIES_LEFT = 302,
     MINUSSERIES_RIGHT = 303,
     MINUSSERIES_CENTER = 304,
     SPACE = 305,
     TEXT = 306,
     ITALICSTART = 307,
     LISTSTART = 308
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define LINEBREAK 259
#define LF_H 260
#define LF_UL 261
#define UL 262
#define LF_VERTICAL 263
#define LF_INDENT_UL 264
#define LF_INDENT2_UL 265
#define LF_INDENT3_UL 266
#define LF_INDENT4_UL 267
#define LF_INDENT_VERTICAL 268
#define LF_INDENT 269
#define LF_INDENT2 270
#define LF_INDENT3 271
#define LF_INDENT4 272
#define LF_INDENT5 273
#define LF_Q_H 274
#define LF_Q_UL 275
#define LF_Q_VERTICAL 276
#define LF_Q_INDENT_UL 277
#define LF_Q_INDENT2_UL 278
#define LF_Q_INDENT_VERTICAL 279
#define LF_Q_INDENT 280
#define LF_Q_INDENT2 281
#define LF_Q_INDENT3 282
#define LF_Q 283
#define ESCAPEDCHAR 284
#define LESSTHAN 285
#define LARGERTHAN 286
#define TRIPLEBACKTICK 287
#define BACKTICK 288
#define VERTICAL 289
#define TRIPLEASTERISK 290
#define DOUBLEASTERISK 291
#define ASTERISK 292
#define TRIPLEUNDERSCORE 293
#define DOUBLEUNDERSCORE 294
#define UNDERSCORE 295
#define EXCLAMATION_LEFTSQUARE 296
#define LEFTSQUARE 297
#define RIGHTSQUARE_LEFTBRACKET 298
#define RIGHTBRACKET 299
#define DOUBLETILDE 300
#define RIGHTSQUARE 301
#define MINUSSERIES_LEFT 302
#define MINUSSERIES_RIGHT 303
#define MINUSSERIES_CENTER 304
#define SPACE 305
#define TEXT 306
#define ITALICSTART 307
#define LISTSTART 308




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

        "header: LF_H inline_elements LINEBREAK", "2",

    "block: paragraph", "1",

        "paragraph: lines", "2",

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

        "table: table_head table_head_separator table_body", "2",
        "table: table_body", "2",

            "table_head: LF_VERTICAL table_row LINEBREAK", "3",

            "table_head_separator: table_separator_row LINEBREAK", "3",

            "table_body: table_rows", "3",

            "table_rows: table_row LINEBREAK", "3",
            "table_rows: table_rows table_row LINEBREAK", "3",

                "table_separator_row: LF_VERTICAL table_separator_cell", "4",
                "table_separator_row: table_separator_row table_separator_cell", "4",

                "table_row: LF_VERTICAL table_cell", "4",
                "table_row: table_row table_ceil", "4",

                    "table_separator_cell: table_separator_item VERTICAL", "5",
                    "table_cell: line VERTICAL", "5",

                        "table_separator_item: MINUSSERIES_LEFT", "6",
                        "table_separator_item: MINUSSERIES_RIGHT", "6",
                        "table_separator_item: MINUSSERIES_CENTER", "6",

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
                "line: BLANKLINE", "4",

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
                                /* simple link */
                                "inline_code_text_item: LESSTHAN", "8",
                                "inline_code_text_item: LARGERTHAN", "8",
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
#line 373 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 193 of yacc.c.  */
#line 573 "markdown-new.y.c"
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
#line 598 "markdown-new.y.c"

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
#define YYLAST   979

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNRULES -- Number of states.  */
#define YYNSTATES  249

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    22,    23,    26,    28,    30,    32,    36,    41,    45,
      51,    59,    65,    70,    74,    77,    80,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   131,   133,   136,   138,   140,   142,   144,   147,   149,
     151,   155,   159,   162,   166,   170,   173,   177,   181,   184,
     186,   188,   190,   192,   194,   196,   198,   200,   202,   206,
     211,   215,   220,   224,   229,   231,   233,   235,   237,   239,
     243,   248,   252,   257,   261,   265,   268,   271,   273,   275,
     277,   280,   286,   294,   300,   305,   309,   312,   314,   317,
     320,   323,   326,   327,   331,   336,   340,   343,   347,   350,
     354,   358,   361,   364,   367,   371,   375,   378,   382,   386,
     389,   393,   397,   400,   403,   407,   411,   414,   417,   420,
     424,   428,   431,   434,   437,   441,   445,   448,   452,   454,
     456,   459,   464,   467,   470,   473,   477,   482,   485,   487,
     489,   491,   494
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    57,    -1,    61,    -1,    90,    -1,    98,
      -1,    60,    -1,   101,    -1,    91,    -1,     1,    -1,    57,
      56,    -1,    -1,    58,    59,    -1,    59,    -1,    64,    -1,
      33,    -1,    73,    58,     4,    -1,    60,    73,    58,     4,
      -1,     5,    66,     4,    -1,    41,    67,    43,    69,    44,
      -1,    41,    67,    43,    69,    50,    69,    44,    -1,    41,
      67,    43,    69,     1,    -1,    41,    67,    43,     1,    -1,
      41,    67,     1,    -1,    41,     1,    -1,    63,    64,    -1,
      64,    -1,    68,    -1,    30,    -1,    31,    -1,    35,    -1,
      38,    -1,    36,    -1,    39,    -1,    37,    -1,    40,    -1,
      45,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      34,    -1,    32,    -1,    67,    -1,    89,    -1,    62,    -1,
      72,    -1,    97,    -1,    86,    -1,    71,    -1,    66,    65,
      -1,    65,    -1,    67,    68,    -1,    68,    -1,    70,    -1,
      29,    -1,    50,    -1,    69,    70,    -1,    70,    -1,    51,
      -1,    33,    63,    33,    -1,    33,    63,     1,    -1,    33,
       1,    -1,    37,    67,    37,    -1,    37,    67,     1,    -1,
      37,     1,    -1,    40,    67,    40,    -1,    40,    67,     1,
      -1,    40,     1,    -1,    14,    -1,    74,    -1,    15,    -1,
      75,    -1,    16,    -1,    76,    -1,    17,    -1,    77,    -1,
      18,    -1,    74,    58,     4,    -1,    78,    74,    58,     4,
      -1,    75,    58,     4,    -1,    79,    75,    58,     4,    -1,
      76,    58,     4,    -1,    80,    76,    58,     4,    -1,    25,
      -1,    82,    -1,    26,    -1,    83,    -1,    27,    -1,    82,
      58,     4,    -1,    84,    82,    58,     4,    -1,    83,    58,
       4,    -1,    85,    83,    58,     4,    -1,    45,    67,    45,
      -1,    45,    67,     1,    -1,    45,     1,    -1,    66,     4,
      -1,    66,    -1,     3,    -1,    87,    -1,    88,    87,    -1,
      42,    67,    43,    69,    44,    -1,    42,    67,    43,    69,
      50,    69,    44,    -1,    42,    67,    43,    69,     1,    -1,
      42,    67,    43,     1,    -1,    42,    67,     1,    -1,    42,
       1,    -1,    88,    -1,    91,    93,    -1,    91,    95,    -1,
      91,    94,    -1,    91,    92,    -1,    -1,    81,    58,     4,
      -1,    92,    81,    58,     4,    -1,    19,    66,     4,    -1,
      28,    87,    -1,    94,    28,    87,    -1,    20,    87,    -1,
      95,    20,    87,    -1,    95,    25,    87,    -1,    95,    84,
      -1,    95,    96,    -1,    22,    87,    -1,    96,    22,    87,
      -1,    96,    26,    87,    -1,    96,    85,    -1,    36,    67,
      36,    -1,    36,    67,     1,    -1,    36,     1,    -1,    39,
      67,    39,    -1,    39,    67,     1,    -1,    39,     1,    -1,
       6,    87,    -1,    98,     6,    87,    -1,    98,    14,    87,
      -1,    98,    78,    -1,    98,    99,    -1,     9,    87,    -1,
      99,     9,    87,    -1,    99,    15,    87,    -1,    99,    79,
      -1,    99,   100,    -1,    10,    87,    -1,   100,    10,    87,
      -1,   100,    16,    87,    -1,   100,    80,    -1,   104,   105,
     102,    -1,   102,    -1,   107,    -1,    87,    34,    -1,     8,
     106,     4,   105,    -1,   110,     4,    -1,     8,   103,    -1,
     106,   103,    -1,     8,   106,     4,    -1,   107,     8,   106,
       4,    -1,   109,    34,    -1,    47,    -1,    48,    -1,    49,
      -1,     8,   108,    -1,   110,   108,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   511,   511,   544,   548,   552,   556,   560,   564,   569,
     575,   579,   588,   592,   600,   604,   611,   615,   623,   631,
     635,   639,   642,   645,   648,   655,   659,   667,   671,   675,
     679,   683,   687,   691,   695,   699,   703,   707,   711,   715,
     719,   723,   727,   735,   739,   743,   746,   750,   754,   758,
     766,   770,   778,   782,   790,   794,   798,   806,   810,   818,
     826,   830,   833,   841,   845,   848,   851,   855,   858,   865,
     869,   876,   880,   887,   891,   898,   902,   909,   917,   921,
     928,   932,   939,   943,   950,   954,   961,   965,   972,   980,
     984,   991,   995,  1002,  1006,  1009,  1016,  1020,  1024,  1032,
    1036,  1044,  1048,  1052,  1055,  1058,  1061,  1068,  1076,  1080,
    1084,  1088,  1092,  1100,  1104,  1112,  1120,  1124,  1132,  1136,
    1140,  1144,  1148,  1156,  1160,  1164,  1168,  1176,  1180,  1183,
    1186,  1190,  1193,  1200,  1204,  1208,  1212,  1216,  1224,  1228,
    1232,  1236,  1240,  1248,  1252,  1256,  1260,  1268,  1272,  1279,
    1287,  1294,  1302,  1308,  1312,  1319,  1323,  1329,  1336,  1340,
    1344,  1351,  1355
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BLANKLINE", "LINEBREAK", "LF_H",
  "LF_UL", "UL", "LF_VERTICAL", "LF_INDENT_UL", "LF_INDENT2_UL",
  "LF_INDENT3_UL", "LF_INDENT4_UL", "LF_INDENT_VERTICAL", "LF_INDENT",
  "LF_INDENT2", "LF_INDENT3", "LF_INDENT4", "LF_INDENT5", "LF_Q_H",
  "LF_Q_UL", "LF_Q_VERTICAL", "LF_Q_INDENT_UL", "LF_Q_INDENT2_UL",
  "LF_Q_INDENT_VERTICAL", "LF_Q_INDENT", "LF_Q_INDENT2", "LF_Q_INDENT3",
  "LF_Q", "ESCAPEDCHAR", "LESSTHAN", "LARGERTHAN", "TRIPLEBACKTICK",
  "BACKTICK", "VERTICAL", "TRIPLEASTERISK", "DOUBLEASTERISK", "ASTERISK",
  "TRIPLEUNDERSCORE", "DOUBLEUNDERSCORE", "UNDERSCORE",
  "EXCLAMATION_LEFTSQUARE", "LEFTSQUARE", "RIGHTSQUARE_LEFTBRACKET",
  "RIGHTBRACKET", "DOUBLETILDE", "RIGHTSQUARE", "MINUSSERIES_LEFT",
  "MINUSSERIES_RIGHT", "MINUSSERIES_CENTER", "SPACE", "TEXT",
  "ITALICSTART", "LISTSTART", "$accept", "markdownfile", "block", "blocks",
  "code_text", "code_text_item", "codeblock", "header", "image",
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
  "table_body", "table_cell", "table_head", "table_head_separator",
  "table_row", "table_rows", "table_separator_cell",
  "table_separator_item", "table_separator_row", 0
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    69,    69,    70,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    91,    91,
      91,    91,    91,    92,    92,    93,    94,    94,    95,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   102,
     103,   104,   105,   106,   106,   107,   107,   108,   109,   109,
     109,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     1,     1,     1,     3,     4,     3,     5,
       7,     5,     4,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     1,     1,
       3,     3,     2,     3,     3,     2,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     4,     3,     4,     1,     1,     1,     1,     1,     3,
       4,     3,     4,     3,     3,     2,     2,     1,     1,     1,
       2,     5,     7,     5,     4,     3,     2,     1,     2,     2,
       2,     2,     0,     3,     4,     3,     2,     3,     2,     3,
       3,     2,     2,     2,     3,     3,     2,     3,     3,     2,
       3,     3,     2,     2,     3,     3,     2,     2,     2,     3,
       3,     2,     2,     2,     3,     3,     2,     3,     1,     1,
       2,     4,     2,     2,     2,     3,     4,     2,     1,     1,
       1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      11,     0,     0,     1,     9,    98,     0,     0,     0,    69,
      71,    73,    75,    77,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    59,    10,     6,     3,    45,    51,
      97,    43,    53,    54,    49,    46,     0,    70,    72,    74,
      76,    48,    99,   107,    44,     4,     8,    47,     5,     7,
     148,     0,   149,     0,   133,     0,     0,    62,    28,    29,
      42,    41,    30,    32,    34,    31,    33,    35,    37,    38,
      39,    40,    36,     0,    26,    27,   129,     0,    65,     0,
     132,     0,    68,     0,    24,     0,   106,     0,    95,     0,
       0,    96,    50,    52,    15,     0,    13,    14,   100,     0,
       0,    84,    86,    88,     0,     0,    85,    87,   111,   108,
     110,   109,     0,     0,     0,     0,   136,   137,     0,     0,
       0,     0,    18,     0,   153,   155,   154,    61,    60,    25,
     128,   127,    64,    63,   131,   130,    67,    66,    23,     0,
     105,     0,    94,    93,     0,    16,    12,     0,   118,   116,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   134,
     138,   135,     0,     0,     0,     0,     0,     0,   141,   142,
     158,   159,   160,   161,     0,     0,   147,   152,   162,     0,
     150,   151,    22,     0,    58,   104,     0,    17,   115,   113,
       0,   117,   119,   123,   120,     0,     0,     0,     0,     0,
     126,    78,     0,   139,   143,   140,     0,     0,     0,     0,
       0,   146,   157,     0,   156,    21,    19,     0,    57,   103,
     101,     0,   114,    89,     0,   124,   125,     0,     0,    79,
      80,     0,   144,   145,     0,     0,   155,     0,     0,    90,
      91,     0,    81,    82,     0,    20,   102,    92,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,     2,    95,    96,    26,    27,    28,    73,
      97,    29,    30,    31,    32,   183,    33,    34,    35,    36,
      37,    38,    39,    40,   116,   168,   211,   105,   106,   107,
     157,   200,    41,   123,    43,    44,    45,    46,   108,   109,
     110,   111,   158,    47,    48,   117,   169,    49,    50,   126,
      51,   119,    56,    52,   173,   174,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -157
static const yytype_int16 yypact[] =
{
    -157,    14,   260,  -157,  -157,  -157,   -10,   408,     9,  -157,
    -157,  -157,  -157,  -157,  -157,   283,    38,   164,   203,   308,
     315,   331,   335,  -157,  -157,  -157,   544,  -157,  -157,  -157,
     840,   -17,  -157,  -157,  -157,  -157,   928,  -157,  -157,  -157,
    -157,  -157,  -157,   408,  -157,  -157,   459,  -157,   398,  -157,
    -157,    12,    17,   882,  -157,   408,   338,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,   206,  -157,  -157,  -157,    27,  -157,    47,
    -157,    80,  -157,    93,  -157,    95,  -157,   302,  -157,   306,
     928,  -157,  -157,  -157,  -157,   431,  -157,  -157,  -157,   -10,
     408,  -157,  -157,  -157,   408,   928,  -157,  -157,    11,  -157,
      -6,   523,   408,   408,   408,   928,   439,   479,    79,    45,
     154,     9,  -157,    65,  -157,    12,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,    42,
    -157,    50,  -157,  -157,   473,  -157,  -157,   905,  -157,  -157,
     496,   928,   408,   408,   408,   408,   928,    20,    85,  -157,
    -157,  -157,   538,   928,   408,   408,   408,   928,   180,   330,
    -157,  -157,  -157,  -157,    74,     9,  -157,  -157,  -157,   358,
    -157,  -157,  -157,    41,  -157,  -157,   119,  -157,  -157,  -157,
     561,  -157,  -157,  -157,  -157,   603,   928,   408,   408,   928,
      52,  -157,   626,  -157,  -157,  -157,   668,   928,   408,   408,
     928,   122,  -157,   389,  -157,  -157,  -157,    62,  -157,  -157,
    -157,    62,  -157,  -157,   691,  -157,  -157,   733,   928,  -157,
    -157,   756,  -157,  -157,   798,   928,  -157,     6,    81,  -157,
    -157,   821,  -157,  -157,   863,  -157,  -157,  -157,  -157
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,  -157,   -46,    28,  -157,  -157,  -157,  -157,
       0,   -29,    -4,   535,   -15,  -135,  -134,  -157,  -157,   108,
     -45,  -107,  -156,  -157,  -157,  -157,  -157,    29,  -103,  -140,
    -157,  -157,  -157,     2,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,    23,    94,
    -157,    26,  -110,  -157,    39,  -157,  -157
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -113
static const yytype_int16 yytable[] =
{
      75,    92,    53,   115,    42,   184,   186,   184,   156,    54,
     167,   179,    14,   210,     3,    74,    93,    55,   199,    14,
     118,    75,   152,    15,    92,   121,    16,    17,   130,    18,
      19,    20,    21,    23,    24,    22,   101,   102,   103,    76,
      23,    24,   215,   182,   144,    98,   102,   103,   132,   218,
     245,   185,   218,   175,   196,   235,    14,    24,    75,   150,
     228,   207,    93,   131,    93,   213,    93,    14,    93,   162,
      93,   163,    93,   129,    93,    75,    14,    23,    24,   103,
      75,   134,   237,   184,   133,   216,   238,   184,    23,    24,
      75,   217,    24,    24,   136,   147,   138,    23,    24,   180,
      75,    24,   148,   218,   218,   190,   149,   197,   212,    14,
     195,   198,   103,    24,   159,   160,   161,   202,    92,   135,
     219,   206,    14,   146,    14,   246,   170,   171,   172,    75,
      23,    24,    24,   137,    90,    75,    75,   151,   139,    12,
      13,    75,   176,    23,    24,    23,    24,    75,    75,   124,
     224,   181,    75,   227,   191,   192,   193,   194,   177,   178,
       0,   231,     0,   220,   234,    78,   203,   204,   205,   221,
      24,     0,   146,     0,     0,    75,     0,     0,   146,     0,
      75,    75,   241,     0,    75,     0,     0,    75,     0,   244,
     146,    75,    75,    14,     0,    75,    11,    12,    13,   225,
     226,   170,   171,   172,    80,     0,     0,   127,     0,    75,
     232,   233,    75,    75,    23,    24,    75,     0,   146,    75,
      75,     0,     0,   146,     0,     0,    75,     0,     0,    75,
     146,     0,    14,     0,   146,    14,    58,    59,    60,   128,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   146,    23,    24,   146,    23,    24,     0,   146,
      -2,     4,   146,     5,     0,     6,     7,     0,     8,   146,
       0,     0,   146,     0,     9,    10,    11,    12,    13,  -112,
    -112,     0,     0,     0,    57,  -112,  -112,  -112,  -112,    14,
       0,     0,     0,    15,     0,     0,    16,    17,     0,    18,
      19,    20,    21,   140,     0,    22,     0,   142,     0,    82,
      23,    24,    14,    58,    59,    60,    84,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    14,    86,    23,    24,    14,    88,    14,     0,     0,
     208,     5,   125,     0,    14,   141,   209,    12,    13,     0,
       0,   143,    23,    24,     0,     0,    23,    24,    23,    24,
      14,     5,   214,     0,    14,    23,    24,    14,     0,     0,
       0,    15,     0,     0,    16,    17,     0,    18,    19,    20,
      21,    23,    24,    22,     0,    23,    24,    14,    23,    24,
       0,    15,     5,   236,    16,    17,     0,    18,    19,    20,
      21,     0,     0,    22,   112,     0,     0,   113,    23,    24,
       0,     5,   114,    10,    11,    12,    13,     0,    14,     0,
       0,     0,    15,     0,     0,    16,    17,     0,    18,    19,
      20,    21,     0,     0,    22,   145,     0,    14,     0,    23,
      24,    15,     0,     0,    16,    17,     0,    18,    19,    20,
      21,     0,     0,    22,    10,    11,    12,    13,    23,    24,
      14,    58,    59,    60,    94,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   187,    99,   100,
       0,    23,    24,     0,   101,   102,   103,   104,   164,   165,
       0,     0,     0,     0,   166,    11,    12,    13,     0,     0,
     189,     0,    14,    58,    59,    60,    94,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,    23,    24,    14,    58,    59,    60,    94,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   201,   153,     0,   154,    23,    24,   155,   102,
     103,    77,    79,    81,    83,    85,    87,    89,     9,    10,
      11,    12,    13,     0,     0,   222,     0,    14,    58,    59,
      60,    94,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,    23,    24,
      14,    58,    59,    60,    94,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   223,     0,     0,
       0,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     229,     0,    14,    58,    59,    60,    94,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,    23,    24,    14,    58,    59,    60,    94,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   230,     0,     0,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,     0,    14,    58,    59,
      60,    94,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,    23,    24,
      14,    58,    59,    60,    94,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   240,     0,     0,
       0,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,    14,    58,    59,    60,    94,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,    23,    24,    14,    58,    59,    60,    94,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   243,     0,     0,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,     0,    14,    58,    59,
      60,    94,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    91,     0,     0,     0,    23,    24,
      14,    58,    59,    60,    94,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   248,     0,    14,
       0,    23,    24,    15,     0,     0,    16,    17,     0,    18,
      19,    20,    21,     0,     0,    22,   122,     0,     0,     0,
      23,    24,    14,    58,    59,    60,    94,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,   188,
       0,    14,     0,    23,    24,    15,     0,     0,    16,    17,
       0,    18,    19,    20,    21,     0,     0,    22,     0,     0,
       0,     0,    23,    24,    14,     0,     0,     0,    15,     0,
       0,    16,    17,     0,    18,    19,    20,    21,     0,     0,
      22,     0,     0,     0,     0,    23,    24,    14,    58,    59,
      60,    94,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,     0,    23,    24
};

static const yytype_int16 yycheck[] =
{
      15,    30,     6,    48,     2,   139,   141,   141,   111,     7,
     117,   121,    29,   169,     0,    15,    31,     8,   158,    29,
       8,    36,    28,    33,    53,     8,    36,    37,     1,    39,
      40,    41,    42,    50,    51,    45,    25,    26,    27,     1,
      50,    51,     1,     1,    90,    43,    26,    27,     1,   183,
      44,     1,   186,     8,   157,   211,    29,    51,    73,   105,
     200,   168,    77,    36,    79,   175,    81,    29,    83,   115,
      85,   116,    87,    73,    89,    90,    29,    50,    51,    27,
      95,     1,   217,   217,    37,    44,   221,   221,    50,    51,
     105,    50,    51,    51,     1,    99,     1,    50,    51,    34,
     115,    51,   100,   237,   238,   151,   104,    22,    34,    29,
     156,    26,    27,    51,   112,   113,   114,   163,   147,    39,
       1,   167,    29,    95,    29,    44,    47,    48,    49,   144,
      50,    51,    51,    40,    26,   150,   151,   108,    43,    17,
      18,   156,   119,    50,    51,    50,    51,   162,   163,    55,
     196,   125,   167,   199,   152,   153,   154,   155,     4,   120,
      -1,   207,    -1,    44,   210,     1,   164,   165,   166,    50,
      51,    -1,   144,    -1,    -1,   190,    -1,    -1,   150,    -1,
     195,   196,   228,    -1,   199,    -1,    -1,   202,    -1,   235,
     162,   206,   207,    29,    -1,   210,    16,    17,    18,   197,
     198,    47,    48,    49,     1,    -1,    -1,     1,    -1,   224,
     208,   209,   227,   228,    50,    51,   231,    -1,   190,   234,
     235,    -1,    -1,   195,    -1,    -1,   241,    -1,    -1,   244,
     202,    -1,    29,    -1,   206,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,   224,    50,    51,   227,    50,    51,    -1,   231,
       0,     1,   234,     3,    -1,     5,     6,    -1,     8,   241,
      -1,    -1,   244,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,     1,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    33,    -1,    -1,    36,    37,    -1,    39,
      40,    41,    42,     1,    -1,    45,    -1,     1,    -1,     1,
      50,    51,    29,    30,    31,    32,     1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    29,     1,    50,    51,    29,     1,    29,    -1,    -1,
      10,     3,     4,    -1,    29,    43,    16,    17,    18,    -1,
      -1,    45,    50,    51,    -1,    -1,    50,    51,    50,    51,
      29,     3,     4,    -1,    29,    50,    51,    29,    -1,    -1,
      -1,    33,    -1,    -1,    36,    37,    -1,    39,    40,    41,
      42,    50,    51,    45,    -1,    50,    51,    29,    50,    51,
      -1,    33,     3,     4,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    45,     6,    -1,    -1,     9,    50,    51,
      -1,     3,    14,    15,    16,    17,    18,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    45,     4,    -1,    29,    -1,    50,
      51,    33,    -1,    -1,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    45,    15,    16,    17,    18,    50,    51,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     4,    19,    20,
      -1,    50,    51,    -1,    25,    26,    27,    28,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    -1,    -1,
       4,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     4,    20,    -1,    22,    50,    51,    25,    26,
      27,    16,    17,    18,    19,    20,    21,    22,    14,    15,
      16,    17,    18,    -1,    -1,     4,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     4,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     4,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     4,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    50,    51,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,     4,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,     4,    -1,    -1,    -1,    50,    51,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,     4,    -1,    29,
      -1,    50,    51,    33,    -1,    -1,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    45,     4,    -1,    -1,    -1,
      50,    51,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     4,
      -1,    29,    -1,    50,    51,    33,    -1,    -1,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    29,    -1,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    39,    40,    41,    42,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    50,    51,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    57,     0,     1,     3,     5,     6,     8,    14,
      15,    16,    17,    18,    29,    33,    36,    37,    39,    40,
      41,    42,    45,    50,    51,    56,    60,    61,    62,    65,
      66,    67,    68,    70,    71,    72,    73,    74,    75,    76,
      77,    86,    87,    88,    89,    90,    91,    97,    98,   101,
     102,   104,   107,    66,    87,     8,   106,     1,    30,    31,
      32,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    63,    64,    68,     1,    67,     1,    67,
       1,    67,     1,    67,     1,    67,     1,    67,     1,    67,
      73,     4,    65,    68,    33,    58,    59,    64,    87,    19,
      20,    25,    26,    27,    28,    81,    82,    83,    92,    93,
      94,    95,     6,     9,    14,    74,    78,    99,     8,   105,
     110,     8,     4,    87,   103,     4,   103,     1,    33,    64,
       1,    36,     1,    37,     1,    39,     1,    40,     1,    43,
       1,    43,     1,    45,    58,     4,    59,    66,    87,    87,
      58,    81,    28,    20,    22,    25,    82,    84,    96,    87,
      87,    87,    58,    74,     9,    10,    15,    75,    79,   100,
      47,    48,    49,   108,   109,     8,   102,     4,   108,   106,
      34,   105,     1,    69,    70,     1,    69,     4,     4,     4,
      58,    87,    87,    87,    87,    58,    82,    22,    26,    83,
      85,     4,    58,    87,    87,    87,    58,    75,    10,    16,
      76,    80,    34,   106,     4,     1,    44,    50,    70,     1,
      44,    50,     4,     4,    58,    87,    87,    58,    83,     4,
       4,    58,    87,    87,    58,    76,     4,    69,    69,     4,
       4,    58,     4,     4,    58,    44,    44,     4,     4
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
#line 511 "markdown-new.y"
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
#line 544 "markdown-new.y"
    {
            show_rule("block: header");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 4:
#line 548 "markdown-new.y"
    {
            show_rule("block: paragraph");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 5:
#line 552 "markdown-new.y"
    {
            show_rule("block: unorderlist_0");
            (yyval.text) = str_format("<ul>%s</ul>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 6:
#line 556 "markdown-new.y"
    {
            show_rule("block: codeblock");
            (yyval.text) = str_format("<pre><code>%s</code></pre>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 7:
#line 560 "markdown-new.y"
    {
            show_rule("block: table");
            (yyval.text) = str_format("<table>%s</table>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 8:
#line 564 "markdown-new.y"
    {
            show_rule("block: quote_block");
            (yyval.text) = str_format("<blockquote>%s</blockquote>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 9:
#line 569 "markdown-new.y"
    {
            show_rule("block: error");
        ;}
    break;

  case 10:
#line 575 "markdown-new.y"
    {
            show_rule("blocks: blocks block");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 11:
#line 579 "markdown-new.y"
    {
            show_rule("blocks: NULL");
            (yyval.text) = "";
        ;}
    break;

  case 12:
#line 588 "markdown-new.y"
    {
            show_rule("code_text: code_text code_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 13:
#line 592 "markdown-new.y"
    {
            show_rule("code_text: code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 14:
#line 600 "markdown-new.y"
    {
            show_rule("code_text_item: inline_code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 15:
#line 604 "markdown-new.y"
    {
            show_rule("code_text_item: BACKTICK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 16:
#line 611 "markdown-new.y"
    {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 1), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 17:
#line 615 "markdown-new.y"
    {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 1), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 18:
#line 623 "markdown-new.y"
    {              
            show_rule("header: LF_H inline_elements LINEBREAK");
            (yyval.text) = str_format("<h%d>%s</h%d>%s", strlen((yyvsp[(1) - (3)].text)), (yyvsp[(2) - (3)].text), strlen((yyvsp[(1) - (3)].text)), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 19:
#line 631 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", (yyvsp[(4) - (5)].text), (yyvsp[(2) - (5)].text), "");
        ;}
    break;

  case 20:
#line 635 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<img src=\"%s\" alt=\"%s\" title=\"%s\">", (yyvsp[(4) - (7)].text), (yyvsp[(2) - (7)].text), (yyvsp[(6) - (7)].text));
        ;}
    break;

  case 21:
#line 639 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        ;}
    break;

  case 22:
#line 642 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        ;}
    break;

  case 23:
#line 645 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE inline_text error");
        ;}
    break;

  case 24:
#line 648 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION_LEFTSQUARE error");
        ;}
    break;

  case 25:
#line 655 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 26:
#line 659 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 27:
#line 667 "markdown-new.y"
    {
            show_rule("inline_code_text_item: inline_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 28:
#line 671 "markdown-new.y"
    {
            show_rule("inline_code_text_item: LESSTHAN");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 29:
#line 675 "markdown-new.y"
    {
            show_rule("inline_code_text_item: LARGERTHAN");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 30:
#line 679 "markdown-new.y"
    {
            show_rule("inline_code_text_item: TRIPLEASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 31:
#line 683 "markdown-new.y"
    {
            show_rule("inline_code_text_item: TRIPLEUNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 32:
#line 687 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 33:
#line 691 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEUNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 34:
#line 695 "markdown-new.y"
    {
            show_rule("inline_code_text_item: ASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 35:
#line 699 "markdown-new.y"
    {
            show_rule("inline_code_text_item: UNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 36:
#line 703 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLETILDE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 37:
#line 707 "markdown-new.y"
    {
            show_rule("inline_code_text_item: EXCLAMATION_LEFTSQUARE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 38:
#line 711 "markdown-new.y"
    {
            show_rule("inline_code_text_item: LEFTSQUARE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 39:
#line 715 "markdown-new.y"
    {
            show_rule("inline_code_text_item: RIGHTSQUARE_LEFTBRACKET");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 40:
#line 719 "markdown-new.y"
    {
            show_rule("inline_code_text_item: RIGHTBRACKET");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 41:
#line 723 "markdown-new.y"
    {
            show_rule("inline_code_text_item: VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 42:
#line 727 "markdown-new.y"
    {
            show_rule("inline_code_text_item: TRIPLEBACKTICK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 43:
#line 735 "markdown-new.y"
    {
            show_rule("inline_element: inline_text");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 44:
#line 739 "markdown-new.y"
    {
            show_rule("inline_element: link");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 45:
#line 743 "markdown-new.y"
    {
            show_rule("inline_element: image");
        ;}
    break;

  case 46:
#line 746 "markdown-new.y"
    {
            show_rule("inline_element: italic");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 47:
#line 750 "markdown-new.y"
    {
            show_rule("inline_element: strong");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 48:
#line 754 "markdown-new.y"
    {
            show_rule("inline_element: linethrough");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 49:
#line 758 "markdown-new.y"
    {
            show_rule("inline_element: inlinecode");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 50:
#line 766 "markdown-new.y"
    {
            show_rule("inline_elements: inline_elements inline_element");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 51:
#line 770 "markdown-new.y"
    {
            show_rule("inline_elements: inline_element");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 52:
#line 778 "markdown-new.y"
    {
            show_rule("inline_text: inline_text inline_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 53:
#line 782 "markdown-new.y"
    {
            show_rule("inline_text: inline_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 54:
#line 790 "markdown-new.y"
    {
            show_rule("inline_text_item: uri_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 55:
#line 794 "markdown-new.y"
    {
            show_rule("inline_text_item: ESCAPEDCHAR");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 56:
#line 798 "markdown-new.y"
    {
            show_rule("inline_text_item: SPACE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 57:
#line 806 "markdown-new.y"
    {
            show_rule("uri_text: uri_text uri_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 58:
#line 810 "markdown-new.y"
    {
            show_rule("uri_text: uri_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 59:
#line 818 "markdown-new.y"
    {
            show_rule("uri_text_item: TEXT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 60:
#line 826 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
            (yyval.text) = str_format("<code>%s</code>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 61:
#line 830 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        ;}
    break;

  case 62:
#line 833 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK error");
        ;}
    break;

  case 63:
#line 841 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text ASTERISK");
            (yyval.text) = str_format("<i>%s</i>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 64:
#line 845 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text error");
        ;}
    break;

  case 65:
#line 848 "markdown-new.y"
    {
            show_rule("italic: ASTERISK error");
        ;}
    break;

  case 66:
#line 851 "markdown-new.y"
    {
            show_rule("italic: UNDERSCORE inline_text UNDERSCORE");
            (yyval.text) = str_format("<i>%s</i>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 67:
#line 855 "markdown-new.y"
    {
            show_rule("italic: UNDERSCORE inline_text error");
        ;}
    break;

  case 68:
#line 858 "markdown-new.y"
    {
            show_rule("italic: UNDERSCORE error");
        ;}
    break;

  case 69:
#line 865 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 70:
#line 869 "markdown-new.y"
    {
            show_rule("lf_indents: lf_indents2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 71:
#line 876 "markdown-new.y"
    {
            show_rule("lf_indents2: LF_INDENT2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 72:
#line 880 "markdown-new.y"
    {
            show_rule("lf_indents2: lf_indents3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 73:
#line 887 "markdown-new.y"
    {
            show_rule("lf_indents3: LF_INDENT3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 74:
#line 891 "markdown-new.y"
    {
            (yyval.text) = (yyvsp[(1) - (1)].text);
            show_rule("lf_indents3: lf_indents4");
        ;}
    break;

  case 75:
#line 898 "markdown-new.y"
    {
            show_rule("lf_indents4: LF_INDENT4");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 76:
#line 902 "markdown-new.y"
    {
            show_rule("lf_indents4: lf_indents5");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 77:
#line 909 "markdown-new.y"
    {
            show_rule("lf_indents5: LF_INDENT5");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 78:
#line 917 "markdown-new.y"
    {
            show_rule("lf_indents2_codeblock: lf_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 2), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 79:
#line 921 "markdown-new.y"
    {
            show_rule("lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 2), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 80:
#line 928 "markdown-new.y"
    {
            show_rule("lf_indents3_codeblock: lf_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 3), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 81:
#line 932 "markdown-new.y"
    {
            show_rule("lf_indents3_codeblock: lf_indents3_codeblock lf_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 3), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 82:
#line 939 "markdown-new.y"
    {
            show_rule("lf_indents4_codeblock: lf_indents4 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 4), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 83:
#line 943 "markdown-new.y"
    {
            show_rule("lf_indents4_codeblock: lf_indents4_codeblock lf_indents4 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 4), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 84:
#line 950 "markdown-new.y"
    {
            show_rule("lf_q_indents: LF_Q_INDENT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 85:
#line 954 "markdown-new.y"
    {
            show_rule("lf_q_indents: lf_q_indents2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 86:
#line 961 "markdown-new.y"
    {
            show_rule("lf_q_indents2: LF_Q_INDENT2");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 87:
#line 965 "markdown-new.y"
    {
            show_rule("lf_q_indents2: lf_q_indents3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 88:
#line 972 "markdown-new.y"
    {
            show_rule("lf_q_indents3: LF_Q_INDENT3");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 89:
#line 980 "markdown-new.y"
    {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left((yyvsp[(1) - (3)].text), "> ", ""), 2), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 90:
#line 984 "markdown-new.y"
    {
            show_rule("lf_q_indents2_codeblock: lf_q_indents2_codeblock lf_q_indents2 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents(str_replace_left((yyvsp[(2) - (4)].text), "> ", ""), 2), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 91:
#line 991 "markdown-new.y"
    {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left((yyvsp[(1) - (3)].text), "> ", ""), 3), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 92:
#line 995 "markdown-new.y"
    {
            show_rule("lf_q_indents3_codeblock: lf_q_indents3_codeblock lf_q_indents3 code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents(str_replace_left((yyvsp[(2) - (4)].text), "> ", ""), 3), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 93:
#line 1002 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
            (yyval.text) = str_format("<del>%s</del>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 94:
#line 1006 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        ;}
    break;

  case 95:
#line 1009 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE error");
        ;}
    break;

  case 96:
#line 1016 "markdown-new.y"
    {
            show_rule("line: inline_elements LINEBREAK");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 97:
#line 1020 "markdown-new.y"
    {
            show_rule("line: inline_elements");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 98:
#line 1024 "markdown-new.y"
    {
            show_rule("line: BLANKLINE");
            (yyval.text) = "\n";
        ;}
    break;

  case 99:
#line 1032 "markdown-new.y"
    {
            show_rule("lines: line");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 100:
#line 1036 "markdown-new.y"
    {
            show_rule("lines: lines line");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 101:
#line 1044 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<a href=\"%s\">%s</a>", (yyvsp[(4) - (5)].text), (yyvsp[(2) - (5)].text));
        ;}
    break;

  case 102:
#line 1048 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text SPACE uri_text RIGHTBRACKET");
            (yyval.text) = str_format("<a href=\"%s\" title=\"%s\">%s</a>", (yyvsp[(4) - (7)].text), (yyvsp[(6) - (7)].text), (yyvsp[(2) - (7)].text));
        ;}
    break;

  case 103:
#line 1052 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET uri_text error");
        ;}
    break;

  case 104:
#line 1055 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE_LEFTBRACKET error");
        ;}
    break;

  case 105:
#line 1058 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text error");
        ;}
    break;

  case 106:
#line 1061 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE error");
        ;}
    break;

  case 107:
#line 1068 "markdown-new.y"
    {
            show_rule("paragraph: lines");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 108:
#line 1076 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_header");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 109:
#line 1080 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_unorderlist_0");
            (yyval.text) = str_format("%s<ul>%s</ul>", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 110:
#line 1084 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_paragraph");
            (yyval.text) = str_format("%s<p>%s</p>", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 111:
#line 1088 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre>", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 112:
#line 1092 "markdown-new.y"
    {
            show_rule("quote_block: NULL");
            (yyval.text) = "";
        ;}
    break;

  case 113:
#line 1100 "markdown-new.y"
    {
            show_rule("quote_codeblock: lf_q_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents(str_replace_left((yyvsp[(1) - (3)].text), "> ", ""), 1), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 114:
#line 1104 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock lf_q_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents(str_replace_left((yyvsp[(2) - (4)].text), "> ", ""), 1), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 115:
#line 1112 "markdown-new.y"
    {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
            (yyval.text) = str_format("<h%d>%s</h%d>%s", strlen(str_replace_left((yyvsp[(1) - (3)].text), "> ", "")), (yyvsp[(2) - (3)].text), strlen(str_replace_left((yyvsp[(1) - (3)].text), "> ", "")), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 116:
#line 1120 "markdown-new.y"
    {
            show_rule("quote_paragraph: LF_Q line");
            (yyval.text) = (yyvsp[(2) - (2)].text);
        ;}
    break;

  case 117:
#line 1124 "markdown-new.y"
    {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
            (yyval.text) = str_concat((yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 118:
#line 1132 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 119:
#line 1136 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 120:
#line 1140 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text), "</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 121:
#line 1144 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 lf_q_indents2_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 122:
#line 1148 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
            (yyval.text) = str_format("%s<ul>%s</ul></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 123:
#line 1156 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 124:
#line 1160 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 125:
#line 1164 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text), "</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 126:
#line 1168 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 lf_q_indents3_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 127:
#line 1176 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
            (yyval.text) = str_format("<strong>%s</strong>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 128:
#line 1180 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        ;}
    break;

  case 129:
#line 1183 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK error");
        ;}
    break;

  case 130:
#line 1186 "markdown-new.y"
    {
            show_rule("strong: DOUBLEUNDERSCORE inline_text DOUBLEUNDERSCORE");
            (yyval.text) = str_format("<strong>%s</strong>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 131:
#line 1190 "markdown-new.y"
    {
            show_rule("strong: DOUBLEUNDERSCORE inline_text error");
        ;}
    break;

  case 132:
#line 1193 "markdown-new.y"
    {
            show_rule("strong: DOUBLEUNDERSCORE error");
        ;}
    break;

  case 133:
#line 1200 "markdown-new.y"
    {
            show_rule("unorderlist_0: LF_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 134:
#line 1204 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 135:
#line 1208 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 136:
#line 1212 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 lf_indents2_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 137:
#line 1216 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
            (yyval.text) = str_format("%s<ul>%s</ul></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 138:
#line 1224 "markdown-new.y"
    {
            show_rule("unorderlist_1: LF_INDENT_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 139:
#line 1228 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 140:
#line 1232 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 141:
#line 1236 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 lf_indents3_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text), "</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 142:
#line 1240 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
            (yyval.text) = str_format("%s<ul>%s</ul></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 143:
#line 1248 "markdown-new.y"
    {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 144:
#line 1252 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 145:
#line 1256 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 146:
#line 1260 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 lf_indents4_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text), "</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 147:
#line 1268 "markdown-new.y"
    {
            show_rule("table: table_head table_head_separator table_body");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 148:
#line 1272 "markdown-new.y"
    {
            show_rule("table: table_body");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 149:
#line 1279 "markdown-new.y"
    {
            show_rule("table_body: table_rows");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 150:
#line 1287 "markdown-new.y"
    {
            show_rule("table_cell: line VERTICAL");
            (yyval.text) = str_format("<td>%s</td>", (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 151:
#line 1294 "markdown-new.y"
    {
            show_rule("table_head: LF_VERTICAL table_row LINEBREAK table_head_separator");
            (yyval.text) = (yyvsp[(2) - (4)].text);
        ;}
    break;

  case 152:
#line 1302 "markdown-new.y"
    {
            show_rule("table_head_separator: table_separator_row LINEBREAK");
            (yyval.text) = "";
        ;}
    break;

  case 153:
#line 1308 "markdown-new.y"
    {
            show_rule("table_row: LF_VERTICAL table_cell");
            (yyval.text) = (yyvsp[(2) - (2)].text);
        ;}
    break;

  case 154:
#line 1312 "markdown-new.y"
    {
            show_rule("table_row: table_row table_cell");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 155:
#line 1319 "markdown-new.y"
    {
            show_rule("table_rows: LF_VERTICAL table_row LINEBREAK");
            (yyval.text) = str_format("<tr>%s</tr>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 156:
#line 1323 "markdown-new.y"
    {
            show_rule("table_rows: table_rows LF_VERTICAL table_row LINEBREAK");
            (yyval.text) = str_format("%s<tr>%s</tr>", (yyvsp[(1) - (4)].text), (yyvsp[(3) - (4)].text));
    ;}
    break;

  case 157:
#line 1329 "markdown-new.y"
    {
            show_rule("table_separator_cell: table_separator_item VERTICAL");
            (yyval.text) = str_format("<td>%s</td>", (yyvsp[(1) - (2)].text));
        ;}
    break;

  case 158:
#line 1336 "markdown-new.y"
    {
            show_rule("table_separator_item: MINUSSERIES_LEFT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 159:
#line 1340 "markdown-new.y"
    {
            show_rule("table_separator_item: MINUSSERIES_RIGHT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 160:
#line 1344 "markdown-new.y"
    {
            show_rule("table_separator_item: MINUSSERIES_CENTER");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 161:
#line 1351 "markdown-new.y"
    {
            show_rule("table_separator_row: LF_VERTICAL table_separator_cell");
            (yyval.text) = (yyvsp[(2) - (2)].text);
        ;}
    break;

  case 162:
#line 1355 "markdown-new.y"
    {
            show_rule("table_separator_row: table_separator_row table_separator_cell");
            (yyval.text) = str_format("%s%s", (yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3505 "markdown-new.y.c"
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


#line 1365 "markdown-new.y"


void markdown( void ){
    /* export yyparse through markdown */
    yyparse();
}



