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
        "unorderlist_0: unorderlist_0 LF_INDENT2 code_text LINEBREAK", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT3 code_text LINEBREAK", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT4 code_text LINEBREAK", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT5 code_text LINEBREAK", "2",
        "unorderlist_0: unorderlist_0 unorderlist_1", "2",

        "codeblock: lf_indents code_text LINEBREAK", "2",
        "codeblock: codeblock lf_indents code_text LINEBREAK", "2",

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
            "lf_indents: LF_INDENT2", "3",
            "lf_indents: LF_INDENT3", "3",
            "lf_indents: LF_INDENT4", "3",
            "lf_indents: LF_INDENT5", "3",

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
#line 292 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 193 of yacc.c.  */
#line 491 "markdown-new.y.c"
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
#line 516 "markdown-new.y.c"

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
#define YYLAST   1900

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  213

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
      47,    51,    56,    61,    66,    71,    74,    78,    83,    87,
      90,    94,    98,   103,   108,   111,   114,   118,   122,   127,
     132,   137,   139,   142,   145,   149,   153,   158,   163,   168,
     171,   174,   178,   182,   187,   189,   191,   193,   195,   197,
     200,   202,   204,   207,   211,   215,   220,   225,   228,   230,
     232,   234,   236,   238,   240,   242,   244,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   281,   283,   286,   288,   290,   292,
     294,   296,   298,   300,   303,   305,   307,   309,   316,   325,
     332,   338,   343,   347,   350,   358,   368,   376,   383,   389,
     394,   398,   401,   405,   409,   412,   416,   420,   423,   427,
     431,   434,   438,   442
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    53,    54,    -1,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    55,    -1,     1,
      -1,    55,    60,    -1,    55,    61,    -1,    55,    62,    -1,
      55,    63,    -1,    -1,     5,    70,     4,    -1,    64,    -1,
       6,    68,    -1,    58,     6,    68,    -1,    58,    12,    68,
      -1,    58,    13,    76,     4,    -1,    58,    14,    76,     4,
      -1,    58,    15,    76,     4,    -1,    58,    16,    76,     4,
      -1,    58,    65,    -1,    67,    76,     4,    -1,    59,    67,
      76,     4,    -1,    17,    70,     4,    -1,    18,    68,    -1,
      61,    18,    68,    -1,    61,    21,    68,    -1,    61,    22,
      76,     4,    -1,    61,    23,    76,     4,    -1,    61,    66,
      -1,    24,    68,    -1,    62,    24,    68,    -1,    21,    76,
       4,    -1,    63,    21,    76,     4,    -1,    63,    22,    76,
       4,    -1,    63,    23,    76,     4,    -1,    68,    -1,    64,
      68,    -1,     8,    68,    -1,    65,     8,    68,    -1,    65,
      13,    68,    -1,    65,    14,    76,     4,    -1,    65,    15,
      76,     4,    -1,    65,    16,    76,     4,    -1,    65,    69,
      -1,    19,    68,    -1,    66,    19,    68,    -1,    66,    22,
      68,    -1,    66,    23,    76,     4,    -1,    12,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    70,     4,    -1,
      70,    -1,     3,    -1,     9,    68,    -1,    69,     9,    68,
      -1,    69,    14,    68,    -1,    69,    15,    76,     4,    -1,
      69,    16,    76,     4,    -1,    70,    71,    -1,    71,    -1,
      72,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    72,    73,    -1,    73,    -1,    26,
      -1,    27,    -1,    28,    -1,    30,    -1,    34,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    40,    -1,    41,
      -1,    42,    -1,    45,    -1,    44,    -1,    46,    -1,    47,
      -1,    48,    -1,    74,    75,    -1,    75,    -1,    73,    -1,
      33,    -1,    31,    -1,    32,    -1,    43,    -1,    39,    -1,
      76,    77,    -1,    77,    -1,    75,    -1,    29,    -1,    39,
      72,    40,    41,    72,    42,    -1,    39,    72,    40,    41,
      72,    38,    72,    42,    -1,    39,    72,    40,    41,    72,
       1,    -1,    39,    72,    40,    41,     1,    -1,    39,    72,
      40,     1,    -1,    39,    72,     1,    -1,    39,     1,    -1,
      43,    39,    72,    40,    41,    72,    42,    -1,    43,    39,
      72,    40,    41,    72,    38,    72,    42,    -1,    43,    39,
      72,    40,    41,    72,     1,    -1,    43,    39,    72,    40,
      41,     1,    -1,    43,    39,    72,    40,     1,    -1,    43,
      39,    72,     1,    -1,    43,    39,     1,    -1,    43,     1,
      -1,    33,    72,    33,    -1,    33,    72,     1,    -1,    33,
       1,    -1,    31,    72,    31,    -1,    31,    72,     1,    -1,
      31,     1,    -1,    32,    72,    32,    -1,    32,    72,     1,
      -1,    32,     1,    -1,    29,    74,    29,    -1,    29,    74,
       1,    -1,    29,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   404,   404,   428,   431,   439,   442,   445,   448,   451,
     455,   461,   464,   467,   470,   473,   479,   485,   491,   494,
     497,   500,   503,   506,   509,   512,   518,   521,   527,   533,
     536,   539,   542,   545,   548,   554,   557,   563,   566,   569,
     572,   578,   581,   587,   590,   593,   596,   599,   602,   605,
     611,   614,   617,   620,   626,   629,   632,   635,   638,   644,
     647,   650,   656,   659,   662,   665,   668,   674,   677,   683,
     686,   689,   692,   695,   698,   701,   707,   710,   716,   719,
     722,   725,   728,   731,   734,   737,   740,   743,   746,   749,
     752,   755,   758,   761,   764,   770,   773,   779,   782,   785,
     788,   791,   794,   800,   803,   809,   812,   817,   820,   823,
     826,   829,   832,   835,   841,   844,   847,   850,   853,   856,
     859,   862,   868,   871,   874,   880,   883,   886,   892,   895,
     898,   904,   907,   910
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
  "header", "paragraph", "unorderlist_0", "codeblock", "quote_header",
  "quote_unorderlist_0", "quote_paragraph", "quote_codeblock", "lines",
  "unorderlist_1", "quote_unorderlist_1", "lf_indents", "line",
  "unorderlist_2", "inline_elements", "inline_element", "inline_text",
  "inline_text_item", "inline_code_text", "inline_code_text_item",
  "code_text", "code_text_item", "link", "image", "italic", "strong",
  "linethrough", "inlinecode", 0
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
      58,    58,    58,    58,    58,    58,    59,    59,    60,    61,
      61,    61,    61,    61,    61,    62,    62,    63,    63,    63,
      63,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    83,    83,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     0,     3,     1,     2,     3,
       3,     4,     4,     4,     4,     2,     3,     4,     3,     2,
       3,     3,     4,     4,     2,     2,     3,     3,     4,     4,
       4,     1,     2,     2,     3,     3,     4,     4,     4,     2,
       2,     3,     3,     4,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     3,     3,     4,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     6,     8,     6,
       5,     4,     3,     2,     7,     9,     7,     6,     5,     4,
       3,     2,     3,     3,     2,     3,     3,     2,     3,     3,
       2,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    10,    61,     0,     0,    54,    55,
      56,    57,    58,    78,    79,    80,     0,    81,     0,     0,
       0,    82,    83,    84,    85,    86,     0,    87,    88,    89,
       0,    91,    90,    92,    93,    94,     3,     9,     5,     6,
       7,     8,    17,     0,    41,    60,    68,    69,    77,    70,
      71,    72,    73,    74,    75,     0,    18,   133,    99,   100,
      98,   102,   101,    97,     0,    96,   127,     0,   130,     0,
     124,     0,   113,     0,   121,     0,     0,     0,     0,     0,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    42,   106,   105,     0,   104,    59,    67,
      76,    16,   132,   131,    95,   126,   125,   129,   128,   123,
     122,   112,     0,   120,     0,     0,    29,     0,    35,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,    19,
      43,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    26,   103,   111,     0,   119,     0,
      28,    37,    30,    50,    31,     0,     0,     0,     0,     0,
      36,     0,     0,     0,    21,    22,    23,    24,    44,    62,
      45,     0,     0,     0,     0,     0,     0,     0,    27,   110,
       0,   118,     0,    32,    33,    51,    52,     0,    38,    39,
      40,    46,    47,    48,    63,    64,     0,     0,   109,    86,
     107,   117,     0,    53,    65,    66,     0,   116,    86,   114,
     108,     0,   115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    36,    37,    38,    39,    40,    41,    80,
      81,    82,    83,    42,    91,   124,    43,    44,   142,    45,
      46,    47,    63,    64,    95,    96,    97,    49,    50,    51,
      52,    53,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -36
