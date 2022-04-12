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
     LF_VERTICAL_HEAD_SEP = 264,
     LF_INDENT_UL = 265,
     LF_INDENT2_UL = 266,
     LF_INDENT3_UL = 267,
     LF_INDENT4_UL = 268,
     LF_INDENT_VERTICAL = 269,
     LF_INDENT = 270,
     LF_INDENT2 = 271,
     LF_INDENT3 = 272,
     LF_INDENT4 = 273,
     LF_INDENT5 = 274,
     LF_Q_H = 275,
     LF_Q_UL = 276,
     LF_Q_VERTICAL = 277,
     LF_Q_INDENT_UL = 278,
     LF_Q_INDENT2_UL = 279,
     LF_Q_INDENT_VERTICAL = 280,
     LF_Q_INDENT = 281,
     LF_Q_INDENT2 = 282,
     LF_Q_INDENT3 = 283,
     LF_Q = 284,
     ESCAPEDCHAR = 285,
     LESSTHAN = 286,
     LARGERTHAN = 287,
     TRIPLEBACKTICK = 288,
     BACKTICK = 289,
     VERTICAL = 290,
     TRIPLEASTERISK = 291,
     DOUBLEASTERISK = 292,
     ASTERISK = 293,
     TRIPLEUNDERSCORE = 294,
     DOUBLEUNDERSCORE = 295,
     UNDERSCORE = 296,
     EXCLAMATION_LEFTSQUARE = 297,
     LEFTSQUARE = 298,
     RIGHTSQUARE_LEFTBRACKET = 299,
     RIGHTBRACKET = 300,
     DOUBLETILDE = 301,
     RIGHTSQUARE = 302,
     SEMI_MINUSSERIES_VERTICAL = 303,
     MINUSSERIES_SEMI_VERTICAL = 304,
     SEMI_MINUSSERIES_SEMI_VERTICAL = 305,
     MINUSSERIES_VERTICAL = 306,
     SPACE = 307,
     TEXT = 308,
     ITALICSTART = 309,
     LISTSTART = 310
   };
#endif
/* Tokens.  */
#define BLANKLINE 258
#define LINEBREAK 259
#define LF_H 260
#define LF_UL 261
#define UL 262
#define LF_VERTICAL 263
#define LF_VERTICAL_HEAD_SEP 264
#define LF_INDENT_UL 265
#define LF_INDENT2_UL 266
#define LF_INDENT3_UL 267
#define LF_INDENT4_UL 268
#define LF_INDENT_VERTICAL 269
#define LF_INDENT 270
#define LF_INDENT2 271
#define LF_INDENT3 272
#define LF_INDENT4 273
#define LF_INDENT5 274
#define LF_Q_H 275
#define LF_Q_UL 276
#define LF_Q_VERTICAL 277
#define LF_Q_INDENT_UL 278
#define LF_Q_INDENT2_UL 279
#define LF_Q_INDENT_VERTICAL 280
#define LF_Q_INDENT 281
#define LF_Q_INDENT2 282
#define LF_Q_INDENT3 283
#define LF_Q 284
#define ESCAPEDCHAR 285
#define LESSTHAN 286
#define LARGERTHAN 287
#define TRIPLEBACKTICK 288
#define BACKTICK 289
#define VERTICAL 290
#define TRIPLEASTERISK 291
#define DOUBLEASTERISK 292
#define ASTERISK 293
#define TRIPLEUNDERSCORE 294
#define DOUBLEUNDERSCORE 295
#define UNDERSCORE 296
#define EXCLAMATION_LEFTSQUARE 297
#define LEFTSQUARE 298
#define RIGHTSQUARE_LEFTBRACKET 299
#define RIGHTBRACKET 300
#define DOUBLETILDE 301
#define RIGHTSQUARE 302
#define SEMI_MINUSSERIES_VERTICAL 303
#define MINUSSERIES_SEMI_VERTICAL 304
#define SEMI_MINUSSERIES_SEMI_VERTICAL 305
#define MINUSSERIES_VERTICAL 306
#define SPACE 307
#define TEXT 308
#define ITALICSTART 309
#define LISTSTART 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 382 "markdown-new.y"
{
    char *text;
    /* t_node *node; */
}
/* Line 1529 of yacc.c.  */
#line 164 "markdown-new.y.h"
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
