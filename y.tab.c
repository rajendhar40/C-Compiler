/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "mips.c"
extern int yylineno;
extern char *yytext;


char id[15];


#line 80 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 16 "parser.y" /* yacc.c:355  */

    int ival;
    double dval;
    char string[10];

#line 266 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 281 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   540

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    75,     2,     2,
      82,    83,    73,    76,    79,    77,    89,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    78,
      87,    72,    88,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,     2,    85,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    78,    78,    79,    79,    79,    81,    82,
      84,    84,    85,    86,    87,    87,    89,   109,   128,   129,
     130,   131,   133,   133,   135,   135,   137,   137,   139,   139,
     140,   140,   141,   142,   142,   148,   149,   149,   149,   149,
     149,   150,   151,   152,   152,   153,   153,   154,   154,   156,
     158,   160,   162,   164,   164,   166,   166,   169,   169,   169,
     169,   169,   169,   169,   170,   171,   171,   172,   172,   173,
     173,   173,   173,   174,   192,   174,   206,   206,   208,   220,
     208,   252,   252,   252,   253,   253,   254,   256,   256,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   259,   259,
     260,   260,   261,   261,   262,   270,   278,   286,   294,   302,
     310,   312,   355,   396,   398,   440,   482,   523,   524,   524,
     525,   533,   533,   534,   543,   543,   544,   544,   544,   544,
     544,   548,   548,   549,   549,   550,   550,   550,   551,   552,
     552,   553,   553,   554,   559,   559,   559,   559
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "RETURN", "CHAR", "INT",
  "FLOAT", "BOOL", "CONSTANT", "TRUE", "FALSE", "CONST", "STRING_LITERAL",
  "FCONST", "STATIC", "IF", "ELSE", "FOR", "DO", "WHILE", "VOID", "DEC_OP",
  "INC_OP", "IDENTIFIER", "PROCESSORS", "PROCESSOR", "ISA", "CLOCKSPEED",
  "L1MEMORY", "L2MEMORY", "NAME", "ISRUNNING", "SUBMITJOBS",
  "GETCLOCKSPEED", "RUN", "DISCARD_JOB", "LINK", "LINKBANDWIDTH",
  "LINKCAPACITY", "STARTPOINT", "ENDPOINT", "BANDWIDTH",
  "GETAVAILABLEMEMORY", "MEMORY", "GETMEMORY", "JOB", "JOB_ID",
  "FLOPSREQUIRED", "DEADLINE", "MEMREQUIRED", "AFFINITY", "CLUSTER",
  "TOPOLOGY", "MEMORYTYPE", "MEMSIZE", "CHANNELCAPACITY", "\"then\"",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "OR_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_OP", "AND_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "'='", "'*'", "'/'", "'%'", "'+'", "'-'",
  "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "'!'", "'<'",
  "'>'", "'.'", "$accept", "program", "decList", "dec", "vardec",
  "scopedvardec", "vardecList", "vardecInit", "scopedtypespecifier",
  "vardecId", "typespecifier", "fundec", "$@1", "$@2", "$@3", "params",
  "paramList", "paramtypeList", "paramId", "classdec", "class", "Pclass",
  "ManP", "OptP", "SubOp", "stringhandler", "Jobclass", "Memclass",
  "Linkclass", "Clusterclass", "affinityhandler", "nameparameter", "stmt",
  "compoundstmt", "localdecs", "stmtList", "Exprstmt", "selectionstmt",
  "$@4", "$@5", "elsestmt", "iterationstmt", "$@6", "$@7", "returnstmt",
  "breakstmt", "Expr", "simpleExpr", "andExpr", "unaryRelExpr", "relExpr",
  "sumExpr", "term", "factor", "mutable", "mutable1", "Memfun", "Array",
  "IDsList", "immutable", "call", "args", "argList", "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,    61,    42,    47,    37,    43,    45,    59,    44,
      91,    93,    40,    41,   123,   125,    33,    60,    62,    46
};
# endif

#define YYPACT_NINF -235

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-235)))

