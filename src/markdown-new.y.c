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
     LF_INDENT_UL = 263,
     LF_INDENT2_UL = 264,
     LF_INDENT3_UL = 265,
     LF_INDENT4_UL = 266,
     LF_INDENT = 267,
     LF_INDENT2 = 268,
     LF_INDENT3 = 269,
     LF_INDENT4 = 270,
     LF_INDENT5 = 271,
     LF_Q_H = 272,
     LF_Q_UL = 273,
     LF_Q_INDENT_UL = 274,
     LF_Q_INDENT2_UL = 275,
     LF_Q_INDENT = 276,
     LF_Q_INDENT2 = 277,
     LF_Q_INDENT3 = 278,
     LF_Q = 279,
     SPECIALCHAR = 280,
     LESSTHAN = 281,
     LARGERTHAN = 282,
     TRIPLEBACKTICK = 283,
     BACKTICK = 284,
     VERTICAL = 285,
     DOUBLEASTERISK = 286,
     DOUBLETILDE = 287,
     ASTERISK = 288,
     PLUS = 289,
     MINUS = 290,
     DIGIT = 291,
     DOT = 292,
     SPACE = 293,
     LEFTSQUARE = 294,
     RIGHTSQUARE = 295,
     LEFTBRACKET = 296,
     RIGHTBRACKET = 297,
     EXCLAMATION = 298,
     DOUBLEUNDERSCORE = 299,
     UNDERSCORE = 300,
     LEFTPARENTHESIS = 301,
     RIGHTPARENTHESIS = 302,
     TEXT = 303,
     ITALICSTART = 304,
     LISTSTART = 305
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define LINEBREAK 259
#define LF_H 260
#define LF_UL 261
#define UL 262
#define LF_INDENT_UL 263
#define LF_INDENT2_UL 264
#define LF_INDENT3_UL 265
#define LF_INDENT4_UL 266
#define LF_INDENT 267
#define LF_INDENT2 268
#define LF_INDENT3 269
#define LF_INDENT4 270
#define LF_INDENT5 271
#define LF_Q_H 272
#define LF_Q_UL 273
#define LF_Q_INDENT_UL 274
#define LF_Q_INDENT2_UL 275
#define LF_Q_INDENT 276
#define LF_Q_INDENT2 277
#define LF_Q_INDENT3 278
#define LF_Q 279
#define SPECIALCHAR 280
#define LESSTHAN 281
#define LARGERTHAN 282
#define TRIPLEBACKTICK 283
#define BACKTICK 284
#define VERTICAL 285
#define DOUBLEASTERISK 286
#define DOUBLETILDE 287
#define ASTERISK 288
#define PLUS 289
#define MINUS 290
#define DIGIT 291
#define DOT 292
#define SPACE 293
#define LEFTSQUARE 294
#define RIGHTSQUARE 295
#define LEFTBRACKET 296
#define RIGHTBRACKET 297
#define EXCLAMATION 298
#define DOUBLEUNDERSCORE 299
#define UNDERSCORE 300
#define LEFTPARENTHESIS 301
#define RIGHTPARENTHESIS 302
#define TEXT 303
#define ITALICSTART 304
#define LISTSTART 305




