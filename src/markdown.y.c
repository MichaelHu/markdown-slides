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
     TEXT = 258,
     SPECIALCHAR = 259,
     CODETEXT = 260,
     H = 261,
     QUOTEH = 262,
     HTMLBLOCK = 263,
     SECTION = 264,
     VSECTION = 265,
     SCRIPTSTART = 266,
     SCRIPTEND = 267,
     STYLESTART = 268,
     STYLEEND = 269,
     SVGSTART = 270,
     SVGEND = 271,
     LINK = 272,
     BACKTICK = 273,
     TRIPLEBACKTICK = 274,
     TABLEROWSTART = 275,
     TABLECEILEND = 276,
     ULINDENT = 277,
     OLINDENT = 278,
     TEXTINDENT = 279,
     PRE_INDENT = 280,
     INDENTED_PRE_INDENT = 281,
     TABLE_INDENT = 282,
     QUOTE_INDENT = 283,
     LEFTSQUARE = 284,
     RIGHTSQUARE_LEFTBRACKET = 285,
     RIGHTBRACKET = 286,
     EXCLAMATION_LEFTSQUARE = 287,
     ATTRLEFT = 288,
     ATTRRIGHT = 289,
     EMPTYATTR = 290,
     EM_BEGIN = 291,
     EM_END = 292,
     STRONG_BEGIN = 293,
     STRONG_END = 294,
     INDENT_QUOTEBLANKLINE = 295,
     MINUS = 296,
     PLUS = 297,
     RIGHTPARENTHESES = 298,
     LEFTPARENTHESES = 299,
     UNDERSCORE = 300,
     STAR = 301,
     BLANKLINE = 302,
     LINEBREAK = 303,
     LARGERTHAN = 304,
     DOUBLESTAR = 305,
     DOUBLEUNDERSCORE = 306,
     OLSTART = 307,
     ULSTART = 308,
     QUOTEBLANKLINE = 309,
     QUOTEOLSTART = 310,
     QUOTEULSTART = 311,
     EXCLAMATION = 312,
     STARX = 313
   };
#endif
/* Tokens.  */
#define TEXT 258
#define SPECIALCHAR 259
#define CODETEXT 260
#define H 261
#define QUOTEH 262
#define HTMLBLOCK 263
#define SECTION 264
#define VSECTION 265
#define SCRIPTSTART 266
#define SCRIPTEND 267
#define STYLESTART 268
#define STYLEEND 269
#define SVGSTART 270
#define SVGEND 271
#define LINK 272
#define BACKTICK 273
#define TRIPLEBACKTICK 274
#define TABLEROWSTART 275
#define TABLECEILEND 276
#define ULINDENT 277
#define OLINDENT 278
#define TEXTINDENT 279
#define PRE_INDENT 280
#define INDENTED_PRE_INDENT 281
#define TABLE_INDENT 282
#define QUOTE_INDENT 283
#define LEFTSQUARE 284
#define RIGHTSQUARE_LEFTBRACKET 285
#define RIGHTBRACKET 286
#define EXCLAMATION_LEFTSQUARE 287
#define ATTRLEFT 288
#define ATTRRIGHT 289
#define EMPTYATTR 290
#define EM_BEGIN 291
#define EM_END 292
#define STRONG_BEGIN 293
#define STRONG_END 294
#define INDENT_QUOTEBLANKLINE 295
#define MINUS 296
#define PLUS 297
#define RIGHTPARENTHESES 298
#define LEFTPARENTHESES 299
#define UNDERSCORE 300
#define STAR 301
#define BLANKLINE 302
#define LINEBREAK 303
#define LARGERTHAN 304
#define DOUBLESTAR 305
#define DOUBLEUNDERSCORE 306
#define OLSTART 307
#define ULSTART 308
#define QUOTEBLANKLINE 309
#define QUOTEOLSTART 310
#define QUOTEULSTART 311
#define EXCLAMATION 312
#define STARX 313