#define YYTABLE_NINF -123

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     201,  -235,  -235,  -235,  -235,   -13,   -52,    41,   201,  -235,
    -235,    42,  -235,  -235,    -8,  -235,    24,  -235,  -235,   -53,
     -25,  -235,     6,   137,   158,   145,    35,   226,    78,    37,
    -235,   111,   158,    55,    62,    71,    84,    98,    97,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,   337,
     158,   158,   104,   121,   124,  -235,  -235,    70,    48,  -235,
     381,  -235,  -235,  -235,  -235,   118,   120,   123,   144,   154,
    -235,   226,   218,   160,   171,  -235,   174,   226,   179,  -235,
     121,   -55,   235,   233,   228,   237,   261,  -235,   158,   209,
    -235,  -235,   158,   158,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,  -235,  -235,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   145,   211,   -22,   215,
     220,   224,   225,   207,  -235,   370,   226,  -235,   229,   239,
     222,   241,   245,   255,   256,  -235,   249,   259,  -235,   124,
    -235,    72,    72,    72,    72,    48,    48,    72,    72,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
     260,   405,  -235,  -235,   316,   -54,   262,  -235,  -235,  -235,
     370,   263,   265,   141,   266,   268,   370,  -235,   271,   273,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
     280,   428,  -235,   370,   243,    53,   278,  -235,   243,   243,
       7,   -22,  -235,   158,   451,   -54,    -4,  -235,  -235,  -235,
    -235,  -235,   284,   158,    38,   343,   283,   -22,   -22,   264,
    -235,   305,  -235,   293,   297,   -54,  -235,   306,   310,  -235,
     298,   313,    54,   314,  -235,   316,  -235,  -235,   -60,    38,
     303,   158,   319,   324,   226,  -235,   111,  -235,   286,   380,
       7,   243,   369,   356,   364,   360,   -54,  -235,    46,   158,
       2,   336,   338,  -235,   159,  -235,  -235,   346,    83,  -235,
     348,   349,   350,   351,   370,   370,   332,     3,  -235,  -235,
    -235,  -235,     7,   393,  -235,   243,     7,     7,   243,  -235,
    -235,   370,   347,   370,   134,   352,   170,   189,   353,   412,
    -235,  -235,  -235,   401,   391,   403,   354,   386,   398,   370,
    -235,   366,   374,   375,  -235,   377,   383,  -235,     7,     7,
     243,     7,     7,    72,   204,  -235,   247,   257,   402,   407,
     420,   388,   390,   399,     7,     7,     7,   170,   290,   170,
     389,   424,   395,  -235,   404,  -235,   -19,   158,   396,   -54,
     414,  -235,   158,   416,   158,   417,   158,   400,  -235
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    18,    20,    21,     0,   120,     0,     2,     4,
       5,     0,     7,     6,     0,    26,     0,     1,     3,    16,
       0,    11,    12,     0,     0,     0,     0,    29,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      37,    38,    39,    40,   143,   146,   147,   144,   145,   123,
       0,     0,     0,    94,    99,   101,   103,   110,   113,   117,
       0,   119,   118,   136,   137,     0,     0,     0,     0,     0,
     122,    29,     0,     0,    28,    31,     0,    29,    16,    10,
      13,     0,     0,     0,     0,     0,     0,    35,   140,     0,
     102,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    32,     0,     0,    17,     0,     0,
      46,     0,     0,     0,     0,   142,     0,   139,   135,    98,
     100,   106,   107,   109,   108,   111,   112,   104,   105,   114,
     115,   116,    88,    89,    90,    91,    97,    96,    95,    87,
       0,   125,   126,   120,     0,   131,     0,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,    78,     0,     0,
      72,    66,    63,    25,    58,    57,    59,    60,    61,    62,
       0,     0,    30,     0,     0,     0,     0,    44,     0,     0,
       0,     0,   138,     0,   124,   134,     0,   127,    27,    34,
      86,    84,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    23,   120,     0,    47,    48,     0,     0,    41,
       0,     0,     0,     0,   141,     0,   132,    85,     0,     0,
       0,     0,     0,     0,     0,    65,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,   133,    73,     0,     0,
       0,     0,     0,    14,     0,    64,    67,     0,    46,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    71,
      70,     9,     0,     0,    43,     0,     0,     0,     0,    74,
      81,     0,     0,     0,     0,     0,    56,     0,     0,    77,
      82,    83,    80,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,     0,    50,     0,     0,    76,     0,     0,
       0,     0,     0,    42,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    56,
       0,     0,     0,    51,     0,    52,     0,     0,     0,    53,
       0,    49,     0,     0,     0,     0,     0,     0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,   472,  -235,  -235,   236,   452,  -235,  -235,
       1,  -235,  -235,  -235,  -235,     5,  -235,   358,  -235,    32,
    -235,  -235,  -235,  -235,   230,  -186,  -235,  -235,  -235,  -235,
    -235,  -234,  -148,  -235,  -235,  -235,  -195,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,   -17,   -29,   409,   -47,
    -235,   -58,   117,    93,     0,  -235,   387,  -138,  -235,  -184,
    -235,  -235,  -235,  -235
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,   245,    20,    21,   246,    22,
      72,    12,    29,    16,    26,    73,    74,    75,   124,   182,
      38,    39,   130,   196,   197,   224,    40,    41,    42,    43,
     348,   306,   183,   184,   219,   248,   185,   186,   274,   299,
     310,   187,   216,   293,   188,   189,   190,    53,    54,    55,
      56,    57,    58,    59,    81,    61,    70,   166,   206,    62,
      63,   136,   137,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    11,   163,    80,    90,   163,    92,    52,    14,    11,
     226,    15,   230,   231,   226,   226,    44,    45,    46,   239,
      47,    48,   208,   257,    60,   115,    24,    28,   215,   -22,
     -24,    49,    13,    89,   116,    25,   141,   142,   143,   144,
      13,    17,   147,   148,   258,   222,   140,    44,    45,    46,
      60,    47,    48,    30,    31,    44,    45,    46,   164,    47,
      48,   347,    49,   233,    23,   269,    19,   226,    92,    92,
      49,   135,    24,   178,   179,   235,   122,   236,    32,   242,
     243,    25,   128,   227,   228,   278,   292,    76,    60,    50,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   295,
     266,   226,   298,   340,   226,   342,    27,    60,    60,    60,
      60,    60,    60,    60,    60,    60,   180,    71,   165,    77,
      50,   102,   103,   104,    51,   191,   289,   290,    50,   275,
      98,    99,    51,   254,   325,    78,   226,    82,    94,    95,
      96,    97,   232,   300,    83,   302,    98,    99,    98,    99,
      44,    45,    46,    84,    47,    48,   212,   100,   101,    98,
      99,   317,   283,    33,   205,    49,    85,    44,    45,    46,
     191,    47,    48,    60,    34,    87,   191,    65,    66,    67,
      86,    35,    49,    36,   238,    91,   234,    92,    68,    37,
      69,    93,   268,   191,   225,   149,   150,   151,   225,   225,
     117,   165,   118,    60,   159,   119,     1,     2,     3,     4,
      98,    99,   260,   303,    60,   145,   146,   165,   165,   211,
     247,    60,     5,    50,   294,     6,   120,    51,   296,   297,
     277,     1,     2,     3,     4,   256,   121,   281,    31,    60,
      50,   276,   123,   125,    51,   263,    98,    99,   191,   305,
     126,   225,    44,    45,    46,   127,    47,    48,    60,    28,
     323,   324,   129,   326,   327,    98,    99,   223,   307,     1,
       2,     3,     4,   131,   191,   191,   337,   338,   339,   244,
      98,    99,   132,   328,   133,   225,   134,   171,   225,   172,
     173,   191,   138,   191,   162,    44,    45,    46,   167,    47,
      48,   195,   174,   168,   175,   176,   177,   169,   170,   191,
      49,   194,   193,   198,    44,    45,    46,   199,    47,    48,
     225,   178,   179,    98,    99,    50,   329,   200,   201,    49,
     350,    33,   202,    98,    99,   353,   330,   355,   203,   357,
     163,   204,    34,   210,   209,   207,   349,    60,   213,    35,
     214,    36,    60,   217,    60,   218,    60,    37,   220,  -120,
    -120,   229,   237,   240,   180,   241,    98,    99,    50,   341,
     181,   265,    51,   172,   173,    88,   249,   252,   250,    44,
      45,    46,   251,    47,    48,   259,   174,    50,   175,   176,
     177,    51,   253,   255,    49,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,   261,   105,   106,   178,   179,   262,   267,  -120,
     270,   271,   272,   273,   279,   291,   280,  -120,   282,    88,
     285,   286,   287,   288,   228,   301,  -120,  -122,  -122,   309,
     311,   304,   308,   312,   313,   315,   316,   314,   318,   107,
     108,   109,   110,   111,   112,   113,   319,   320,   180,   321,
     105,   106,    50,   114,   181,   322,    51,   332,   331,   333,
     334,   115,   335,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
     116,   336,   343,  -121,  -121,   344,   346,  -122,   345,   351,
      18,   358,   264,    79,   192,  -122,   107,   108,   109,   110,
     111,   112,   113,   352,  -122,   354,   356,     0,   284,     0,
     221,   139,     0,   161,     0,     0,     0,     0,   115,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,     0,   116,     0,     0,
       0,     0,     0,  -121,     0,     0,     0,     0,     0,     0,
       0,  -121,     0,     0,     0,     0,     0,     0,     0,     0,
    -121
};

