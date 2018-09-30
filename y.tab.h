/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    RETURN = 259,
    CHAR = 260,
    INT = 261,
    FLOAT = 262,
    BOOL = 263,
    CONSTANT = 264,
    TRUE = 265,
    FALSE = 266,
    CONST = 267,
    STRING_LITERAL = 268,
    FCONST = 269,
    STATIC = 270,
    IF = 271,
    ELSE = 272,
    FOR = 273,
    DO = 274,
    WHILE = 275,
    VOID = 276,
    DEC_OP = 277,
    INC_OP = 278,
    IDENTIFIER = 279,
    PROCESSORS = 280,
    PROCESSOR = 281,
    ISA = 282,
    CLOCKSPEED = 283,
    L1MEMORY = 284,
    L2MEMORY = 285,
    NAME = 286,
    ISRUNNING = 287,
    SUBMITJOBS = 288,
    GETCLOCKSPEED = 289,
    RUN = 290,
    DISCARD_JOB = 291,
    LINK = 292,
    LINKBANDWIDTH = 293,
    LINKCAPACITY = 294,
    STARTPOINT = 295,
    ENDPOINT = 296,
    BANDWIDTH = 297,
    GETAVAILABLEMEMORY = 298,
    MEMORY = 299,
    GETMEMORY = 300,
    JOB = 301,
    JOB_ID = 302,
    FLOPSREQUIRED = 303,
    DEADLINE = 304,
    MEMREQUIRED = 305,
    AFFINITY = 306,
    CLUSTER = 307,
    TOPOLOGY = 308,
    MEMORYTYPE = 309,
    MEMSIZE = 310,
    CHANNELCAPACITY = 311,
    ADD_ASSIGN = 313,
    SUB_ASSIGN = 314,
    MUL_ASSIGN = 315,
    DIV_ASSIGN = 316,
    MOD_ASSIGN = 317,
    OR_ASSIGN = 318,
    AND_ASSIGN = 319,
    XOR_ASSIGN = 320,
    OR_OP = 321,
    AND_OP = 322,
    LE_OP = 323,
    GE_OP = 324,
    EQ_OP = 325,
    NE_OP = 326
  };
#endif
/* Tokens.  */
#define BREAK 258
#define RETURN 259
#define CHAR 260
#define INT 261
#define FLOAT 262
#define BOOL 263
#define CONSTANT 264
#define TRUE 265
#define FALSE 266
#define CONST 267
#define STRING_LITERAL 268
#define FCONST 269
#define STATIC 270
#define IF 271
#define ELSE 272
#define FOR 273
#define DO 274
#define WHILE 275
#define VOID 276
#define DEC_OP 277
#define INC_OP 278
#define IDENTIFIER 279
#define PROCESSORS 280
#define PROCESSOR 281
#define ISA 282
#define CLOCKSPEED 283
#define L1MEMORY 284
#define L2MEMORY 285
#define NAME 286
#define ISRUNNING 287
#define SUBMITJOBS 288
#define GETCLOCKSPEED 289
#define RUN 290
#define DISCARD_JOB 291
#define LINK 292
#define LINKBANDWIDTH 293
#define LINKCAPACITY 294
#define STARTPOINT 295
#define ENDPOINT 296
#define BANDWIDTH 297
#define GETAVAILABLEMEMORY 298
#define MEMORY 299
#define GETMEMORY 300
#define JOB 301
#define JOB_ID 302
#define FLOPSREQUIRED 303
#define DEADLINE 304
#define MEMREQUIRED 305
#define AFFINITY 306
#define CLUSTER 307
#define TOPOLOGY 308
#define MEMORYTYPE 309
#define MEMSIZE 310
#define CHANNELCAPACITY 311
#define ADD_ASSIGN 313
#define SUB_ASSIGN 314
#define MUL_ASSIGN 315
#define DIV_ASSIGN 316
#define MOD_ASSIGN 317
#define OR_ASSIGN 318
#define AND_ASSIGN 319
#define XOR_ASSIGN 320
#define OR_OP 321
#define AND_OP 322
#define LE_OP 323
#define GE_OP 324
#define EQ_OP 325
#define NE_OP 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:1909  */

    int ival;
    double dval;
    char string[10];

#line 200 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
