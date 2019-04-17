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
     LEFTSQUARE = 282,
     RIGHTSQUARE_LEFTBRACKET = 283,
     RIGHTBRACKET = 284,
     EXCLAMATION_LEFTSQUARE = 285,
     ATTRLEFT = 286,
     ATTRRIGHT = 287,
     EMPTYATTR = 288,
     EM_BEGIN = 289,
     EM_END = 290,
     MINUS = 291,
     PLUS = 292,
     RIGHTPARENTHESES = 293,
     LEFTPARENTHESES = 294,
     UNDERSCORE = 295,
     STAR = 296,
     BLANKLINE = 297,
     LINEBREAK = 298,
     LARGERTHAN = 299,
     DOUBLESTAR = 300,
     DOUBLEUNDERSCORE = 301,
     OLSTART = 302,
     ULSTART = 303,
     QUOTEBLANKLINE = 304,
     QUOTEOLSTART = 305,
     QUOTEULSTART = 306,
     EXCLAMATION = 307,
     STARX = 308
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
#define LEFTSQUARE 282
#define RIGHTSQUARE_LEFTBRACKET 283
#define RIGHTBRACKET 284
#define EXCLAMATION_LEFTSQUARE 285
#define ATTRLEFT 286
#define ATTRRIGHT 287
#define EMPTYATTR 288
#define EM_BEGIN 289
#define EM_END 290
#define MINUS 291
#define PLUS 292
#define RIGHTPARENTHESES 293
#define LEFTPARENTHESES 294
#define UNDERSCORE 295
#define STAR 296
#define BLANKLINE 297
#define LINEBREAK 298
#define LARGERTHAN 299
#define DOUBLESTAR 300
#define DOUBLEUNDERSCORE 301
#define OLSTART 302
#define ULSTART 303
#define QUOTEBLANKLINE 304
#define QUOTEOLSTART 305
#define QUOTEULSTART 306
#define EXCLAMATION 307
#define STARX 308




/* Copy the first part of user declarations.  */
#line 1 "markdown.y"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "strutils.h"
#include "markdown-utils.h" 
#include "node.h"
#include "nodetree.h"