/* Copy the first part of user declarations.  */
#line 1 "markdown-new.y"

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
#line 299 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 193 of yacc.c.  */
#line 498 "markdown-new.y.c"
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
#line 523 "markdown-new.y.c"

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
#define YYLAST   1754

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  212

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    21,    24,    27,    30,    33,    34,    38,    40,    43,
      47,    51,    54,    57,    61,    66,    70,    75,    79,    82,
      86,    90,    95,   100,   103,   106,   110,   114,   119,   124,
     129,   131,   134,   137,   141,   145,   150,   155,   160,   163,
     166,   170,   174,   179,   181,   183,   185,   187,   189,   191,
     193,   195,   197,   200,   202,   204,   207,   211,   215,   220,
     225,   228,   230,   232,   234,   236,   238,   240,   242,   244,
     247,   249,   251,   253,   255,   257,   259,   261,   263,   265,
     267,   269,   271,   273,   275,   277,   279,   281,   283,   286,
     288,   290,   292,   294,   296,   298,   300,   303,   305,   307,
     309,   316,   325,   332,   338,   343,   347,   350,   358,   368,
     376,   383,   389,   394,   398,   401,   405,   409,   412,   416,
     420,   423,   427,   431,   434,   438,   442
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    53,    54,    -1,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    55,    -1,     1,
      -1,    55,    61,    -1,    55,    62,    -1,    55,    63,    -1,
      55,    64,    -1,    -1,     5,    75,     4,    -1,    65,    -1,
       6,    73,    -1,    58,     6,    73,    -1,    58,    12,    73,
      -1,    58,    60,    -1,    58,    66,    -1,    68,    81,     4,
      -1,    59,    68,    81,     4,    -1,    69,    81,     4,    -1,
      60,    69,    81,     4,    -1,    17,    75,     4,    -1,    18,
      73,    -1,    62,    18,    73,    -1,    62,    21,    73,    -1,
      62,    22,    81,     4,    -1,    62,    23,    81,     4,    -1,
      62,    67,    -1,    24,    73,    -1,    63,    24,    73,    -1,
      21,    81,     4,    -1,    64,    21,    81,     4,    -1,    64,
      22,    81,     4,    -1,    64,    23,    81,     4,    -1,    73,
      -1,    65,    73,    -1,     8,    73,    -1,    66,     8,    73,
      -1,    66,    13,    73,    -1,    66,    14,    81,     4,    -1,
      66,    15,    81,     4,    -1,    66,    16,    81,     4,    -1,
      66,    74,    -1,    19,    73,    -1,    67,    19,    73,    -1,
      67,    22,    73,    -1,    67,    23,    81,     4,    -1,    12,
      -1,    69,    -1,    13,    -1,    70,    -1,    14,    -1,    71,
      -1,    15,    -1,    72,    -1,    16,    -1,    75,     4,    -1,
      75,    -1,     3,    -1,     9,    73,    -1,    74,     9,    73,
      -1,    74,    14,    73,    -1,    74,    15,    81,     4,    -1,
      74,    16,    81,     4,    -1,    75,    76,    -1,    76,    -1,
      77,    -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    77,    78,    -1,    78,    -1,    26,
      -1,    27,    -1,    28,    -1,    30,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    40,    -1,    41,
      -1,    42,    -1,    45,    -1,    44,    -1,    46,    -1,    47,
      -1,    48,    -1,    79,    80,    -1,    80,    -1,    78,    -1,
      33,    -1,    31,    -1,    32,    -1,    43,    -1,    39,    -1,
      81,    82,    -1,    82,    -1,    80,    -1,    29,    -1,    39,
      77,    40,    41,    77,    42,    -1,    39,    77,    40,    41,
      77,    38,    77,    42,    -1,    39,    77,    40,    41,    77,
       1,    -1,    39,    77,    40,    41,     1,    -1,    39,    77,
      40,     1,    -1,    39,    77,     1,    -1,    39,     1,    -1,
      43,    39,    77,    40,    41,    77,    42,    -1,    43,    39,
      77,    40,    41,    77,    38,    77,    42,    -1,    43,    39,
      77,    40,    41,    77,     1,    -1,    43,    39,    77,    40,
      41,     1,    -1,    43,    39,    77,    40,     1,    -1,    43,
      39,    77,     1,    -1,    43,    39,     1,    -1,    43,     1,
      -1,    33,    77,    33,    -1,    33,    77,     1,    -1,    33,
       1,    -1,    31,    77,    31,    -1,    31,    77,     1,    -1,
      31,     1,    -1,    32,    77,    32,    -1,    32,    77,     1,
      -1,    32,     1,    -1,    29,    79,    29,    -1,    29,    79,
       1,    -1,    29,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   453,   453,   483,   487,   496,   500,   504,   508,   512,
     517,   523,   526,   529,   532,   535,   542,   549,   556,   560,
     564,   568,   572,   578,   582,   589,   592,   598,   604,   607,
     610,   613,   616,   619,   625,   628,   634,   637,   640,   643,
     649,   653,   660,   663,   666,   669,   672,   675,   678,   684,
     687,   690,   693,   699,   702,   708,   711,   717,   720,   726,
     729,   735,   741,   745,   749,   756,   759,   762,   765,   768,
     774,   778,   785,   789,   793,   796,   799,   802,   805,   812,
     816,   823,   827,   831,   835,   839,   843,   847,   851,   855,
     859,   863,   867,   871,   875,   879,   883,   887,   894,   898,
     905,   909,   913,   917,   921,   925,   932,   936,   943,   947,
     953,   957,   961,   964,   967,   970,   973,   979,   982,   985,
     988,   991,   994,   997,  1000,  1006,  1009,  1012,  1018,  1021,
    1024,  1030,  1033,  1036,  1042,  1046,  1049
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BLANKLINE", "LINEBREAK", "LF_H",
  "LF_UL", "UL", "LF_INDENT_UL", "LF_INDENT2_UL", "LF_INDENT3_UL",
  "LF_INDENT4_UL", "LF_INDENT", "LF_INDENT2", "LF_INDENT3", "LF_INDENT4",
  "LF_INDENT5", "LF_Q_H", "LF_Q_UL", "LF_Q_INDENT_UL", "LF_Q_INDENT2_UL",
  "LF_Q_INDENT", "LF_Q_INDENT2", "LF_Q_INDENT3", "LF_Q", "SPECIALCHAR",
  "LESSTHAN", "LARGERTHAN", "TRIPLEBACKTICK", "BACKTICK", "VERTICAL",
  "DOUBLEASTERISK", "DOUBLETILDE", "ASTERISK", "PLUS", "MINUS", "DIGIT",
  "DOT", "SPACE", "LEFTSQUARE", "RIGHTSQUARE", "LEFTBRACKET",
  "RIGHTBRACKET", "EXCLAMATION", "DOUBLEUNDERSCORE", "UNDERSCORE",
  "LEFTPARENTHESIS", "RIGHTPARENTHESIS", "TEXT", "ITALICSTART",
  "LISTSTART", "$accept", "markdownfile", "blocks", "block", "quote_block",
  "header", "paragraph", "unorderlist_0", "codeblock",
  "lf_indents2_codeblock", "quote_header", "quote_unorderlist_0",
  "quote_paragraph", "quote_codeblock", "lines", "unorderlist_1",
  "quote_unorderlist_1", "lf_indents", "lf_indents2", "lf_indents3",
  "lf_indents4", "lf_indents5", "line", "unorderlist_2", "inline_elements",
  "inline_element", "inline_text", "inline_text_item", "inline_code_text",
  "inline_code_text_item", "code_text", "code_text_item", "link", "image",
  "italic", "strong", "linethrough", "inlinecode", 0
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
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    56,    57,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    64,
      65,    65,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    73,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    87,    87,    87,    88,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     0,     3,     1,     2,     3,
       3,     2,     2,     3,     4,     3,     4,     3,     2,     3,
       3,     4,     4,     2,     2,     3,     3,     4,     4,     4,
       1,     2,     2,     3,     3,     4,     4,     4,     2,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     2,     3,     3,     4,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       6,     8,     6,     5,     4,     3,     2,     7,     9,     7,
       6,     5,     4,     3,     2,     3,     3,     2,     3,     3,
       2,     3,     3,     2,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    10,    64,     0,     0,    53,    55,
      57,    59,    61,    81,    82,    83,     0,    84,     0,     0,
       0,    85,    86,    87,    88,    89,     0,    90,    91,    92,
       0,    94,    93,    95,    96,    97,     3,     9,     5,     6,
       7,     8,    17,     0,    54,    56,    58,    60,    40,    63,
      71,    72,    80,    73,    74,    75,    76,    77,    78,     0,
      18,   136,   102,   103,   101,   105,   104,   100,     0,    99,
     130,     0,   133,     0,   127,     0,   116,     0,   124,     0,
       0,     0,     0,     0,    11,    12,    13,    14,     0,     0,
       0,    21,    22,     0,     0,    41,   109,   108,     0,   107,
      62,    70,    79,    16,   135,   134,    98,   129,   128,   132,
     131,   126,   125,   115,     0,   123,     0,     0,    28,     0,
      34,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,    19,    42,    20,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,    23,   106,   114,     0,   122,     0,
      27,    36,    29,    49,    30,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    43,    65,    44,     0,     0,
       0,     0,     0,     0,     0,    25,    24,   113,     0,   121,
       0,    31,    32,    50,    51,     0,    37,    38,    39,    26,
      45,    46,    47,    66,    67,     0,     0,   112,    89,   110,
     120,     0,    52,    68,    69,     0,   119,    89,   117,   111,
       0,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    36,    37,    38,    39,    40,    41,    91,
      84,    85,    86,    87,    42,    92,   126,    43,    44,    45,
      46,    47,    48,   141,    49,    50,    51,    67,    68,    97,
      98,    99,    53,    54,    55,    56,    57,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
     -35,    19,   231,   -35,   -35,   -35,  1591,   713,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   279,   -35,   375,   399,
     423,   -35,   -35,   -35,   -35,   -35,   447,   -35,   -35,   -35,
       9,   -35,   -35,   -35,   -35,   -35,   -35,    37,   -35,   -35,
      14,   152,   713,  1614,   -35,   -35,   -35,   -35,   -35,   758,
     -35,  1637,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   803,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   255,   -35,
     -35,   303,   -35,   327,   -35,   351,   -35,   471,   -35,   495,
    1591,   713,  1614,   713,   -35,   128,    -3,   -10,   713,   713,
     713,   126,    23,  1614,  1614,   -35,   -35,   -35,   848,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   519,   -35,   543,   893,   -35,   938,
     -35,   713,   713,   713,  1614,  1614,    22,   713,  1614,  1614,
    1614,   -35,   -35,   -35,  1614,   713,   713,   713,  1614,  1614,
    1614,    87,   983,  1028,   -35,   -35,   -35,   567,   -35,   591,
     -35,   -35,   -35,   -35,   -35,  1073,  1118,   713,   713,  1614,
     -35,  1163,  1208,  1253,  1298,   -35,   -35,   -35,  1343,  1388,
    1433,   713,   713,  1614,  1614,   -35,   -35,   -35,   615,   -35,
     639,   -35,   -35,   -35,   -35,  1478,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,  1523,  1568,   -35,  1637,   663,
     -35,   687,   -35,   -35,   -35,  1660,   -35,  1637,   663,  1683,
    1706,  1683
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -18,   -26,   -35,
     -35,   -35,     1,   -35,     0,   -34,   -17,    -2,   -35,    -9,
     -30,    55,   -35,   -35,   -35,   -35,   -35,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -93