static const yytype_int16 yypact[] =
{
     -36,    32,   287,   -36,   -36,   -36,  1737,   769,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   335,   -36,   431,   455,
     479,   -36,   -36,   -36,   -36,   -36,   503,   -36,   -36,   -36,
       7,   -36,   -36,   -36,   -36,   -36,   -36,    17,   -36,   -36,
      15,    -1,   769,  1760,   -36,   814,   -36,  1783,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   859,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   311,   -36,   -36,   359,   -36,   383,
     -36,   407,   -36,   527,   -36,   551,  1737,   769,  1760,   769,
     -36,    81,     9,    29,   769,   769,   769,  1760,  1760,  1760,
    1760,    48,  1760,   -36,   -36,   -36,   904,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   575,   -36,   599,   949,   -36,   994,   -36,   769,
     769,   769,  1760,  1760,     3,   769,  1760,  1760,  1760,   -36,
     -36,   -36,  1039,  1084,  1129,  1174,   769,   769,   769,  1760,
    1760,  1760,    33,  1219,   -36,   -36,   -36,   623,   -36,   647,
     -36,   -36,   -36,   -36,   -36,  1264,  1309,   769,   769,  1760,
     -36,  1354,  1399,  1444,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,  1489,  1534,  1579,   769,   769,  1760,  1760,   -36,   -36,
     671,   -36,   695,   -36,   -36,   -36,   -36,  1624,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,  1669,  1714,   -36,  1783,
     719,   -36,   743,   -36,   -36,   -36,  1806,   -36,  1783,   719,
    1829,  1852,  1829
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,    -5,    12,   -36,     0,
     -35,   -17,    -2,   -36,    -9,   130,    78,   -36,   -36,   -36,
     -36,   -36,   -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -90
static const yytype_int16 yytable[] =
{
      48,    67,    69,    71,    48,    48,    55,    65,    74,    73,
      99,     8,     9,    10,    11,    12,    48,    48,    48,    56,
      99,    84,   157,    85,    48,   158,   159,    86,    87,    88,
      89,    90,     3,   125,    76,    77,    92,     0,    78,     0,
      48,    79,   174,    48,     0,   100,    75,   175,   176,   177,
     126,   127,   128,    48,    93,   104,   136,   137,   114,     0,
       0,   138,   139,   140,   141,   100,     0,   100,     0,   100,
       0,   100,     0,    48,    48,    48,   115,    48,     0,     0,
      99,     0,    48,    48,    48,     0,     0,     0,     0,   116,
       0,   118,     0,     0,     0,     0,   129,   130,   131,   119,
     120,     0,   121,   122,   123,     0,     0,     0,     0,     0,
       0,     0,   100,    48,     0,     0,     0,    48,    48,    48,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
     180,   152,   153,   154,    48,    48,    48,   160,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,   168,   169,
     170,     0,     0,     0,     0,    48,    48,     0,     0,     0,
       0,     0,     0,     0,     0,   202,     0,     0,     0,   185,
     186,     0,    48,    48,   145,     0,     0,     0,   100,     0,
      48,     0,   206,     0,     0,     0,   194,   195,     0,     0,
       0,   211,     0,     0,     0,   145,     0,    48,     0,     0,
     100,     0,     0,     0,   100,     0,    48,     0,   117,   100,
     145,   145,   145,   145,     0,     0,     0,   132,   133,   134,
     135,   145,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,   145,     0,     0,     0,     0,   145,
     145,   145,     0,     0,     0,     0,     0,     0,     0,   145,
     145,   145,   155,   156,     0,     0,   161,   162,   163,     0,
       0,     0,     0,     0,     0,   145,     0,     0,     0,   171,
     172,   173,     0,     0,   145,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -2,     4,   187,
       5,     0,     6,     7,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,   -15,   -15,   196,   197,   -15,     0,
       0,   -15,   102,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    57,    13,    14,    15,
     103,    17,    58,    59,    60,    21,    22,    23,    24,    25,
      61,    27,    28,    29,    62,    31,    32,    33,    34,    35,
     105,    13,    14,    15,     0,    17,    58,    59,    60,    21,
      22,    23,    24,    25,    61,    27,    28,    29,    62,    31,
      32,    33,    34,    35,   107,    13,    14,    15,     0,    17,
     106,     0,     0,    21,    22,    23,    24,    25,     0,    27,
      28,    29,     0,    31,    32,    33,    34,    35,   109,    13,
      14,    15,     0,    17,     0,   108,     0,    21,    22,    23,
      24,    25,     0,    27,    28,    29,     0,    31,    32,    33,
      34,    35,    66,    13,    14,    15,     0,    17,     0,     0,
     110,    21,    22,    23,    24,    25,     0,    27,    28,    29,
       0,    31,    32,    33,    34,    35,    68,    13,    14,    15,
       0,    17,     0,     0,     0,    21,    22,    23,    24,    25,
       0,    27,    28,    29,     0,    31,    32,    33,    34,    35,
      70,    13,    14,    15,     0,    17,     0,     0,     0,    21,
      22,    23,    24,    25,     0,    27,    28,    29,     0,    31,
      32,    33,    34,    35,    72,    13,    14,    15,     0,    17,
       0,     0,     0,    21,    22,    23,    24,    25,     0,    27,
      28,    29,     0,    31,    32,    33,    34,    35,   111,    13,
      14,    15,     0,    17,     0,     0,     0,    21,    22,    23,
      24,    25,     0,    27,    28,    29,     0,    31,    32,    33,
      34,    35,   113,    13,    14,    15,     0,    17,     0,     0,
       0,    21,    22,    23,    24,    25,     0,   112,    28,    29,
       0,    31,    32,    33,    34,    35,   146,    13,    14,    15,
       0,    17,     0,     0,     0,    21,    22,    23,    24,    25,
       0,    27,    28,    29,     0,    31,    32,    33,    34,    35,
     148,   -87,   -87,   -87,     0,   -87,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   147,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   179,    13,    14,    15,     0,    17,
       0,     0,     0,    21,    22,    23,    24,    25,     0,   149,
      28,    29,     0,    31,    32,    33,    34,    35,   181,    13,
      14,    15,     0,    17,     0,     0,     0,    21,    22,    23,
      24,    25,     0,    27,    28,    29,     0,    31,    32,    33,
      34,    35,   198,   -87,   -87,   -87,     0,   -87,     0,     0,
       0,   -87,   -87,   -87,   -87,   -87,     0,   -87,   182,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   201,    13,    14,    15,
       0,    17,     0,     0,     0,    21,    22,    23,    24,   199,
       0,    27,    28,   200,     0,    31,    32,    33,    34,    35,
     -89,    13,    14,    15,     0,    17,     0,     0,     0,    21,
      22,    23,    24,    25,     0,    27,    28,    29,     0,    31,
      32,    33,    34,    35,   207,   -89,   -89,   -89,     0,   -89,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,     0,    13,
      14,    15,     5,    17,     0,     0,     0,    21,    22,    23,
      24,   208,     0,    27,    28,   209,     0,    31,    32,    33,
      34,    35,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   150,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   166,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   178,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   183,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   184,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   203,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    94,    17,
      58,    59,    60,    21,    22,    23,    24,    25,    61,    27,
      28,    29,    62,    31,    32,    33,    34,    35,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    94,    17,    58,    59,    60,    21,    22,
      23,    24,    25,    61,    27,    28,    29,    62,    31,    32,
      33,    34,    35,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    13,    14,    15,    94,
      17,    58,    59,    60,    21,    22,    23,    24,    25,    61,
      27,    28,    29,    62,    31,    32,    33,    34,    35,    13,
      14,    15,     0,    17,     0,     0,     0,    21,    22,    23,
      24,    25,     0,    27,    28,    29,     0,    31,    32,    33,
      34,    35,    13,    14,    15,     0,    17,     0,     0,     0,
      21,    22,    23,    24,    25,     0,    27,    28,   210,     0,
      31,    32,    33,    34,    35,   -89,   -89,   -89,     0,   -89,
       0,     0,     0,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,    13,    14,
      15,     0,    17,     0,     0,     0,    21,    22,    23,    24,
      25,     0,    27,    28,   212,     0,    31,    32,    33,    34,
      35
};

static const yytype_int16 yycheck[] =
{
       2,    18,    19,    20,     6,     7,     6,    16,     1,    26,
      45,    12,    13,    14,    15,    16,    18,    19,    20,     7,
      55,     6,    19,     8,    26,    22,    23,    12,    13,    14,
      15,    16,     0,    24,    17,    18,    41,    -1,    21,    -1,
      42,    24,     9,    45,    -1,    47,    39,    14,    15,    16,
      21,    22,    23,    55,    42,    64,     8,     9,    75,    -1,
      -1,    13,    14,    15,    16,    67,    -1,    69,    -1,    71,
      -1,    73,    -1,    75,    76,    77,    76,    79,    -1,    -1,
     115,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    84,    85,    86,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
     147,   119,   120,   121,   136,   137,   138,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,    -1,   157,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,   157,
     158,    -1,   174,   175,    96,    -1,    -1,    -1,   180,    -1,
     182,    -1,   199,    -1,    -1,    -1,   174,   175,    -1,    -1,
      -1,   208,    -1,    -1,    -1,   117,    -1,   199,    -1,    -1,
     202,    -1,    -1,    -1,   206,    -1,   208,    -1,    78,   211,
     132,   133,   134,   135,    -1,    -1,    -1,    87,    88,    89,
      90,   143,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,   156,    -1,    -1,    -1,    -1,   161,
     162,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
     172,   173,   122,   123,    -1,    -1,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,   139,
     140,   141,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,   159,
       3,    -1,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,   176,   177,    21,    -1,
      -1,    24,     1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       1,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     1,    26,    27,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,     1,    26,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,     1,    26,    27,    28,    -1,    30,    -1,    -1,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
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
      47,    48,     1,    26,    27,    28,    -1,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,    42,
      -1,    44,    45,    46,    47,    48,     1,    26,    27,    28,
      -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
       1,    26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,     1,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    -1,    26,
      27,    28,     3,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    26,
      27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    42,    -1,    44,    45,    46,
      47,    48,    26,    27,    28,    -1,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    26,    27,
      28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    40,    41,    42,    -1,    44,    45,    46,    47,
      48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,     0,     1,     3,     5,     6,    12,    13,
      14,    15,    16,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    54,    55,    56,    57,
      58,    59,    64,    67,    68,    70,    71,    72,    73,    78,
      79,    80,    81,    82,    83,    70,    68,     1,    31,    32,
      33,    39,    43,    73,    74,    75,     1,    72,     1,    72,
       1,    72,     1,    72,     1,    39,    17,    18,    21,    24,
      60,    61,    62,    63,     6,     8,    12,    13,    14,    15,
      16,    65,    67,    68,    29,    75,    76,    77,     4,    71,
      73,     4,     1,    29,    75,     1,    31,     1,    32,     1,
      33,     1,    40,     1,    72,    70,    68,    76,    68,    18,
      19,    21,    22,    23,    66,    24,    21,    22,    23,    68,
      68,    68,    76,    76,    76,    76,     8,     9,    13,    14,
      15,    16,    69,    76,     4,    77,     1,    41,     1,    40,
       4,     4,    68,    68,    68,    76,    76,    19,    22,    23,
      68,    76,    76,    76,     4,     4,     4,     4,    68,    68,
      68,    76,    76,    76,     9,    14,    15,    16,     4,     1,
      72,     1,    41,     4,     4,    68,    68,    76,     4,     4,
       4,     4,     4,     4,    68,    68,    76,    76,     1,    38,
      42,     1,    72,     4,     4,     4,    72,     1,    38,    42,
      42,    72,    42
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
#line 404 "markdown-new.y"
    { 
            /**
             * 1. _root_node == $1
             */
            show_rule("markdownfile: blocks");
            /**
            parse_doc();
            is_doc_parsed = 1;
            */
        ;}
    break;

  case 3:
#line 428 "markdown-new.y"
    {
            show_rule("blocks: blocks block");
        ;}
    break;

  case 4:
#line 431 "markdown-new.y"
    {
            show_rule("blocks: NULL");
        ;}
    break;

  case 5:
#line 439 "markdown-new.y"
    {
            show_rule("block: header");
        ;}
    break;

  case 6:
#line 442 "markdown-new.y"
    {
            show_rule("block: paragraph");
        ;}
    break;

  case 7:
#line 445 "markdown-new.y"
    {
            show_rule("block: unorderlist_0");
        ;}
    break;

  case 8:
#line 448 "markdown-new.y"
    {
            show_rule("block: codeblock");
        ;}
    break;

  case 9:
#line 451 "markdown-new.y"
    {
            show_rule("block: quote_block");
        ;}
    break;

  case 10:
#line 455 "markdown-new.y"
    {
            show_rule("block: error");
        ;}
    break;

  case 11:
#line 461 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_header");
        ;}
    break;

  case 12:
#line 464 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_unorderlist_0");
        ;}
    break;

  case 13:
#line 467 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_paragraph");
        ;}
    break;

  case 14:
#line 470 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_codeblock");
        ;}
    break;

  case 15:
#line 473 "markdown-new.y"
    {
            show_rule("quote_block: NULL");
        ;}
    break;

  case 16:
#line 479 "markdown-new.y"
    {              
            show_rule("header: LF_H inline_elements LINEBREAK");
        ;}
    break;

  case 17:
#line 485 "markdown-new.y"
    {
            show_rule("paragraph: lines");
        ;}
    break;

  case 18:
#line 491 "markdown-new.y"
    {
            show_rule("unorderlist_0: LF_UL line");
        ;}
    break;

  case 19:
#line 494 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
        ;}
    break;

  case 20:
#line 497 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
        ;}
    break;

  case 21:
#line 500 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 22:
#line 503 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 23:
#line 506 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT4 code_text LINEBREAK");
        ;}
    break;

  case 24:
#line 509 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT5 code_text LINEBREAK");
        ;}
    break;

  case 25:
#line 512 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
        ;}
    break;

  case 26:
#line 518 "markdown-new.y"
    {
            show_rule("codeblock: lf_indents code_text LINEBREAK");
        ;}
    break;

  case 27:
#line 521 "markdown-new.y"
    {
            show_rule("codeblock: codeblock lf_indents code_text LINEBREAK");
        ;}
    break;

  case 28:
#line 527 "markdown-new.y"
    {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
        ;}
    break;

  case 29:
#line 533 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
        ;}
    break;

  case 30:
#line 536 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
        ;}
    break;

  case 31:
#line 539 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
        ;}
    break;

  case 32:
#line 542 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 33:
#line 545 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 34:
#line 548 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
        ;}
    break;

  case 35:
#line 554 "markdown-new.y"
    {
            show_rule("quote_paragraph: LF_Q line");
        ;}
    break;

  case 36:
#line 557 "markdown-new.y"
    {
            show_rule("quote_paragraph: quote_paragraph LF_Q line");
        ;}
    break;

  case 37:
#line 563 "markdown-new.y"
    {
            show_rule("quote_codeblock: LF_Q_INDENT code_text LINEBREAK");
        ;}
    break;

  case 38:
#line 566 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT code_text LINEBREAK");
        ;}
    break;

  case 39:
#line 569 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 40:
#line 572 "markdown-new.y"
    {
            show_rule("quote_codeblock: quote_codeblock LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 41:
#line 578 "markdown-new.y"
    {
            show_rule("lines: line");
        ;}
    break;

  case 42:
#line 581 "markdown-new.y"
    {
            show_rule("lines: lines line");
        ;}
    break;

  case 43:
#line 587 "markdown-new.y"
    {
            show_rule("unorderlist_1: LF_INDENT_UL line");
        ;}
    break;

  case 44:
#line 590 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
        ;}
    break;

  case 45:
#line 593 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
        ;}
    break;

  case 46:
#line 596 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 47:
#line 599 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT4 code_text LINEBREAK");
        ;}
    break;

  case 48:
#line 602 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT5 code_text LINEBREAK");
        ;}
    break;

  case 49:
#line 605 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
        ;}
    break;

  case 50:
#line 611 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
        ;}
    break;

  case 51:
#line 614 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
        ;}
    break;

  case 52:
#line 617 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
        ;}
    break;

  case 53:
#line 620 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 54:
#line 626 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT");
        ;}
    break;

  case 55:
#line 629 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT2");
        ;}
    break;

  case 56:
#line 632 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT3");
        ;}
    break;

  case 57:
#line 635 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT4");
        ;}
    break;

  case 58:
#line 638 "markdown-new.y"
    {
            show_rule("lf_indents: LF_INDENT5");
        ;}
    break;

  case 59:
#line 644 "markdown-new.y"
    {
            show_rule("line: inline_elements LINEBREAK");
        ;}
    break;

  case 60:
#line 647 "markdown-new.y"
    {
            show_rule("line: inline_elements");
        ;}
    break;

  case 61:
#line 650 "markdown-new.y"
    {
            show_rule("line: BLANKLINE");
        ;}
    break;

  case 62:
#line 656 "markdown-new.y"
    {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
        ;}
    break;

  case 63:
#line 659 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
        ;}
    break;

  case 64:
#line 662 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
        ;}
    break;

  case 65:
#line 665 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT4 code_text LINEBREAK");
        ;}
    break;

  case 66:
#line 668 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT5 code_text LINEBREAK");
        ;}
    break;

  case 67:
#line 674 "markdown-new.y"
    {
            show_rule("inline_elements: inline_elements inline_element");
        ;}
    break;

  case 68:
#line 677 "markdown-new.y"
    {
            show_rule("inline_elements: inline_element");
        ;}
    break;

  case 69:
#line 683 "markdown-new.y"
    {
            show_rule("inline_element: inline_text");
        ;}
    break;

  case 70:
#line 686 "markdown-new.y"
    {
            show_rule("inline_element: link");
        ;}
    break;

  case 71:
#line 689 "markdown-new.y"
    {
            show_rule("inline_element: image");
        ;}
    break;

  case 72:
#line 692 "markdown-new.y"
    {
            show_rule("inline_element: italic");
        ;}
    break;

  case 73:
#line 695 "markdown-new.y"
    {
            show_rule("inline_element: strong");
        ;}
    break;

  case 74:
#line 698 "markdown-new.y"
    {
            show_rule("inline_element: linethrough");
        ;}
    break;

  case 75:
