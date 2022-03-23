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
     SPECIALCHAR = 274,
     LESSTHAN = 275,
     LARGERTHAN = 276,
     TRIPLEBACKTICK = 277,
     BACKTICK = 278,
     VERTICAL = 279,
     DOUBLEASTERISK = 280,
     DOUBLETILDE = 281,
     ASTERISK = 282,
     PLUS = 283,
     MINUS = 284,
     DIGIT = 285,
     DOT = 286,
     SPACE = 287,
     LEFTSQUARE = 288,
     RIGHTSQUARE = 289,
     LEFTBRACKET = 290,
     RIGHTBRACKET = 291,
     EXCLAMATION = 292,
     DOUBLEUNDERSCORE = 293,
     UNDERSCORE = 294,
     LEFTPARENTHESIS = 295,
     RIGHTPARENTHESIS = 296,
     TEXT = 297,
     ITALICSTART = 298,
     LISTSTART = 299
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
#define SPECIALCHAR 274
#define LESSTHAN 275
#define LARGERTHAN 276
#define TRIPLEBACKTICK 277
#define BACKTICK 278
#define VERTICAL 279
#define DOUBLEASTERISK 280
#define DOUBLETILDE 281
#define ASTERISK 282
#define PLUS 283
#define MINUS 284
#define DIGIT 285
#define DOT 286
#define SPACE 287
#define LEFTSQUARE 288
#define RIGHTSQUARE 289
#define LEFTBRACKET 290
#define RIGHTBRACKET 291
#define EXCLAMATION 292
#define DOUBLEUNDERSCORE 293
#define UNDERSCORE 294
#define LEFTPARENTHESIS 295
#define RIGHTPARENTHESIS 296
#define TEXT 297
#define ITALICSTART 298
#define LISTSTART 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 264 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 142 "markdown-new.y.h"
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