static const yytype_int16 yycheck[] =
{
       0,     0,    24,    32,    51,    24,    66,    24,     8,     8,
     194,    24,   198,   199,   198,   199,     9,    10,    11,   214,
      13,    14,   170,    83,    24,    80,    80,    80,   176,    82,
      82,    24,     0,    50,    89,    89,    94,    95,    96,    97,
       8,     0,   100,   101,   239,   193,    93,     9,    10,    11,
      50,    13,    14,    78,    79,     9,    10,    11,    80,    13,
      14,    80,    24,   201,    72,   251,    24,   251,    66,    66,
      24,    88,    80,    35,    36,    79,    71,    81,    72,   217,
     218,    89,    77,    30,    31,    83,    83,     9,    88,    82,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   285,
     248,   285,   288,   337,   288,   339,    82,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    78,    82,   118,    82,
      82,    73,    74,    75,    86,   125,   274,   275,    82,    83,
      76,    77,    86,    79,   320,    24,   320,    82,    68,    69,
      70,    71,   200,   291,    82,   293,    76,    77,    76,    77,
       9,    10,    11,    82,    13,    14,   173,    87,    88,    76,
      77,   309,    79,    26,   164,    24,    82,     9,    10,    11,
     170,    13,    14,   173,    37,    78,   176,    32,    33,    34,
      82,    44,    24,    46,   213,    81,   203,    66,    43,    52,
      45,    67,   250,   193,   194,   102,   103,   104,   198,   199,
      82,   201,    82,   203,   221,    82,     5,     6,     7,     8,
      76,    77,   241,    79,   214,    98,    99,   217,   218,    78,
     219,   221,    21,    82,   282,    24,    82,    86,   286,   287,
     259,     5,     6,     7,     8,   235,    82,    78,    79,   239,
      82,   258,    24,    83,    86,   244,    76,    77,   248,    79,
      79,   251,     9,    10,    11,    81,    13,    14,   258,    80,
     318,   319,    27,   321,   322,    76,    77,    24,    79,     5,
       6,     7,     8,    40,   274,   275,   334,   335,   336,    15,
      76,    77,    54,    79,    47,   285,    25,    80,   288,     3,
       4,   291,    83,   293,    83,     9,    10,    11,    83,    13,
      14,    79,    16,    83,    18,    19,    20,    83,    83,   309,
      24,    72,    83,    72,     9,    10,    11,    72,    13,    14,
     320,    35,    36,    76,    77,    82,    79,    72,    72,    24,
     347,    26,    83,    76,    77,   352,    79,   354,    79,   356,
      24,    81,    37,    78,    81,    83,   346,   347,    82,    44,
      82,    46,   352,    82,   354,    82,   356,    52,    78,    22,
      23,    83,    78,    20,    78,    82,    76,    77,    82,    79,
      84,    85,    86,     3,     4,    82,    79,    79,    72,     9,
      10,    11,    72,    13,    14,    82,    16,    82,    18,    19,
      20,    86,    79,    79,    24,    58,    59,    60,    61,    62,
      63,    64,    83,    22,    23,    35,    36,    83,    28,    72,
      41,    55,    48,    53,    78,    83,    78,    80,    72,    82,
      72,    72,    72,    72,    31,    78,    89,    22,    23,    17,
      29,    79,    79,    42,    31,    49,    38,    83,    72,    58,
      59,    60,    61,    62,    63,    64,    72,    72,    78,    72,
      22,    23,    82,    72,    84,    72,    86,    50,    56,    39,
      72,    80,    72,    58,    59,    60,    61,    62,    63,    64,
      89,    72,    83,    22,    23,    51,    72,    72,    83,    83,
       8,    81,   246,    31,   126,    80,    58,    59,    60,    61,
      62,    63,    64,    79,    89,    79,    79,    -1,   268,    -1,
      72,    92,    -1,   116,    -1,    -1,    -1,    -1,    80,    58,
      59,    60,    61,    62,    63,    64,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,    21,    24,    91,    92,    93,
      94,   100,   101,   109,   144,    24,   103,     0,    93,    24,
      96,    97,    99,    72,    80,    89,   104,    82,    80,   102,
      78,    79,    72,    26,    37,    44,    46,    52,   110,   111,
     116,   117,   118,   119,     9,    10,    11,    13,    14,    24,
      82,    86,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   149,   150,   153,    32,    33,    34,    43,    45,
     146,    82,   100,   105,   106,   107,     9,    82,    24,    97,
     137,   144,    82,    82,    82,    82,    82,    78,    82,   136,
     139,    81,    66,    67,    68,    69,    70,    71,    76,    77,
      87,    88,    73,    74,    75,    22,    23,    58,    59,    60,
      61,    62,    63,    64,    72,    80,    89,    82,    82,    82,
      82,    82,   105,    24,   108,    83,    79,    81,   105,    27,
     112,    40,    54,    47,    25,   136,   151,   152,    83,   138,
     139,   141,   141,   141,   141,   142,   142,   141,   141,   143,
     143,   143,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   146,    83,    24,    80,   144,   147,    83,    83,    83,
      83,    80,     3,     4,    16,    18,    19,    20,    35,    36,
      78,    84,   109,   122,   123,   126,   127,   131,   134,   135,
     136,   144,   107,    83,    72,    79,   113,   114,    72,    72,
      72,    72,    83,    79,    81,   144,   148,    83,   122,    81,
      78,    78,   136,    82,    82,   122,   132,    82,    82,   124,
      78,    72,   122,    24,   115,   144,   149,    30,    31,    83,
     115,   115,   141,   147,   136,    79,    81,    78,   137,   126,
      20,    82,   147,   147,    15,    95,    98,   100,   125,    79,
      72,    72,    79,    79,    79,    79,   144,    83,   126,    82,
     137,    83,    83,   100,    96,    85,   122,    28,   141,   115,
      41,    55,    48,    53,   128,    83,   136,   137,    83,    78,
      78,    78,    72,    79,   114,    72,    72,    72,    72,   122,
     122,    83,    83,   133,   141,   115,   141,   141,   115,   129,
     122,    78,   122,    79,    79,    79,   121,    79,    79,    17,
     130,    29,    42,    31,    83,    49,    38,   122,    72,    72,
      72,    72,    72,   141,   141,   115,   141,   141,    79,    79,
      79,    56,    50,    39,    72,    72,    72,   141,   141,   141,
     121,    79,   121,    83,    51,    83,    72,    80,   120,   144,
     136,    83,    79,   136,    79,   136,    79,   136,    81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    93,    94,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   100,   102,   101,   103,   101,   104,   101,   105,   105,
     106,   106,   107,   108,   108,   109,   110,   110,   110,   110,
     110,   111,   112,   113,   113,   114,   114,   115,   115,   116,
     117,   118,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   123,   124,   124,   125,   125,   126,
     126,   126,   126,   128,   129,   127,   130,   130,   132,   133,
     131,   131,   131,   131,   134,   134,   135,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   141,   141,   141,   142,   142,   142,   142,   143,   143,
     144,   144,   144,   145,   145,   145,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   149,   150,   151,
     151,   152,   152,   153,   153,   153,   153,   153
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     3,
       3,     1,     1,     3,     2,     1,     1,     4,     1,     1,
       1,     1,     0,     7,     0,     6,     0,     7,     1,     0,
       3,     1,     2,     1,     3,     4,     1,     1,     1,     1,
       1,     5,    11,     5,     1,     4,     0,     1,     1,    22,
      11,    19,    19,     1,     9,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     0,     2,     0,     2,
       5,     5,     1,     0,     0,     8,     2,     0,     0,     0,
       7,     6,     7,     7,     2,     3,     2,     3,     3,     3,
       3,     3,     2,     2,     1,     3,     3,     3,     3,     1,
       3,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     4,     3,     1,     4,     3,     3,     4,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     1,     4,     1,
       0,     3,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("parsed successfully\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 86 "parser.y" /* yacc.c:1646  */
    {addquad("=","",pop(),id);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "parser.y" /* yacc.c:1646  */
    {
                  int i;
              i=search_sym((yyvsp[0].string));
               if(i!=-1){
           printf("\n Multiple Declaration of Variable ");
           printf("%s\n",(yyvsp[0].string));
           }

              else{
                  if(type==0)
                    insert_sym((yyvsp[0].string),"int",0,1);
                  if(type==1)
                    insert_sym((yyvsp[0].string),"char",0,1);
                  if(type==2)
                    insert_sym((yyvsp[0].string),"float",0,1);
                  if(type==3)
                    insert_sym((yyvsp[0].string),"bool",0,1);
                  strcpy(id,(yyvsp[0].string));
                  }
                  }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 109 "parser.y" /* yacc.c:1646  */
    {
                  int i;
              i=search_sym((yyvsp[-3].string));
               if(i!=-1){
           printf("\n Multiple Declaration of Variable ");
           printf("%s\n",(yyvsp[-3].string));
           }

              else{
                  if(type==0)
                    insert_sym((yyvsp[-3].string),"int",0,(yyvsp[-1].ival));
                  if(type==1)
                    insert_sym((yyvsp[-3].string),"char",0,(yyvsp[-1].ival));
                  if(type==2)
                    insert_sym((yyvsp[-3].string),"float",0,(yyvsp[-1].ival));
                  if(type==3)
                    insert_sym((yyvsp[-3].string),"bool",0,(yyvsp[-1].ival));
                  }
                  }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "parser.y" /* yacc.c:1646  */
    {type=0;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "parser.y" /* yacc.c:1646  */
    {type=1;}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "parser.y" /* yacc.c:1646  */
    {type=2;}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 131 "parser.y" /* yacc.c:1646  */
    {type=3;}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "parser.y" /* yacc.c:1646  */
    {strcpy(quad[Index].label,(yyvsp[0].string)); strcat(quad[Index].label,":"); insert_sym((yyvsp[0].string),"fun",0,0);
                                   Index++; }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 135 "parser.y" /* yacc.c:1646  */
    {strcpy(quad[Index].label,(yyvsp[0].string)); strcat(quad[Index].label,":"); insert_sym((yyvsp[0].string),"fun",0,0);
                                   Index++; }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "parser.y" /* yacc.c:1646  */
    {strcpy(quad[Index].label,(yyvsp[0].string)); strcat(quad[Index].label,":"); insert_sym((yyvsp[0].string),"fun",0,0);
                                   Index++; }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 174 "parser.y" /* yacc.c:1646  */
    {printf("if\n");
                  if_cnt++;
                  strcpy(quad[Index].operator,"");
                  strcpy(quad[Index].operand2,"");
                  strcpy(quad[Index].operand1,"");
                  strcpy(quad[Index].result,"IF");


                  strcpy(quad[Index+1].operator,"<=");
                  strcpy(quad[Index+1].operand2,"0");
                  strcpy(quad[Index+1].operand1,quad[Index-1].result);
                  Index++;
                  Index++;
                  char t[15];
                  sprintf(t,"else%d",if_cnt);
                  strcpy(quad[Index].label,t);
                  Index++;
                  pushif(if_cnt);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 192 "parser.y" /* yacc.c:1646  */
    {
                  char t[15];
                  sprintf(t,"j endif%d",if_cnt);
                  strcpy(quad[Index].label,t);
                  Index++;
                  sprintf(t,"else%d:",ifstk.i[ifstk.top]);
                  strcpy(quad[Index].label,t);
                  Index++;
                  }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 200 "parser.y" /* yacc.c:1646  */
    {
                  char t[15];
                  sprintf(t,"endif%d:",popif());
                  strcpy(quad[Index].label,t);
                  Index++;
                  }
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 208 "parser.y" /* yacc.c:1646  */
    {
                  char t[15];
                  while_cnt++;
                  pushwhile(while_cnt);
                  sprintf(t,"while%d:",while_cnt);

                  strcpy(quad[Index].operator,"");
                  strcpy(quad[Index].operand2,"");
                  strcpy(quad[Index].operand1,"");
                  strcpy(quad[Index].label,t);
                  Index++; }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 220 "parser.y" /* yacc.c:1646  */
    {

                  //strcpy(quad[Index+1].result,quad[Index].result);


                  printf("if %d\n",Index);
                  strcpy(quad[Index].operator,"");
                  strcpy(quad[Index].operand2,"");
                  strcpy(quad[Index].operand1,"");
                  strcpy(quad[Index].result,"IF");

                  strcpy(quad[Index+1].operator,"<=");
                  strcpy(quad[Index+1].operand2,"0");
                  strcpy(quad[Index+1].operand1,quad[Index-1].result);
                  Index++;
                  Index++;
                  printf("if %d\n",Index);

                  char t[15];
                  sprintf(t,"endwhile%d",while_cnt);
                  strcpy(quad[Index].label,t);
                  Index++;

              }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 243 "parser.y" /* yacc.c:1646  */
    {char t[25];
                int k=popwhile();

                sprintf(t,"j while%d",k);
                strcpy(quad[Index].label,t);
                Index++;
                sprintf(t,"endwhile%d:",k);
                strcpy(quad[Index].label,t);
                Index++;
                }
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 256 "parser.y" /* yacc.c:1646  */
    {addquad("=","",pop(),id);}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 256 "parser.y" /* yacc.c:1646  */
    {addquad("+=","",pop(),id);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 257 "parser.y" /* yacc.c:1646  */
    {addquad("-=","",pop(),id);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 257 "parser.y" /* yacc.c:1646  */
    {addquad("*=","",pop(),id);}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 258 "parser.y" /* yacc.c:1646  */
    {addquad("/=","",pop(),id);}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 262 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("<",pop(),pop(),str1);
                    push(str1);
                    }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 270 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad(">",pop(),pop(),str1);
                    push(str1);
                    }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 278 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("<=",pop(),pop(),str1);
                    push(str1);
                    }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 286 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad(">=",pop(),pop(),str1);
                    push(str1);
                    }
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 294 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("!=",pop(),pop(),str1);
                    push(str1);
                    }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 302 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("==",pop(),pop(),str1);
                    push(str1);
                    }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 312 "parser.y" /* yacc.c:1646  */
    {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("+",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("+",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("+",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 355 "parser.y" /* yacc.c:1646  */
    {char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("-",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("-",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("-",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 398 "parser.y" /* yacc.c:1646  */
    {char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("*",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("*",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("*",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 440 "parser.y" /* yacc.c:1646  */
    {  char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("/",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("/",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("/",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 482 "parser.y" /* yacc.c:1646  */
    {char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("%",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("%",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("%",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 525 "parser.y" /* yacc.c:1646  */
    {
            int i;
            i=search_sym((yyvsp[0].string));
            if(i==-1)
            printf("\n Undefined Variable");
            else
            strcpy(id,(yyvsp[0].string));
    }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 535 "parser.y" /* yacc.c:1646  */
    {
            int i;
            i=search_sym((yyvsp[0].string));
            if(i==-1)
            printf("\n Undefined Variable");
            else
            push((yyvsp[0].string));
    }
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 554 "parser.y" /* yacc.c:1646  */
    {       char temp[10];
              snprintf(temp,10,"%d",(yyvsp[0].ival));
              push(temp);

          }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2243 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 563 "parser.y" /* yacc.c:1906  */





int main(){

    printf("starting\n");
    Stk.top=-1;
    ifstk.top=-1;
    ifstk.top=-1;
     yyparse();
    display_sym_tab();
    display_quad();
   mips_gen( Sym,sym_cnt,quad,Index);
}

int yyerror(char *s)
{
  printf(" %s near %s line number %d\n",s,yytext,yylineno);
  return 1;
}
