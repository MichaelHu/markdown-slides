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
     SPECIALCHAR = 279,
     LESSTHAN = 280,
     LARGERTHAN = 281,
     TRIPLEBACKTICK = 282,
     BACKTICK = 283,
     VERTICAL = 284,
     DOUBLEASTERISK = 285,
     DOUBLETILDE = 286,
     ASTERISK = 287,
     PLUS = 288,
     MINUS = 289,
     DIGIT = 290,
     DOT = 291,
     SPACE = 292,
     LEFTSQUARE = 293,
     RIGHTSQUARE = 294,
     LEFTBRACKET = 295,
     RIGHTBRACKET = 296,
     EXCLAMATION = 297,
     DOUBLEUNDERSCORE = 298,
     UNDERSCORE = 299,
     LEFTPARENTHESIS = 300,
     RIGHTPARENTHESIS = 301,
     TEXT = 302,
     ITALICSTART = 303,
     LISTSTART = 304
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
#define SPECIALCHAR 279
#define LESSTHAN 280
#define LARGERTHAN 281
#define TRIPLEBACKTICK 282
#define BACKTICK 283
#define VERTICAL 284
#define DOUBLEASTERISK 285
#define DOUBLETILDE 286
#define ASTERISK 287
#define PLUS 288
#define MINUS 289
#define DIGIT 290
#define DOT 291
#define SPACE 292
#define LEFTSQUARE 293
#define RIGHTSQUARE 294
#define LEFTBRACKET 295
#define RIGHTBRACKET 296
#define EXCLAMATION 297
#define DOUBLEUNDERSCORE 298
#define UNDERSCORE 299
#define LEFTPARENTHESIS 300
#define RIGHTPARENTHESIS 301
#define TEXT 302
#define ITALICSTART 303
#define LISTSTART 304




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
    "quote_block: NULL", "1",

        "header: LF_H inline_elements LINEBREAK", "2",

        "paragraph: lines", "2",

        "unorderlist_0: LF_UL line", "2",
        "unorderlist_0: unorderlist_0 LF_UL line", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT line", "2",
        "unorderlist_0: unorderlist_0 LF_INDENT2 code_text LINEBREAK", "2",
        "unorderlist_0: unorderlist_0 unorderlist_1", "2",

        "codeblock: LF_INDENT code_text LINEBREAK", "2",
        "codeblock: codeblock LF_INDENT code_text LINEBREAK", "2",

        "quote_header: LF_Q_H inline_elements LINEBREAK", "2",

        "quote_unorderlist_0: LF_Q_UL line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line", "2",
        "quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK", "2",
        "quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1", "2",

            "lines: line", "3",
            "lines: lines line", "3",

            "unorderlist_1: LF_INDENT_UL line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT_UL line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT2 line", "3",
            "unorderlist_1: unorderlist_1 LF_INDENT3 code_text LINEBREAK", "3",
            "unorderlist_1: unorderlist_1 unorderlist_2", "3",

            "quote_unorderlist_1: LF_Q_INDENT_UL line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line", "3",
            "quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK", "3",
            /*
            "quote_unorderlist_1: quote_unorderlist_1 quote_unorderlist_3", "3",
            */

                "line: inline_elements LINEBREAK", "4",
                "line: inline_elements", "4",
                "line: BLANKLINE", "4",

                "unorderlist_2: LF_INDENT2_UL line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT2_UL line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT3 line", "4",
                "unorderlist_2: unorderlist_2 LF_INDENT4 code_text LINEBREAK", "4",

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
#line 269 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 193 of yacc.c.  */
#line 466 "markdown-new.y.c"
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
#line 491 "markdown-new.y.c"

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
#define YYLAST   1326

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    21,    24,    27,    28,    32,    34,    37,    41,    45,
      50,    53,    57,    62,    66,    69,    73,    77,    82,    85,
      87,    90,    93,    97,   101,   106,   109,   112,   116,   120,
     125,   128,   130,   132,   135,   139,   143,   148,   151,   153,
     155,   157,   159,   161,   163,   165,   167,   170,   172,   174,
     176,   178,   180,   182,   184,   186,   188,   190,   192,   194,
     196,   198,   200,   202,   204,   206,   209,   211,   213,   215,
     217,   219,   221,   223,   226,   228,   230,   232,   239,   248,
     255,   261,   266,   270,   273,   281,   291,   299,   306,   312,
     317,   321,   324,   328,   332,   335,   339,   343,   346,   350,
     354,   357,   361,   365
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    52,    53,    -1,    -1,    55,
      -1,    56,    -1,    57,    -1,    58,    -1,    54,    -1,     1,
      -1,    54,    59,    -1,    54,    60,    -1,    -1,     5,    66,
       4,    -1,    61,    -1,     6,    64,    -1,    57,     6,    64,
      -1,    57,    12,    64,    -1,    57,    13,    72,     4,    -1,
      57,    62,    -1,    12,    72,     4,    -1,    58,    12,    72,
       4,    -1,    17,    66,     4,    -1,    18,    64,    -1,    60,
      18,    64,    -1,    60,    21,    64,    -1,    60,    22,    72,
       4,    -1,    60,    63,    -1,    64,    -1,    61,    64,    -1,
       8,    64,    -1,    62,     8,    64,    -1,    62,    13,    64,
      -1,    62,    14,    72,     4,    -1,    62,    65,    -1,    19,
      64,    -1,    63,    19,    64,    -1,    63,    22,    64,    -1,
      63,    23,    72,     4,    -1,    66,     4,    -1,    66,    -1,
       3,    -1,     9,    64,    -1,    65,     9,    64,    -1,    65,
      14,    64,    -1,    65,    15,    72,     4,    -1,    66,    67,
      -1,    67,    -1,    68,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    68,    69,    -1,
      69,    -1,    25,    -1,    26,    -1,    27,    -1,    29,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      39,    -1,    40,    -1,    41,    -1,    44,    -1,    43,    -1,
      45,    -1,    46,    -1,    47,    -1,    70,    71,    -1,    71,
      -1,    69,    -1,    32,    -1,    30,    -1,    31,    -1,    42,
      -1,    38,    -1,    72,    73,    -1,    73,    -1,    71,    -1,
      28,    -1,    38,    68,    39,    40,    68,    41,    -1,    38,
      68,    39,    40,    68,    37,    68,    41,    -1,    38,    68,
      39,    40,    68,     1,    -1,    38,    68,    39,    40,     1,
      -1,    38,    68,    39,     1,    -1,    38,    68,     1,    -1,
      38,     1,    -1,    42,    38,    68,    39,    40,    68,    41,
      -1,    42,    38,    68,    39,    40,    68,    37,    68,    41,
      -1,    42,    38,    68,    39,    40,    68,     1,    -1,    42,
      38,    68,    39,    40,     1,    -1,    42,    38,    68,    39,
       1,    -1,    42,    38,    68,     1,    -1,    42,    38,     1,
      -1,    42,     1,    -1,    32,    68,    32,    -1,    32,    68,
       1,    -1,    32,     1,    -1,    30,    68,    30,    -1,    30,
      68,     1,    -1,    30,     1,    -1,    31,    68,    31,    -1,
      31,    68,     1,    -1,    31,     1,    -1,    28,    70,    28,
      -1,    28,    70,     1,    -1,    28,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   379,   379,   403,   406,   414,   417,   420,   423,   426,
     430,   436,   439,   442,   448,   454,   460,   463,   466,   469,
     472,   478,   481,   487,   493,   496,   499,   502,   505,   511,
     514,   520,   523,   526,   529,   532,   538,   541,   544,   547,
     553,   556,   559,   565,   568,   571,   574,   580,   583,   589,
     592,   595,   598,   601,   604,   607,   613,   616,   622,   625,
     628,   631,   634,   637,   640,   643,   646,   649,   652,   655,
     658,   661,   664,   667,   670,   676,   679,   685,   688,   691,
     694,   697,   700,   706,   709,   715,   718,   723,   726,   729,
     732,   735,   738,   741,   747,   750,   753,   756,   759,   762,
     765,   768,   774,   777,   780,   786,   789,   792,   798,   801,
     804,   810,   813,   816
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
  "LF_Q_INDENT", "LF_Q_INDENT2", "LF_Q_INDENT3", "SPECIALCHAR", "LESSTHAN",
  "LARGERTHAN", "TRIPLEBACKTICK", "BACKTICK", "VERTICAL", "DOUBLEASTERISK",
  "DOUBLETILDE", "ASTERISK", "PLUS", "MINUS", "DIGIT", "DOT", "SPACE",
  "LEFTSQUARE", "RIGHTSQUARE", "LEFTBRACKET", "RIGHTBRACKET",
  "EXCLAMATION", "DOUBLEUNDERSCORE", "UNDERSCORE", "LEFTPARENTHESIS",
  "RIGHTPARENTHESIS", "TEXT", "ITALICSTART", "LISTSTART", "$accept",
  "markdownfile", "blocks", "block", "quote_block", "header", "paragraph",
  "unorderlist_0", "codeblock", "quote_header", "quote_unorderlist_0",
  "lines", "unorderlist_1", "quote_unorderlist_1", "line", "unorderlist_2",
  "inline_elements", "inline_element", "inline_text", "inline_text_item",
  "inline_code_text", "inline_code_text_item", "code_text",
  "code_text_item", "link", "image", "italic", "strong", "linethrough",
  "inlinecode", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    55,    56,    57,    57,    57,    57,
      57,    58,    58,    59,    60,    60,    60,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    63,    63,    63,    63,
      64,    64,    64,    65,    65,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    77,    77,    77,    78,    78,
      78,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     3,     1,     2,     3,     3,     4,
       2,     3,     4,     3,     2,     3,     3,     4,     2,     1,
       2,     2,     3,     3,     4,     2,     2,     3,     3,     4,
       2,     1,     1,     2,     3,     3,     4,     2,     1,     1,
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
       4,     0,     0,     1,    10,    42,     0,     0,     0,    58,
      59,    60,     0,    61,     0,     0,     0,    62,    63,    64,
      65,    66,     0,    67,    68,    69,     0,    71,    70,    72,
      73,    74,     3,     9,     5,     6,     7,     8,    15,    29,
      41,    48,    49,    57,    50,    51,    52,    53,    54,    55,
       0,    16,    86,    79,    80,    78,    82,    81,    77,    85,
       0,    84,   113,     0,    76,   107,     0,   110,     0,   104,
       0,    93,     0,   101,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    20,     0,    30,    40,    47,    56,    14,
      21,    83,   112,   111,    75,   106,   105,   109,   108,   103,
     102,    92,     0,   100,     0,     0,    24,     0,     0,     0,
       0,    28,    17,    31,    18,     0,     0,     0,     0,     0,
      35,     0,    91,     0,    99,     0,    23,    25,    36,    26,
       0,     0,     0,     0,    19,    32,    43,    33,     0,     0,
       0,     0,    22,    90,     0,    98,     0,    27,    37,    38,
       0,    34,    44,    45,     0,    89,    66,    87,    97,     0,
      39,    46,     0,    96,    66,    94,    88,     0,    95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    32,    33,    34,    35,    36,    37,    77,
      78,    38,    83,   111,    39,   120,    40,    41,    42,    43,
      63,    59,    60,    61,    44,    45,    46,    47,    48,    49
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int16 yypact[] =
{
     -63,    17,   183,   -63,   -63,   -63,  1164,   701,  1187,   -63,
     -63,   -63,   253,   -63,   353,   376,   403,   -63,   -63,   -63,
     -63,   -63,   426,   -63,   -63,   -63,     2,   -63,   -63,   -63,
     -63,   -63,   -63,    19,   -63,   -63,     3,    -2,   701,   -63,
     745,   -63,  1210,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     789,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     833,   -63,   -63,   206,   -63,   -63,   276,   -63,   303,   -63,
     326,   -63,   453,   -63,   476,  1164,   701,   -63,    11,   701,
     701,   701,  1187,    10,  1187,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   503,   -63,   526,   877,   -63,   701,   701,   701,
    1187,    16,   -63,   -63,   -63,   921,   701,   701,   701,  1187,
      12,   965,   -63,   553,   -63,   576,   -63,   -63,   -63,   -63,
    1009,   701,   701,  1187,   -63,   -63,   -63,   -63,  1053,   701,
     701,  1187,   -63,   -63,   603,   -63,   626,   -63,   -63,   -63,
    1097,   -63,   -63,   -63,  1141,   -63,  1210,   653,   -63,   676,
     -63,   -63,  1233,   -63,  1210,   653,  1256,  1279,  1256
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,    59,   -63,    -5,   -38,    -9,    -8,
     -63,    -4,   -62,   -46,   -63,   -63,   -63,   -63,   -63,   -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
      58,    50,    87,    73,    58,    66,    68,    70,    64,    79,
      84,    80,    87,    72,    91,    81,    82,     3,   116,   117,
     115,   139,   121,   118,   119,     0,   140,   141,     0,   107,
     108,     0,   109,   110,    88,   131,    75,    76,   132,   133,
      74,     0,     0,     0,     0,     0,     0,     0,   130,     0,
       0,     0,    58,     0,     0,    58,     0,   138,    88,    94,
      88,     0,    88,     0,    88,   104,    51,    87,     0,    91,
     105,   150,     0,     0,    58,    91,    58,     0,     0,   154,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,    88,    85,     0,     0,
       0,     0,    58,     0,    91,     0,     0,    58,    91,     0,
       0,    58,     0,    58,   144,     0,     0,     0,     0,     0,
       0,     0,    58,     0,     0,    58,     0,     0,     0,     0,
      58,     0,     0,    58,     0,   106,    88,   159,   112,   113,
     114,     0,    58,     0,     0,     0,    58,   162,     0,     0,
       0,    88,     0,     0,    88,   167,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,   127,   128,   129,     0,
       0,     0,     0,     0,     0,   135,   136,   137,     0,     0,
       0,     0,     0,    -2,     4,     0,     5,     0,     6,     7,
     148,   149,     0,     0,     0,     8,     0,     0,   152,   153,
     -13,   -13,     0,     0,     0,     0,     0,    92,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     9,    10,    11,    93,    13,    53,    54,    55,    17,
      18,    19,    20,    21,    56,    23,    24,    25,    57,    27,
      28,    29,    30,    31,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     9,    10,
      11,     0,    13,    53,    54,    55,    17,    18,    19,    20,
      21,    56,    23,    24,    25,    57,    27,    28,    29,    30,
      31,     9,    10,    11,    97,    13,    96,     0,     0,    17,
      18,    19,    20,    21,     0,    23,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,    99,     9,    10,
      11,     0,    13,     0,    98,     0,    17,    18,    19,    20,
      21,     0,    23,    24,    25,     0,    27,    28,    29,    30,
      31,     9,    10,    11,    65,    13,     0,     0,   100,    17,
      18,    19,    20,    21,     0,    23,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,    67,     9,    10,
      11,     0,    13,     0,     0,     0,    17,    18,    19,    20,
      21,     0,    23,    24,    25,     0,    27,    28,    29,    30,
      31,     9,    10,    11,    69,    13,     0,     0,     0,    17,
      18,    19,    20,    21,     0,    23,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,    71,     9,    10,
      11,     0,    13,     0,     0,     0,    17,    18,    19,    20,
      21,     0,    23,    24,    25,     0,    27,    28,    29,    30,
      31,     9,    10,    11,   101,    13,     0,     0,     0,    17,
      18,    19,    20,    21,     0,    23,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,   103,     9,    10,
      11,     0,    13,     0,     0,     0,    17,    18,    19,    20,
      21,     0,   102,    24,    25,     0,    27,    28,    29,    30,
      31,     9,    10,    11,   122,    13,     0,     0,     0,    17,
      18,    19,    20,    21,     0,    23,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,   124,   -67,   -67,
     -67,     0,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   123,   -67,     0,   -67,   -67,   -67,   -67,
     -67,     9,    10,    11,   143,    13,     0,     0,     0,    17,
      18,    19,    20,    21,     0,   125,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,   145,     9,    10,
      11,     0,    13,     0,     0,     0,    17,    18,    19,    20,
      21,     0,    23,    24,    25,     0,    27,    28,    29,    30,
      31,   -67,   -67,   -67,   155,   -67,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   146,   -67,     0,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,   158,     9,    10,
      11,     0,    13,     0,     0,     0,    17,    18,    19,    20,
     156,     0,    23,    24,   157,     0,    27,    28,    29,    30,
      31,     9,    10,    11,   -69,    13,     0,     0,     0,    17,
      18,    19,    20,    21,     0,    23,    24,    25,     0,    27,
      28,    29,    30,    31,     0,     0,     0,   163,   -69,   -69,
     -69,     0,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,     9,    10,    11,     5,    13,     0,     0,     0,    17,
      18,    19,    20,   164,     0,    23,    24,   165,     0,    27,
      28,    29,    30,    31,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    52,    13,    53,    54,    55,    17,    18,    19,    20,
      21,    56,    23,    24,    25,    57,    27,    28,    29,    30,
      31,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    52,
      13,    53,    54,    55,    17,    18,    19,    20,    21,    56,
      23,    24,    25,    57,    27,    28,    29,    30,    31,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,    52,    13,    53,    54,    55,    17,    18,
      19,    20,    21,    56,    23,    24,    25,    57,    27,    28,
      29,    30,    31,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,    52,    13,    53,
      54,    55,    17,    18,    19,    20,    21,    56,    23,    24,
      25,    57,    27,    28,    29,    30,    31,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,    52,    13,    53,    54,    55,    17,    18,    19,    20,
      21,    56,    23,    24,    25,    57,    27,    28,    29,    30,
      31,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    52,    13,    53,    54,    55,
      17,    18,    19,    20,    21,    56,    23,    24,    25,    57,
      27,    28,    29,    30,    31,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,    52,
      13,    53,    54,    55,    17,    18,    19,    20,    21,    56,
      23,    24,    25,    57,    27,    28,    29,    30,    31,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     9,    10,    11,    52,    13,    53,    54,    55,
      17,    18,    19,    20,    21,    56,    23,    24,    25,    57,
      27,    28,    29,    30,    31,     9,    10,    11,     0,    13,
       0,     0,     0,    17,    18,    19,    20,    21,     0,    23,
      24,    25,     0,    27,    28,    29,    30,    31,     9,    10,
      11,     0,    13,     0,     0,     0,    17,    18,    19,    20,
      21,     0,    23,    24,   166,     0,    27,    28,    29,    30,
      31,   -69,   -69,   -69,     0,   -69,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,     9,    10,    11,     0,    13,     0,
       0,     0,    17,    18,    19,    20,    21,     0,    23,    24,
     168,     0,    27,    28,    29,    30,    31
};