#line 701 "markdown-new.y"
    {
            show_rule("inline_element: inlinecode");
        ;}
    break;

  case 76:
#line 707 "markdown-new.y"
    {
            show_rule("inline_text: inline_text inline_text_item");
        ;}
    break;

  case 77:
#line 710 "markdown-new.y"
    {
            show_rule("inline_text: inline_text_item");
        ;}
    break;

  case 78:
#line 716 "markdown-new.y"
    {
            show_rule("inline_text_item: LESSTHAN");
        ;}
    break;

  case 79:
#line 719 "markdown-new.y"
    {
            show_rule("inline_text_item: LARGERTHAN");
        ;}
    break;

  case 80:
#line 722 "markdown-new.y"
    {
            show_rule("inline_text_item: TRIPLEBACKTICK");
        ;}
    break;

  case 81:
#line 725 "markdown-new.y"
    {
            show_rule("inline_text_item: VERTICAL");
        ;}
    break;

  case 82:
#line 728 "markdown-new.y"
    {
            show_rule("inline_text_item: PLUS");
        ;}
    break;

  case 83:
#line 731 "markdown-new.y"
    {
            show_rule("inline_text_item: MINUS");
        ;}
    break;

  case 84:
#line 734 "markdown-new.y"
    {
            show_rule("inline_text_item: DIGIT");
        ;}
    break;

  case 85:
#line 737 "markdown-new.y"
    {
            show_rule("inline_text_item: DOT");
        ;}
    break;

  case 86:
#line 740 "markdown-new.y"
    {
            show_rule("inline_text_item: SPACE");
        ;}
    break;

  case 87:
#line 743 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTSQUARE");
        ;}
    break;

  case 88:
#line 746 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTBRACKET");
        ;}
    break;

  case 89:
#line 749 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTBRACKET");
        ;}
    break;

  case 90:
#line 752 "markdown-new.y"
    {
            show_rule("inline_text_item: UNDERSCORE");
        ;}
    break;

  case 91:
#line 755 "markdown-new.y"
    {
            show_rule("inline_text_item: DOUBLEUNDERSCORE");
        ;}
    break;

  case 92:
#line 758 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTPARENTHESIS");
        ;}
    break;

  case 93:
#line 761 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTPARENTHESIS");
        ;}
    break;

  case 94:
#line 764 "markdown-new.y"
    {
            show_rule("inline_text_item: TEXT");
        ;}
    break;

  case 95:
#line 770 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
        ;}
    break;

  case 96:
#line 773 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text_item");
        ;}
    break;

  case 97:
#line 779 "markdown-new.y"
    {
            show_rule("inline_code_text_item: inline_text_item");
        ;}
    break;

  case 98:
#line 782 "markdown-new.y"
    {
            show_rule("inline_code_text_item: ASTERISK");
        ;}
    break;

  case 99:
#line 785 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
        ;}
    break;

  case 100:
#line 788 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLETILDE");
        ;}
    break;

  case 101:
#line 791 "markdown-new.y"
    {
            show_rule("inline_text_item: EXCLAMATION");
        ;}
    break;

  case 102:
#line 794 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTSQUARE");
        ;}
    break;

  case 103:
#line 800 "markdown-new.y"
    {
            show_rule("code_text: code_text code_text_item");
        ;}
    break;

  case 104:
#line 803 "markdown-new.y"
    {
            show_rule("code_text: code_text_item");
        ;}
    break;

  case 105:
#line 809 "markdown-new.y"
    {
            show_rule("code_text_item: inline_code_text_item");
        ;}
    break;

  case 106:
#line 812 "markdown-new.y"
    {
            show_rule("code_text_item: BACKTICK");
        ;}
    break;

  case 107:
#line 817 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 108:
#line 820 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 109:
#line 823 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        ;}
    break;

  case 110:
#line 826 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 111:
#line 829 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE error");
        ;}
    break;

  case 112:
#line 832 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text error");
        ;}
    break;

  case 113:
#line 835 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE error");
        ;}
    break;

  case 114:
#line 841 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 115:
#line 844 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 116:
#line 847 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        ;}
    break;

  case 117:
#line 850 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 118:
#line 853 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error");
        ;}
    break;

  case 119:
#line 856 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text error");
        ;}
    break;

  case 120:
#line 859 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE error");
        ;}
    break;

  case 121:
#line 862 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION error");
        ;}
    break;

  case 122:
#line 868 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text ASTERISK %prec ITALICSTART");
        ;}
    break;

  case 123:
#line 871 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text error %prec ITALICSTART");
        ;}
    break;

  case 124:
#line 874 "markdown-new.y"
    {
            show_rule("italic: ASTERISK error %prec ITALICSTART");
        ;}
    break;

  case 125:
#line 880 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
        ;}
    break;

  case 126:
#line 883 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        ;}
    break;

  case 127:
#line 886 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK error");
        ;}
    break;

  case 128:
#line 892 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
        ;}
    break;

  case 129:
#line 895 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        ;}
    break;

  case 130:
#line 898 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE error");
        ;}
    break;

  case 131:
#line 904 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
        ;}
    break;

  case 132:
#line 907 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        ;}
    break;

  case 133:
#line 910 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK error");
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3221 "markdown-new.y.c"
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


#line 915 "markdown-new.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