#define _ISDEBUGPARSER 0
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
    fix_node_level(_root_node);
    // fprintf( stderr, "==== traverse ====\n" ); 
    // traverse_nodes(_root_node); 

    complement_block_nodes(_root_node); 

    // fprintf( stderr, "==== traverse ====\n" ); 
    // traverse_nodes(_root_node); 

    rearrange_block_nodes(_root_node);

    // fprintf( stderr, "==== merge block nodes ====\n" ); 
    merge_block_nodes(_root_node);

    // fprintf( stderr, "==== traverse ====\n" ); 
    // traverse_nodes(_root_node); 

    // fprintf( stderr, "==== parse doc tree ====\n" ); 
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
#line 64 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 193 of yacc.c.  */
#line 269 "markdown.y.c"
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
#line 294 "markdown.y.c"

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
#define YYLAST   562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

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
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    49,    53,    57,    60,    64,    68,
      72,    76,    79,    81,    84,    86,    89,    92,    94,    96,
      99,   101,   105,   108,   110,   114,   117,   120,   122,   127,
     130,   132,   136,   139,   141,   145,   148,   151,   153,   158,
     161,   163,   167,   170,   172,   176,   179,   181,   185,   190,
     193,   195,   199,   203,   206,   210,   213,   217,   220,   223,
     225,   229,   234,   237,   239,   242,   245,   247,   250,   253,
     256,   258,   260,   262,   264,   266,   268,   270,   274,   278,
     281,   284,   286,   288,   290,   292,   294,   300,   306,   309,
     311,   315,   319,   321,   323,   325,   329,   333,   336,   339,
     341,   343
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    56,    57,    -1,    -1,    60,
      -1,    58,    -1,    86,    -1,    61,    -1,    67,    -1,    73,
      -1,    69,    -1,    75,    -1,    79,    -1,    71,    -1,    77,
      -1,    63,    -1,    65,    -1,    81,    -1,    83,    -1,    85,
      -1,    59,    -1,     1,    -1,     6,    91,    43,    -1,     7,
      91,    43,    -1,     8,     3,    43,    -1,     8,    43,    -1,
      11,    91,     1,    -1,    13,    91,     1,    -1,    15,    91,
       1,    -1,    19,   102,     1,    -1,    60,    90,    -1,    90,
      -1,    61,    62,    -1,    62,    -1,    91,    43,    -1,    63,
      64,    -1,    64,    -1,    42,    -1,    65,    66,    -1,    66,
      -1,    44,    91,    43,    -1,    67,    68,    -1,    68,    -1,
      48,    91,    43,    -1,    48,    43,    -1,    69,    70,    -1,
      70,    -1,    22,    48,    91,    43,    -1,    71,    72,    -1,
      72,    -1,    51,    91,    43,    -1,    73,    74,    -1,    74,
      -1,    47,    91,    43,    -1,    47,    43,    -1,    75,    76,
      -1,    76,    -1,    23,    47,    91,    43,    -1,    77,    78,
      -1,    78,    -1,    50,    91,    43,    -1,    79,    80,    -1,
      80,    -1,    24,    91,    43,    -1,    81,    82,    -1,    82,
      -1,    25,     5,    43,    -1,    19,   102,    19,    43,    -1,
      83,    84,    -1,    84,    -1,    26,     5,    43,    -1,    11,
      91,    12,    -1,    11,    12,    -1,    13,    91,    14,    -1,
      13,    14,    -1,    15,    91,    16,    -1,    15,    16,    -1,
      86,    87,    -1,    87,    -1,    20,    88,    43,    -1,    20,
      88,     1,    43,    -1,    88,    89,    -1,    89,    -1,    91,
      21,    -1,    91,     1,    -1,    49,    -1,     9,    43,    -1,
      10,    43,    -1,    91,    92,    -1,    92,    -1,    99,    -1,
      96,    -1,    97,    -1,    98,    -1,   101,    -1,    93,    -1,
      34,    94,    35,    -1,    34,    94,     1,    -1,    34,    35,
      -1,    94,    95,    -1,    95,    -1,    99,    -1,    96,    -1,
      97,    -1,    17,    -1,    27,    99,    28,    99,    29,    -1,
      30,    99,    28,    99,    29,    -1,    99,   100,    -1,   100,
      -1,    31,    99,    32,    -1,    31,    99,     1,    -1,     3,
      -1,     4,    -1,    33,    -1,    18,   102,    18,    -1,    18,
     102,     1,    -1,    18,     1,    -1,   102,   103,    -1,   103,
      -1,     5,    -1,     4,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   127,   145,   159,   163,   167,   172,   176,
     180,   184,   188,   192,   196,   200,   204,   208,   212,   216,
     220,   224,   228,   241,   259,   280,   294,   308,   323,   338,
     353,   370,   374,   388,   396,   411,   430,   438,   452,   466,
     475,   491,   511,   519,   533,   551,   566,   574,   588,   608,
     616,   630,   653,   661,   675,   692,   708,   716,   730,   750,
     758,   772,   793,   801,   817,   855,   863,   880,   897,   915,
     923,   940,   964,   982,   997,  1015,  1030,  1048,  1067,  1075,
    1088,  1092,  1101,  1109,  1124,  1137,  1157,  1162,  1167,  1176,
    1184,  1221,  1229,  1230,  1231,  1232,  1233,  1238,  1253,  1262,
    1287,  1295,  1336,  1344,  1345,  1358,  1378,  1395,  1413,  1418,
    1430,  1442,  1454,  1455,  1456,  1460,  1475,  1490,  1510,  1511,
    1515,  1516
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
  "LEFTSQUARE", "RIGHTSQUARE_LEFTBRACKET", "RIGHTBRACKET",
  "EXCLAMATION_LEFTSQUARE", "ATTRLEFT", "ATTRRIGHT", "EMPTYATTR",
  "EM_BEGIN", "EM_END", "MINUS", "PLUS", "RIGHTPARENTHESES",
  "LEFTPARENTHESES", "UNDERSCORE", "STAR", "BLANKLINE", "LINEBREAK",
  "LARGERTHAN", "DOUBLESTAR", "DOUBLEUNDERSCORE", "OLSTART", "ULSTART",
  "QUOTEBLANKLINE", "QUOTEOLSTART", "QUOTEULSTART", "EXCLAMATION", "STARX",
  "$accept", "markdownfile", "blocks", "block", "header", "raw_text",
  "lines", "block_p", "line_p", "block_blank", "line_blank",
  "block_quote_p", "line_quote_p", "block_ul", "line_ul",
  "block_indent_ul", "line_indent_ul", "block_quote_ul", "line_quote_ul",
  "block_ol", "line_ol", "block_indent_ol", "line_indent_ol",
  "block_quote_ol", "line_quote_ol", "block_indent_text",
  "line_indent_text", "block_pre", "line_pre", "block_indented_pre",
  "line_indented_pre", "pairedblock", "tablerows", "tablerow",
  "tableceils", "tableceil", "line", "inline_elements", "inline_element",
  "inline_emphasis", "inline_text_collection", "inline_text", "link",
  "standard_link", "standard_image", "plaintext", "text_list",
  "inline_code", "codespan", "code_list", 0
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
       0,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    62,    63,    63,    64,    65,
      65,    66,    67,    67,    68,    68,    69,    69,    70,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    76,    77,
      77,    78,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      94,    94,    95,    95,    95,    96,    97,    98,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     2,     3,     3,     3,
       3,     2,     1,     2,     1,     2,     2,     1,     1,     2,
       1,     3,     2,     1,     3,     2,     2,     1,     4,     2,
       1,     3,     2,     1,     3,     2,     2,     1,     4,     2,
       1,     3,     2,     1,     3,     2,     1,     3,     4,     2,
       1,     3,     3,     2,     3,     2,     3,     2,     2,     1,
       3,     4,     2,     1,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     5,     5,     2,     1,
       3,     3,     1,     1,     1,     3,     3,     2,     2,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    22,   112,   113,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,    38,
       0,     0,     0,    86,     0,     0,     3,     6,    21,     5,
       8,    34,    16,    37,    17,    40,     9,    43,    11,    47,
      14,    50,    10,    53,    12,    57,    15,    60,    13,    63,
      18,    66,    19,    70,    20,     7,    79,    32,     0,    90,
      96,    92,    93,    94,    91,   109,    95,     0,     0,     0,
      26,    87,    88,    73,     0,    75,     0,    77,     0,   117,
     121,   120,     0,   119,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,   101,   103,
     104,   102,     0,    55,     0,    45,     0,     0,     0,    31,
      33,    36,    39,    42,    46,    49,    52,    56,    59,    62,
       0,    65,    69,    78,    35,    89,   108,    23,    24,    25,
      27,    72,    28,    74,    29,    76,   116,   115,   118,    30,
       0,     0,    80,    82,    85,    84,     0,     0,    64,    67,
      71,     0,     0,   111,   110,    98,    97,   100,    41,    54,
      44,    61,    51,     0,    68,    81,    48,    58,     0,     0,
     106,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    95,    96,    67,    68,    69,    70,
     107,   108,    71,    72,    73,    74,    75,    76,    92,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -85
