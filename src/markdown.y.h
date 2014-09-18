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
     EXCLAMATION = 267,
     MINUS = 268,
     PLUS = 269,
     RIGHTPARENTHESES = 270,
     LEFTPARENTHESES = 271,
     RIGHTSQUARE = 272,
     LEFTSQUARE = 273,
     UNDERSCORE = 274,
     STAR = 275,
     BACKTICK = 276,
     BLANKLINE = 277,
     LINEBREAK = 278,
     LARGERTHAN = 279,
     DOUBLESTAR = 280,
     DOUBLEUNDERSCORE = 281,
     OLSTART = 282,
     ULSTART = 283,
     DOUBLEBACKTICK = 284,
     QUOTEBLANKLINE = 285,
     QUOTEOLSTART = 286,
     QUOTEULSTART = 287,
     STARX = 288
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
#define EXCLAMATION 267
#define MINUS 268
#define PLUS 269
#define RIGHTPARENTHESES 270
#define LEFTPARENTHESES 271
#define RIGHTSQUARE 272
#define LEFTSQUARE 273
#define UNDERSCORE 274
#define STAR 275
#define BACKTICK 276
#define BLANKLINE 277
#define LINEBREAK 278
#define LARGERTHAN 279
#define DOUBLESTAR 280
#define DOUBLEUNDERSCORE 281
#define OLSTART 282
#define ULSTART 283
#define DOUBLEBACKTICK 284
#define QUOTEBLANKLINE 285
#define QUOTEOLSTART 286
#define QUOTEULSTART 287
#define STARX 288




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "markdown.y"
{
    char *text;
    t_blocknode *node;
}
/* Line 1529 of yacc.c.  */
#line 120 "markdown.y.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