static const yytype_int16 yytable[] =
{
      52,    71,    73,    75,    52,    52,    59,    69,    60,    77,
      78,   128,   129,   130,    93,   101,    52,    52,    52,     3,
      88,   127,    89,    94,    52,   101,    90,     9,    10,    11,
      12,   135,   136,     0,     0,     0,   137,   138,   139,   140,
      52,   157,     0,    95,   158,   159,     0,    52,    79,   102,
       0,     0,   119,     0,    80,    81,     0,    52,    82,   106,
       0,    83,   116,   142,   143,   134,     0,     0,     0,   102,
       0,   102,     0,   102,     0,   102,     0,    52,    52,    52,
     117,    52,   118,   101,   120,     0,    52,    52,    52,   131,
     132,   133,     0,     0,   155,   156,   171,     0,   161,   162,
     163,   172,   173,   174,   164,     0,     0,     0,   168,   169,
     170,     0,     0,     0,   102,    52,     0,     0,     0,    52,
      52,    52,   152,   153,   154,    52,     0,     0,   160,   185,
     178,     0,     0,    52,    52,    52,   165,   166,   167,     9,
      10,    11,    12,   195,   196,    52,   121,   122,     0,   123,
     124,   125,     0,   145,     0,    52,    52,     0,   183,   184,
       0,     0,     0,   201,     8,     9,    10,    11,    12,    52,
      52,     0,   193,   194,   145,     0,   102,     0,    52,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,    52,   145,   145,   102,
       0,     0,     0,   102,     0,    52,     0,     0,   102,     0,
     145,   145,     0,     0,     0,     0,   145,   145,   145,   145,
       0,     0,     0,   145,   145,   145,     0,     0,     0,     0,
       0,    -2,     4,     0,     5,     0,     6,     7,     0,     0,
     145,     0,     0,     8,     9,    10,    11,    12,   -15,   -15,
     145,   145,   -15,     0,     0,   -15,   104,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      61,    13,    14,    15,   105,    17,    62,    63,    64,    21,
      22,    23,    24,    25,    65,    27,    28,    29,    66,    31,
      32,    33,    34,    35,   107,    13,    14,    15,     0,    17,
      62,    63,    64,    21,    22,    23,    24,    25,    65,    27,
      28,    29,    66,    31,    32,    33,    34,    35,   109,    13,
      14,    15,     0,    17,   108,     0,     0,    21,    22,    23,
      24,    25,     0,    27,    28,    29,     0,    31,    32,    33,
      34,    35,   111,    13,    14,    15,     0,    17,     0,   110,
       0,    21,    22,    23,    24,    25,     0,    27,    28,    29,
       0,    31,    32,    33,    34,    35,    70,    13,    14,    15,
       0,    17,     0,     0,   112,    21,    22,    23,    24,    25,
       0,    27,    28,    29,     0,    31,    32,    33,    34,    35,
      72,    13,    14,    15,     0,    17,     0,     0,     0,    21,
      22,    23,    24,    25,     0,    27,    28,    29,     0,    31,
      32,    33,    34,    35,    74,    13,    14,    15,     0,    17,
       0,     0,     0,    21,    22,    23,    24,    25,     0,    27,
      28,    29,     0,    31,    32,    33,    34,    35,    76,    13,
      14,    15,     0,    17,     0,     0,     0,    21,    22,    23,
      24,    25,     0,    27,    28,    29,     0,    31,    32,    33,
      34,    35,   113,    13,    14,    15,     0,    17,     0,     0,
       0,    21,    22,    23,    24,    25,     0,    27,    28,    29,
       0,    31,    32,    33,    34,    35,   115,    13,    14,    15,
       0,    17,     0,     0,     0,    21,    22,    23,    24,    25,
       0,   114,    28,    29,     0,    31,    32,    33,    34,    35,
     146,    13,    14,    15,     0,    17,     0,     0,     0,    21,
      22,    23,    24,    25,     0,    27,    28,    29,     0,    31,
      32,    33,    34,    35,   148,   -90,   -90,   -90,     0,   -90,
       0,     0,     0,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     147,   -90,     0,   -90,   -90,   -90,   -90,   -90,   177,    13,
      14,    15,     0,    17,     0,     0,     0,    21,    22,    23,
      24,    25,     0,   149,    28,    29,     0,    31,    32,    33,
      34,    35,   179,    13,    14,    15,     0,    17,     0,     0,
       0,    21,    22,    23,    24,    25,     0,    27,    28,    29,
       0,    31,    32,    33,    34,    35,   197,   -90,   -90,   -90,
       0,   -90,     0,     0,     0,   -90,   -90,   -90,   -90,   -90,
       0,   -90,   180,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     200,    13,    14,    15,     0,    17,     0,     0,     0,    21,
      22,    23,    24,   198,     0,    27,    28,   199,     0,    31,
      32,    33,    34,    35,   -92,    13,    14,    15,     0,    17,
       0,     0,     0,    21,    22,    23,    24,    25,     0,    27,
      28,    29,     0,    31,    32,    33,    34,    35,   206,   -92,
     -92,   -92,     0,   -92,     0,     0,     0,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,     0,    13,    14,    15,     5,    17,     0,     0,
       0,    21,    22,    23,    24,   207,     0,    27,    28,   208,
       0,    31,    32,    33,    34,    35,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   144,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   202,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    96,    17,    62,    63,    64,    21,    22,    23,
      24,    25,    65,    27,    28,    29,    66,    31,    32,    33,
      34,    35,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    96,    17,    62,
      63,    64,    21,    22,    23,    24,    25,    65,    27,    28,
      29,    66,    31,    32,    33,    34,    35,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      13,    14,    15,    96,    17,    62,    63,    64,    21,    22,
      23,    24,    25,    65,    27,    28,    29,    66,    31,    32,
      33,    34,    35,    13,    14,    15,     0,    17,     0,     0,
       0,    21,    22,    23,    24,    25,     0,    27,    28,    29,
       0,    31,    32,    33,    34,    35,    13,    14,    15,     0,
      17,     0,     0,     0,    21,    22,    23,    24,    25,     0,
      27,    28,   209,     0,    31,    32,    33,    34,    35,   -92,
     -92,   -92,     0,   -92,     0,     0,     0,   -92,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,    13,    14,    15,     0,    17,     0,     0,     0,
      21,    22,    23,    24,    25,     0,    27,    28,   211,     0,
      31,    32,    33,    34,    35
};