static const yytype_int16 yypact[] =
{
     -85,     7,   139,   -85,   -85,   -85,   -85,   528,   528,     6,
     -15,    -6,   485,   490,   510,   -85,    70,    20,   528,    -2,
     -21,   528,    48,    52,    47,    47,    47,   -85,    97,   -85,
     528,    88,   192,   -85,   528,   528,   -85,   -85,   -85,     3,
     528,   -85,    18,   -85,    22,   -85,    29,   -85,    54,   -85,
      30,   -85,    32,   -85,    76,   -85,    53,   -85,    87,   -85,
      -5,   -85,    86,   -85,   -85,    93,   -85,   -85,   210,   -85,
     -85,   -85,   -85,   -85,    65,   -85,   -85,   228,   246,    74,
     -85,   -85,   -85,   -85,   410,   -85,   428,   -85,   447,   -85,
     -85,   -85,   198,   -85,    14,   174,   -85,   465,   528,   528,
     264,    80,    90,    69,    92,    61,   -85,    28,   -85,   -85,
     -85,    65,   282,   -85,   300,   -85,   318,   336,   354,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
      20,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
      91,    98,   -85,   -85,   -85,   -85,   372,   390,   -85,   -85,
     -85,    47,    47,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   175,   -85,   -85,   -85,   -85,   164,   397,
     -85,   -85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    89,   -85,
      94,   -85,   100,   -85,   105,   -85,   107,   -85,    85,   -85,
     101,   -85,   106,   -85,   115,   -85,   116,   -85,   122,   -85,
     114,   -85,   -85,   119,   -85,   103,   146,     9,   -30,   -85,
     -85,    99,   -22,   -17,   -85,   -24,   -69,   -85,   -14,   -84
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
     103,   104,   105,    94,   111,   136,   109,     3,   148,    79,
     148,   110,    10,    11,   130,   149,    77,    78,    90,    91,
      22,    84,    86,    88,    90,    91,    99,    97,    81,   165,
     100,     5,     6,   150,   136,   136,   136,    82,   135,   112,
     114,   116,   136,   117,   118,    15,    98,   135,   135,    80,
       5,     6,    33,   101,   135,    24,   135,   102,   135,    26,
      29,    27,   163,   166,     5,     6,    30,   135,     5,     6,
     135,    89,     5,     6,    90,    91,    19,    32,    26,    31,
      27,    35,   135,   111,   135,   109,   135,   135,   135,   148,
     110,     5,     6,   164,    27,     5,     6,   161,    27,    20,
       5,     6,    27,    34,    97,    15,    16,   156,   157,   136,
     136,    21,    23,    18,    15,    24,   173,   139,    25,    26,
     162,    27,    28,   159,    24,    27,   135,   135,    26,   120,
      27,   113,   106,   160,   174,   125,   121,   178,   179,    -2,
       4,   175,     5,     6,   122,     7,     8,     9,    10,    11,
      12,   123,    13,   126,    14,   124,    15,    16,    17,    18,
     127,    19,    20,    21,    22,    23,    24,     5,     6,    25,
      26,   128,    27,    28,   129,   151,   132,     5,     6,    90,
      91,    29,   131,    30,   133,   119,    31,    32,    33,    34,
      35,    15,    16,   180,   150,     5,     6,    27,   153,   146,
       0,    24,    90,    91,    25,    26,   167,    27,    28,    15,
      16,     0,     0,     5,     6,     0,   147,   152,     0,    24,
       0,     0,    25,    26,     0,    27,    28,    15,    16,     0,
       0,     5,     6,     0,     0,   115,     0,    24,     0,     0,
      25,    26,     0,    27,    28,    15,    16,     0,     0,     5,
       6,     0,     0,   134,     0,    24,     0,     0,    25,    26,
       0,    27,    28,    15,    16,     0,     0,     5,     6,     0,
       0,   137,     0,    24,     0,     0,    25,    26,     0,    27,
      28,    15,    16,     0,     0,     5,     6,     0,     0,   138,
       0,    24,     0,     0,    25,    26,     0,    27,    28,    15,
      16,     0,     0,     5,     6,     0,     0,   158,     0,    24,
       0,     0,    25,    26,     0,    27,    28,    15,    16,     0,
       0,     5,     6,     0,     0,   168,     0,    24,     0,     0,
      25,    26,     0,    27,    28,    15,    16,     0,     0,     5,
       6,     0,     0,   169,     0,    24,     0,     0,    25,    26,
       0,    27,    28,    15,    16,     0,     0,     5,     6,     0,
       0,   170,     0,    24,     0,     0,    25,    26,     0,    27,
      28,    15,    16,     0,     0,     5,     6,     0,     0,   171,
       0,    24,     0,     0,    25,    26,     0,    27,    28,    15,
      16,     0,     0,     5,     6,     0,     0,   172,     0,    24,
       5,     6,    25,    26,     0,    27,    28,    15,    16,     0,
       0,   140,     0,     5,     6,   176,     0,    24,     0,     0,
      25,    26,   141,    27,    28,     0,   181,    15,    16,   142,
      27,     5,     6,   177,     0,     0,     0,    24,     0,     0,
      25,    26,   143,    27,    28,    15,    16,     0,   144,     0,
       5,     6,     0,     0,     0,    24,     0,     0,    25,    26,
       0,    27,    28,   145,    15,    16,   154,     0,     5,     6,
       0,     0,     0,     0,    24,     0,     0,    25,    26,     0,
      27,    28,    15,    16,     0,     0,   155,     0,     5,     6,
       0,     0,    24,     5,     6,    25,    26,    83,    27,    28,
       0,     0,    15,    16,    85,     0,     0,    15,    16,     0,
       0,     0,    24,     5,     6,    25,    26,    24,    27,    28,
      25,    26,     0,    27,    28,     0,    87,    15,    16,     0,
       0,     5,     6,     0,     0,     0,     0,    24,     0,     0,
      25,    26,     0,    27,    28,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    25,    26,
       0,    27,    28
};

