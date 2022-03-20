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
     BLANKLINE = 258,
     LINEBREAK = 259,
     H = 260,
     LF_H = 261,
     SPECIALCHAR = 262,
     LESSTHAN = 263,
     LARGERTHAN = 264,
     TRIPLEBACKTICK = 265,
     BACKTICK = 266,
     VERTICAL = 267,
     DOUBLEASTERISK = 268,
     DOUBLETILDE = 269,
     ASTERISK = 270,
     PLUS = 271,
     MINUS = 272,
     DIGIT = 273,
     DOT = 274,
     INDENT = 275,
     SPACE = 276,
     LEFTSQUARE = 277,
     RIGHTSQUARE = 278,
     LEFTBRACKET = 279,
     RIGHTBRACKET = 280,
     EXCLAMATION = 281,
     DOUBLEUNDERSCORE = 282,
     UNDERSCORE = 283,
     LEFTPARENTHESIS = 284,
     RIGHTPARENTHESIS = 285,
     TEXT = 286
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define LINEBREAK 259
#define H 260
#define LF_H 261
#define SPECIALCHAR 262
#define LESSTHAN 263
#define LARGERTHAN 264
#define TRIPLEBACKTICK 265
#define BACKTICK 266
#define VERTICAL 267
#define DOUBLEASTERISK 268
#define DOUBLETILDE 269
#define ASTERISK 270
#define PLUS 271
#define MINUS 272
#define DIGIT 273
#define DOT 274
#define INDENT 275
#define SPACE 276
#define LEFTSQUARE 277
#define RIGHTSQUARE 278
#define LEFTBRACKET 279
#define RIGHTBRACKET 280
#define EXCLAMATION 281
#define DOUBLEUNDERSCORE 282
#define UNDERSCORE 283
#define LEFTPARENTHESIS 284
#define RIGHTPARENTHESIS 285
#define TEXT 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 222 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 116 "markdown-new.y.h"
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