/* Copy the first part of user declarations.  */
#line 1 "markdown.y"

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

    // log_str("==== parse doc tree ===="); 
    parse_node_tree(_root_node);
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
#line 88 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 193 of yacc.c.  */
#line 303 "markdown.y.c"
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
#line 328 "markdown.y.c"

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
#define YYLAST   766

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    53,    57,    60,    64,
      68,    72,    76,    79,    81,    84,    86,    89,    92,    94,
      96,    99,   101,   103,   105,   109,   112,   114,   118,   123,
     126,   128,   132,   135,   138,   140,   145,   148,   150,   154,
     157,   159,   163,   166,   169,   171,   176,   179,   181,   185,
     188,   190,   194,   197,   199,   203,   208,   211,   213,   217,
     221,   224,   228,   231,   235,   238,   241,   243,   247,   252,
     257,   263,   266,   268,   271,   274,   276,   279,   282,   285,
     287,   289,   291,   293,   295,   297,   299,   301,   305,   309,
     312,   316,   320,   323,   326,   328,   330,   332,   334,   336,
     342,   348,   351,   353,   357,   361,   363,   365,   367,   371,
     375,   378,   381,   383,   385
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    61,    62,    -1,    -1,    65,
      -1,    63,    -1,    94,    -1,    66,    -1,    75,    -1,    81,
      -1,    77,    -1,    83,    -1,    87,    -1,    68,    -1,    89,
      -1,    91,    -1,    72,    -1,    79,    -1,    85,    -1,    73,
      -1,    70,    -1,    93,    -1,    64,    -1,     1,    -1,     6,
      99,    48,    -1,     8,     3,    48,    -1,     8,    48,    -1,
      11,    99,     1,    -1,    13,    99,     1,    -1,    15,    99,
       1,    -1,    19,   111,     1,    -1,    65,    98,    -1,    98,
      -1,    66,    67,    -1,    67,    -1,    99,    48,    -1,    68,
      69,    -1,    69,    -1,    47,    -1,    70,    71,    -1,    71,
      -1,    54,    -1,    40,    -1,     7,    99,    48,    -1,    73,
      74,    -1,    74,    -1,    49,    99,    48,    -1,    28,    49,
      99,    48,    -1,    75,    76,    -1,    76,    -1,    53,    99,
      48,    -1,    53,    48,    -1,    77,    78,    -1,    78,    -1,
      22,    53,    99,    48,    -1,    79,    80,    -1,    80,    -1,
      56,    99,    48,    -1,    81,    82,    -1,    82,    -1,    52,
      99,    48,    -1,    52,    48,    -1,    83,    84,    -1,    84,
      -1,    23,    52,    99,    48,    -1,    85,    86,    -1,    86,
      -1,    55,    99,    48,    -1,    87,    88,    -1,    88,    -1,
      24,    99,    48,    -1,    89,    90,    -1,    90,    -1,    25,
       5,    48,    -1,    19,   111,    19,    48,    -1,    91,    92,
      -1,    92,    -1,    26,     5,    48,    -1,    11,    99,    12,
      -1,    11,    12,    -1,    13,    99,    14,    -1,    13,    14,
      -1,    15,    99,    16,    -1,    15,    16,    -1,    94,    95,
      -1,    95,    -1,    20,    96,    48,    -1,    20,    96,     1,
      48,    -1,    27,    20,    96,    48,    -1,    27,    20,    96,
       1,    48,    -1,    96,    97,    -1,    97,    -1,    99,    21,
      -1,    99,     1,    -1,    21,    -1,     9,    48,    -1,    10,
      48,    -1,    99,   100,    -1,   100,    -1,   108,    -1,   105,
      -1,   106,    -1,   107,    -1,   110,    -1,   101,    -1,   102,
      -1,    36,   103,    37,    -1,    36,   103,     1,    -1,    36,
      37,    -1,    38,   103,    39,    -1,    38,   103,     1,    -1,
      38,    39,    -1,   103,   104,    -1,   104,    -1,   108,    -1,
     105,    -1,   106,    -1,    17,    -1,    29,   108,    30,   108,
      31,    -1,    32,   108,    30,   108,    31,    -1,   108,   109,
      -1,   109,    -1,    33,   108,    34,    -1,    33,   108,     1,
      -1,     3,    -1,     4,    -1,    35,    -1,    18,   111,    18,
      -1,    18,   111,     1,    -1,    18,     1,    -1,   111,   112,
      -1,   112,    -1,     5,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   133,   133,   155,   173,   187,   191,   195,   200,   204,
     208,   212,   216,   220,   224,   228,   232,   238,   242,   246,
     250,   254,   260,   264,   270,   283,   304,   318,   332,   347,
     362,   377,   394,   398,   412,   420,   435,   454,   462,   476,
     490,   498,   512,   524,   538,   558,   567,   583,   599,   617,
     625,   639,   657,   672,   680,   694,   714,   722,   736,   759,
     767,   781,   798,   814,   822,   836,   856,   864,   878,   899,
     907,   923,   961,   969,   986,  1003,  1021,  1029,  1046,  1070,
    1088,  1103,  1121,  1136,  1154,  1173,  1181,  1194,  1198,  1203,
    1208,  1218,  1226,  1241,  1254,  1269,  1285,  1290,  1299,  1307,
    1344,  1352,  1353,  1354,  1355,  1356,  1357,  1362,  1377,  1386,
    1402,  1417,  1426,  1451,  1459,  1500,  1508,  1509,  1522,  1542,
    1559,  1577,  1582,  1594,  1606,  1618,  1619,  1620,  1624,  1639,
    1654,  1674,  1675,  1679,  1680
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEXT", "SPECIALCHAR", "CODETEXT", "H",
  "QUOTEH", "HTMLBLOCK", "SECTION", "VSECTION", "SCRIPTSTART", "SCRIPTEND",
  "STYLESTART", "STYLEEND", "SVGSTART", "SVGEND", "LINK", "BACKTICK",
  "TRIPLEBACKTICK", "TABLEROWSTART", "TABLECEILEND", "ULINDENT",
  "OLINDENT", "TEXTINDENT", "PRE_INDENT", "INDENTED_PRE_INDENT",
  "TABLE_INDENT", "QUOTE_INDENT", "LEFTSQUARE", "RIGHTSQUARE_LEFTBRACKET",
  "RIGHTBRACKET", "EXCLAMATION_LEFTSQUARE", "ATTRLEFT", "ATTRRIGHT",
  "EMPTYATTR", "EM_BEGIN", "EM_END", "STRONG_BEGIN", "STRONG_END",
  "INDENT_QUOTEBLANKLINE", "MINUS", "PLUS", "RIGHTPARENTHESES",
  "LEFTPARENTHESES", "UNDERSCORE", "STAR", "BLANKLINE", "LINEBREAK",
  "LARGERTHAN", "DOUBLESTAR", "DOUBLEUNDERSCORE", "OLSTART", "ULSTART",
  "QUOTEBLANKLINE", "QUOTEOLSTART", "QUOTEULSTART", "EXCLAMATION", "STARX",
  "$accept", "markdownfile", "blocks", "block", "header", "raw_text",
  "lines", "block_p", "line_p", "block_blank", "line_blank",
  "block_quote_blank", "line_quote_blank", "block_quote_h",
  "block_quote_p", "line_quote_p", "block_ul", "line_ul",
  "block_indent_ul", "line_indent_ul", "block_quote_ul", "line_quote_ul",
  "block_ol", "line_ol", "block_indent_ol", "line_indent_ol",
  "block_quote_ol", "line_quote_ol", "block_indent_text",
  "line_indent_text", "block_pre", "line_pre", "block_indented_pre",
  "line_indented_pre", "pairedblock", "tablerows", "tablerow",
  "tableceils", "tableceil", "line", "inline_elements", "inline_element",
  "inline_emphasis", "inline_strong", "inline_text_collection",
  "inline_text", "link", "standard_link", "standard_image", "plaintext",
  "text_list", "inline_code", "codespan", "code_list", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    66,    66,    67,    68,    68,    69,
      70,    70,    71,    71,    72,    73,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    79,    79,    80,    81,
      81,    82,    82,    83,    83,    84,    85,    85,    86,    87,
      87,    88,    89,    89,    90,    90,    91,    91,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    97,    97,    97,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   102,   103,   103,   104,   104,   104,   105,   106,
     107,   108,   108,   108,   108,   109,   109,   109,   110,   110,
     110,   111,   111,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     2,     3,     3,
       3,     3,     2,     1,     2,     1,     2,     2,     1,     1,
       2,     1,     1,     1,     3,     2,     1,     3,     4,     2,
       1,     3,     2,     2,     1,     4,     2,     1,     3,     2,
       1,     3,     2,     2,     1,     4,     2,     1,     3,     2,
       1,     3,     2,     1,     3,     4,     2,     1,     3,     3,
       2,     3,     2,     3,     2,     2,     1,     3,     4,     4,
       5,     2,     1,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     5,
       5,     2,     1,     3,     3,     1,     1,     1,     3,     3,
       2,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    24,   125,   126,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,    43,    39,     0,     0,     0,    42,     0,     0,
       3,     6,    23,     5,     8,    35,    14,    38,    21,    41,
      17,    20,    46,     9,    50,    11,    54,    18,    57,    10,
      60,    12,    64,    19,    67,    13,    70,    15,    73,    16,
      77,    22,     7,    86,    33,     0,    99,   105,   106,   101,
     102,   103,   100,   122,   104,     0,     0,     0,    27,    96,
      97,    80,     0,    82,     0,    84,     0,   130,   134,   133,
       0,   132,     0,    95,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,   114,
     116,   117,   115,   112,     0,     0,    62,     0,    52,     0,
       0,     0,    32,    34,    37,    40,    45,    49,    53,    56,
      59,    63,    66,    69,     0,    72,    76,    85,    36,    98,
     121,    25,    44,    26,    28,    79,    29,    81,    30,    83,
     129,   128,   131,    31,     0,     0,    87,    91,    94,    93,
       0,     0,    71,    74,    78,     0,     0,     0,     0,   124,
     123,   108,   107,   113,   111,   110,    47,    61,    51,    68,
      58,     0,    75,    88,    55,    65,     0,    89,    48,     0,
       0,    90,   119,   120
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   104,   105,    74,
     106,    76,    77,    78,   118,   119,    79,    80,    81,    82,
      83,    84,   100,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
     -98,    29,   153,   -98,   -98,   -98,   -98,   719,   719,     6,
     -11,     8,   645,   655,   682,   -98,   130,    77,   692,    13,
      36,   719,    79,    89,    81,    63,    22,    22,    22,   -98,
     729,   604,   -98,   -98,   719,    32,   239,   -98,   719,   719,
     -98,   -98,   -98,   139,   719,   -98,    71,   -98,   -20,   -98,
     -98,    58,   -98,    67,   -98,   104,   -98,    72,   -98,    88,
     -98,   115,   -98,    95,   -98,   120,   -98,    60,   -98,   129,
     -98,   -98,    49,   -98,   -98,   261,   -98,   -98,   -98,   -98,
     -98,   -98,   106,   -98,   -98,   285,   307,   117,   -98,   -98,
     -98,   -98,   537,   -98,   564,   -98,   587,   -98,   -98,   -98,
     128,   -98,    23,   -98,   193,   -98,   609,   719,   719,   331,
     119,   121,   692,   719,   200,   251,    70,   -98,   110,   -98,
     -98,   -98,   106,   -98,    86,   353,   -98,   377,   -98,   399,
     423,   445,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,    77,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   126,   135,   -98,   -98,   -98,   -98,
     469,   491,   -98,   -98,   -98,   215,   515,    22,    22,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,    14,   -98,   -98,   -98,   -98,   136,   -98,   -98,    28,
     235,   -98,   -98,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   114,   -98,
     141,   -98,   142,   -98,   -98,   144,   -98,   145,   -98,   137,
     -98,   155,   -98,   140,   -98,   152,   -98,   138,   -98,   150,
     -98,   154,   -98,   148,   -98,   -98,   151,   108,   -97,   181,
       9,   -34,   -98,   -98,   196,   -41,   -18,   -16,   -98,   -26,
     -76,   -98,   -14,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
     114,   115,   116,   102,   122,   122,   150,   167,   162,    87,
     162,    75,   120,   120,   121,   121,    85,    86,    98,    99,
      32,    92,    94,    96,   163,     5,     6,    98,    99,     3,
     109,     5,     6,   164,    37,     5,     6,    89,   150,   150,
     150,   149,   164,   125,   127,   129,   150,   130,   131,    15,
      16,   149,   149,    75,    88,    28,    90,    29,   149,   202,
     149,    26,   149,    29,    27,    28,   107,    29,    30,    18,
      31,   179,   149,     5,     6,   149,    24,   183,   167,   144,
     126,    98,    99,   183,   110,    22,    25,   184,   108,     5,
       6,   149,   122,   149,   111,   149,   149,   149,   122,   162,
     120,   112,   121,    15,   180,    29,   120,    34,   121,     5,
       6,   181,   113,     5,     6,    26,   170,   171,    33,    28,
      36,    29,   176,   150,   150,   185,    19,    15,    39,   160,
     191,    97,    98,    99,    98,    99,   149,   149,    20,    26,
      35,    29,   149,    28,    21,    29,   161,   182,    10,    11,
      38,   199,   200,    -2,     4,    23,     5,     6,   133,     7,
       8,     9,    10,    11,    12,   153,    13,   173,    14,   174,
      15,    16,    17,    18,   192,    19,    20,    21,    22,    23,
      24,    25,    26,   193,   201,    27,    28,   134,    29,    30,
     135,    31,   138,    32,   165,   136,     5,     6,   137,   140,
      33,   142,    34,     5,     6,    35,    36,    37,    38,    39,
      15,    16,   139,   141,   103,   143,   196,   146,     5,     6,
     175,   145,    26,   147,   132,    27,    28,   124,    29,    30,
     177,    31,    15,    16,     0,    29,   103,     0,     5,     6,
       0,   166,     5,     6,    26,     0,     0,    27,    28,     0,
      29,    30,     0,    31,     5,     6,    15,    16,     0,     0,
       0,     0,     0,   197,     5,     6,   203,     0,    26,     0,
      29,    27,    28,     0,    29,    30,     0,    31,    15,    16,
       0,   178,     0,     0,     0,     0,    29,   128,     5,     6,
      26,     0,     0,    27,    28,     0,    29,    30,     0,    31,
       0,     0,    15,    16,     0,     0,     0,     0,     0,   148,
       5,     6,     0,     0,    26,     0,     0,    27,    28,     0,
      29,    30,     0,    31,    15,    16,     0,     0,     0,     0,
       0,     0,     0,   151,     5,     6,    26,     0,     0,    27,
      28,     0,    29,    30,     0,    31,     0,     0,    15,    16,
       0,     0,     0,     0,     0,   152,     5,     6,     0,     0,
      26,     0,     0,    27,    28,     0,    29,    30,     0,    31,
      15,    16,     0,     0,     0,     0,     0,     0,     0,   172,
       5,     6,    26,     0,     0,    27,    28,     0,    29,    30,
       0,    31,     0,     0,    15,    16,     0,     0,     0,     0,
       0,   186,     5,     6,     0,     0,    26,     0,     0,    27,
      28,     0,    29,    30,     0,    31,    15,    16,     0,     0,
       0,     0,     0,     0,     0,   187,     5,     6,    26,     0,
       0,    27,    28,     0,    29,    30,     0,    31,     0,     0,
      15,    16,     0,     0,     0,     0,     0,   188,     5,     6,
       0,     0,    26,     0,     0,    27,    28,     0,    29,    30,
       0,    31,    15,    16,     0,     0,     0,     0,     0,     0,
       0,   189,     5,     6,    26,     0,     0,    27,    28,     0,
      29,    30,     0,    31,     0,     0,    15,    16,     0,     0,
       0,     0,     0,   190,     5,     6,     0,     0,    26,     0,
       0,    27,    28,     0,    29,    30,     0,    31,    15,    16,
       0,     0,     0,     0,     0,     0,     0,   194,     5,     6,
      26,     0,     0,    27,    28,     0,    29,    30,     0,    31,
       0,     0,    15,    16,     0,     0,     0,     0,   154,   195,
       5,     6,     0,     0,    26,     0,     0,    27,    28,   155,
      29,    30,     0,    31,    15,    16,     0,     0,     0,     0,
       0,     0,     0,   198,     0,   156,    26,     5,     6,    27,
      28,     0,    29,    30,     0,    31,     0,     0,   157,     0,
       0,    15,    16,     0,     0,     0,     0,     0,   158,     0,
       5,     6,     0,    26,     0,     0,    27,    28,     0,    29,
      30,     0,    31,   159,    15,    16,     0,     5,     6,     0,
     168,     0,     5,     6,     0,     0,    26,     0,     0,    27,
      28,    15,    29,    30,     0,    31,    15,    16,     0,     0,
     169,     0,     0,    26,     0,     0,     0,    28,    26,    29,
       0,    27,    28,   123,    29,    30,     0,    31,     5,     6,
       0,     0,     0,     0,     0,     0,     0,    91,     5,     6,
       0,     0,    15,    16,     0,     0,     0,     0,     0,    93,
       0,     0,    15,    16,    26,     0,     0,    27,    28,     0,
      29,    30,     0,    31,    26,     5,     6,    27,    28,     0,
      29,    30,     0,    31,     0,     5,     6,     0,    95,    15,
      16,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,    26,     0,   103,    27,    28,     0,    29,    30,     0,
      31,    26,     5,     6,    27,    28,     0,    29,    30,     0,
      31,     0,     5,     6,     0,     0,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    26,     0,
       0,    27,    28,     0,    29,    30,     0,    31,    26,     0,
       0,     0,    28,     0,    29,     0,   117
};

