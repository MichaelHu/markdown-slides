/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     MINUS = 295,
     PLUS = 296,
     RIGHTPARENTHESES = 297,
     LEFTPARENTHESES = 298,
     UNDERSCORE = 299,
     STAR = 300,
     BLANKLINE = 301,
     LINEBREAK = 302,
     LARGERTHAN = 303,
     DOUBLESTAR = 304,
     DOUBLEUNDERSCORE = 305,
     OLSTART = 306,
     ULSTART = 307,
     QUOTEBLANKLINE = 308,
     QUOTEOLSTART = 309,
     QUOTEULSTART = 310,
     EXCLAMATION = 311,
     STARX = 312
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
#define MINUS 295
#define PLUS 296
#define RIGHTPARENTHESES 297
#define LEFTPARENTHESES 298
#define UNDERSCORE 299
#define STAR 300
#define BLANKLINE 301
#define LINEBREAK 302
#define LARGERTHAN 303
#define DOUBLESTAR 304
#define DOUBLEUNDERSCORE 305
#define OLSTART 306
#define ULSTART 307
#define QUOTEBLANKLINE 308
#define QUOTEOLSTART 309
#define QUOTEULSTART 310
#define EXCLAMATION 311
#define STARX 312




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 70 "markdown.y"
{
    char *text;
    t_node *node;
}
/* Line 1529 of yacc.c.  */
#line 168 "markdown.y.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
