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
     EXCLAMATION = 274,
     MINUS = 275,
     PLUS = 276,
     RIGHTPARENTHESES = 277,
     LEFTPARENTHESES = 278,
     RIGHTSQUARE = 279,
     LEFTSQUARE = 280,
     UNDERSCORE = 281,
     STAR = 282,
     BACKTICK = 283,
     BLANKLINE = 284,
     LINEBREAK = 285,
     LARGERTHAN = 286,
     DOUBLESTAR = 287,
     DOUBLEUNDERSCORE = 288,
     OLSTART = 289,
     ULSTART = 290,
     DOUBLEBACKTICK = 291,
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
#define EXCLAMATION 274
#define MINUS 275
#define PLUS 276
#define RIGHTPARENTHESES 277
#define LEFTPARENTHESES 278
#define RIGHTSQUARE 279
#define LEFTSQUARE 280
#define UNDERSCORE 281
#define STAR 282
#define BACKTICK 283
#define BLANKLINE 284
#define LINEBREAK 285
#define LARGERTHAN 286
#define DOUBLESTAR 287
#define DOUBLEUNDERSCORE 288
#define OLSTART 289
#define ULSTART 290
#define DOUBLEBACKTICK 291
#define QUOTEBLANKLINE 292
#define QUOTEOLSTART 293
#define QUOTEULSTART 294
#define STARX 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "markdown.y"
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
