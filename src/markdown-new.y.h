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
     LF_VERTICAL = 263,
     LF_INDENT_UL = 264,
     LF_INDENT2_UL = 265,
     LF_INDENT3_UL = 266,
     LF_INDENT4_UL = 267,
     LF_INDENT_VERTICAL = 268,
     LF_INDENT = 269,
     LF_INDENT2 = 270,
     LF_INDENT3 = 271,
     LF_INDENT4 = 272,
     LF_INDENT5 = 273,
     LF_Q_H = 274,
     LF_Q_UL = 275,
     LF_Q_VERTICAL = 276,
     LF_Q_INDENT_UL = 277,
     LF_Q_INDENT2_UL = 278,
     LF_Q_INDENT_VERTICAL = 279,
     LF_Q_INDENT = 280,
     LF_Q_INDENT2 = 281,
     LF_Q_INDENT3 = 282,
     LF_Q = 283,
     ESCAPEDCHAR = 284,
     LESSTHAN = 285,
     LARGERTHAN = 286,
     TRIPLEBACKTICK = 287,
     BACKTICK = 288,
     VERTICAL = 289,
     TRIPLEASTERISK = 290,
     DOUBLEASTERISK = 291,
     ASTERISK = 292,
     TRIPLEUNDERSCORE = 293,
     DOUBLEUNDERSCORE = 294,
     UNDERSCORE = 295,
     EXCLAMATION_LEFTSQUARE = 296,
     LEFTSQUARE = 297,
     RIGHTSQUARE_LEFTBRACKET = 298,
     RIGHTBRACKET = 299,
     DOUBLETILDE = 300,
     RIGHTSQUARE = 301,
     SPACE = 302,
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
#define LF_VERTICAL 263
#define LF_INDENT_UL 264
#define LF_INDENT2_UL 265
#define LF_INDENT3_UL 266
#define LF_INDENT4_UL 267
#define LF_INDENT_VERTICAL 268
#define LF_INDENT 269
#define LF_INDENT2 270
#define LF_INDENT3 271
#define LF_INDENT4 272
#define LF_INDENT5 273
#define LF_Q_H 274
#define LF_Q_UL 275
#define LF_Q_VERTICAL 276
#define LF_Q_INDENT_UL 277
#define LF_Q_INDENT2_UL 278
#define LF_Q_INDENT_VERTICAL 279
#define LF_Q_INDENT 280
#define LF_Q_INDENT2 281
#define LF_Q_INDENT3 282
#define LF_Q 283
#define ESCAPEDCHAR 284
#define LESSTHAN 285
#define LARGERTHAN 286
#define TRIPLEBACKTICK 287
#define BACKTICK 288
#define VERTICAL 289
#define TRIPLEASTERISK 290
#define DOUBLEASTERISK 291
#define ASTERISK 292
#define TRIPLEUNDERSCORE 293
#define DOUBLEUNDERSCORE 294
#define UNDERSCORE 295
#define EXCLAMATION_LEFTSQUARE 296
#define LEFTSQUARE 297
#define RIGHTSQUARE_LEFTBRACKET 298
#define RIGHTBRACKET 299
#define DOUBLETILDE 300
#define RIGHTSQUARE 301
#define SPACE 302
#define TEXT 303
#define ITALICSTART 304
#define LISTSTART 305




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 361 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 154 "markdown-new.y.h"
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