static const yytype_int16 yycheck[] =
{
      24,    25,    26,    17,    28,    74,    28,     0,    92,     3,
      94,    28,     9,    10,    19,     1,     7,     8,     4,     5,
      25,    12,    13,    14,     4,     5,    47,    18,    43,     1,
      21,     3,     4,    19,   103,   104,   105,    43,    68,    30,
      31,    32,   111,    34,    35,    17,    48,    77,    78,    43,
       3,     4,    49,     5,    84,    27,    86,     5,    88,    31,
      42,    33,     1,    35,     3,     4,    44,    97,     3,     4,
     100,     1,     3,     4,     4,     5,    22,    48,    31,    47,
      33,    51,   112,   107,   114,   107,   116,   117,   118,   173,
     107,     3,     4,    32,    33,     3,     4,    28,    33,    23,
       3,     4,    33,    50,    95,    17,    18,    98,    99,   178,
     179,    24,    26,    20,    17,    27,   130,    43,    30,    31,
      28,    33,    34,    43,    27,    33,   156,   157,    31,    40,
      33,    43,    35,    43,    43,    50,    42,   161,   162,     0,
       1,    43,     3,     4,    44,     6,     7,     8,     9,    10,
      11,    46,    13,    52,    15,    48,    17,    18,    19,    20,
      54,    22,    23,    24,    25,    26,    27,     3,     4,    30,
      31,    56,    33,    34,    58,     1,    62,     3,     4,     4,
       5,    42,    60,    44,    65,    39,    47,    48,    49,    50,
      51,    17,    18,    29,    19,     3,     4,    33,    95,     1,
      -1,    27,     4,     5,    30,    31,   107,    33,    34,    17,
      18,    -1,    -1,     3,     4,    -1,    18,    43,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    34,    17,    18,    -1,
      -1,     3,     4,    -1,    -1,    43,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    34,    17,    18,    -1,    -1,     3,
       4,    -1,    -1,    43,    -1,    27,    -1,    -1,    30,    31,
      -1,    33,    34,    17,    18,    -1,    -1,     3,     4,    -1,
      -1,    43,    -1,    27,    -1,    -1,    30,    31,    -1,    33,
      34,    17,    18,    -1,    -1,     3,     4,    -1,    -1,    43,
      -1,    27,    -1,    -1,    30,    31,    -1,    33,    34,    17,
      18,    -1,    -1,     3,     4,    -1,    -1,    43,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    34,    17,    18,    -1,
      -1,     3,     4,    -1,    -1,    43,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    34,    17,    18,    -1,    -1,     3,
       4,    -1,    -1,    43,    -1,    27,    -1,    -1,    30,    31,
      -1,    33,    34,    17,    18,    -1,    -1,     3,     4,    -1,
      -1,    43,    -1,    27,    -1,    -1,    30,    31,    -1,    33,
      34,    17,    18,    -1,    -1,     3,     4,    -1,    -1,    43,
      -1,    27,    -1,    -1,    30,    31,    -1,    33,    34,    17,
      18,    -1,    -1,     3,     4,    -1,    -1,    43,    -1,    27,
       3,     4,    30,    31,    -1,    33,    34,    17,    18,    -1,
      -1,     1,    -1,     3,     4,    43,    -1,    27,    -1,    -1,
      30,    31,    12,    33,    34,    -1,    29,    17,    18,     1,
      33,     3,     4,    43,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    14,    33,    34,    17,    18,    -1,     1,    -1,
       3,     4,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    33,    34,    16,    17,    18,     1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    34,    17,    18,    -1,    -1,    21,    -1,     3,     4,
      -1,    -1,    27,     3,     4,    30,    31,    12,    33,    34,
      -1,    -1,    17,    18,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,    27,     3,     4,    30,    31,    27,    33,    34,
      30,    31,    -1,    33,    34,    -1,    16,    17,    18,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    34,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    33,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    56,     0,     1,     3,     4,     6,     7,     8,
       9,    10,    11,    13,    15,    17,    18,    19,    20,    22,
      23,    24,    25,    26,    27,    30,    31,    33,    34,    42,
      44,    47,    48,    49,    50,    51,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    90,    91,    92,
      93,    96,    97,    98,    99,   100,   101,    91,    91,     3,
      43,    43,    43,    12,    91,    14,    91,    16,    91,     1,
       4,     5,   102,   103,   102,    88,    89,    91,    48,    47,
      91,     5,     5,    99,    99,    99,    35,    94,    95,    96,
      97,    99,    91,    43,    91,    43,    91,    91,    91,    90,
      62,    64,    66,    68,    70,    72,    74,    76,    78,    80,
      19,    82,    84,    87,    43,    92,   100,    43,    43,    43,
       1,    12,     1,    14,     1,    16,     1,    18,   103,     1,
      19,     1,    43,    89,     1,    21,    91,    91,    43,    43,
      43,    28,    28,     1,    32,     1,    35,    95,    43,    43,
      43,    43,    43,   102,    43,    43,    43,    43,    99,    99,
      29,    29
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
#line 105 "markdown.y"
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
#line 127 "markdown.y"
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
#line 145 "markdown.y"
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
#line 159 "markdown.y"
    { 
            show_rule("block: lines", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 6:
#line 163 "markdown.y"
    {
            show_rule("block: header", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 7:
#line 167 "markdown.y"
    {
            show_rule("block: tablerows", 2);

            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 8:
#line 172 "markdown.y"
    {
            show_rule("block: block_p", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 9:
#line 176 "markdown.y"
    {
            show_rule("block: block_ul", 2); 
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 10:
#line 180 "markdown.y"
    {
            show_rule("block: block_ol", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 11:
#line 184 "markdown.y"
    {
            show_rule("block: block_indent_ul", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 12:
#line 188 "markdown.y"
    {
            show_rule("block: block_indent_ol", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 13:
#line 192 "markdown.y"
    {
            show_rule("block: block_indent_text", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 14:
#line 196 "markdown.y"
    {
            show_rule("block: block_quote_ul", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 15:
#line 200 "markdown.y"
    {
            show_rule("block: block_quote_ol", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 16:
#line 204 "markdown.y"
    {
            show_rule("block: block_blank", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 17:
#line 208 "markdown.y"
    {
            show_rule("block: block_quote_p", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 18:
#line 212 "markdown.y"
    {
            show_rule("block: block_pre", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 19:
#line 216 "markdown.y"
    {
            show_rule("block: block_indented_pre", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 20:
#line 220 "markdown.y"
    {
            show_rule("block: pairedblock", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 21:
#line 224 "markdown.y"
    {
            show_rule("block: raw_text", 2);
            (yyval.node) = (yyvsp[(1) - (1)].node);
        ;}
    break;

  case 22:
#line 228 "markdown.y"
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

  case 23:
#line 241 "markdown.y"
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

  case 24:
#line 259 "markdown.y"
    { 
            show_rule("header: QUOTEH inline_elements LINEBREAK", 3);
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

  case 25:
#line 280 "markdown.y"
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

  case 26:
#line 294 "markdown.y"
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

  case 27:
#line 308 "markdown.y"
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

  case 28:
#line 323 "markdown.y"
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

  case 29:
#line 338 "markdown.y"
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

  case 30:
#line 353 "markdown.y"
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

  case 31:
#line 370 "markdown.y"
    {
            show_rule("lines: lines line", 3);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 32:
#line 374 "markdown.y"
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

  case 33:
#line 388 "markdown.y"
    {
            show_rule("block_p: block_p line_p", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 34:
#line 396 "markdown.y"
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

  case 35:
#line 411 "markdown.y"
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

  case 36:
#line 430 "markdown.y"
    {
            show_rule("block_blank: block_blank line_blank", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 37:
#line 438 "markdown.y"
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

  case 38:
#line 452 "markdown.y"
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

  case 39:
#line 466 "markdown.y"
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

  case 40:
#line 475 "markdown.y"
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

  case 41:
#line 491 "markdown.y"
    { 
            show_rule("line_quote_p: LARGERTHAN inline_elements LINEBREAK", 4);
            tag_check_stack(TAG_QUOTE_P, 0); 
            tag_info = markdown_get_tag_info(*((yyvsp[(2) - (3)].node)->ops + 1));

            _node = line_node_create(
                TAG_QUOTE_P
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

  case 42:
#line 511 "markdown.y"
    {
            show_rule("block_ul: block_ul line_ul", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 43:
#line 519 "markdown.y"
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

  case 44:
#line 533 "markdown.y"
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

  case 45:
#line 551 "markdown.y"
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

  case 46:
#line 566 "markdown.y"
    {
            show_rule("block_indent_ul: block_indent_ul line_indent_ul", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 47:
#line 574 "markdown.y"
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

  case 48:
#line 588 "markdown.y"
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

  case 49:
#line 608 "markdown.y"
    {
            show_rule("block_quote_ul: block_quote_ul line_quote_ul", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 50:
#line 616 "markdown.y"
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

  case 51:
#line 630 "markdown.y"
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

  case 52:
#line 653 "markdown.y"
    {
            show_rule("block_ol: block_ol line_ol", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 53:
#line 661 "markdown.y"
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

  case 54:
#line 675 "markdown.y"
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

  case 55:
#line 692 "markdown.y"
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

  case 56:
#line 708 "markdown.y"
    {
            show_rule("block_indent_ol: block_indent_ol line_indent_ol", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 57:
#line 716 "markdown.y"
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

  case 58:
#line 730 "markdown.y"
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

  case 59:
#line 750 "markdown.y"
    {
            show_rule("block_quote_ol: block_indent_ol line_quote_ol", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 60:
#line 758 "markdown.y"
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

  case 61:
#line 772 "markdown.y"
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

  case 62:
#line 793 "markdown.y"
    {
            show_rule("block_indent_text: block_indent_text line_indent_text", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 63:
#line 801 "markdown.y"
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

  case 64:
#line 817 "markdown.y"
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

  case 65:
#line 855 "markdown.y"
    {
            show_rule("block_pre: block_pre line_pre", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 66:
#line 863 "markdown.y"
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

  case 67:
#line 880 "markdown.y"
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

  case 68:
#line 897 "markdown.y"
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

  case 69:
#line 915 "markdown.y"
    {
            show_rule("block_indented_pre: block_indented_pre line_indented_pre", 3);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 70:
#line 923 "markdown.y"
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

  case 71:
#line 940 "markdown.y"
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

  case 72:
#line 964 "markdown.y"
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

  case 73:
#line 982 "markdown.y"
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

  case 74:
#line 997 "markdown.y"
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

  case 75:
#line 1015 "markdown.y"
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

  case 76:
#line 1030 "markdown.y"
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

  case 77:
#line 1048 "markdown.y"
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

  case 78:
#line 1067 "markdown.y"
    {
                                                            show_rule("tablerows: tablerows tablerow", 3);
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
                                                            _tail_node->next = (yyvsp[(2) - (2)].node);
                                                            (yyvsp[(2) - (2)].node)->prev = _tail_node; 
                                                            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
                                                            (yyval.node) = (yyvsp[(1) - (2)].node); 
                                                        ;}
    break;

  case 79:
#line 1075 "markdown.y"
    {
                                                            show_rule("tablerows: tablerow", 3);
                                                            _node = block_node_create(
                                                                TAG_TABLE
                                                                , 0
                                                                , 0
                                                            );
                                                            _node->children = (yyvsp[(1) - (1)].node);
                                                            (yyvsp[(1) - (1)].node)->parent = _node;
                                                            (yyval.node) = _node; 
                                                        ;}
    break;

  case 80:
#line 1088 "markdown.y"
    {
                                                            show_rule("tablerow: TABLEROWSTART tableceils LINEBREAK", 4);
                                                            (yyval.node) = (yyvsp[(2) - (3)].node);
                                                        ;}
    break;

  case 81:
#line 1092 "markdown.y"
    {
                                                            show_rule("tablerow: TABLEROWSTART tableceils error LINEBREAK", 4);
                                                            (yyval.node) = (yyvsp[(2) - (4)].node);
                                                            yyerrok;
                                                        ;}
    break;

  case 82:
#line 1101 "markdown.y"
    { 
                                                            show_rule("tableceils: tableceils tableceil",5);
                                                            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children); 
                                                            _tail_node->next = (yyvsp[(2) - (2)].node); 
                                                            (yyvsp[(2) - (2)].node)->prev = _tail_node;
                                                            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
                                                            (yyval.node) = (yyvsp[(1) - (2)].node);
                                                        ;}
    break;

  case 83:
#line 1109 "markdown.y"
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

  case 84:
#line 1124 "markdown.y"
    {
            show_rule("tableceil: inline_elements TABLECEILEND", 6);
            _node = inline_node_create(
                TAG_TD
                , 2
                , 1
                , *((yyvsp[(1) - (2)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (2)].node);
            (yyvsp[(1) - (2)].node)->parent = _node;
            (yyval.node) = _node;
        ;}
    break;

  case 85:
#line 1137 "markdown.y"
    {
            show_rule("tableceil: inline_elements error", 6);
            _node = inline_node_create(
                TAG_TD
                , 2
                , 1
                , *((yyvsp[(1) - (2)].node)->ops)
            );

            _node->children = (yyvsp[(1) - (2)].node);
            (yyvsp[(1) - (2)].node)->parent = _node;
            (yyval.node) = _node;
            
            yyerrok;
        ;}
    break;

  case 86:
#line 1157 "markdown.y"
    { 
            show_rule("line: QUOTEBLANKLINE", 4);
            tag_check_stack(TAG_QUOTE_BLANK, 0); 
        ;}
    break;

  case 87:
#line 1162 "markdown.y"
    {
            show_rule("line: SECTION LINEBREAK", 4);
            tag_check_stack(TAG_SECTION, -1); 
        ;}
    break;

  case 88:
#line 1167 "markdown.y"
    {
            show_rule("line: VSECTION LINEBREAK", 4);
            tag_check_stack(TAG_VSECTION, -1); 
        ;}
    break;

  case 89:
#line 1176 "markdown.y"
    {
            show_rule("inline_elements: inline_elements inline_element", 5);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 90:
#line 1184 "markdown.y"
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

  case 91:
#line 1221 "markdown.y"
    { 
            show_rule("inline_element: plaintext", 6);
            tag_info = markdown_get_tag_info(*((yyvsp[(1) - (1)].node)->ops + 1));     
            *((yyvsp[(1) - (1)].node)->ops) = tag_info->attr;
            *((yyvsp[(1) - (1)].node)->ops + 1) = tag_info->content;

            (yyval.node) = (yyvsp[(1) - (1)].node); 
        ;}
    break;

  case 92:
#line 1229 "markdown.y"
    { show_rule("inline_element: link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 93:
#line 1230 "markdown.y"
    { show_rule("inline_element: standard_link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 94:
#line 1231 "markdown.y"
    { show_rule("inline_element: standard_image", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 95:
#line 1232 "markdown.y"
    { show_rule("inline_element: inline_code", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 96:
#line 1233 "markdown.y"
    { show_rule("inline_element: inline_emphasis", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 97:
#line 1238 "markdown.y"
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

  case 98:
#line 1253 "markdown.y"
    {
            show_rule("inline_emphasis: EM_BEGIN inline_text_collection error", 7);
            str = str_concat((yyvsp[(1) - (3)].text), *((yyvsp[(2) - (3)].node)->children->ops + 1));
            *((yyvsp[(2) - (3)].node)->children->ops + 1) = str;

            (yyval.node) = (yyvsp[(2) - (3)].node);
            yyerrok;
        ;}
    break;

  case 99:
#line 1262 "markdown.y"
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

  case 100:
#line 1287 "markdown.y"
    {
            show_rule("inline_text_collection: inline_text_collection inline_text", 5);
            _tail_node = tail_node_in_list((yyvsp[(1) - (2)].node)->children);
            _tail_node->next = (yyvsp[(2) - (2)].node);
            (yyvsp[(2) - (2)].node)->prev = _tail_node;
            (yyvsp[(2) - (2)].node)->parent = _tail_node->parent;
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 101:
#line 1295 "markdown.y"
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

  case 102:
#line 1336 "markdown.y"
    {
            show_rule("inline_text: plaintext", 6);
            tag_info = markdown_get_tag_info(*((yyvsp[(1) - (1)].node)->ops + 1));     
            *((yyvsp[(1) - (1)].node)->ops) = tag_info->attr;
            *((yyvsp[(1) - (1)].node)->ops + 1) = tag_info->content;

            (yyval.node) = (yyvsp[(1) - (1)].node); 
        ;}
    break;

  case 103:
#line 1344 "markdown.y"
    { show_rule("inline_text: link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 104:
#line 1345 "markdown.y"
    { show_rule("inline_text: standard_link", 6); (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 105:
#line 1358 "markdown.y"
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

  case 106:
#line 1378 "markdown.y"
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

  case 107:
#line 1395 "markdown.y"
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

  case 108:
#line 1413 "markdown.y"
    {
            show_rule("plaintext: plaintext text_list", 7);
            *((yyvsp[(1) - (2)].node)->ops + 1) = str_concat(*((yyvsp[(1) - (2)].node)->ops + 1), (yyvsp[(2) - (2)].text));
            (yyval.node) = (yyvsp[(1) - (2)].node);
        ;}
    break;

  case 109:
#line 1418 "markdown.y"
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

  case 110:
#line 1430 "markdown.y"
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

  case 111:
#line 1442 "markdown.y"
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

  case 112:
#line 1454 "markdown.y"
    { show_rule("text_list: TEXT", 8); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 113:
#line 1455 "markdown.y"
    { show_rule("text_list: SPECIALCHAR", 8); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 114:
#line 1456 "markdown.y"
    { show_rule("text_list: EMPTYATTR", 8); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 115:
#line 1460 "markdown.y"
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

  case 116:
#line 1475 "markdown.y"
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

  case 117:
#line 1490 "markdown.y"
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

  case 118:
#line 1510 "markdown.y"
    { show_rule("codespan: codespan code_list", 8); (yyval.text) = str_concat((yyvsp[(1) - (2)].text), (yyvsp[(2) - (2)].text)); ;}
    break;

  case 119:
#line 1511 "markdown.y"
    { show_rule("codespan: code_list", 8); (yyval.text) = (yyvsp[(1) - (1)].text); ;}
    break;

  case 120:
#line 1515 "markdown.y"
    { show_rule("code_list: CODETEXT", 9); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;

  case 121:
#line 1516 "markdown.y"
    { show_rule("code_list: SPECIALCHAR", 9); (yyval.text) = str_format("%s", (yyvsp[(1) - (1)].text)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3457 "markdown.y.c"
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


#line 1519 "markdown.y"



/* export yyparse through markdown */
void markdown( void ){
    yyparse();
}