static const yytype_int16 yycheck[] =
{
       8,     6,    40,     1,    12,    14,    15,    16,    12,     6,
      12,     8,    50,    22,    60,    12,    13,     0,     8,     9,
      82,     9,    84,    13,    14,    -1,    14,    15,    -1,    18,
      19,    -1,    21,    22,    42,    19,    17,    18,    22,    23,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    60,    -1,    -1,    63,    -1,   119,    66,    63,
      68,    -1,    70,    -1,    72,    74,     7,   105,    -1,   115,
      75,   133,    -1,    -1,    82,   121,    84,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,    -1,    -1,   104,    38,    -1,    -1,
      -1,    -1,   110,    -1,   150,    -1,    -1,   115,   154,    -1,
      -1,   119,    -1,   121,   123,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,    -1,   133,    -1,    -1,    -1,    -1,
     138,    -1,    -1,   141,    -1,    76,   144,   146,    79,    80,
      81,    -1,   150,    -1,    -1,    -1,   154,   156,    -1,    -1,
      -1,   159,    -1,    -1,   162,   164,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,   107,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,   118,    -1,    -1,
      -1,    -1,    -1,     0,     1,    -1,     3,    -1,     5,     6,
     131,   132,    -1,    -1,    -1,    12,    -1,    -1,   139,   140,
      17,    18,    -1,    -1,    -1,    -1,    -1,     1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    30,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    -1,     1,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,     3,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    25,    26,    27,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,    25,    26,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    25,    26,    27,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    25,    26,    27,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    -1,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,     0,     1,     3,     5,     6,    12,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    53,    54,    55,    56,    57,    58,    61,    64,
      66,    67,    68,    69,    74,    75,    76,    77,    78,    79,
      66,    64,    28,    30,    31,    32,    38,    42,    69,    71,
      72,    73,     1,    70,    71,     1,    68,     1,    68,     1,
      68,     1,    68,     1,    38,    17,    18,    59,    60,     6,
       8,    12,    13,    62,    12,    64,     4,    67,    69,     4,
       4,    73,     1,    28,    71,     1,    30,     1,    31,     1,
      32,     1,    39,     1,    68,    66,    64,    18,    19,    21,
      22,    63,    64,    64,    64,    72,     8,     9,    13,    14,
      65,    72,     1,    40,     1,    39,     4,    64,    64,    64,
      72,    19,    22,    23,     4,    64,    64,    64,    72,     9,
      14,    15,     4,     1,    68,     1,    40,     4,    64,    64,
      72,     4,    64,    64,    72,     1,    37,    41,     1,    68,
       4,     4,    68,     1,    37,    41,    41,    68,    41
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
#line 379 "markdown-new.y"
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
#line 403 "markdown-new.y"
    {
            show_rule("blocks: blocks block");
        ;}
    break;

  case 4:
#line 406 "markdown-new.y"
    {
            show_rule("blocks: NULL");
        ;}
    break;

  case 5:
#line 414 "markdown-new.y"
    {
            show_rule("block: header");
        ;}
    break;

  case 6:
#line 417 "markdown-new.y"
    {
            show_rule("block: paragraph");
        ;}
    break;

  case 7:
#line 420 "markdown-new.y"
    {
            show_rule("block: unorderlist_0");
        ;}
    break;

  case 8:
#line 423 "markdown-new.y"
    {
            show_rule("block: codeblock");
        ;}
    break;

  case 9:
#line 426 "markdown-new.y"
    {
            show_rule("block: quote_block");
        ;}
    break;

  case 10:
#line 430 "markdown-new.y"
    {
            show_rule("block: error");
        ;}
    break;

  case 11:
#line 436 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_header");
        ;}
    break;

  case 12:
#line 439 "markdown-new.y"
    {
            show_rule("quote_block: quote_block quote_unorderlist_0");
        ;}
    break;

  case 13:
#line 442 "markdown-new.y"
    {
            show_rule("quote_block: NULL");
        ;}
    break;

  case 14:
#line 448 "markdown-new.y"
    {              
            show_rule("header: LF_H inline_elements LINEBREAK");
        ;}
    break;

  case 15:
#line 454 "markdown-new.y"
    {
            show_rule("paragraph: lines");
        ;}
    break;

  case 16:
#line 460 "markdown-new.y"
    {
            show_rule("unorderlist_0: LF_UL line");
        ;}
    break;

  case 17:
#line 463 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_UL line");
        ;}
    break;

  case 18:
#line 466 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT line");
        ;}
    break;

  case 19:
#line 469 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 LF_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 20:
#line 472 "markdown-new.y"
    {
            show_rule("unorderlist_0: unorderlist_0 unorderlist_1");
        ;}
    break;

  case 21:
#line 478 "markdown-new.y"
    {
            show_rule("codeblock: LF_INDENT code_text LINEBREAK");
        ;}
    break;

  case 22:
#line 481 "markdown-new.y"
    {
            show_rule("codeblock: codeblock LF_INDENT code_text LINEBREAK");
        ;}
    break;

  case 23:
#line 487 "markdown-new.y"
    {
            show_rule("quote_header: LF_Q_H inline_elements LINEBREAK");
        ;}
    break;

  case 24:
#line 493 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: LF_Q_UL line");
        ;}
    break;

  case 25:
#line 496 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_UL line");
        ;}
    break;

  case 26:
#line 499 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT line");
        ;}
    break;

  case 27:
#line 502 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 LF_Q_INDENT2 code_text LINEBREAK");
        ;}
    break;

  case 28:
#line 505 "markdown-new.y"
    {
            show_rule("quote_unorderlist_0: quote_unorderlist_0 quote_unorderlist_1");
        ;}
    break;

  case 29:
#line 511 "markdown-new.y"
    {
            show_rule("lines: line");
        ;}
    break;

  case 30:
#line 514 "markdown-new.y"
    {
            show_rule("lines: lines line");
        ;}
    break;

  case 31:
#line 520 "markdown-new.y"
    {
            show_rule("unorderlist_1: LF_INDENT_UL line");
        ;}
    break;

  case 32:
#line 523 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT_UL line");
        ;}
    break;

  case 33:
#line 526 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT2 line");
        ;}
    break;

  case 34:
#line 529 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 LF_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 35:
#line 532 "markdown-new.y"
    {
            show_rule("unorderlist_1: unorderlist_1 unorderlist_2");
        ;}
    break;

  case 36:
#line 538 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: LF_Q_INDENT_UL line");
        ;}
    break;

  case 37:
#line 541 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT_UL line");
        ;}
    break;

  case 38:
#line 544 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT2 line");
        ;}
    break;

  case 39:
#line 547 "markdown-new.y"
    {
            show_rule("quote_unorderlist_1: quote_unorderlist_1 LF_Q_INDENT3 code_text LINEBREAK");
        ;}
    break;

  case 40:
#line 553 "markdown-new.y"
    {
            show_rule("line: inline_elements LINEBREAK");
        ;}
    break;

  case 41:
#line 556 "markdown-new.y"
    {
            show_rule("line: inline_elements");
        ;}
    break;

  case 42:
#line 559 "markdown-new.y"
    {
            show_rule("line: BLANKLINE");
        ;}
    break;

  case 43:
#line 565 "markdown-new.y"
    {
            show_rule("unorderlist_2: LF_INDENT2_UL line");
        ;}
    break;

  case 44:
#line 568 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT2_UL line");
        ;}
    break;

  case 45:
#line 571 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT3 line");
        ;}
    break;

  case 46:
#line 574 "markdown-new.y"
    {
            show_rule("unorderlist_2: unorderlist_2 LF_INDENT4 code_text LINEBREAK");
        ;}
    break;

  case 47:
