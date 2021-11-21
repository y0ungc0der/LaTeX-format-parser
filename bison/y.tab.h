/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SPACE = 258,
     OPERATOR = 259,
     SPECCHAR = 260,
     BEGINDOC = 261,
     ENDDOC = 262,
     DOCCLASS = 263,
     LCBR = 264,
     RCBR = 265,
     TITLE = 266,
     POW = 267,
     END = 268,
     USEPACKAGE = 269,
     MAKETITLE = 270,
     AUTHOR = 271,
     INDEX = 272,
     TABLEOFCONT = 273,
     MATH = 274,
     BSL = 275,
     LSBR = 276,
     RSBR = 277,
     NEWPAGE = 278,
     INPUT = 279,
     LSKF = 280,
     RSKF = 281,
     ENDIF = 282,
     IF = 283,
     BEGINENV = 284,
     ENDENV = 285,
     ERR = 286,
     FORMAT = 287,
     INTEGER = 288,
     WORD = 289
   };
#endif
/* Tokens.  */
#define SPACE 258
#define OPERATOR 259
#define SPECCHAR 260
#define BEGINDOC 261
#define ENDDOC 262
#define DOCCLASS 263
#define LCBR 264
#define RCBR 265
#define TITLE 266
#define POW 267
#define END 268
#define USEPACKAGE 269
#define MAKETITLE 270
#define AUTHOR 271
#define INDEX 272
#define TABLEOFCONT 273
#define MATH 274
#define BSL 275
#define LSBR 276
#define RSBR 277
#define NEWPAGE 278
#define INPUT 279
#define LSKF 280
#define RSKF 281
#define ENDIF 282
#define IF 283
#define BEGINENV 284
#define ENDENV 285
#define ERR 286
#define FORMAT 287
#define INTEGER 288
#define WORD 289



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