static const yytype_int16 yycheck[] =
{
       2,    18,    19,    20,     6,     7,     6,    16,     7,    26,
       1,    21,    22,    23,    40,    49,    18,    19,    20,     0,
       6,    24,     8,    41,    26,    59,    12,    13,    14,    15,
      16,     8,     9,    -1,    -1,    -1,    13,    14,    15,    16,
      42,    19,    -1,    42,    22,    23,    -1,    49,    39,    51,
      -1,    -1,    82,    -1,    17,    18,    -1,    59,    21,    68,
      -1,    24,    79,    93,    94,    91,    -1,    -1,    -1,    71,
      -1,    73,    -1,    75,    -1,    77,    -1,    79,    80,    81,
      80,    83,    81,   117,    83,    -1,    88,    89,    90,    88,
      89,    90,    -1,    -1,   124,   125,     9,    -1,   128,   129,
     130,    14,    15,    16,   134,    -1,    -1,    -1,   138,   139,
     140,    -1,    -1,    -1,   116,   117,    -1,    -1,    -1,   121,
     122,   123,   121,   122,   123,   127,    -1,    -1,   127,   159,
     147,    -1,    -1,   135,   136,   137,   135,   136,   137,    13,
      14,    15,    16,   173,   174,   147,    18,    19,    -1,    21,
      22,    23,    -1,    98,    -1,   157,   158,    -1,   157,   158,
      -1,    -1,    -1,   180,    12,    13,    14,    15,    16,   171,
     172,    -1,   171,   172,   119,    -1,   178,    -1,   180,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,    -1,    -1,    -1,    -1,    -1,   198,   142,   143,   201,
      -1,    -1,    -1,   205,    -1,   207,    -1,    -1,   210,    -1,
     155,   156,    -1,    -1,    -1,    -1,   161,   162,   163,   164,
      -1,    -1,    -1,   168,   169,   170,    -1,    -1,    -1,    -1,
      -1,     0,     1,    -1,     3,    -1,     5,     6,    -1,    -1,
     185,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
     195,   196,    21,    -1,    -1,    24,     1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     1,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     1,    26,
      27,    28,    -1,    30,    31,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,     1,    26,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,     1,    26,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
       1,    26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,     1,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,     1,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,     1,    26,    27,    28,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,     1,    26,    27,    28,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
       1,    26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,     1,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,     1,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,     1,    26,    27,    28,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,     1,    26,    27,    28,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
       1,    26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,     1,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,     1,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    26,    27,    28,     3,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    26,    27,    28,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,    26,    27,    28,    -1,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    -1,    44,    45,    46,    47,    48,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    26,    27,    28,    -1,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    -1,
      44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,     0,     1,     3,     5,     6,    12,    13,
      14,    15,    16,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    54,    55,    56,    57,
      58,    59,    65,    68,    69,    70,    71,    72,    73,    75,
      76,    77,    78,    83,    84,    85,    86,    87,    88,    75,
      73,     1,    31,    32,    33,    39,    43,    78,    79,    80,
       1,    77,     1,    77,     1,    77,     1,    77,     1,    39,
      17,    18,    21,    24,    61,    62,    63,    64,     6,     8,
      12,    60,    66,    69,    68,    73,    29,    80,    81,    82,
       4,    76,    78,     4,     1,    29,    80,     1,    31,     1,
      32,     1,    33,     1,    40,     1,    77,    75,    73,    81,
      73,    18,    19,    21,    22,    23,    67,    24,    21,    22,
      23,    73,    73,    73,    69,     8,     9,    13,    14,    15,
      16,    74,    81,    81,     4,    82,     1,    41,     1,    40,
       4,     4,    73,    73,    73,    81,    81,    19,    22,    23,
      73,    81,    81,    81,    81,    73,    73,    73,    81,    81,
      81,     9,    14,    15,    16,     4,     4,     1,    77,     1,
      41,     4,     4,    73,    73,    81,     4,     4,     4,     4,
       4,     4,     4,    73,    73,    81,    81,     1,    38,    42,
       1,    77,     4,     4,     4,    77,     1,    38,    42,    42,
      77,    42
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
#line 453 "markdown-new.y"
    { 
            /**
             * 1. _root_node == $1
             */

            show_rule("markdownfile: blocks");

            fprintf(stdout, "==================================\n");
            fprintf(stdout, "%s", (yyvsp[(1) - (1)].text));
            fprintf(stdout, "==================================\n");

            /**
            parse_doc();
            is_doc_parsed = 1;
            */
        ;}
    break;

  case 3:
#line 483 "markdown-new.y"
    {
            show_rule("blocks: blocks block");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 4:
#line 487 "markdown-new.y"
    {
            show_rule("blocks: NULL");
            (yyval.text) = "";
        ;}
    break;

  case 5:
#line 496 "markdown-new.y"
    {
            show_rule("block: header");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 6:
#line 500 "markdown-new.y"
    {
            show_rule("block: paragraph");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 7:
#line 504 "markdown-new.y"
    {
            show_rule("block: unorderlist_0");
            (yyval.text) = str_format("<ul>%s</ul>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 8:
#line 508 "markdown-new.y"
    {
            show_rule("block: codeblock");
            (yyval.text) = str_format("<pre><code>%s</code></pre>", (yyvsp[(1) - (1)].text));
        ;}
    break;

  case 9:
#line 512 "markdown-new.y"
    {
            show_rule("block: quote_block");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 10:
#line 517 "markdown-new.y"
    {
            show_rule("block: error");
        ;}
    break;

  case 11:
#line 523 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_header");
        ;}
    break;

  case 12:
#line 526 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_unorderlist_0");
        ;}
    break;

  case 13:
#line 529 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_paragraph");
        ;}
    break;

  case 14:
#line 532 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_codeblock");
        ;}
    break;

  case 15:
#line 535 "markdown-new.y"
    {
            show_rule("quote_block: NULL");
            (yyval.text) = "";
        ;}
    break;

  case 16:
#line 542 "markdown-new.y"
    {              
            show_rule("header: LF_H inline_elements LINEBREAK");
            (yyval.text) = str_format("<h?>%s</h?>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 17:
#line 549 "markdown-new.y"
    {
            show_rule("paragraph: lines");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 18:
#line 556 "markdown-new.y"
    {
            show_rule("unorderlist_0: LF_UL line");
            (yyval.text) = str_format("<li>%s</li>", (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 19:
#line 560 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
            (yyval.text) = str_format("%s<li>%s</li>", (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 20:
#line 564 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
            (yyval.text) = str_format("%s%s</li>", str_replace_right((yyvsp[(1) - (3)].text),"</li>", ""), (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 21:
#line 568 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 lf_indents2_codeblock");
            (yyval.text) = str_format("%s<pre><code>%s</code></pre></li>", str_replace_right((yyvsp[(1) - (2)].text),"</li>", ""), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 22:
#line 572 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
        ;}
    break;

  case 23:
#line 578 "markdown-new.y"
    {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s", str_trim_left_n_lf_indents((yyvsp[(1) - (3)].text), 1), (yyvsp[(2) - (3)].text), (yyvsp[(3) - (3)].text));
        ;}
    break;

  case 24:
#line 582 "markdown-new.y"
    {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
            (yyval.text) = str_format("%s%s%s%s", (yyvsp[(1) - (4)].text), str_trim_left_n_lf_indents((yyvsp[(2) - (4)].text), 1), (yyvsp[(3) - (4)].text), (yyvsp[(4) - (4)].text));
        ;}
    break;

  case 25:
#line 589 "markdown-new.y"
    {
            show_rule("lf_indents2_codeblock: lf_indents2 code_text LINEBREAK");
        ;}
    break;

  case 26:
#line 592 "markdown-new.y"
    {
            show_rule("lf_indents2_codeblock: lf_indents2_codeblock lf_indents2 code_text LINEBREAK");
        ;}
    break;

  case 27:
#line 598 "markdown-new.y"
    {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
        ;}
    break;

  case 28:
#line 604 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
        ;}
    break;

  case 29:
#line 607 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
        ;}
    break;

  case 30:
#line 610 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
        ;}
    break;

  case 31:
#line 613 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 32:
#line 616 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 33:
#line 619 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
        ;}
    break;

  case 34:
#line 625 "markdown-new.y"
    {
            show_rule("quote_paragraph: LF_Q line");
        ;}
    break;

  case 35:
#line 628 "markdown-new.y"
    {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
        ;}
    break;

  case 36:
#line 634 "markdown-new.y"
    {
            show_rule("quote_codeblock: LF_Q_INDENT code_text LINEBREAK");
        ;}
    break;

  case 37:
#line 637 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT code_text LINEBREAK");
        ;}
    break;

  case 38:
#line 640 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 39:
#line 643 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 40:
#line 649 "markdown-new.y"
    {
            show_rule("lines: line");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 41:
#line 653 "markdown-new.y"
    {
            show_rule("lines: lines line");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 42:
#line 660 "markdown-new.y"
    {
            show_rule("unorderlist_1: LF_INDENT_UL line");
        ;}
    break;

  case 43:
#line 663 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
        ;}
    break;

  case 44:
#line 666 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
        ;}
    break;

  case 45:
#line 669 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 46:
#line 672 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT4 code_text LINEBREAK");
        ;}
    break;

  case 47:
#line 675 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT5 code_text LINEBREAK");
        ;}
    break;

  case 48:
#line 678 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
        ;}
    break;

  case 49:
#line 684 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
        ;}
    break;

  case 50:
#line 687 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
        ;}
    break;

  case 51:
#line 690 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
        ;}
    break;

  case 52:
#line 693 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 53:
#line 699 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT");
        ;}
    break;

  case 54:
#line 702 "markdown-new.y"
    {
            show_rule("lf_indents: lf_indents2");
        ;}
    break;

  case 55:
#line 708 "markdown-new.y"
    {
            show_rule("lf_indents2: LF_INDENT2");
        ;}
    break;

  case 56:
#line 711 "markdown-new.y"
    {
            show_rule("lf_indents2: lf_indents3");
        ;}
    break;

  case 57:
#line 717 "markdown-new.y"
    {
            show_rule("lf_indents3: LF_INDENT3");
        ;}
    break;

  case 58:
#line 720 "markdown-new.y"
    {
            show_rule("lf_indents3: lf_indents4");
        ;}
    break;

  case 59:
#line 726 "markdown-new.y"
    {
            show_rule("lf_indents4: LF_INDENT4");
        ;}
    break;

  case 60:
#line 729 "markdown-new.y"
    {
            show_rule("lf_indents4: lf_indents5");
        ;}
    break;

  case 61:
#line 735 "markdown-new.y"
    {
            show_rule("lf_indents5: LF_INDENT5");
        ;}
    break;

  case 62:
#line 741 "markdown-new.y"
    {
            show_rule("line: inline_elements LINEBREAK");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 63:
#line 745 "markdown-new.y"
    {
            show_rule("line: inline_elements");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 64:
#line 749 "markdown-new.y"
    {
            show_rule("line: BLANKLINE");
            (yyval.text) = "\n";
        ;}
    break;

  case 65:
#line 756 "markdown-new.y"
    {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
        ;}
    break;

  case 66:
#line 759 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
        ;}
    break;

  case 67:
#line 762 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
        ;}
    break;

  case 68:
#line 765 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT4 code_text LINEBREAK");
        ;}
    break;

  case 69:
#line 768 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT5 code_text LINEBREAK");
        ;}
    break;

  case 70:
#line 774 "markdown-new.y"
    {
            show_rule("inline_elements: inline_elements inline_element");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 71:
#line 778 "markdown-new.y"
    {
            show_rule("inline_elements: inline_element");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 72:
#line 785 "markdown-new.y"
    {
            show_rule("inline_element: inline_text");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 73:
#line 789 "markdown-new.y"
    {
            show_rule("inline_element: link");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 74:
#line 793 "markdown-new.y"
    {
            show_rule("inline_element: image");
        ;}
    break;

  case 75:
#line 796 "markdown-new.y"
    {
            show_rule("inline_element: italic");
        ;}
    break;

  case 76:
#line 799 "markdown-new.y"
    {
            show_rule("inline_element: strong");
        ;}
    break;

  case 77:
#line 802 "markdown-new.y"
    {
            show_rule("inline_element: linethrough");
        ;}
    break;

  case 78:
#line 805 "markdown-new.y"
    {
            show_rule("inline_element: inlinecode");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 79:
#line 812 "markdown-new.y"
    {
            show_rule("inline_text: inline_text inline_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 80:
#line 816 "markdown-new.y"
    {
            show_rule("inline_text: inline_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 81:
#line 823 "markdown-new.y"
    {
            show_rule("inline_text_item: LESSTHAN");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 82:
#line 827 "markdown-new.y"
    {
            show_rule("inline_text_item: LARGERTHAN");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 83:
#line 831 "markdown-new.y"
    {
            show_rule("inline_text_item: TRIPLEBACKTICK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 84:
#line 835 "markdown-new.y"
    {
            show_rule("inline_text_item: VERTICAL");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 85:
#line 839 "markdown-new.y"
    {
            show_rule("inline_text_item: PLUS");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 86:
#line 843 "markdown-new.y"
    {
            show_rule("inline_text_item: MINUS");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 87:
#line 847 "markdown-new.y"
    {
            show_rule("inline_text_item: DIGIT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 88:
#line 851 "markdown-new.y"
    {
            show_rule("inline_text_item: DOT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 89:
#line 855 "markdown-new.y"
    {
            show_rule("inline_text_item: SPACE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 90:
#line 859 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTSQUARE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 91:
#line 863 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTBRACKET");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 92:
#line 867 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTBRACKET");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 93:
#line 871 "markdown-new.y"
    {
            show_rule("inline_text_item: UNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 94:
#line 875 "markdown-new.y"
    {
            show_rule("inline_text_item: DOUBLEUNDERSCORE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 95:
#line 879 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTPARENTHESIS");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 96:
#line 883 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTPARENTHESIS");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 97:
#line 887 "markdown-new.y"
    {
            show_rule("inline_text_item: TEXT");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 98:
#line 894 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 99:
#line 898 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 100:
#line 905 "markdown-new.y"
    {
            show_rule("inline_code_text_item: inline_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 101:
#line 909 "markdown-new.y"
    {
            show_rule("inline_code_text_item: ASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 102:
#line 913 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 103:
#line 917 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLETILDE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 104:
#line 921 "markdown-new.y"
    {
            show_rule("inline_text_item: EXCLAMATION");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 105:
#line 925 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTSQUARE");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 106:
#line 932 "markdown-new.y"
    {
            show_rule("code_text: code_text code_text_item");
            (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text));
        ;}
    break;

  case 107:
#line 936 "markdown-new.y"
    {
            show_rule("code_text: code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 108:
#line 943 "markdown-new.y"
    {
            show_rule("code_text_item: inline_code_text_item");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 109:
#line 947 "markdown-new.y"
    {
            show_rule("code_text_item: BACKTICK");
            (yyval.text) = (yyvsp[(1) - (1)].text);
        ;}
    break;

  case 110:
#line 953 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            (yyval.text) = str_format("<a href=\"%s\">%s</a>", (yyvsp[(5) - (6)].text), (yyvsp[(2) - (6)].text));
        ;}
    break;

  case 111:
#line 957 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
            (yyval.text) = str_format("<a href=\"%s\" title=\"%s\">%s</a>", (yyvsp[(5) - (8)].text), (yyvsp[(7) - (8)].text), (yyvsp[(2) - (8)].text));
        ;}
    break;

  case 112:
#line 961 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        ;}
    break;

  case 113:
#line 964 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 114:
#line 967 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE error");
        ;}
    break;

  case 115:
#line 970 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text error");
        ;}
    break;

  case 116:
#line 973 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE error");
        ;}
    break;

  case 117:
#line 979 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 118:
#line 982 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 119:
#line 985 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        ;}
    break;

  case 120:
#line 988 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 121:
#line 991 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error");
        ;}
    break;

  case 122:
#line 994 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text error");
        ;}
    break;

  case 123:
#line 997 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE error");
        ;}
    break;

  case 124:
#line 1000 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION error");
        ;}
    break;

  case 125:
#line 1006 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text ASTERISK %prec ITALICSTART");
        ;}
    break;

  case 126:
#line 1009 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text error %prec ITALICSTART");
        ;}
    break;

  case 127:
#line 1012 "markdown-new.y"
    {
            show_rule("italic: ASTERISK error %prec ITALICSTART");
        ;}
    break;

  case 128:
#line 1018 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
        ;}
    break;

  case 129:
#line 1021 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        ;}
    break;

  case 130:
#line 1024 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK error");
        ;}
    break;

  case 131:
#line 1030 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
        ;}
    break;

  case 132:
#line 1033 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        ;}
    break;

  case 133:
#line 1036 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE error");
        ;}
    break;

  case 134:
#line 1042 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
            (yyval.text) = str_format("<pre>%s</pre>", (yyvsp[(2) - (3)].text));
        ;}
    break;

  case 135:
#line 1046 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        ;}
    break;

  case 136:
#line 1049 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK error");
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3286 "markdown-new.y.c"
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


#line 1054 "markdown-new.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