static const yytype_int16 yycheck[] =
{
      26,    27,    28,    17,    30,    31,    82,   104,   100,     3,
     102,     2,    30,    31,    30,    31,     7,     8,     4,     5,
      40,    12,    13,    14,     1,     3,     4,     4,     5,     0,
      21,     3,     4,    19,    54,     3,     4,    48,   114,   115,
     116,    75,    19,    34,    35,    36,   122,    38,    39,    17,
      18,    85,    86,    44,    48,    33,    48,    35,    92,    31,
      94,    29,    96,    35,    32,    33,    53,    35,    36,    20,
      38,     1,   106,     3,     4,   109,    27,   118,   175,    19,
      48,     4,     5,   124,     5,    25,    28,     1,    52,     3,
       4,   125,   118,   127,     5,   129,   130,   131,   124,   191,
     118,    20,   118,    17,    34,    35,   124,    49,   124,     3,
       4,     1,    49,     3,     4,    29,   107,   108,    47,    33,
      53,    35,   113,   199,   200,    39,    22,    17,    56,     1,
     144,     1,     4,     5,     4,     5,   170,   171,    23,    29,
      52,    35,   176,    33,    24,    35,    18,    37,     9,    10,
      55,   177,   178,     0,     1,    26,     3,     4,    44,     6,
       7,     8,     9,    10,    11,    48,    13,    48,    15,    48,
      17,    18,    19,    20,    48,    22,    23,    24,    25,    26,
      27,    28,    29,    48,    48,    32,    33,    46,    35,    36,
      48,    38,    55,    40,     1,    51,     3,     4,    53,    59,
      47,    63,    49,     3,     4,    52,    53,    54,    55,    56,
      17,    18,    57,    61,    21,    65,     1,    69,     3,     4,
     112,    67,    29,    72,    43,    32,    33,    31,    35,    36,
      30,    38,    17,    18,    -1,    35,    21,    -1,     3,     4,
      -1,    48,     3,     4,    29,    -1,    -1,    32,    33,    -1,
      35,    36,    -1,    38,     3,     4,    17,    18,    -1,    -1,
      -1,    -1,    -1,    48,     3,     4,    31,    -1,    29,    -1,
      35,    32,    33,    -1,    35,    36,    -1,    38,    17,    18,
      -1,    30,    -1,    -1,    -1,    -1,    35,    48,     3,     4,
      29,    -1,    -1,    32,    33,    -1,    35,    36,    -1,    38,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    48,
       3,     4,    -1,    -1,    29,    -1,    -1,    32,    33,    -1,
      35,    36,    -1,    38,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,     3,     4,    29,    -1,    -1,    32,
      33,    -1,    35,    36,    -1,    38,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    48,     3,     4,    -1,    -1,
      29,    -1,    -1,    32,    33,    -1,    35,    36,    -1,    38,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
       3,     4,    29,    -1,    -1,    32,    33,    -1,    35,    36,
      -1,    38,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    48,     3,     4,    -1,    -1,    29,    -1,    -1,    32,
      33,    -1,    35,    36,    -1,    38,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,     3,     4,    29,    -1,
      -1,    32,    33,    -1,    35,    36,    -1,    38,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    48,     3,     4,
      -1,    -1,    29,    -1,    -1,    32,    33,    -1,    35,    36,
      -1,    38,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,     3,     4,    29,    -1,    -1,    32,    33,    -1,
      35,    36,    -1,    38,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    48,     3,     4,    -1,    -1,    29,    -1,
      -1,    32,    33,    -1,    35,    36,    -1,    38,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,     3,     4,
      29,    -1,    -1,    32,    33,    -1,    35,    36,    -1,    38,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,     1,    48,
       3,     4,    -1,    -1,    29,    -1,    -1,    32,    33,    12,
      35,    36,    -1,    38,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,     1,    29,     3,     4,    32,
      33,    -1,    35,    36,    -1,    38,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,    -1,    29,    -1,    -1,    32,    33,    -1,    35,
      36,    -1,    38,    16,    17,    18,    -1,     3,     4,    -1,
       1,    -1,     3,     4,    -1,    -1,    29,    -1,    -1,    32,
      33,    17,    35,    36,    -1,    38,    17,    18,    -1,    -1,
      21,    -1,    -1,    29,    -1,    -1,    -1,    33,    29,    35,
      -1,    32,    33,    39,    35,    36,    -1,    38,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,     3,     4,
      -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    29,    -1,    -1,    32,    33,    -1,
      35,    36,    -1,    38,    29,     3,     4,    32,    33,    -1,
      35,    36,    -1,    38,    -1,     3,     4,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    29,    -1,    21,    32,    33,    -1,    35,    36,    -1,
      38,    29,     3,     4,    32,    33,    -1,    35,    36,    -1,
      38,    -1,     3,     4,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    29,    -1,
      -1,    32,    33,    -1,    35,    36,    -1,    38,    29,    -1,
      -1,    -1,    33,    -1,    35,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    61,     0,     1,     3,     4,     6,     7,     8,
       9,    10,    11,    13,    15,    17,    18,    19,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    32,    33,    35,
      36,    38,    40,    47,    49,    52,    53,    54,    55,    56,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    98,    99,   100,   101,   102,   105,
     106,   107,   108,   109,   110,    99,    99,     3,    48,    48,
      48,    12,    99,    14,    99,    16,    99,     1,     4,     5,
     111,   112,   111,    21,    96,    97,    99,    53,    52,    99,
       5,     5,    20,    49,   108,   108,   108,    37,   103,   104,
     105,   106,   108,    39,   103,    99,    48,    99,    48,    99,
      99,    99,    98,    67,    69,    71,    74,    76,    78,    80,
      82,    84,    86,    88,    19,    90,    92,    95,    48,   100,
     109,    48,    48,    48,     1,    12,     1,    14,     1,    16,
       1,    18,   112,     1,    19,     1,    48,    97,     1,    21,
      99,    99,    48,    48,    48,    96,    99,    30,    30,     1,
      34,     1,    37,   104,     1,    39,    48,    48,    48,    48,
      48,   111,    48,    48,    48,    48,     1,    48,    48,   108,
     108,    48,    31,    31
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
#line 133 "markdown.y"
    { 
            /**
             * 1. _root_node == $1
             */
            show_rule("markdownfile: blocks", 0);
            parse_doc();
            is_doc_parsed = 1;
        ;}
    break;

  case 3:
#line 155 "markdown.y"
    {
            show_rule("blocks: blocks block", 1);
            if (!(yyvsp[(1) - (2)].node)->children) {
                (yyvsp[(1) - (2)].node)->children = (yyvsp[(2) - (2)].node);
                (yyvsp[(2) - (2)].node)->parent = (yyvsp[(1) - (2)].node);
            }

            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);

            // must avoid self-linking
            if (_tail_node != (yyvsp[(2) - (2)].node)) {
                _tail_node->next = (yyvsp[(2) - (2)].node);
                (yyvsp[(2) - (2)].node)->prev = _tail_node;
                (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            }

            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 4:
#line 173 "markdown.y"
    {
            show_rule("blocks: /* NULL */", 1);
            _root_node = block_node_create(
                TAG_ROOT
                , -100
                , 0
            );
            (yyval.node) = _root_node;
        ;}
    break;

  case 5:
#line 187 "markdown.y"
    { 
            show_rule("block: lines", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 6:
#line 191 "markdown.y"
    {
            show_rule("block: header", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 7:
#line 195 "markdown.y"
    {
            show_rule("block: tablerows", 2);

            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 8:
#line 200 "markdown.y"
    {
            show_rule("block: block_p", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 9:
#line 204 "markdown.y"
    {
            show_rule("block: block_ul", 2); 
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 10:
#line 208 "markdown.y"
    {
            show_rule("block: block_ol", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 11:
#line 212 "markdown.y"
    {
            show_rule("block: block_indent_ul", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 12:
#line 216 "markdown.y"
    {
            show_rule("block: block_indent_ol", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 13:
#line 220 "markdown.y"
    {
            show_rule("block: block_indent_text", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 14:
#line 224 "markdown.y"
    {
            show_rule("block: block_blank", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 15:
#line 228 "markdown.y"
    {
            show_rule("block: block_pre", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 16:
#line 232 "markdown.y"
    {
            show_rule("block: block_indented_pre", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 17:
#line 238 "markdown.y"
    {
            show_rule("block: block_quote_h", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 18:
#line 242 "markdown.y"
    {
            show_rule("block: block_quote_ul", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 19:
#line 246 "markdown.y"
    {
            show_rule("block: block_quote_ol", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 20:
#line 250 "markdown.y"
    {
            show_rule("block: block_quote_p", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 21:
#line 254 "markdown.y"
    {
            show_rule("block: block_quote_blank", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 22:
#line 260 "markdown.y"
    {
            show_rule("block: pairedblock", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 23:
#line 264 "markdown.y"
    {
            show_rule("block: raw_text", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 24:
#line 270 "markdown.y"
    {
            show_rule("block: error", 2);
            _node = block_node_create(
                TAG_ERROR
                , 0
                , 0
            );

            (yyval.node) = _node;
        ;}
    break;

  case 25:
#line 283 "markdown.y"
    {              
            show_rule("header: H inline_elements LINEBREAK", 3);
            tag_check_stack(TAG_H, 0); 

            _node = block_node_create(
                TAG_H
                , 0
                , 3
                , *((yyvsp[(2) - (3)].node)->ops) 
                , "" 
                , (yyvsp[(1) - (3)].text)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 26:
#line 304 "markdown.y"
    {
            show_rule("raw_text: HTMLBLOCK TEXT LINEBREAK", 3);
            tag_check_stack(TAG_RAW_TEXT, 0);
            _node = block_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(2) - (3)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 27:
#line 318 "markdown.y"
    {
            show_rule("raw_text: HTMLBLOCK LINEBREAK", 3);
            tag_check_stack(TAG_RAW_TEXT, 0);
            _node = block_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , (yyvsp[(1) - (2)].text)
                , ""
            );

            (yyval.node) = _node;
        ;}
    break;

  case 28:
#line 332 "markdown.y"
    {
            show_rule("raw_text: SCRIPTSTART inline_elements error", 3);
            tag_info = markdown_get_tag_info(str_concat((yyvsp[(1) - (3)].text), *((yyvsp[(2) - (3)].node)->ops + 1)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
            yyerrok;
        ;}
    break;

  case 29:
#line 347 "markdown.y"
    {
            show_rule("raw_text: STYLESTART inline_elements error", 3);
            tag_info = markdown_get_tag_info(str_concat((yyvsp[(1) - (3)].text), *((yyvsp[(2) - (3)].node)->ops + 1)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
            yyerrok;
        ;}
    break;

  case 30:
#line 362 "markdown.y"
    {
            show_rule("raw_text: SVGSTART inline_elements error", 3);
            tag_info = markdown_get_tag_info(str_concat((yyvsp[(1) - (3)].text), *((yyvsp[(2) - (3)].node)->ops + 1)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
            yyerrok;
        ;}
    break;

  case 31:
#line 377 "markdown.y"
    { 
            show_rule("raw_text: TRIPLEBACKTICK codespan error", 3);
            tag_info = markdown_get_tag_info(str_concat((yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text)));
            _node = line_node_create(
                TAG_RAW_TEXT
                , 0
                , 2
                , tag_info->attr
                , tag_info->content
            );
            (yyval.node) = _node;
            yyerrok;
        ;}
    break;

  case 32:
#line 394 "markdown.y"
    {
            show_rule("lines: lines line", 3);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 33:
#line 398 "markdown.y"
    {
            show_rule("lines: line", 3);
            _node = block_node_create(
                TAG_LINES
                , 0
                , 0
            );    

            (yyval.node) = _node;
        ;}
    break;

  case 34:
#line 412 "markdown.y"
    {
            show_rule("block_p: block_p line_p", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 35:
#line 420 "markdown.y"
    { 
            show_rule("block_p: line_p", 3);
            _node = block_node_create(
                TAG_BLOCK_P
                , 0
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 36:
#line 435 "markdown.y"
    { 
            show_rule("line_p: inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_P, 0); 

            _node = line_node_create(
                TAG_P
                , 0
                , 1
                , *((yyvsp[(1) - (2)].node)->ops) 
            );

            _node->children = (yyvsp[(1) - (2)].node);
            (yyvsp[(1) - (2)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 37:
#line 454 "markdown.y"
    {
            show_rule("block_blank: block_blank line_blank", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 38:
#line 462 "markdown.y"
    {
            show_rule("block_blank: line_blank", 3);
            _node = block_node_create(
                TAG_BLOCK_BLANK
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 39:
#line 476 "markdown.y"
    { 
            show_rule("line_blank: BLANKLINE", 4);
            tag_check_stack(TAG_BLANK, 100); 

            _node = line_node_create(
                TAG_BLANK
                , 0
                , 0
            );
            (yyval.node) = _node;
        ;}
    break;

  case 40:
#line 490 "markdown.y"
    {
            show_rule("block_quote_blank: block_quote_blank line_quote_blank", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 41:
#line 498 "markdown.y"
    {
            show_rule("block_quote_blank: line_quote_blank", 3);
            _node = block_node_create(
                TAG_BLOCK_QUOTE_BLANK
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 42:
#line 512 "markdown.y"
    { 
            show_rule("line_quote_blank: QUOTEBLANKLINE", 4);
            tag_check_stack(TAG_QUOTE_BLANK, 100); 

            _node = line_node_create(
                TAG_QUOTE_BLANK
                , 0
                , 0
            );
            (yyval.node) = _node;
        ;}
    break;

  case 43:
#line 524 "markdown.y"
    {
            show_rule("line_quote_blank: INDENT_QUOTEBLANKLINE", 4);
            tag_check_stack(TAG_QUOTE_BLANK, indent_level((yyvsp[(1) - (1)].text))); 

            _node = line_node_create(
                TAG_QUOTE_BLANK
                , indent_level((yyvsp[(1) - (1)].text))
                , 0
            );
            (yyval.node) = _node;
        ;}
    break;

  case 44:
#line 538 "markdown.y"
    { 
            show_rule("block_quote_h: QUOTEH inline_elements LINEBREAK", 3);
            tag_check_stack(TAG_QUOTE_H, 0); 

            _node = block_node_create(
                TAG_QUOTE_H
                , 0
                , 3
                , *((yyvsp[(2) - (3)].node)->ops)
                , ""
                , (yyvsp[(1) - (3)].text)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 45:
#line 558 "markdown.y"
    {
            show_rule("block_quote_p: block_quote_p line_quote_p", 3);
            tag_check_stack(TAG_BLANK, 100); 
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 46:
#line 567 "markdown.y"
    {
            show_rule("block_quote_p: line_quote_p", 3);
            _node = block_node_create(
                TAG_BLOCK_QUOTE_P
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 47:
#line 583 "markdown.y"
    { 
            show_rule("line_quote_p: LARGERTHAN inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_P, 0); 

            _node = line_node_create(
                TAG_QUOTE_P
                , 0
                , 1
                , *((yyvsp[(2) - (3)].node)->ops)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 48:
#line 599 "markdown.y"
    {
            show_rule("line_quote_p: QUOTE_INDENT LARGERTHAN inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_P, indent_level((yyvsp[(1) - (4)].text))); 

            _node = line_node_create(
                TAG_QUOTE_P
                , indent_level((yyvsp[(1) - (4)].text))
                , 1
                , *((yyvsp[(3) - (4)].node)->ops)
            );

            _node->children = (yyvsp[(3) - (4)].node);
            (yyvsp[(3) - (4)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 49:
#line 617 "markdown.y"
    {
            show_rule("block_ul: block_ul line_ul", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 50:
#line 625 "markdown.y"
    {
            show_rule("block_ul: line_ul", 3);
            _node = block_node_create(
                TAG_BLOCK_UL
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 51:
#line 639 "markdown.y"
    { 
            show_rule("line_ul: ULSTART inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_UL, 0); 
            tag_info = markdown_get_tag_info(*((yyvsp[(2) - (3)].node)->ops + 1));

            _node = line_node_create(
                TAG_UL
                , 0
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , *((yyvsp[(2) - (3)].node)->ops + 1)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 52:
#line 657 "markdown.y"
    { 
            show_rule("line_ul: ULSTART LINEBREAK", 4);
            tag_check_stack(TAG_UL, 0); 
            _node = line_node_create(
                TAG_UL
                , 0
                , 2
                , "" 
                , ""
            );
            (yyval.node) = _node;
        ;}
    break;

  case 53:
#line 672 "markdown.y"
    {
            show_rule("block_indent_ul: block_indent_ul line_indent_ul", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 54:
#line 680 "markdown.y"
    {
            show_rule("block_indent_ul: line_indent_ul", 4);
            _node = block_node_create(
                TAG_BLOCK_INDENT_UL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 55:
#line 694 "markdown.y"
    { 
            show_rule("line_indent_ul: ULINDENT ULSTART inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_INDENT_UL, indent_level((yyvsp[(1) - (4)].text))); 
            tag_info = markdown_get_tag_info(*((yyvsp[(3) - (4)].node)->ops + 1));

            _node = line_node_create(
                TAG_INDENT_UL
                , indent_level((yyvsp[(1) - (4)].text))
                , 2
                , *((yyvsp[(3) - (4)].node)->ops)
                , *((yyvsp[(3) - (4)].node)->ops + 1)
            );

            _node->children = (yyvsp[(3) - (4)].node);
            (yyvsp[(3) - (4)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 56:
#line 714 "markdown.y"
    {
            show_rule("block_quote_ul: block_quote_ul line_quote_ul", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 57:
#line 722 "markdown.y"
    {
            show_rule("block_quote_ul: line_quote_ul", 3);
            _node = block_node_create(
                TAG_BLOCK_QUOTE_UL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 58:
#line 736 "markdown.y"
    { 
            show_rule("line_quote_ul: QUOTEULSTART inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_UL, 0); 
            tag_info = markdown_get_tag_info(*((yyvsp[(2) - (3)].node)->ops + 1));

            _node = line_node_create(
                TAG_QUOTE_UL
                , 0
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , *((yyvsp[(2) - (3)].node)->ops + 1)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 59:
#line 759 "markdown.y"
    {
            show_rule("block_ol: block_ol line_ol", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 60:
#line 767 "markdown.y"
    {
            show_rule("block_ol: line_ol", 3);
            _node = block_node_create(
                TAG_BLOCK_OL
                , 0
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 61:
#line 781 "markdown.y"
    { 
            show_rule("line_ol: OLSTART inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_OL, 0); 
            tag_info = markdown_get_tag_info(*((yyvsp[(2) - (3)].node)->ops + 1));

            _node = line_node_create(
                TAG_OL
                , 0
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , *((yyvsp[(2) - (3)].node)->ops + 1)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 62:
#line 798 "markdown.y"
    { 
            show_rule("line_ol: OLSTART LINEBREAK", 4);
            tag_check_stack(TAG_OL, 0); 

            _node = line_node_create(
                TAG_OL
                , 0
                , 2
                , "" 
                , ""
            );
            (yyval.node) = _node;
        ;}
    break;

  case 63:
#line 814 "markdown.y"
    {
            show_rule("block_indent_ol: block_indent_ol line_indent_ol", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 64:
#line 822 "markdown.y"
    {
            show_rule("block_indent_ol: line_indent_ol", 3);
            _node = block_node_create(
                TAG_BLOCK_INDENT_OL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 65:
#line 836 "markdown.y"
    { 
            show_rule("line_indent_ol: OLINDENT OLSTART inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_INDENT_OL, indent_level((yyvsp[(1) - (4)].text))); 
            tag_info = markdown_get_tag_info(*((yyvsp[(3) - (4)].node)->ops + 1));

            _node = line_node_create(
                TAG_INDENT_OL
                , indent_level((yyvsp[(1) - (4)].text))
                , 2
                , *((yyvsp[(3) - (4)].node)->ops)
                , *((yyvsp[(3) - (4)].node)->ops + 1)
            );

            _node->children = (yyvsp[(3) - (4)].node);
            (yyvsp[(3) - (4)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 66:
#line 856 "markdown.y"
    {
            show_rule("block_quote_ol: block_indent_ol line_quote_ol", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 67:
#line 864 "markdown.y"
    {
            show_rule("block_quote_ol: line_quote_ol", 3);
            _node = block_node_create(
                TAG_BLOCK_QUOTE_OL
                , (yyvsp[(1) - (1)].node)->level
                , 0
            );
            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 68:
#line 878 "markdown.y"
    { 
            show_rule("line_quote_ol: QUOTEOLSTART inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_OL, 0); 
            tag_info = markdown_get_tag_info(*((yyvsp[(2) - (3)].node)->ops + 1));

            _node = line_node_create(
                TAG_QUOTE_OL
                , 0
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , *((yyvsp[(2) - (3)].node)->ops + 1)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 69:
#line 899 "markdown.y"
    {
            show_rule("block_indent_text: block_indent_text line_indent_text", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 70:
#line 907 "markdown.y"
    {
            show_rule("block_indent_text: line_indent_text", 3);
            _node = block_node_create(
                TAG_BLOCK_INDENT_TEXT
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 71:
#line 923 "markdown.y"
    { 
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

            tag_check_stack(TAG_INDENT_TEXT, indent_level((yyvsp[(1) - (3)].text))); 
            tag_info = markdown_get_tag_info(*((yyvsp[(2) - (3)].node)->ops + 1));

            _node = line_node_create(
                TAG_INDENT_TEXT
                , indent_level((yyvsp[(1) - (3)].text))
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , *((yyvsp[(2) - (3)].node)->ops + 1)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 72:
#line 961 "markdown.y"
    {
            show_rule("block_pre: block_pre line_pre", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 73:
#line 969 "markdown.y"
    {
            show_rule("block_pre: line_pre", 3);
            _node = block_node_create(
                TAG_BLOCK_PRE 
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 74:
#line 986 "markdown.y"
    {
            show_rule("line_pre: PRE_INDENT CODETEXT LINEBREAK", 4);
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));

            _node = line_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , str_padding_left( 
                    tag_info -> content
                    , 4 * ( indent_level((yyvsp[(1) - (3)].text)) - 1 ) 
                ) 
            );
            (yyval.node) = _node;
        ;}
    break;

  case 75:
#line 1003 "markdown.y"
    {
            show_rule("line_pre: TRIPLEBACKTICK codespan TRIPLEBACKTICK LINEBREAK", 4);
            tag_check_stack(TAG_PRE, 0); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (4)].text));

            _node = line_node_create(
                TAG_PRE
                , 0
                , 2
                , tag_info -> attr
                , tag_info -> content
            );
            (yyval.node) = _node;
        ;}
    break;

  case 76:
#line 1021 "markdown.y"
    {
            show_rule("block_indented_pre: block_indented_pre line_indented_pre", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 77:
#line 1029 "markdown.y"
    {
            show_rule("block_indented_pre: line_indented_pre", 3);
            _node = block_node_create(
                TAG_BLOCK_INDENT_PRE 
                , (yyvsp[(1) - (1)].node)->level
                , 1
                , *((yyvsp[(1) - (1)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 78:
#line 1046 "markdown.y"
    {
            show_rule("line_indented_pre: INDENTED_PRE_INDENT CODETEXT LINEBREAK", 4);
            _inner_pre_level = inner_pre_level(indent_level((yyvsp[(1) - (3)].text)));

            /* PRE indent level is 1 less than the literal indent */
            tag_check_stack(TAG_INDENT_PRE, _inner_pre_level); 
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));

            _node = line_node_create(
                TAG_INDENT_PRE
                , _inner_pre_level
                , 2
                , tag_info -> attr
                , str_padding_left( 
                    tag_info -> content
                    , 4 * ( indent_level((yyvsp[(1) - (3)].text)) - _inner_pre_level - 1 ) 
                )
            );
            (yyval.node) = _node;
        ;}
    break;

  case 79:
#line 1070 "markdown.y"
    {
            show_rule("pairedblock: SCRIPTSTART inline_elements SCRIPTEND", 3);
            tag_check_stack(TAG_SCRIPTBLOCK, 0);

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(3) - (3)].text)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 80:
#line 1088 "markdown.y"
    {
            show_rule("pairedblock: SCRIPTSTART SCRIPTEND", 3);
            tag_check_stack(TAG_SCRIPTBLOCK, 0);

            _node = block_node_create(
                TAG_SCRIPTBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (2)].text)
                , (yyvsp[(2) - (2)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 81:
#line 1103 "markdown.y"
    {
            show_rule("pairedblock: STYLESTART inline_elements STYLEEND", 3);
            tag_check_stack(TAG_STYLEBLOCK, 0);

            _node = block_node_create(
                TAG_STYLEBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(3) - (3)].text)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 82:
#line 1121 "markdown.y"
    {
            show_rule("pairedblock: STYLESTART STYLEEND", 3);
            tag_check_stack(TAG_STYLEBLOCK, 0);

            _node = block_node_create(
                TAG_STYLEBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (2)].text)
                , (yyvsp[(2) - (2)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 83:
#line 1136 "markdown.y"
    {
            show_rule("pairedblock: SVGSTART inline_elements SVGEND", 3);
            tag_check_stack(TAG_SVGBLOCK, 0);

            _node = block_node_create(
                TAG_SVGBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (3)].text)
                , (yyvsp[(3) - (3)].text)
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;

            (yyval.node) = _node;
        ;}
    break;

  case 84:
#line 1154 "markdown.y"
    {
            show_rule("pairedblock: SVGSTART SVGEND", 3);
            tag_check_stack(TAG_SVGBLOCK, 0);

            _node = block_node_create(
                TAG_SVGBLOCK
                , 0
                , 2
                , (yyvsp[(1) - (2)].text)
                , (yyvsp[(2) - (2)].text)
            );

            (yyval.node) = _node;
        ;}
    break;

  case 85:
#line 1173 "markdown.y"
    {
                                                            show_rule("tablerows: tablerows tablerow", 3);
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
                                                            _tail_node->next = (yyvsp[(2) - (2)].node);
                                                            (yyvsp[(2) - (2)].node)->prev = _tail_node; 
                                                            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
                                                            (yyval.node) = (yyvsp[(1) - (2)].node); 
                                                        ;}
    break;

  case 86:
#line 1181 "markdown.y"
    {
                                                            show_rule("tablerows: tablerow", 3);
                                                            _node = block_node_create(
                                                                TAG_TABLE
                                                                , (yyvsp[(1) - (1)].node)->level - 1
                                                                , 0
                                                            );
                                                            _node->children = (yyvsp[(1) - (1)].node);
                                                            (yyvsp[(1) - (1)].node)->parent = _node;
                                                            (yyval.node) = _node; 
                                                        ;}
    break;

  case 87:
#line 1194 "markdown.y"
    {
                                                            show_rule("tablerow: TABLEROWSTART tableceils LINEBREAK", 4);
                                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                                        ;}
    break;

  case 88:
#line 1198 "markdown.y"
    {
                                                            show_rule("tablerow: TABLEROWSTART tableceils error LINEBREAK", 4);
                                                            (yyval.node) = (yyvsp[(2) - (4)].node);
                                                            yyerrok;
                                                        ;}
    break;

  case 89:
#line 1203 "markdown.y"
    {
                                                            show_rule("tablerow: TABLE_INDENT TABLEROWSTART tableceils LINEBREAK", 4);
                                                            (yyvsp[(3) - (4)].node)->level = indent_level((yyvsp[(1) - (4)].text)) + 1;
                                                            (yyval.node) = (yyvsp[(3) - (4)].node);
                                                        ;}
    break;

  case 90:
#line 1208 "markdown.y"
    {
                                                            show_rule("tablerow: TABLE_INDENT TABLEROWSTART tableceils error LINEBREAK", 4);
                                                            (yyvsp[(3) - (5)].node)->level = indent_level((yyvsp[(1) - (5)].text)) + 1;
                                                            (yyval.node) = (yyvsp[(3) - (5)].node);
                                                            yyerrok;
                                                        ;}
    break;

  case 91:
#line 1218 "markdown.y"
    { 
                                                            show_rule("tableceils: tableceils tableceil",5);
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children); 
                                                            _tail_node->next = (yyvsp[(2) - (2)].node); 
                                                            (yyvsp[(2) - (2)].node)->prev = _tail_node;
                                                            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
                                                            (yyval.node) = (yyvsp[(1) - (2)].node);
                                                        ;}
    break;

  case 92:
#line 1226 "markdown.y"
    {
                                                            show_rule("tableceils: tableceil", 5);
                                                            _node = line_node_create(
                                                                TAG_TR
                                                                , 1
                                                                , 0
                                                            );

                                                            _node->children = (yyvsp[(1) - (1)].node);
                                                            (yyvsp[(1) - (1)].node)->parent = _node;
                                                            (yyval.node) = _node;
                                                        ;}
    break;

  case 93:
#line 1241 "markdown.y"
    {
            show_rule("tableceil: inline_elements TABLECEILEND", 6);
            _node = inline_node_create(
                TAG_TD
                , NODE_LEVEL_SPECIAL
                , 1
                , *((yyvsp[(1) - (2)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (2)].node);
            (yyvsp[(1) - (2)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 94:
#line 1254 "markdown.y"
    {
            show_rule("tableceil: inline_elements error", 6);
            _node = inline_node_create(
                TAG_TD
                , NODE_LEVEL_SPECIAL
                , 1
                , *((yyvsp[(1) - (2)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (2)].node);
            (yyvsp[(1) - (2)].node)->parent = _node;
            (yyval.node) = _node;
            
            yyerrok;
        ;}
    break;

  case 95:
#line 1269 "markdown.y"
    {
            show_rule("tableceil: TABLECEILEND", 6);
            _node = inline_node_create(
                TAG_TD
                , NODE_LEVEL_SPECIAL
                , 1
                , ""
            );

            (yyval.node) = _node;
        ;}
    break;

  case 96:
#line 1285 "markdown.y"
    {
            show_rule("line: SECTION LINEBREAK", 4);
            tag_check_stack(TAG_SECTION, -1); 
        ;}
    break;

  case 97:
#line 1290 "markdown.y"
    {
            show_rule("line: VSECTION LINEBREAK", 4);
            tag_check_stack(TAG_VSECTION, -1); 
        ;}
    break;

  case 98:
#line 1299 "markdown.y"
    {
            show_rule("inline_elements: inline_elements inline_element", 5);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 99:
#line 1307 "markdown.y"
    {
            show_rule("inline_elements: inline_element", 5);
            if (
                /**
                 * 1. if the first child is a link or image
                 * 2. then, the attr and content attributes will not be transfer to parent
                 */
                TAG_INLINE_LINK == (yyvsp[(1) - (1)].node)->tag
                || TAG_INLINE_IMAGE == (yyvsp[(1) - (1)].node)->tag
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
                    , *(yyvsp[(1) - (1)].node)->ops
                    , *((yyvsp[(1) - (1)].node)->ops + 1)
                );
            }

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 100:
#line 1344 "markdown.y"
    { 
            show_rule("inline_element: plaintext", 6);
            tag_info = markdown_get_tag_info(*((yyvsp[(1) - (1)].node)->ops + 1));     
            *((yyvsp[(1) - (1)].node)->ops) = tag_info->attr;
            *((yyvsp[(1) - (1)].node)->ops + 1) = tag_info->content;

            (yyval.node) = (yyvsp[(1) - (1)].node); 
        ;}
    break;

  case 101:
#line 1352 "markdown.y"
    { show_rule("inline_element: link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 102:
#line 1353 "markdown.y"
    { show_rule("inline_element: standard_link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 103:
#line 1354 "markdown.y"
    { show_rule("inline_element: standard_image", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 104:
#line 1355 "markdown.y"
    { show_rule("inline_element: inline_code", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 105:
#line 1356 "markdown.y"
    { show_rule("inline_element: inline_emphasis", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 106:
#line 1357 "markdown.y"
    { show_rule("inline_element: inline_strong", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 107:
#line 1362 "markdown.y"
    {
            show_rule("inline_emphasis: EM_BEGIN inline_text_collection EM_END", 7);
            _node = inline_node_create(
                TAG_INLINE_EM
                , NODE_LEVEL_SPECIAL
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , ""
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 108:
#line 1377 "markdown.y"
    {
            show_rule("inline_emphasis: EM_BEGIN inline_text_collection error", 7);
            str = str_concat((yyvsp[(1) - (3)].text), *((yyvsp[(2) - (3)].node)->children->ops + 1));
            *((yyvsp[(2) - (3)].node)->children->ops + 1) = str;

            (yyval.node) = (yyvsp[(2) - (3)].node);
            yyerrok;
        ;}
    break;

  case 109:
#line 1386 "markdown.y"
    {
            show_rule("inline_emphasis: EM_BEGIN EM_END", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text))
            );

            (yyval.node) = _node;
        ;}
    break;

  case 110:
#line 1402 "markdown.y"
    {
            show_rule("inline_strong: STRONG_BEGIN inline_text_collection STRONG_END", 7);
            _node = inline_node_create(
                TAG_INLINE_STRONG
                , NODE_LEVEL_SPECIAL
                , 2
                , *((yyvsp[(2) - (3)].node)->ops)
                , ""
            );

            _node->children = (yyvsp[(2) - (3)].node);
            (yyvsp[(2) - (3)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 111:
#line 1417 "markdown.y"
    {
            show_rule("inline_strong: STRONG_BEGIN inline_text_collection error", 7);
            str = str_concat((yyvsp[(1) - (3)].text), *((yyvsp[(2) - (3)].node)->children->ops + 1));
            *((yyvsp[(2) - (3)].node)->children->ops + 1) = str;

            (yyval.node) = (yyvsp[(2) - (3)].node);
            yyerrok;
        ;}
    break;

  case 112:
#line 1426 "markdown.y"
    {
            show_rule("inline_strong: STRONG_BEGIN STRONG_END", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text))
            );

            (yyval.node) = _node;
        ;}
    break;

  case 113:
#line 1451 "markdown.y"
    {
            show_rule("inline_text_collection: inline_text_collection inline_text", 5);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 114:
#line 1459 "markdown.y"
    {
            show_rule("inline_text_collection: inline_text", 5);
            if (
                /**
                 * 1. if the first child is a link or image
                 * 2. then, the attr and content attributes will not be transfer to parent
                 */
                TAG_INLINE_LINK == (yyvsp[(1) - (1)].node)->tag
                || TAG_INLINE_IMAGE == (yyvsp[(1) - (1)].node)->tag
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
                    , *(yyvsp[(1) - (1)].node)->ops
                    , *((yyvsp[(1) - (1)].node)->ops + 1)
                );
            }

            _node->children = (yyvsp[(1) - (1)].node);
            (yyvsp[(1) - (1)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 115:
#line 1500 "markdown.y"
    {
            show_rule("inline_text: plaintext", 6);
            tag_info = markdown_get_tag_info(*((yyvsp[(1) - (1)].node)->ops + 1));     
            *((yyvsp[(1) - (1)].node)->ops) = tag_info->attr;
            *((yyvsp[(1) - (1)].node)->ops + 1) = tag_info->content;

            (yyval.node) = (yyvsp[(1) - (1)].node); 
        ;}
    break;

  case 116:
#line 1508 "markdown.y"
    { show_rule("inline_text: link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 117:
#line 1509 "markdown.y"
    { show_rule("inline_text: standard_link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 118:
#line 1522 "markdown.y"
    {
            show_rule("link: LINK", 7);
            // get content A between `<` and `>`
            tag_info = markdown_get_tag_info((yyvsp[(1) - (1)].text));
            // get tag info from A
            tag_info = markdown_get_tag_info(tag_info->content);

            _node = inline_node_create(
                TAG_INLINE_LINK
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
        ;}
    break;

  case 119:
#line 1542 "markdown.y"
    {
            show_rule("standard_link: LEFTSQUARE plaintext RIGHTSQUARE_LEFTBRACKET plaintext RIGHTBRACKET", 7);
            tag_info = markdown_get_standard_link_tag_info(*((yyvsp[(2) - (5)].node)->ops + 1), *((yyvsp[(4) - (5)].node)->ops + 1));

            _node = inline_node_create(
                TAG_INLINE_LINK
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
        ;}
    break;

  case 120:
#line 1559 "markdown.y"
    {
            show_rule("standard_image: EXCLAMATION_LEFTSQUARE plaintext RIGHTSQUARE_LEFTBRACKET plaintext RIGHTBRACKET", 7);
            tag_info = markdown_get_standard_image_tag_info(*((yyvsp[(2) - (5)].node)->ops + 1), *((yyvsp[(4) - (5)].node)->ops + 1));

            _node = inline_node_create(
                TAG_INLINE_IMAGE
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
        ;}
    break;

  case 121:
#line 1577 "markdown.y"
    {
            show_rule("plaintext: plaintext text_list", 7);
            *((yyvsp[(1) - (2)].node)->ops + 1) = str_concat(*((yyvsp[(1) - (2)].node)->ops + 1), (yyvsp[(2) - (2)].text));
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 122:
#line 1582 "markdown.y"
    {
            show_rule("plaintext: text_list", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , (yyvsp[(1) - (1)].text) 
            );

            (yyval.node) = _node;
        ;}
    break;

  case 123:
#line 1594 "markdown.y"
    {
            show_rule("plaintext: ATTRLEFT plaintext ATTRRIGHT", 7);
            *((yyvsp[(2) - (3)].node)->ops + 1) = str_concat(
                (yyvsp[(1) - (3)].text)
                /**
                 * 1. @[data-title="def\]"]abc => @[data-title="def&#93;"]abc
                 */
                , str_replace(*((yyvsp[(2) - (3)].node)->ops + 1), "]", "&#93;")
            );
            *((yyvsp[(2) - (3)].node)->ops + 1) = str_concat(*((yyvsp[(2) - (3)].node)->ops + 1), (yyvsp[(3) - (3)].text));
            (yyval.node) = (yyvsp[(2) - (3)].node);
        ;}
    break;

  case 124:
#line 1606 "markdown.y"
    {
            show_rule("plaintext: ATTRLEFT plaintext error", 7);
            *((yyvsp[(2) - (3)].node)->ops + 1) = str_concat(
                (yyvsp[(1) - (3)].text)
                , str_replace(*((yyvsp[(2) - (3)].node)->ops + 1), "]", "&#93;")
            );
            (yyval.node) = (yyvsp[(2) - (3)].node);
            yyerrok;
        ;}
    break;

  case 125:
#line 1618 "markdown.y"
    { show_rule("text_list: TEXT", 8); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 126:
#line 1619 "markdown.y"
    { show_rule("text_list: SPECIALCHAR", 8); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 127:
#line 1620 "markdown.y"
    { show_rule("text_list: EMPTYATTR", 8); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 128:
#line 1624 "markdown.y"
    { 
            show_rule("inline_code: BACKTICK codespan BACKTICK", 7);
            tag_info = markdown_get_tag_info((yyvsp[(2) - (3)].text));

            _node = inline_node_create(
                TAG_INLINE_CODE
                , NODE_LEVEL_SPECIAL
                , 2 
                , tag_info->attr
                , tag_info->content
            );

            (yyval.node) = _node;
        ;}
    break;

  case 129:
#line 1639 "markdown.y"
    { 
            show_rule("inline_code: BACKTICK codespan error", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_format("%s%s", (yyvsp[(1) - (3)].text), (yyvsp[(2) - (3)].text))
            );

            (yyval.node) = _node;

            yyerrok; 
        ;}
    break;

  case 130:
#line 1654 "markdown.y"
    { 
            show_rule("inline_code: BACKTICK error", 7);
            _node = inline_node_create(
                TAG_INLINE_TEXT
                , NODE_LEVEL_SPECIAL
                , 2
                , ""
                , str_format("%s", (yyvsp[(1) - (2)].text))
            );

            (yyval.node) = _node;

            yyerrok; 
        ;}
    break;

  case 131:
#line 1674 "markdown.y"
    { show_rule("codespan: codespan code_list", 8); (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 132:
#line 1675 "markdown.y"
    { show_rule("codespan: code_list", 8); (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 133:
#line 1679 "markdown.y"
    { show_rule("code_list: CODETEXT", 9); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 134:
#line 1680 "markdown.y"
    { show_rule("code_list: SPECIALCHAR", 9); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3717 "markdown.y.c"
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


#line 1683 "markdown.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