#line 580 "markdown-new.y"
    {
            show_rule("inline_elements: inline_elements inline_element");
        ;}
    break;

  case 48:
#line 583 "markdown-new.y"
    {
            show_rule("inline_elements: inline_element");
        ;}
    break;

  case 49:
#line 589 "markdown-new.y"
    {
            show_rule("inline_element: inline_text");
        ;}
    break;

  case 50:
#line 592 "markdown-new.y"
    {
            show_rule("inline_element: link");
        ;}
    break;

  case 51:
#line 595 "markdown-new.y"
    {
            show_rule("inline_element: image");
        ;}
    break;

  case 52:
#line 598 "markdown-new.y"
    {
            show_rule("inline_element: italic");
        ;}
    break;

  case 53:
#line 601 "markdown-new.y"
    {
            show_rule("inline_element: strong");
        ;}
    break;

  case 54:
#line 604 "markdown-new.y"
    {
            show_rule("inline_element: linethrough");
        ;}
    break;

  case 55:
#line 607 "markdown-new.y"
    {
            show_rule("inline_element: inlinecode");
        ;}
    break;

  case 56:
#line 613 "markdown-new.y"
    {
            show_rule("inline_text: inline_text inline_text_item");
        ;}
    break;

  case 57:
#line 616 "markdown-new.y"
    {
            show_rule("inline_text: inline_text_item");
        ;}
    break;

  case 58:
#line 622 "markdown-new.y"
    {
            show_rule("inline_text_item: LESSTHAN");
        ;}
    break;

  case 59:
#line 625 "markdown-new.y"
    {
            show_rule("inline_text_item: LARGERTHAN");
        ;}
    break;

  case 60:
#line 628 "markdown-new.y"
    {
            show_rule("inline_text_item: TRIPLEBACKTICK");
        ;}
    break;

  case 61:
#line 631 "markdown-new.y"
    {
            show_rule("inline_text_item: VERTICAL");
        ;}
    break;

  case 62:
#line 634 "markdown-new.y"
    {
            show_rule("inline_text_item: PLUS");
        ;}
    break;

  case 63:
#line 637 "markdown-new.y"
    {
            show_rule("inline_text_item: MINUS");
        ;}
    break;

  case 64:
#line 640 "markdown-new.y"
    {
            show_rule("inline_text_item: DIGIT");
        ;}
    break;

  case 65:
#line 643 "markdown-new.y"
    {
            show_rule("inline_text_item: DOT");
        ;}
    break;

  case 66:
#line 646 "markdown-new.y"
    {
            show_rule("inline_text_item: SPACE");
        ;}
    break;

  case 67:
#line 649 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTSQUARE");
        ;}
    break;

  case 68:
#line 652 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTBRACKET");
        ;}
    break;

  case 69:
#line 655 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTBRACKET");
        ;}
    break;

  case 70:
#line 658 "markdown-new.y"
    {
            show_rule("inline_text_item: UNDERSCORE");
        ;}
    break;

  case 71:
#line 661 "markdown-new.y"
    {
            show_rule("inline_text_item: DOUBLEUNDERSCORE");
        ;}
    break;

  case 72:
#line 664 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTPARENTHESIS");
        ;}
    break;

  case 73:
#line 667 "markdown-new.y"
    {
            show_rule("inline_text_item: RIGHTPARENTHESIS");
        ;}
    break;

  case 74:
#line 670 "markdown-new.y"
    {
            show_rule("inline_text_item: TEXT");
        ;}
    break;

  case 75:
#line 676 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text inline_code_text_item");
        ;}
    break;

  case 76:
#line 679 "markdown-new.y"
    {
            show_rule("inline_code_text: inline_code_text_item");
        ;}
    break;

  case 77:
#line 685 "markdown-new.y"
    {
            show_rule("inline_code_text_item: inline_text_item");
        ;}
    break;

  case 78:
#line 688 "markdown-new.y"
    {
            show_rule("inline_code_text_item: ASTERISK");
        ;}
    break;

  case 79:
#line 691 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLEASTERISK");
        ;}
    break;

  case 80:
#line 694 "markdown-new.y"
    {
            show_rule("inline_code_text_item: DOUBLETILDE");
        ;}
    break;

  case 81:
#line 697 "markdown-new.y"
    {
            show_rule("inline_text_item: EXCLAMATION");
        ;}
    break;

  case 82:
#line 700 "markdown-new.y"
    {
            show_rule("inline_text_item: LEFTSQUARE");
        ;}
    break;

  case 83:
#line 706 "markdown-new.y"
    {
            show_rule("code_text: code_text code_text_item");
        ;}
    break;

  case 84:
#line 709 "markdown-new.y"
    {
            show_rule("code_text: code_text_item");
        ;}
    break;

  case 85:
#line 715 "markdown-new.y"
    {
            show_rule("code_text_item: inline_code_text_item");
        ;}
    break;

  case 86:
#line 718 "markdown-new.y"
    {
            show_rule("code_text_item: BACKTICK");
        ;}
    break;

  case 87:
#line 723 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 88:
#line 726 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 89:
#line 729 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        ;}
    break;

  case 90:
#line 732 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 91:
#line 735 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text RIGHTSQUARE error");
        ;}
    break;

  case 92:
#line 738 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE inline_text error");
        ;}
    break;

  case 93:
#line 741 "markdown-new.y"
    {
            show_rule("link: LEFTSQUARE error");
        ;}
    break;

  case 94:
#line 747 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text RIGHTBRACKET");
        ;}
    break;

  case 95:
#line 750 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 96:
#line 753 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text error");
        ;}
    break;

  case 97:
#line 756 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE LEFTBRACKET inline_text SPACE inline_text RIGHTBRACKET");
        ;}
    break;

  case 98:
#line 759 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text RIGHTSQUARE error");
        ;}
    break;

  case 99:
#line 762 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE inline_text error");
        ;}
    break;

  case 100:
#line 765 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION LEFTSQUARE error");
        ;}
    break;

  case 101:
#line 768 "markdown-new.y"
    {
            show_rule("image: EXCLAMATION error");
        ;}
    break;

  case 102:
#line 774 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text ASTERISK %prec ITALICSTART");
        ;}
    break;

  case 103:
#line 777 "markdown-new.y"
    {
            show_rule("italic: ASTERISK inline_text error %prec ITALICSTART");
        ;}
    break;

  case 104:
#line 780 "markdown-new.y"
    {
            show_rule("italic: ASTERISK error %prec ITALICSTART");
        ;}
    break;

  case 105:
#line 786 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text DOUBLEASTERISK");
        ;}
    break;

  case 106:
#line 789 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK inline_text error");
        ;}
    break;

  case 107:
#line 792 "markdown-new.y"
    {
            show_rule("strong: DOUBLEASTERISK error");
        ;}
    break;

  case 108:
#line 798 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text DOUBLETILDE");
        ;}
    break;

  case 109:
#line 801 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE inline_text error");
        ;}
    break;

  case 110:
#line 804 "markdown-new.y"
    {
            show_rule("linethrough: DOUBLETILDE error");
        ;}
    break;

  case 111:
#line 810 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text BACKTICK");
        ;}
    break;

  case 112:
#line 813 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK inline_code_text error");
        ;}
    break;

  case 113:
#line 816 "markdown-new.y"
    {
            show_rule("inlinecode: BACKTICK error");
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2905 "markdown-new.y.c"
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


#line 821 "markdown-new.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


