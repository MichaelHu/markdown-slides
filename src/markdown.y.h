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
     INDENT = 261,
     H = 262,
     QUOTEH = 263,
     HTMLBLOCK = 264,
     SECTION = 265,
     VSECTION = 266,
     SCRIPTSTART = 267,
     SCRIPTEND = 268,
     STYLESTART = 269,
     STYLEEND = 270,
     SVGSTART = 271,
     SVGEND = 272,
     LINK = 273,
     BACKTICK = 274,
     TRIPLEBACKTICK = 275,
     EXCLAMATION = 276,
     MINUS = 277,
     PLUS = 278,
     RIGHTPARENTHESES = 279,
     LEFTPARENTHESES = 280,
     RIGHTSQUARE = 281,
     LEFTSQUARE = 282,
     UNDERSCORE = 283,
     STAR = 284,
     BLANKLINE = 285,
     LINEBREAK = 286,
     LARGERTHAN = 287,
     DOUBLESTAR = 288,
     DOUBLEUNDERSCORE = 289,
     OLSTART = 290,
     ULSTART = 291,
     QUOTEBLANKLINE = 292,
     QUOTEOLSTART = 293,
     QUOTEULSTART = 294,
     STARX = 295
   };
#endif
/* Tokens.  */
#define TEXT 258
#define SPECIALCHAR 259
#define CODETEXT 260
#define INDENT 261
#define H 262
#define QUOTEH 263
#define HTMLBLOCK 264
#define SECTION 265
#define VSECTION 266
#define SCRIPTSTART 267
#define SCRIPTEND 268
#define STYLESTART 269
#define STYLEEND 270
#define SVGSTART 271
#define SVGEND 272
#define LINK 273
#define BACKTICK 274
#define TRIPLEBACKTICK 275
#define EXCLAMATION 276
#define MINUS 277
#define PLUS 278
#define RIGHTPARENTHESES 279
#define LEFTPARENTHESES 280
#define RIGHTSQUARE 281
#define LEFTSQUARE 282
#define UNDERSCORE 283
#define STAR 284
#define BLANKLINE 285
#define LINEBREAK 286
#define LARGERTHAN 287
#define DOUBLESTAR 288
#define DOUBLEUNDERSCORE 289
#define OLSTART 290
#define ULSTART 291
#define QUOTEBLANKLINE 292
#define QUOTEOLSTART 293
#define QUOTEULSTART 294
#define STARX 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "markdown.y"
{
    char *text;
    t_blocknode *node;
}
/* Line 1529 of yacc.c.  */
#line 134 "markdown.y.h"
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
