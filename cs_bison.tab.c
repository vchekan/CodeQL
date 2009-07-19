/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABSTRACT = 258,
     BASE = 259,
     BOOL = 260,
     BREAK = 261,
     BYTE = 262,
     CASE = 263,
     CATCH = 264,
     CHAR = 265,
     CLASS = 266,
     CONST = 267,
     CONTINUE = 268,
     DECIMAL = 269,
     DEFAULT = 270,
     DELEGATE = 271,
     DO = 272,
     DOUBLE = 273,
     ELSE = 274,
     ENUM = 275,
     EVENT = 276,
     EXPLICIT = 277,
     EXTERN = 278,
     FALSE = 279,
     FINALLY = 280,
     FIXED = 281,
     FLOAT = 282,
     FOR = 283,
     FOREACH = 284,
     GOTO = 285,
     IF = 286,
     IMPLICIT = 287,
     IN = 288,
     INT = 289,
     INTERFACE = 290,
     INTERNAL = 291,
     LOCK = 292,
     LONG = 293,
     NAMESPACE = 294,
     NULL = 295,
     OBJECT = 296,
     OPERATOR = 297,
     OUT = 298,
     OVERRIDE = 299,
     PARAMS = 300,
     PRIVATE = 301,
     PROTECTED = 302,
     PUBLIC = 303,
     READONLY = 304,
     REF = 305,
     RETURN = 306,
     SBYTE = 307,
     SEALED = 308,
     SHORT = 309,
     SIZEOF = 310,
     STACKALLOC = 311,
     STATIC = 312,
     STRING = 313,
     STRUCT = 314,
     SWITCH = 315,
     THIS = 316,
     THROW = 317,
     TRUE = 318,
     TRY = 319,
     UINT = 320,
     ULONG = 321,
     UNSAFE = 322,
     USHORT = 323,
     USING = 324,
     VIRTUAL = 325,
     VOID = 326,
     VOLATILE = 327,
     WHILE = 328,
     YIELD = 329,
     ALIAS = 330,
     PARTIAL = 331,
     ADD = 332,
     REMOVE = 333,
     GET = 334,
     SET = 335,
     WHERE = 336,
     SEMI_SEMI = 337,
     LT_LT = 338,
     IDENTIFIER = 339,
     UNCHECKED = 340,
     CHECKED = 341,
     TYPEOF = 342,
     NEW = 343,
     MINUS_MINUS = 344,
     PLUS_PLUS = 345,
     LEFT_SHIFT = 346,
     RIGHT_SHIFT = 347,
     AS = 348,
     IS = 349,
     GE = 350,
     LE = 351,
     NE = 352,
     EQ_EQ = 353,
     AMP_AMP = 354,
     BAR_BAR = 355,
     QM_QM = 356,
     BAR_EQ = 357,
     CARET_EQ = 358,
     AMP_EQ = 359,
     RIGHT_SHIFT_ASSIGNMENT = 360,
     LT_LT_EQ = 361,
     MINUS_EQ = 362,
     PLUS_EQ = 363,
     PERCENT_EQ = 364,
     SLASH_EQ = 365,
     STAR_EQ = 366,
     SINGLE_CHARACTER = 367,
     HEX_DIGITS_WITH_SUFFIX = 368,
     DECIMAL_DIGITS = 369,
     REGULAR_STRING_LITERAL = 370,
     SIMPLE_ESCAPE_SEQUENCE = 371,
     DECIMAL_DIGITS_WITH_SUFFIX = 372,
     HEX_DIGITS = 373,
     HEXADECIMAL_ESCAPE_SEQUENCE = 374
   };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define BASE 259
#define BOOL 260
#define BREAK 261
#define BYTE 262
#define CASE 263
#define CATCH 264
#define CHAR 265
#define CLASS 266
#define CONST 267
#define CONTINUE 268
#define DECIMAL 269
#define DEFAULT 270
#define DELEGATE 271
#define DO 272
#define DOUBLE 273
#define ELSE 274
#define ENUM 275
#define EVENT 276
#define EXPLICIT 277
#define EXTERN 278
#define FALSE 279
#define FINALLY 280
#define FIXED 281
#define FLOAT 282
#define FOR 283
#define FOREACH 284
#define GOTO 285
#define IF 286
#define IMPLICIT 287
#define IN 288
#define INT 289
#define INTERFACE 290
#define INTERNAL 291
#define LOCK 292
#define LONG 293
#define NAMESPACE 294
#define NULL 295
#define OBJECT 296
#define OPERATOR 297
#define OUT 298
#define OVERRIDE 299
#define PARAMS 300
#define PRIVATE 301
#define PROTECTED 302
#define PUBLIC 303
#define READONLY 304
#define REF 305
#define RETURN 306
#define SBYTE 307
#define SEALED 308
#define SHORT 309
#define SIZEOF 310
#define STACKALLOC 311
#define STATIC 312
#define STRING 313
#define STRUCT 314
#define SWITCH 315
#define THIS 316
#define THROW 317
#define TRUE 318
#define TRY 319
#define UINT 320
#define ULONG 321
#define UNSAFE 322
#define USHORT 323
#define USING 324
#define VIRTUAL 325
#define VOID 326
#define VOLATILE 327
#define WHILE 328
#define YIELD 329
#define ALIAS 330
#define PARTIAL 331
#define ADD 332
#define REMOVE 333
#define GET 334
#define SET 335
#define WHERE 336
#define SEMI_SEMI 337
#define LT_LT 338
#define IDENTIFIER 339
#define UNCHECKED 340
#define CHECKED 341
#define TYPEOF 342
#define NEW 343
#define MINUS_MINUS 344
#define PLUS_PLUS 345
#define LEFT_SHIFT 346
#define RIGHT_SHIFT 347
#define AS 348
#define IS 349
#define GE 350
#define LE 351
#define NE 352
#define EQ_EQ 353
#define AMP_AMP 354
#define BAR_BAR 355
#define QM_QM 356
#define BAR_EQ 357
#define CARET_EQ 358
#define AMP_EQ 359
#define RIGHT_SHIFT_ASSIGNMENT 360
#define LT_LT_EQ 361
#define MINUS_EQ 362
#define PLUS_EQ 363
#define PERCENT_EQ 364
#define SLASH_EQ 365
#define STAR_EQ 366
#define SINGLE_CHARACTER 367
#define HEX_DIGITS_WITH_SUFFIX 368
#define DECIMAL_DIGITS 369
#define REGULAR_STRING_LITERAL 370
#define SIMPLE_ESCAPE_SEQUENCE 371
#define DECIMAL_DIGITS_WITH_SUFFIX 372
#define HEX_DIGITS 373
#define HEXADECIMAL_ESCAPE_SEQUENCE 374




/* Copy the first part of user declarations.  */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

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


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 357 "cs_bison.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2864

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  287
/* YYNRULES -- Number of rules.  */
#define YYNRULES  693
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1117

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   374

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,     2,     2,     2,    94,   107,     2,
     134,   135,    92,    95,   133,    96,    85,    93,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   140,   143,
      99,   113,   100,   132,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   136,     2,   137,   108,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   141,   109,   142,   139,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      86,    87,    88,    89,    90,    91,    97,    98,   101,   102,
     103,   104,   105,   106,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    12,    14,    17,    19,    24,
      26,    28,    30,    32,    34,    36,    38,    40,    42,    44,
      46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
      66,    68,    71,    73,    75,    77,    79,    82,    84,    86,
      88,    92,    94,    97,   100,   102,   104,   106,   108,   110,
     112,   114,   116,   118,   120,   122,   124,   126,   128,   130,
     132,   134,   136,   139,   143,   148,   153,   158,   160,   162,
     164,   166,   168,   170,   172,   177,   182,   184,   188,   190,
     195,   200,   203,   206,   212,   220,   224,   229,   234,   239,
     242,   247,   252,   256,   258,   261,   266,   271,   276,   280,
     284,   286,   290,   294,   296,   299,   302,   305,   308,   310,
     312,   314,   317,   320,   325,   327,   331,   335,   339,   341,
     345,   349,   351,   355,   359,   361,   365,   369,   373,   377,
     381,   385,   387,   391,   395,   397,   401,   403,   407,   409,
     413,   415,   419,   421,   425,   427,   431,   433,   439,   443,
     445,   447,   449,   451,   453,   455,   457,   459,   461,   463,
     465,   467,   469,   471,   473,   475,   477,   479,   481,   483,
     485,   487,   489,   491,   493,   495,   497,   499,   501,   503,
     507,   509,   512,   514,   518,   521,   524,   527,   529,   533,
     535,   539,   541,   543,   547,   549,   553,   557,   560,   562,
     564,   566,   568,   570,   572,   574,   576,   578,   584,   592,
     598,   602,   604,   607,   610,   612,   615,   619,   622,   624,
     626,   628,   630,   636,   644,   654,   656,   658,   660,   662,
     664,   668,   677,   679,   681,   683,   685,   687,   690,   693,
     697,   702,   706,   710,   714,   718,   723,   725,   728,   730,
     733,   740,   743,   746,   749,   752,   758,   764,   766,   768,
     773,   777,   782,   784,   788,   794,   796,   799,   804,   806,
     809,   811,   813,   819,   823,   825,   828,   830,   832,   834,
     836,   838,   840,   842,   847,   848,   851,   853,   855,   857,
     859,   861,   863,   865,   867,   869,   871,   873,   875,   885,
     887,   890,   894,   898,   900,   903,   905,   907,   909,   911,
     913,   915,   917,   919,   921,   923,   925,   932,   934,   938,
     942,   948,   950,   954,   956,   960,   962,   964,   967,   977,
     987,   989,   993,   995,   997,   999,  1003,  1005,  1007,  1011,
    1016,  1018,  1020,  1025,  1033,  1036,  1039,  1044,  1049,  1051,
    1053,  1055,  1058,  1061,  1063,  1065,  1072,  1081,  1084,  1087,
    1091,  1095,  1101,  1107,  1115,  1120,  1122,  1124,  1126,  1134,
    1136,  1138,  1140,  1142,  1144,  1146,  1148,  1150,  1161,  1163,
    1165,  1167,  1169,  1171,  1173,  1175,  1177,  1179,  1181,  1183,
    1185,  1187,  1189,  1191,  1193,  1201,  1209,  1211,  1213,  1218,
    1224,  1230,  1236,  1238,  1240,  1247,  1250,  1253,  1255,  1257,
    1265,  1267,  1269,  1279,  1281,  1285,  1287,  1290,  1292,  1294,
    1296,  1298,  1300,  1302,  1304,  1306,  1308,  1310,  1313,  1315,
    1317,  1319,  1322,  1326,  1328,  1331,  1335,  1340,  1342,  1346,
    1356,  1358,  1362,  1364,  1367,  1369,  1371,  1373,  1375,  1386,
    1397,  1405,  1409,  1413,  1420,  1427,  1434,  1445,  1453,  1456,
    1460,  1465,  1467,  1471,  1474,  1479,  1491,  1503,  1505,  1507,
    1510,  1515,  1519,  1525,  1530,  1533,  1535,  1537,  1539,  1543,
    1546,  1548,  1552,  1558,  1562,  1564,  1568,  1570,  1572,  1576,
    1580,  1582,  1586,  1589,  1594,  1598,  1600,  1604,  1606,  1608,
    1611,  1616,  1618,  1620,  1622,  1626,  1630,  1634,  1640,  1642,
    1644,  1646,  1648,  1652,  1656,  1658,  1660,  1662,  1664,  1666,
    1668,  1670,  1672,  1674,  1676,  1678,  1680,  1682,  1684,  1686,
    1688,  1690,  1692,  1694,  1696,  1698,  1700,  1702,  1704,  1706,
    1708,  1710,  1712,  1714,  1716,  1718,  1720,  1722,  1724,  1726,
    1728,  1730,  1732,  1734,  1736,  1738,  1740,  1742,  1744,  1746,
    1748,  1750,  1752,  1754,  1756,  1758,  1760,  1762,  1764,  1766,
    1768,  1770,  1772,  1774,  1776,  1778,  1780,  1782,  1784,  1786,
    1788,  1790,  1792,  1794,  1796,  1798,  1800,  1802,  1804,  1806,
    1808,  1810,  1812,  1814,  1816,  1818,  1820,  1822,  1824,  1826,
    1828,  1830,  1832,  1834,  1836,  1838,  1840,  1842,  1844,  1845,
    1847,  1848,  1850,  1851,  1853,  1854,  1856,  1857,  1859,  1860,
    1862,  1863,  1865,  1866,  1868,  1869,  1871,  1872,  1874,  1875,
    1877,  1878,  1880,  1881,  1883,  1884,  1886,  1887,  1889,  1890,
    1892,  1893,  1895,  1896,  1898,  1899,  1901,  1902,  1904,  1905,
    1907,  1908,  1910,  1911,  1913,  1914,  1916,  1917,  1919,  1920,
    1922,  1923,  1925,  1926,  1928,  1929,  1931,  1932,  1934,  1935,
    1937,  1938,  1940,  1941,  1943,  1944,  1946,  1947,  1949,  1950,
    1952,  1953,  1955,  1956,  1958,  1959,  1961,  1962,  1964,  1965,
    1967,  1968,  1970,  1971
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     145,     0,    -1,   388,   389,   410,   390,    -1,     1,    -1,
     148,    -1,   148,    -1,    84,   391,    -1,   273,    -1,   148,
      85,    84,   391,    -1,   147,    -1,   150,    -1,   158,    -1,
     151,    -1,   152,    -1,   156,    -1,   153,    -1,     5,    -1,
     154,    -1,   155,    -1,    14,    -1,    52,    -1,     7,    -1,
      54,    -1,    68,    -1,    34,    -1,    65,    -1,    38,    -1,
      66,    -1,    10,    -1,    27,    -1,    18,    -1,   157,   132,
      -1,   147,    -1,   152,    -1,   159,    -1,   332,    -1,   147,
      41,    -1,    58,    -1,   207,    -1,   162,    -1,   161,   133,
     162,    -1,   207,    -1,    50,   160,    -1,    43,   160,    -1,
     177,    -1,   164,    -1,   381,    -1,   165,    -1,   166,    -1,
     167,    -1,   169,    -1,   170,    -1,   172,    -1,   173,    -1,
     174,    -1,   175,    -1,   176,    -1,   178,    -1,   182,    -1,
     183,    -1,   184,    -1,   185,    -1,    84,   391,    -1,   134,
     207,   135,    -1,   163,    85,    84,   391,    -1,   168,    85,
      84,   391,    -1,   273,    85,    84,   391,    -1,     5,    -1,
      14,    -1,    18,    -1,    27,    -1,    41,    -1,    58,    -1,
     154,    -1,   163,   134,   393,   135,    -1,   164,   136,   171,
     137,    -1,   207,    -1,   171,   133,   207,    -1,    61,    -1,
       4,    85,    84,   391,    -1,     4,   136,   171,   137,    -1,
     163,    91,    -1,   163,    90,    -1,    89,   149,   134,   393,
     135,    -1,    89,   333,   136,   171,   137,   394,   395,    -1,
      89,   332,   337,    -1,    88,   134,   149,   135,    -1,    88,
     134,   179,   135,    -1,    88,   134,    71,   135,    -1,    84,
     396,    -1,    84,    82,    84,   396,    -1,   179,    85,    84,
     396,    -1,    99,   397,   100,    -1,   133,    -1,   181,   133,
      -1,    87,   134,   207,   135,    -1,    86,   134,   207,   135,
      -1,    15,   134,   149,   135,    -1,    16,   398,   212,    -1,
     134,   399,   135,    -1,   188,    -1,   187,   133,   188,    -1,
     400,   149,    84,    -1,   163,    -1,    95,   189,    -1,    96,
     189,    -1,   138,   189,    -1,   139,   189,    -1,   190,    -1,
     191,    -1,   192,    -1,    91,   189,    -1,    90,   189,    -1,
     134,   149,   135,   189,    -1,   189,    -1,   193,    92,   189,
      -1,   193,    93,   189,    -1,   193,    94,   189,    -1,   193,
      -1,   194,    95,   193,    -1,   194,    96,   193,    -1,   194,
      -1,   195,    83,   194,    -1,   195,    98,   194,    -1,   195,
      -1,   196,    99,   195,    -1,   196,   100,   195,    -1,   196,
     104,   195,    -1,   196,   103,   195,    -1,   196,   102,   149,
      -1,   196,   101,   149,    -1,   196,    -1,   197,   106,   196,
      -1,   197,   105,   196,    -1,   197,    -1,   198,   107,   197,
      -1,   198,    -1,   199,   108,   198,    -1,   199,    -1,   200,
     109,   199,    -1,   200,    -1,   201,   110,   200,    -1,   201,
      -1,   202,   111,   201,    -1,   202,    -1,   202,   112,   203,
      -1,   203,    -1,   203,   132,   207,   140,   207,    -1,   189,
     206,   207,    -1,   113,    -1,   120,    -1,   119,    -1,   123,
      -1,   122,    -1,   121,    -1,   116,    -1,   114,    -1,   115,
      -1,   118,    -1,   117,    -1,   204,    -1,   205,    -1,   207,
      -1,   207,    -1,   215,    -1,   216,    -1,   211,    -1,   212,
      -1,   214,    -1,   224,    -1,   226,    -1,   234,    -1,   243,
      -1,   249,    -1,   255,    -1,   256,    -1,   257,    -1,   258,
      -1,   260,    -1,   141,   401,   142,    -1,   210,    -1,   213,
     210,    -1,   143,    -1,    84,   140,   210,    -1,   217,   143,
      -1,   221,   143,    -1,   149,   218,    -1,   219,    -1,   218,
     133,   219,    -1,    84,    -1,    84,   113,   220,    -1,   207,
      -1,   337,    -1,    12,   149,   222,    -1,   223,    -1,   222,
     133,   223,    -1,    84,   113,   208,    -1,   225,   143,    -1,
     169,    -1,   176,    -1,   205,    -1,   174,    -1,   175,    -1,
     190,    -1,   191,    -1,   227,    -1,   228,    -1,    31,   134,
     209,   135,   211,    -1,    31,   134,   209,   135,   211,    19,
     211,    -1,    60,   134,   207,   135,   229,    -1,   141,   402,
     142,    -1,   231,    -1,   230,   231,    -1,   232,   213,    -1,
     233,    -1,   232,   233,    -1,     8,   208,   140,    -1,    15,
     140,    -1,   235,    -1,   236,    -1,   237,    -1,   242,    -1,
      73,   134,   209,   135,   211,    -1,    17,   211,    73,   134,
     209,   135,   143,    -1,    28,   134,   403,   143,   404,   143,
     405,   135,   211,    -1,   217,    -1,   241,    -1,   209,    -1,
     241,    -1,   225,    -1,   241,   133,   225,    -1,    29,   134,
     149,    84,    33,   207,   135,   211,    -1,   244,    -1,   245,
      -1,   246,    -1,   247,    -1,   248,    -1,     6,   143,    -1,
      13,   143,    -1,    30,    84,   143,    -1,    30,     8,   208,
     143,    -1,    30,    15,   143,    -1,    51,   406,   143,    -1,
      62,   406,   143,    -1,    64,   212,   250,    -1,    64,   212,
     407,   254,    -1,   251,    -1,   408,   253,    -1,   252,    -1,
     251,   252,    -1,     9,   134,   159,   409,   135,   212,    -1,
       9,   212,    -1,    25,   212,    -1,    87,   212,    -1,    86,
     212,    -1,    37,   134,   207,   135,   211,    -1,    69,   134,
     259,   135,   211,    -1,   217,    -1,   207,    -1,    74,    51,
     207,   143,    -1,    74,     6,   143,    -1,    39,   262,   263,
     430,    -1,    84,    -1,   262,    85,    84,    -1,   141,   388,
     389,   390,   142,    -1,   265,    -1,   264,   265,    -1,    23,
      75,    84,   143,    -1,   267,    -1,   266,   267,    -1,   268,
      -1,   269,    -1,    69,    84,   113,   148,   143,    -1,    69,
     146,   143,    -1,   271,    -1,   270,   271,    -1,   261,    -1,
     272,    -1,   276,    -1,   327,    -1,   339,    -1,   349,    -1,
     354,    -1,    84,    82,    84,   391,    -1,    -1,   274,   275,
      -1,    89,    -1,    76,    -1,    48,    -1,    47,    -1,    36,
      -1,    46,    -1,    57,    -1,    70,    -1,    53,    -1,    44,
      -1,     3,    -1,    23,    -1,   410,   274,    11,    84,   411,
     412,   413,   279,   430,    -1,   278,    -1,   140,   147,    -1,
     278,   133,   147,    -1,   141,   414,   142,    -1,   281,    -1,
     280,   281,    -1,   282,    -1,   285,    -1,   289,    -1,   298,
      -1,   304,    -1,   308,    -1,   310,    -1,   318,    -1,   325,
      -1,   322,    -1,   272,    -1,   410,   274,    12,   149,   283,
     143,    -1,   284,    -1,   283,   133,   284,    -1,    84,   113,
     208,    -1,   410,   274,   149,   286,   143,    -1,   287,    -1,
     286,   133,   287,    -1,    84,    -1,    84,   113,   288,    -1,
     207,    -1,   337,    -1,   290,   292,    -1,   410,   274,   149,
     291,   411,   134,   415,   135,   413,    -1,   410,   274,    71,
     291,   411,   134,   415,   135,   413,    -1,    84,    -1,   147,
      85,    84,    -1,   212,    -1,   143,    -1,   294,    -1,   294,
     133,   297,    -1,   297,    -1,   295,    -1,   294,   133,   295,
      -1,   410,   400,   149,    84,    -1,    50,    -1,    43,    -1,
     410,    45,   332,    84,    -1,   410,   274,   149,   291,   141,
     299,   142,    -1,   300,   416,    -1,   301,   417,    -1,   410,
     418,    79,   303,    -1,   410,   418,    80,   303,    -1,    47,
      -1,    36,    -1,    46,    -1,    47,    36,    -1,    36,    47,
      -1,   212,    -1,   143,    -1,   410,   274,    21,   149,   286,
     143,    -1,   410,   274,    21,   149,   291,   141,   305,   142,
      -1,   306,   307,    -1,   307,   306,    -1,   410,    77,   212,
      -1,   410,    78,   212,    -1,   410,   309,   141,   299,   142,
      -1,   149,    61,   136,   293,   137,    -1,   149,   147,    85,
      61,   136,   293,   137,    -1,   410,   274,   311,   317,    -1,
     312,    -1,   314,    -1,   316,    -1,   149,    42,   313,   134,
     149,    84,   135,    -1,    95,    -1,    96,    -1,   138,    -1,
     139,    -1,    91,    -1,    90,    -1,    63,    -1,    24,    -1,
     149,    42,   315,   134,   149,    84,   133,   149,    84,   135,
      -1,    95,    -1,    96,    -1,    92,    -1,    93,    -1,    94,
      -1,   107,    -1,   109,    -1,   108,    -1,    83,    -1,    98,
      -1,   106,    -1,   105,    -1,   100,    -1,    99,    -1,   103,
      -1,   104,    -1,    32,    42,   149,   134,   149,    84,   135,
      -1,    22,    42,   149,   134,   149,    84,   135,    -1,   212,
      -1,   143,    -1,   410,   274,   319,   321,    -1,    84,   134,
     415,   135,   419,    -1,   140,     4,   134,   393,   135,    -1,
     140,    61,   134,   393,   135,    -1,   212,    -1,   143,    -1,
     410,   323,    84,   134,   135,   324,    -1,   274,    57,    -1,
      57,   274,    -1,   212,    -1,   143,    -1,   410,   274,   139,
      84,   134,   135,   326,    -1,   212,    -1,   143,    -1,   410,
     274,    59,    84,   411,   420,   413,   329,   430,    -1,   278,
      -1,   141,   421,   142,    -1,   331,    -1,   330,   331,    -1,
     282,    -1,   285,    -1,   289,    -1,   298,    -1,   304,    -1,
     308,    -1,   310,    -1,   318,    -1,   322,    -1,   272,    -1,
     333,   334,    -1,   150,    -1,   159,    -1,   335,    -1,   334,
     335,    -1,   136,   392,   137,    -1,   133,    -1,   336,   133,
      -1,   141,   422,   142,    -1,   141,   338,   133,   142,    -1,
     288,    -1,   338,   133,   288,    -1,   410,   274,    35,    84,
     411,   423,   413,   341,   430,    -1,   278,    -1,   141,   424,
     142,    -1,   343,    -1,   342,   343,    -1,   344,    -1,   345,
      -1,   347,    -1,   348,    -1,   410,   425,   149,    84,   411,
     134,   415,   135,   413,   143,    -1,   410,   425,    71,    84,
     411,   134,   415,   135,   413,   143,    -1,   410,   425,   149,
      84,   141,   346,   142,    -1,   410,    79,   143,    -1,   410,
      80,   143,    -1,   410,    79,   143,   410,    80,   143,    -1,
     410,    80,   143,   410,    79,   143,    -1,   410,   425,    21,
     149,    84,   143,    -1,   410,   425,   149,    61,   136,   293,
     137,   141,   346,   142,    -1,   410,   274,    20,    84,   426,
     351,   430,    -1,   140,   154,    -1,   141,   427,   142,    -1,
     141,   352,   133,   142,    -1,   353,    -1,   352,   133,   353,
      -1,   410,    84,    -1,   410,    84,   113,   208,    -1,   410,
     274,    16,   149,    84,   411,   134,   415,   135,   413,   143,
      -1,   410,   274,    16,    71,    84,   411,   134,   415,   135,
     413,   143,    -1,   356,    -1,   357,    -1,   356,   357,    -1,
     136,   358,   360,   137,    -1,   136,   360,   137,    -1,   136,
     358,   360,   133,   137,    -1,   136,   360,   133,   137,    -1,
     359,   140,    -1,    84,    -1,   380,    -1,   361,    -1,   360,
     133,   361,    -1,   362,   428,    -1,   147,    -1,   134,   429,
     135,    -1,   134,   364,   133,   366,   135,    -1,   134,   366,
     135,    -1,   365,    -1,   364,   133,   365,    -1,   368,    -1,
     367,    -1,   366,   133,   367,    -1,    84,   113,   368,    -1,
     207,    -1,    99,   370,   100,    -1,   410,    84,    -1,   370,
     133,   410,    84,    -1,    99,   372,   100,    -1,   373,    -1,
     372,   133,   373,    -1,   149,    -1,   375,    -1,   374,   375,
      -1,    81,    84,   140,   376,    -1,   377,    -1,   378,    -1,
     379,    -1,   377,   133,   378,    -1,   377,   133,   379,    -1,
     378,   133,   379,    -1,   377,   133,   378,   133,   379,    -1,
     159,    -1,    11,    -1,    59,    -1,   147,    -1,   378,   133,
     147,    -1,    89,   134,   135,    -1,     3,    -1,   101,    -1,
       4,    -1,     5,    -1,     6,    -1,     8,    -1,     9,    -1,
      87,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    35,    -1,
      36,    -1,   102,    -1,    37,    -1,    39,    -1,    89,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    53,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    88,    -1,    86,    -1,
      67,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,   154,    -1,
     382,    -1,   383,    -1,   386,    -1,   387,    -1,    40,    -1,
      63,    -1,    24,    -1,   384,    -1,   385,    -1,   126,    -1,
     129,    -1,   130,    -1,   125,    -1,   124,    -1,   128,    -1,
     131,    -1,   127,    -1,    -1,   264,    -1,    -1,   266,    -1,
      -1,   270,    -1,    -1,   371,    -1,    -1,   336,    -1,    -1,
     161,    -1,    -1,   334,    -1,    -1,   337,    -1,    -1,   180,
      -1,    -1,   181,    -1,    -1,   186,    -1,    -1,   187,    -1,
      -1,   296,    -1,    -1,   213,    -1,    -1,   230,    -1,    -1,
     238,    -1,    -1,   239,    -1,    -1,   240,    -1,    -1,   207,
      -1,    -1,   250,    -1,    -1,   251,    -1,    -1,    84,    -1,
      -1,   355,    -1,    -1,   369,    -1,    -1,   277,    -1,    -1,
     374,    -1,    -1,   280,    -1,    -1,   293,    -1,    -1,   301,
      -1,    -1,   300,    -1,    -1,   302,    -1,    -1,   320,    -1,
      -1,   328,    -1,    -1,   330,    -1,    -1,   338,    -1,    -1,
     340,    -1,    -1,   342,    -1,    -1,    89,    -1,    -1,   350,
      -1,    -1,   352,    -1,    -1,   363,    -1,    -1,   364,    -1,
      -1,   143,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    45,    53,    57,    61,    62,    63,    67,
      68,    69,    74,    79,    80,    84,    85,    89,    90,    91,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   107,
     108,   117,   122,   123,   127,   129,   134,   136,   178,   182,
     183,   187,   188,   189,   193,   194,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   210,   211,   212,
     213,   214,   218,   222,   226,   227,   228,   232,   232,   232,
     232,   233,   233,   235,   239,   243,   247,   248,   252,   256,
     257,   261,   265,   269,   273,   274,   283,   284,   285,   289,
     290,   291,   295,   299,   300,   304,   308,   312,   316,   320,
     324,   325,   329,   333,   334,   335,   336,   337,   338,   339,
     340,   344,   348,   352,   356,   357,   358,   359,   363,   364,
     365,   369,   370,   371,   375,   376,   377,   378,   379,   380,
     381,   385,   386,   387,   391,   392,   396,   397,   401,   402,
     406,   407,   411,   412,   416,   417,   421,   422,   426,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     434,   435,   439,   443,   447,   448,   449,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   468,
     472,   473,   477,   481,   485,   486,   490,   494,   495,   499,
     500,   504,   505,   509,   513,   514,   518,   522,   526,   527,
     528,   529,   530,   531,   532,   536,   537,   541,   542,   546,
     550,   554,   555,   559,   563,   564,   568,   569,   573,   574,
     575,   576,   580,   584,   588,   592,   593,   597,   601,   605,
     606,   610,   614,   615,   616,   617,   618,   622,   626,   630,
     631,   632,   636,   640,   644,   645,   649,   650,   654,   655,
     659,   663,   667,   671,   675,   679,   683,   687,   688,   692,
     693,   697,   703,   704,   708,   712,   713,   717,   721,   722,
     726,   727,   731,   735,   739,   740,   744,   745,   749,   750,
     751,   752,   753,   757,   765,   767,   776,   777,   778,   779,
     780,   781,   782,   783,   784,   785,   786,   787,   792,   817,
     822,   823,   832,   836,   837,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   855,   873,   874,   878,
     882,   903,   904,   908,   909,   913,   914,   918,   924,   926,
     958,   959,   963,   964,   968,   969,   970,   974,   975,   979,
     983,   984,   988,   992,  1016,  1017,  1021,  1025,  1029,  1030,
    1031,  1032,  1033,  1037,  1038,  1042,  1043,  1068,  1069,  1073,
    1077,  1081,  1104,  1105,  1109,  1124,  1125,  1126,  1130,  1134,
    1134,  1134,  1134,  1134,  1134,  1134,  1134,  1138,  1142,  1142,
    1142,  1142,  1142,  1143,  1143,  1143,  1144,  1144,  1145,  1145,
    1145,  1145,  1145,  1145,  1149,  1150,  1154,  1155,  1159,  1177,
    1181,  1182,  1186,  1187,  1191,  1195,  1196,  1200,  1201,  1205,
    1209,  1210,  1214,  1233,  1237,  1241,  1242,  1246,  1247,  1248,
    1249,  1250,  1251,  1252,  1253,  1254,  1255,  1259,  1263,  1264,
    1271,  1272,  1276,  1280,  1281,  1285,  1286,  1290,  1291,  1302,
    1321,  1325,  1329,  1330,  1334,  1335,  1336,  1337,  1343,  1345,
    1350,  1354,  1355,  1356,  1357,  1361,  1365,  1369,  1373,  1377,
    1378,  1396,  1397,  1401,  1402,  1408,  1410,  1454,  1458,  1459,
    1463,  1464,  1465,  1466,  1470,  1474,  1475,  1479,  1480,  1484,
    1488,  1492,  1493,  1494,  1498,  1499,  1503,  1507,  1508,  1512,
    1516,  1520,  1524,  1525,  1533,  1537,  1538,  1542,  1546,  1547,
    1551,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1565,  1566,
    1567,  1571,  1573,  1578,  1585,  1585,  1585,  1585,  1585,  1585,
    1585,  1585,  1585,  1585,  1585,  1585,  1586,  1586,  1586,  1586,
    1586,  1586,  1586,  1586,  1586,  1586,  1586,  1587,  1587,  1587,
    1587,  1587,  1587,  1587,  1587,  1587,  1587,  1587,  1588,  1588,
    1588,  1588,  1588,  1588,  1588,  1588,  1588,  1588,  1589,  1589,
    1589,  1589,  1589,  1589,  1589,  1589,  1590,  1590,  1590,  1590,
    1590,  1590,  1590,  1590,  1590,  1590,  1591,  1591,  1591,  1591,
    1591,  1591,  1591,  1591,  1591,  1591,  1591,  1592,  1592,  1592,
    1594,  1598,  1599,  1601,  1602,  1603,  1607,  1608,  1612,  1613,
    1617,  1618,  1622,  1623,  1642,  1643,  1644,  1649,  1658,  1659,
    1662,  1663,  1670,  1671,  1674,  1675,  1678,  1679,  1682,  1683,
    1686,  1687,  1690,  1691,  1694,  1695,  1698,  1699,  1702,  1703,
    1706,  1707,  1710,  1711,  1714,  1715,  1718,  1719,  1722,  1723,
    1726,  1727,  1730,  1731,  1734,  1735,  1738,  1739,  1742,  1743,
    1746,  1747,  1750,  1751,  1764,  1765,  1768,  1769,  1772,  1773,
    1776,  1777,  1793,  1794,  1801,  1802,  1805,  1806,  1809,  1810,
    1826,  1827,  1840,  1841,  1844,  1845,  1848,  1849,  1857,  1858,
    1861,  1862,  1865,  1866,  1873,  1874,  1877,  1878,  1889,  1890,
    1893,  1894,  1897,  1898
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BASE", "BOOL", "BREAK",
  "BYTE", "CASE", "CATCH", "CHAR", "CLASS", "CONST", "CONTINUE", "DECIMAL",
  "DEFAULT", "DELEGATE", "DO", "DOUBLE", "ELSE", "ENUM", "EVENT",
  "EXPLICIT", "EXTERN", "FALSE", "FINALLY", "FIXED", "FLOAT", "FOR",
  "FOREACH", "GOTO", "IF", "IMPLICIT", "IN", "INT", "INTERFACE",
  "INTERNAL", "LOCK", "LONG", "NAMESPACE", "NULL", "OBJECT", "OPERATOR",
  "OUT", "OVERRIDE", "PARAMS", "PRIVATE", "PROTECTED", "PUBLIC",
  "READONLY", "REF", "RETURN", "SBYTE", "SEALED", "SHORT", "SIZEOF",
  "STACKALLOC", "STATIC", "STRING", "STRUCT", "SWITCH", "THIS", "THROW",
  "TRUE", "TRY", "UINT", "ULONG", "UNSAFE", "USHORT", "USING", "VIRTUAL",
  "VOID", "VOLATILE", "WHILE", "YIELD", "ALIAS", "PARTIAL", "ADD",
  "REMOVE", "GET", "SET", "WHERE", "SEMI_SEMI", "LT_LT", "IDENTIFIER",
  "'.'", "UNCHECKED", "CHECKED", "TYPEOF", "NEW", "MINUS_MINUS",
  "PLUS_PLUS", "'*'", "'/'", "'%'", "'+'", "'-'", "LEFT_SHIFT",
  "RIGHT_SHIFT", "'<'", "'>'", "AS", "IS", "GE", "LE", "NE", "EQ_EQ",
  "'&'", "'^'", "'|'", "AMP_AMP", "BAR_BAR", "QM_QM", "'='", "BAR_EQ",
  "CARET_EQ", "AMP_EQ", "RIGHT_SHIFT_ASSIGNMENT", "LT_LT_EQ", "MINUS_EQ",
  "PLUS_EQ", "PERCENT_EQ", "SLASH_EQ", "STAR_EQ", "SINGLE_CHARACTER",
  "HEX_DIGITS_WITH_SUFFIX", "DECIMAL_DIGITS", "REGULAR_STRING_LITERAL",
  "SIMPLE_ESCAPE_SEQUENCE", "DECIMAL_DIGITS_WITH_SUFFIX", "HEX_DIGITS",
  "HEXADECIMAL_ESCAPE_SEQUENCE", "'?'", "','", "'('", "')'", "'['", "']'",
  "'!'", "'~'", "':'", "'{'", "'}'", "';'", "$accept", "compilation_unit",
  "namespace_name", "type_name", "namespace_or_type_name", "type",
  "value_type", "struct_type", "simple_type", "numeric_type",
  "integral_type", "floating_point_type", "nullable_type",
  "non_nullable_value_type", "reference_type", "class_type",
  "variable_reference", "argument_list", "argument", "primary_expression",
  "primary_no_array_creation_expression", "simple_name",
  "parenthesized_expression", "member_access", "predefined_type",
  "invocation_expression", "element_access", "expression_list",
  "this_access", "base_access", "post_increment_expression",
  "post_decrement_expression", "object_creation_expression",
  "array_creation_expression", "typeof_expression", "unbound_type_name",
  "generic_dimension_specifier", "commas", "checked_expression",
  "unchecked_expression", "default_value_expression",
  "anonymous_method_expression", "anonymous_method_signature",
  "anonymous_method_parameter_list", "anonymous_method_parameter",
  "unary_expression", "pre_increment_expression",
  "pre_decrement_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "null_coalescing_expression", "conditional_expression", "assignment",
  "assignment_operator", "expression", "constant_expression",
  "boolean_expression", "statement", "embedded_statement", "block",
  "statement_list", "empty_statement", "labeled_statement",
  "declaration_statement", "local_variable_declaration",
  "local_variable_declarators", "local_variable_declarator",
  "local_variable_initializer", "local_constant_declaration",
  "constant_declarators_loc", "constant_declarator_loc",
  "expression_statement", "statement_expression", "selection_statement",
  "if_statement", "switch_statement", "switch_block", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
  "while_statement", "do_statement", "for_statement", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "throw_statement", "try_statement", "catch_clauses",
  "specific_catch_clauses", "specific_catch_clause",
  "general_catch_clause", "finally_clause", "checked_statement",
  "unchecked_statement", "lock_statement", "using_statement",
  "resource_acquisition", "yield_statement", "namespace_declaration",
  "qualified_identifier", "namespace_body", "extern_alias_directives",
  "extern_alias_directive", "using_directives", "using_directive",
  "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "qualified_alias_member", "modifiers_opt",
  "modifier", "class_declaration", "class_base", "type_name_list",
  "class_body", "class_member_declarations", "class_member_declaration",
  "constant_declaration", "constant_declarators", "constant_declarator",
  "field_declaration", "variable_declarators", "variable_declarator",
  "variable_initializer", "method_declaration", "method_header",
  "member_name", "method_body", "formal_parameter_list",
  "fixed_parameters", "fixed_parameter", "parameter_modifier",
  "parameter_array", "property_declaration", "accessor_declarations",
  "get_accessor_declaration", "set_accessor_declaration",
  "accessor_modifier", "accessor_body", "event_declaration",
  "event_accessor_declarations", "add_accessor_declaration",
  "remove_accessor_declaration", "indexer_declaration",
  "indexer_declarator", "operator_declaration", "operator_declarator",
  "unary_operator_declarator", "overloadable_unary_operator",
  "binary_operator_declarator", "overloadable_binary_operator",
  "conversion_operator_declarator", "operator_body",
  "constructor_declaration", "constructor_declarator",
  "constructor_initializer", "constructor_body",
  "static_constructor_declaration", "static_constructor_modifiers",
  "static_constructor_body", "finalizer_declaration", "finalizer_body",
  "struct_declaration", "struct_interfaces", "struct_body",
  "struct_member_declarations", "struct_member_declaration", "array_type",
  "non_array_type", "rank_specifiers", "rank_specifier", "dim_separators",
  "array_initializer", "variable_initializer_list",
  "interface_declaration", "interface_base", "interface_body",
  "interface_member_declarations", "interface_member_declaration",
  "interface_method_declaration", "interface_property_declaration",
  "interface_accessors", "interface_event_declaration",
  "interface_indexer_declaration", "enum_declaration", "enum_base",
  "enum_body", "enum_member_declarations", "enum_member_declaration",
  "delegate_declaration", "attributes", "attribute_sections",
  "attribute_section", "attribute_target_specifier", "attribute_target",
  "attribute_list", "attribute", "attribute_name", "attribute_arguments",
  "positional_argument_list", "positional_argument", "named_argument_list",
  "named_argument", "attribute_argument_expression", "type_parameter_list",
  "type_parameters", "type_argument_list", "type_arguments",
  "type_argument", "type_parameter_constraints_clauses",
  "type_parameter_constraints_clause", "type_parameter_constraints",
  "primary_constraint", "secondary_constraints", "constructor_constraint",
  "keyword", "literal", "boolean_literal", "integer_literal",
  "decimal_integer_literal", "hexadecimal_integer_literal",
  "character_literal", "string_literal", "extern_alias_directivesopt",
  "using_directivesopt", "namespace_member_declarationsopt",
  "type_argument_listopt", "dim_separatorsopt", "argument_listopt",
  "rank_specifiersopt", "array_initializeropt",
  "generic_dimension_specifieropt", "commasopt",
  "anonymous_method_signatureopt", "anonymous_method_parameter_listopt",
  "parameter_modifieropt", "statement_listopt", "switch_sectionsopt",
  "for_initializeropt", "for_conditionopt", "for_iteratoropt",
  "expressionopt", "catch_clausesopt", "specific_catch_clausesopt",
  "identifieropt", "attributesopt", "type_parameter_listopt",
  "class_baseopt", "type_parameter_constraints_clausesopt",
  "class_member_declarationsopt", "formal_parameter_listopt",
  "set_accessor_declarationopt", "get_accessor_declarationopt",
  "accessor_modifieropt", "constructor_initializeropt",
  "struct_interfacesopt", "struct_member_declarationsopt",
  "variable_initializer_listopt", "interface_baseopt",
  "interface_member_declarationsopt", "newopt", "enum_baseopt",
  "enum_member_declarationsopt", "attribute_argumentsopt",
  "positional_argument_listopt", "SemicolonOpt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,    46,   340,   341,   342,   343,
     344,   345,    42,    47,    37,    43,    45,   346,   347,    60,
      62,   348,   349,   350,   351,   352,   353,    38,    94,   124,
     354,   355,   356,    61,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,    63,    44,    40,    41,    91,    93,    33,   126,
      58,   123,   125,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   144,   145,   145,   146,   147,   148,   148,   148,   149,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   153,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   155,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   161,
     161,   162,   162,   162,   163,   163,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   166,   167,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   169,   170,   171,   171,   172,   173,
     173,   174,   175,   176,   177,   177,   178,   178,   178,   179,
     179,   179,   180,   181,   181,   182,   183,   184,   185,   186,
     187,   187,   188,   189,   189,   189,   189,   189,   189,   189,
     189,   190,   191,   192,   193,   193,   193,   193,   194,   194,
     194,   195,   195,   195,   196,   196,   196,   196,   196,   196,
     196,   197,   197,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     207,   207,   208,   209,   210,   210,   210,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   212,
     213,   213,   214,   215,   216,   216,   217,   218,   218,   219,
     219,   220,   220,   221,   222,   222,   223,   224,   225,   225,
     225,   225,   225,   225,   225,   226,   226,   227,   227,   228,
     229,   230,   230,   231,   232,   232,   233,   233,   234,   234,
     234,   234,   235,   236,   237,   238,   238,   239,   240,   241,
     241,   242,   243,   243,   243,   243,   243,   244,   245,   246,
     246,   246,   247,   248,   249,   249,   250,   250,   251,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   259,   260,
     260,   261,   262,   262,   263,   264,   264,   265,   266,   266,
     267,   267,   268,   269,   270,   270,   271,   271,   272,   272,
     272,   272,   272,   273,   274,   274,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   276,   277,
     278,   278,   279,   280,   280,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   282,   283,   283,   284,
     285,   286,   286,   287,   287,   288,   288,   289,   290,   290,
     291,   291,   292,   292,   293,   293,   293,   294,   294,   295,
     296,   296,   297,   298,   299,   299,   300,   301,   302,   302,
     302,   302,   302,   303,   303,   304,   304,   305,   305,   306,
     307,   308,   309,   309,   310,   311,   311,   311,   312,   313,
     313,   313,   313,   313,   313,   313,   313,   314,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   316,   316,   317,   317,   318,   319,
     320,   320,   321,   321,   322,   323,   323,   324,   324,   325,
     326,   326,   327,   328,   329,   330,   330,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   332,   333,   333,
     334,   334,   335,   336,   336,   337,   337,   338,   338,   339,
     340,   341,   342,   342,   343,   343,   343,   343,   344,   344,
     345,   346,   346,   346,   346,   347,   348,   349,   350,   351,
     351,   352,   352,   353,   353,   354,   354,   355,   356,   356,
     357,   357,   357,   357,   358,   359,   359,   360,   360,   361,
     362,   363,   363,   363,   364,   364,   365,   366,   366,   367,
     368,   369,   370,   370,   371,   372,   372,   373,   374,   374,
     375,   376,   376,   376,   376,   376,   376,   376,   377,   377,
     377,   378,   378,   379,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   381,   381,   381,   381,   381,   382,   382,   383,   383,
     384,   384,   385,   385,   386,   386,   386,   387,   388,   388,
     389,   389,   390,   390,   391,   391,   392,   392,   393,   393,
     394,   394,   395,   395,   396,   396,   397,   397,   398,   398,
     399,   399,   400,   400,   401,   401,   402,   402,   403,   403,
     404,   404,   405,   405,   406,   406,   407,   407,   408,   408,
     409,   409,   410,   410,   411,   411,   412,   412,   413,   413,
     414,   414,   415,   415,   416,   416,   417,   417,   418,   418,
     419,   419,   420,   420,   421,   421,   422,   422,   423,   423,
     424,   424,   425,   425,   426,   426,   427,   427,   428,   428,
     429,   429,   430,   430
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     1,     3,     1,     4,
       4,     2,     2,     5,     7,     3,     4,     4,     4,     2,
       4,     4,     3,     1,     2,     4,     4,     4,     3,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     3,     2,     2,     2,     1,     3,     1,
       3,     1,     1,     3,     1,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     5,
       3,     1,     2,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     5,     7,     9,     1,     1,     1,     1,     1,
       3,     8,     1,     1,     1,     1,     1,     2,     2,     3,
       4,     3,     3,     3,     3,     4,     1,     2,     1,     2,
       6,     2,     2,     2,     2,     5,     5,     1,     1,     4,
       3,     4,     1,     3,     5,     1,     2,     4,     1,     2,
       1,     1,     5,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     9,     1,
       2,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     1,     3,     3,
       5,     1,     3,     1,     3,     1,     1,     2,     9,     9,
       1,     3,     1,     1,     1,     3,     1,     1,     3,     4,
       1,     1,     4,     7,     2,     2,     4,     4,     1,     1,
       1,     2,     2,     1,     1,     6,     8,     2,     2,     3,
       3,     5,     5,     7,     4,     1,     1,     1,     7,     1,
       1,     1,     1,     1,     1,     1,     1,    10,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     1,     1,     4,     5,
       5,     5,     1,     1,     6,     2,     2,     1,     1,     7,
       1,     1,     9,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     3,     1,     2,     3,     4,     1,     3,     9,
       1,     3,     1,     2,     1,     1,     1,     1,    10,    10,
       7,     3,     3,     6,     6,     6,    10,     7,     2,     3,
       4,     1,     3,     2,     4,    11,    11,     1,     1,     2,
       4,     3,     5,     4,     2,     1,     1,     1,     3,     2,
       1,     3,     5,     3,     1,     3,     1,     1,     3,     3,
       1,     3,     2,     4,     3,     1,     3,     1,     1,     2,
       4,     1,     1,     1,     3,     3,     3,     5,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     3,     0,     0,   609,   265,   610,     0,     1,   266,
       0,   611,   268,   270,   271,   652,     0,   614,     0,     4,
       7,   269,     0,   653,   467,   468,   652,   267,     0,     0,
       0,   615,     6,   273,     0,   514,   516,   517,   518,    21,
     519,   520,    28,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,    24,   545,   546,   548,
      26,   549,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,    20,   563,    22,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,    25,    27,   576,
      23,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   614,   575,   521,   574,   550,   515,
     547,   480,     5,   590,     0,     0,     0,   477,   688,   476,
     469,     0,   276,   652,   274,   277,   278,   279,   280,   281,
     282,     2,   284,   614,    16,    19,    30,    29,    37,   614,
       9,   497,    10,    12,    13,    15,    17,    18,    14,     0,
      11,    34,    35,     0,     0,   495,     0,   614,     0,   474,
       0,   471,   690,   689,   479,   262,     0,   275,     0,   283,
      36,    31,   616,   427,   430,   494,     0,   272,     8,     0,
     470,   473,   478,     0,    67,    68,     0,   628,    69,   597,
      70,   595,    71,    72,    78,   596,   614,     0,     0,     0,
       0,     0,     0,     0,     0,   604,   603,   600,   607,   605,
     601,   602,   606,     0,     0,     0,    73,   103,    45,    47,
      48,    49,     0,    50,    51,    52,    53,    54,    55,    56,
      44,    57,    58,    59,    60,    61,   114,   108,   109,   110,
     118,   121,   124,   131,   134,   136,   138,   140,   142,   144,
     146,   160,   161,   490,     0,   691,   484,     0,   487,   486,
      46,   591,   592,   598,   599,   593,   594,     0,     0,   608,
     692,   296,     0,     0,     0,   297,     0,   290,   295,   291,
     289,   288,   294,   292,     0,   293,   287,   286,   285,   433,
     617,     0,   431,   496,   472,     0,     0,     0,   632,   629,
       0,     0,    62,     0,     0,     0,     0,    35,     0,   614,
     112,   111,   104,   105,    16,    19,    30,    29,    37,   614,
       0,    17,     0,     7,   106,   107,     0,    82,    81,   618,
       0,     0,   149,   156,   157,   155,   159,   158,   151,   150,
     154,   153,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   483,
     481,   263,   610,   693,   261,   654,     0,     0,   684,   654,
     654,   434,   432,   614,     0,    76,     0,   341,   340,   631,
     100,   633,     0,     0,   634,    98,   489,     0,     0,     0,
     614,     0,     0,   618,   676,    85,   616,    62,     0,    63,
     614,     0,     0,   619,    39,    41,     0,     0,   614,   148,
     115,   116,   117,   114,   119,   120,   122,   123,   125,   126,
     130,   129,   128,   127,   133,   132,   135,   137,   139,   141,
     143,   145,     0,   614,   485,     0,     0,   488,   652,   652,
     655,   656,   654,   654,     0,   685,     0,   678,   672,    79,
       0,    80,    97,   632,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   644,     0,   644,     0,     0,
       0,     0,   614,     0,     0,   182,     0,    50,    54,    55,
      56,     0,   108,   109,   200,   180,   166,   167,   635,   168,
     164,   165,     0,     0,   169,     0,   170,   205,   206,   171,
     218,   219,   220,   221,   172,   232,   233,   234,   235,   236,
     173,   174,   175,   176,   177,   178,     0,    96,    95,    88,
       0,   626,   625,    89,    86,     0,    87,     0,   325,   437,
     326,   677,     0,     0,   113,    64,    43,    38,    42,     0,
      74,    75,    65,     0,    66,   482,     0,     0,     0,     0,
     657,   299,   658,     0,     0,   458,   652,   692,   440,   679,
     658,   413,   673,   658,    77,   101,   102,   237,     0,   238,
       0,   638,     0,     0,     0,     0,     0,     0,   645,     0,
       0,     0,   646,     0,     0,     0,     0,     0,   254,   253,
     189,   186,   187,   181,   184,   185,   197,   179,   614,    93,
     627,     0,   624,    83,     0,   435,   620,    40,   147,   264,
     491,   652,   492,   300,     0,     0,   659,   498,     0,   652,
     652,   687,   461,     0,     0,   457,     0,     0,     0,   193,
     194,     0,   225,   229,   639,   226,     0,     0,   162,     0,
     241,   239,   163,     0,     0,   242,     0,   243,     0,   244,
     246,   248,     0,     0,   258,   257,     0,     0,   260,     0,
     183,     0,     0,    90,    94,    92,   626,    91,   436,   438,
     621,   622,     0,   301,     0,   499,   652,   692,   663,   334,
     337,   336,   632,     0,     0,   652,   463,   459,   652,   692,
     652,   692,     0,     0,     0,     0,   640,     0,   240,     0,
       0,     0,     0,   249,     0,   245,     0,   247,     0,     0,
     259,   191,   190,   192,   188,   623,    84,   493,     0,   315,
     652,   303,   305,   306,   307,     0,   308,   309,   310,   311,
     312,   314,   313,   284,     0,   298,   652,     0,     0,   658,
     658,   460,   462,     0,   652,   442,   444,   445,   446,   447,
     682,     0,   439,   426,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   652,   415,   284,     0,   412,   196,   195,
       0,   230,   227,   641,     0,     0,   207,   255,   636,   209,
       0,   650,   252,   251,   256,   222,   509,   510,     0,   511,
     508,   500,   501,   502,   503,   304,   333,   332,   327,   284,
       0,     0,     0,     0,   302,   338,   335,    32,   428,   429,
       0,     0,     0,     0,   464,   443,   683,     0,   441,   416,
       0,   414,     0,   642,     0,     0,     0,     0,   637,   211,
       0,   214,     0,   651,     0,     0,     0,     0,   406,     0,
       0,     0,     0,     0,     0,   292,     0,   614,     0,     0,
       0,   365,   366,   367,     0,   652,     0,   342,   339,   466,
     465,     0,     0,     0,   223,   643,   228,     0,     0,   208,
       0,   217,   212,     0,   213,   215,   210,     0,   513,   511,
     504,   505,   512,   506,   652,     0,     0,     0,     0,     0,
     330,     0,   654,   652,     0,     0,   323,     0,   321,   654,
     397,   396,   364,   403,   402,   398,     0,   652,   652,   668,
       0,     0,   654,     0,   654,     0,   231,   216,   250,     0,
       0,     0,     0,     0,   317,     0,     0,     0,     0,     0,
       0,     0,     0,   376,   375,   386,   374,   373,   380,   381,
     382,   369,   370,   387,   391,   390,   392,   393,   389,   388,
     383,   385,   384,   371,   372,     0,     0,     0,     0,   320,
     652,     0,   361,   665,   668,   344,   667,   668,   345,   349,
     350,   348,   669,     0,     0,     0,     0,   652,   652,     0,
     224,   507,   362,   652,     0,     0,   316,   355,   652,     0,
       0,   331,   652,   670,     0,     0,     0,   324,   323,   322,
       0,   652,     0,     0,   352,   351,     0,     0,   408,   407,
     404,   455,   652,     0,     0,     0,   652,     0,   319,   318,
       0,   652,   652,     0,     0,     0,     0,     0,   671,   399,
     411,   410,   409,     0,     0,   343,     0,   354,   353,   346,
     347,     0,     0,   450,     0,     0,     0,   363,   356,   357,
       0,   358,     0,     0,     0,     0,     0,   658,     0,     0,
       0,     0,   658,   658,   652,   451,   452,   658,   359,   360,
     395,   394,   329,   618,   618,   368,     0,   328,     0,     0,
       0,     0,     0,     0,     0,     0,   449,   456,     0,     0,
     448,   400,   401,     0,   453,   454,   377
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    18,   150,   122,   496,   152,   153,   154,   155,
     226,   157,   158,   159,   160,   161,   556,   423,   424,   227,
     228,   229,   230,   231,   232,   233,   234,   394,   235,   236,
     237,   238,   239,   240,   241,   412,   542,   620,   242,   243,
     244,   245,   309,   399,   400,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   353,   425,   659,   663,   505,   506,   507,   508,
     509,   510,   511,   512,   611,   612,   732,   513,   649,   650,
     514,   515,   516,   517,   518,   799,   848,   849,   850,   851,
     519,   520,   521,   522,   654,   793,   885,   655,   523,   524,
     525,   526,   527,   528,   529,   530,   669,   670,   671,   727,
     725,   531,   532,   533,   534,   676,   535,   132,   176,   280,
       4,     5,    11,    12,    13,    14,   133,   134,   135,   264,
     178,   298,   136,   570,   571,   697,   740,   741,   742,   943,
     944,   743,   917,   918,   549,   744,   745,   912,   818,   698,
     699,   700,   401,   701,   746,   926,   927,   928,   992,  1059,
     747,  1040,  1041,  1042,   748,   822,   749,   870,   871,   975,
     872,   976,   873,   922,   750,   874,  1048,   925,   751,   823,
    1030,   752,  1052,   137,   582,   711,   783,   784,   162,   163,
     183,   184,   300,   550,   551,   138,   579,   709,   764,   765,
     766,   767,  1034,   768,   769,   139,   465,   577,   641,   642,
     140,    23,    24,    25,   124,   125,   126,   127,   128,   173,
     265,   266,   267,   268,   269,   460,   567,    31,   164,   165,
     636,   637,   811,   812,   813,   814,   129,   270,   271,   272,
     273,   274,   275,   276,     6,    15,   141,    32,   301,   426,
     691,   736,   543,   621,   310,   402,   403,   536,   852,   656,
     794,   887,   599,   672,   673,   854,   702,   461,   572,   638,
     754,   703,   985,   988,   993,  1049,   583,   786,   552,   580,
     771,   837,   466,   644,   174,   277,   384
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -875
static const yytype_int16 yypact[] =
{
      95,  -875,    74,   209,   200,  -875,   168,   162,  -875,  -875,
     250,   168,  -875,  -875,  -875,   132,   156,   178,   212,   258,
    -875,  -875,  2599,  -875,   132,  -875,    11,  -875,   294,  1933,
     317,  -875,  -875,  -875,   341,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   -38,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,   258,  -875,   317,   228,   219,  -875,   319,  -875,
    -875,   372,  -875,    27,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,   365,  -875,  -875,  -875,  -875,  -875,   -25,
     452,  -875,   369,  -875,  -875,  -875,  -875,  -875,  -875,   364,
    -875,   373,  -875,   387,   107,  -875,   -40,   365,   326,  -875,
     105,  -875,  2190,  -875,  -875,  -875,   -53,  -875,   880,  -875,
    -875,  -875,   394,   387,  -875,  -875,  1933,  -875,  -875,   110,
    -875,  -875,  -875,    96,  -875,  -875,   396,   398,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,   193,   403,   406,   410,
    1933,  2326,  2326,  2326,  2326,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  2462,  2326,  2326,  -875,   131,   419,  -875,
    -875,  -875,   461,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  1115,  -875,  -875,  -875,
     342,   -26,   191,   340,   313,   443,   449,   451,   455,   275,
     430,  -875,  -875,  -875,   489,   450,  -875,   147,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,   441,   503,   200,
     453,  -875,   508,  2759,   511,  -875,   515,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   517,  -875,  -875,  -875,  -875,  -875,
     470,   467,  -875,  -875,  -875,   524,  2326,  1933,    -7,  -875,
     468,  2326,  -875,  2326,  2326,  2780,   476,   472,   475,   -25,
    -875,  -875,  -875,  -875,   529,   530,   531,   532,   533,   -25,
     484,   535,   487,   489,  -875,  -875,   539,  -875,  -875,  1918,
    2326,   541,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  2326,  2326,  2326,  2326,  2326,  2326,  2326,
    2326,  2326,  2326,  1933,  1933,  2326,  2326,  2326,  2326,  2326,
    2326,  2326,  2326,  2326,  2326,  2326,   543,  2190,   544,  -875,
    -875,  -875,   168,  -875,  -875,   534,   545,   546,   491,   534,
     534,  -875,  -875,   365,   328,  -875,   497,  -875,  -875,   507,
    -875,  -875,   501,  1933,  1278,  -875,  -875,   510,   516,   520,
     184,   521,    55,  1918,  1698,  -875,  2054,   103,  2326,  -875,
     365,  2326,  2326,   513,  -875,  -875,   523,   336,   365,  -875,
    -875,  -875,  -875,  -875,   342,   342,   -26,   -26,   191,   191,
    -875,  -875,   191,   191,   340,   340,   313,   443,   449,   451,
     455,  -875,   512,   365,  -875,   182,   537,  -875,   -15,   132,
    -875,   527,   534,   534,   414,  -875,   519,   527,   527,  -875,
    2326,  -875,  -875,   252,  -875,   579,   525,  1933,   536,  1418,
     540,   542,    25,   547,   550,  2326,   551,  2326,   468,   553,
     555,    29,   -14,   235,   238,  -875,   586,   -62,   143,   175,
     181,  1115,   204,   215,  -875,  -875,  -875,  -875,  1278,  -875,
    -875,  -875,   548,   549,  -875,   552,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,   554,  -875,  -875,  -875,
     589,    24,  -875,  -875,  -875,   593,  -875,   558,  -875,  -875,
    -875,   564,   559,   344,  -875,  -875,  -875,  -875,  -875,  1918,
    -875,  -875,  -875,  2326,  -875,  -875,   560,   124,   594,   317,
    -875,   567,   622,   570,   571,  -875,    70,   453,   567,  -875,
     622,   567,  -875,   622,  -875,  -875,  -875,  -875,   626,  -875,
     633,  2462,  1933,  2326,   568,   572,  2326,  2326,  -875,   573,
    2326,   574,   704,  2462,  2326,   577,  2326,  1278,  -875,  -875,
     601,   591,  -875,  -875,  -875,  -875,  -875,  -875,   623,  -875,
     596,   635,   627,  -875,  1559,  -875,   387,  -875,  -875,  -875,
    -875,   132,  -875,  -875,   317,   649,   622,  -875,   595,   350,
     350,   604,  -875,   657,   600,  -875,   603,   605,   632,   616,
    -875,   617,  -875,  -875,  -875,   619,   607,   670,  -875,   612,
    -875,  -875,  -875,   621,   624,  -875,   628,  -875,   631,   733,
     704,  -875,   736,   758,  -875,  -875,   636,   637,  -875,   625,
    -875,  1698,   586,  -875,  -875,  -875,   640,  -875,  -875,  -875,
     387,   472,   686,  -875,   634,  -875,   254,   453,  -875,   647,
    -875,  -875,   283,   648,   650,   261,   669,  -875,   269,   453,
     270,   453,  2326,   626,  2326,  2326,  2326,   751,  -875,  1418,
    1418,   645,   157,  -875,   468,  -875,   468,  -875,  1418,  1418,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   159,  -875,
     272,  -875,  -875,  -875,  -875,   266,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  1713,   646,  -875,   132,  1933,  1933,   622,
     622,  -875,  -875,  2326,   274,  -875,  -875,  -875,  -875,  -875,
     698,   652,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,   281,  -875,  1713,   656,  -875,  -875,  -875,
     654,  -875,  -875,  -875,   658,  2326,   771,  -875,   380,  -875,
     452,   708,  -875,  -875,  -875,  -875,  -875,  -875,   665,   452,
    -875,  -875,   667,   671,  -875,  -875,  -875,  -875,  -875,  -875,
     144,  1835,   662,   721,  -875,  -875,  -875,   452,  -875,  -875,
     722,   724,   672,   673,  -875,  -875,  -875,  1005,  -875,  -875,
    2692,  -875,   674,  2326,   679,  1418,  2326,   680,   380,  -875,
    1131,  -875,   677,  -875,   687,   688,   293,   293,   618,   689,
     739,  1933,  1933,   784,   786,  -875,   745,   -34,   748,   108,
     335,  -875,  -875,  -875,   351,   132,   701,  -875,  -875,  -875,
    -875,  1933,   752,   149,  -875,  -875,   619,   702,  1418,  -875,
     699,  -875,  -875,   217,  1278,  -875,  -875,   468,  -875,  -875,
     705,  -875,  -875,  -875,   132,   780,   760,   761,  1933,  1933,
     185,   763,   534,   350,   715,  1568,   208,   129,  -875,    79,
    -875,  -875,  -875,  -875,  -875,  -875,   713,   284,   286,   265,
     725,   766,   534,   727,    84,  1418,  -875,  -875,  -875,   293,
     720,   728,   753,   161,  -875,   186,   726,   731,   734,   777,
     735,   737,   738,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,   740,   742,  1698,   793,  -875,
     132,   744,  -875,  -875,   265,  -875,  -875,   265,  -875,   823,
    -875,   843,  -875,   436,   356,   743,   759,   132,   132,   767,
    -875,  -875,  -875,   132,  2326,   760,  -875,  -875,   132,  1933,
    1933,  -875,   350,   747,   360,  1933,  1933,  -875,   769,  -875,
     750,   350,   805,   827,  -875,  -875,   361,   361,  -875,  -875,
    -875,  -875,   350,   765,   770,   438,   350,   774,  -875,  -875,
     772,   132,   132,   457,   824,   829,   782,    43,  -875,  -875,
    -875,  -875,  -875,   836,   837,  -875,   788,  -875,  -875,  -875,
    -875,   790,   789,  -875,   791,   792,   796,  -875,  -875,  -875,
     854,  -875,   859,   468,   468,   803,   807,   622,   809,   810,
     811,   814,   622,   622,   132,    -1,    15,   622,  -875,  -875,
    -875,  -875,  -875,  1918,  1918,  -875,  1933,  -875,   808,   806,
     872,   874,   812,   819,   826,   878,  -875,  -875,   820,   821,
    -875,  -875,  -875,   830,  -875,  -875,  -875
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -875,  -875,  -875,    38,    54,   -28,   210,  -875,  -875,  -875,
     -19,  -875,  -875,  -875,  -875,  -508,   556,  -875,   407,  -875,
    -875,  -875,  -875,  -875,  -875,  -388,  -875,  -284,  -875,  -875,
    -355,  -282,  -245,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   495,   746,  -208,   -81,  -875,   196,
     218,   205,   223,   606,   602,   608,   611,   613,  -875,   599,
    -875,   190,  -875,   -55,  -691,  -578,  -502,  -475,  -295,   126,
    -875,  -875,  -875,  -528,  -875,   292,  -875,  -875,  -875,   267,
    -875,  -582,  -875,  -875,  -875,  -875,  -875,   136,  -875,   135,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,   146,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,   322,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,  -875,
    -875,   990,  -875,   984,  -875,  -875,  -875,   865,  -673,   -10,
    -608,  -875,  -875,  -875,   118,  -875,  -875,   262,  -664,  -875,
      -4,  -658,    97,    30,  -606,  -627,  -875,  -810,  -875,  -874,
    -875,   247,  -875,   251,  -617,    33,    81,    87,  -875,   -11,
    -611,  -875,   -24,   -21,  -609,  -875,  -603,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -598,  -875,  -875,  -875,  -597,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -875,   234,  -205,   815,
     401,  -176,  -875,  -300,  -875,  -875,  -875,  -875,  -875,   260,
    -875,  -875,   -56,  -875,  -875,  -875,  -875,  -875,  -875,   324,
    -875,  -875,  -875,   998,  -875,  -875,   906,    80,  -875,  -875,
    -875,   659,   660,   653,   723,  -875,  -875,  -875,  -875,   852,
    -875,   405,  -875,  -875,   188,  -802,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,   768,   663,   584,   -90,  -875,  -411,
    -875,  -875,  -131,  -875,  -875,  -875,   346,  -875,  -875,  -875,
    -875,  -875,   562,  -875,  -875,  -875,    13,  -376,  -875,  -558,
    -875,  -632,  -875,  -875,  -533,  -875,  -875,  -875,  -875,  -875,
    -875,  -875,  -875,  -875,  -875,  -875,  -536
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -687
static const yytype_int16 yytable[] =
{
      20,   151,   547,   123,   590,   317,   613,   302,   704,   653,
     156,  -612,    20,   467,   468,   405,   497,   415,   689,    20,
      20,   788,   646,   739,   131,   647,   677,  -613,    26,   144,
     940,    39,   278,   593,    42,   605,   397,   773,   145,   142,
     594,   645,   146,   398,    28,    34,   774,  1078,    28,   498,
     131,   147,   775,   179,   901,   903,   427,    28,    66,   919,
     121,    29,    70,   652,    19,    29,   131,   739,    28,   357,
     358,  -198,   834,  -198,    29,   675,    84,   188,    86,  -652,
     606,  -198,   148,   776,   166,    29,   573,   574,   279,    97,
      98,   497,   100,   777,  -652,  -608,     1,   946,  -608,   778,
     913,   779,  -475,   187,  1079,   680,  -608,   780,   149,   595,
     773,  -608,   781,   782,    20,  -608,   312,   263,     2,   774,
     497,    22,   499,  1033,   498,   775,   607,  -612,  -630,  1037,
    -608,  -608,   553,   791,  -608,    22,   790,  1001,   792,  -608,
     545,  -608,  -608,  -608,    -6,   821,   142,    22,  -608,     7,
     915,    22,  -608,   498,  -608,   890,   776,   619,   151,   500,
      20,   755,   121,    22,  -608,  -608,   777,   156,   332,  -613,
     806,  -608,   778,   772,   779,   787,    20,   840,   459,    20,
     780,   305,   316,   459,  -608,   781,   782,    -6,    -6,   149,
     546,   156,   916,   602,   149,   330,   502,   499,   608,   609,
      20,   832,   833,   497,   331,   859,    22,   185,   121,     8,
     933,   858,  -686,   333,   801,   148,   336,   148,   807,   497,
     980,   337,   338,     2,   630,   998,   499,   121,   149,   312,
     810,  -608,   306,   934,   500,    -6,   498,    10,    -6,   417,
     186,   149,   191,   149,   796,   797,    16,   304,   808,   829,
     192,   395,   498,   804,   805,   387,   263,   631,   407,   408,
      28,   653,   978,   500,   156,   339,   540,    28,    22,   192,
    -614,   502,   979,    20,   359,    28,  -201,    29,  -201,   396,
     378,   951,   379,   541,    29,   395,  -201,   411,   156,   360,
      28,    30,    29,  -614,  1005,   397,   156,    20,   429,    27,
     502,   989,   398,   469,  1006,    20,   311,    29,  -202,   499,
    -202,   990,   991,  1038,  -199,   378,  -199,   565,  -202,   978,
     452,   977,   263,   503,  -199,   499,   397,   497,   757,  1007,
     555,   497,   497,   398,    17,   440,   441,  -203,   562,  -203,
     497,   497,  -330,    34,   156,   156,   500,  -203,  -204,  -330,
    -204,   307,   170,    20,    20,    33,   171,   891,  -204,   548,
     498,   395,   500,   564,   498,   498,   557,   557,   169,   313,
     889,  1017,   314,   498,   498,   475,   404,   149,   143,   404,
    1046,   733,   808,   502,   156,   331,   373,   374,   846,  1056,
      22,   735,   613,    20,   333,   847,  -660,    22,   503,   502,
    1061,   149,   417,   761,  1066,    22,    22,   404,    22,   816,
      22,  -680,  -674,   936,  -661,   584,  -681,    22,   367,   368,
      22,    39,    22,  -675,    42,   167,  -664,   503,  -666,   802,
     598,   803,   598,   499,   354,   355,   356,   499,   499,   361,
     362,   363,   364,   365,   366,   575,   499,   499,    66,   588,
     817,  1022,    70,   172,  1023,   497,   175,   497,   156,   189,
    1000,   470,   497,   190,    29,   471,    84,    20,    86,   470,
     500,   142,   568,   561,   500,   500,   404,   470,   920,    97,
      98,   626,   100,   500,   500,  -662,    22,   683,   498,   331,
     498,   687,   404,   180,   923,   498,   181,   404,   333,  1028,
     497,   404,   404,  1050,  1057,  -428,   497,   502,   628,  -429,
     503,   502,   502,   151,   302,  1026,  1027,  1064,  1065,  1092,
     502,   502,   156,   182,  1097,  1098,   503,   299,   179,  1102,
     307,    20,   308,   498,  1073,  1074,   950,   313,   658,   498,
     314,   662,   664,   981,   315,   666,   341,   497,   674,   662,
     369,   679,   830,   434,   435,   340,   996,   370,   999,    20,
     371,   499,   375,   499,   657,   372,   438,   439,   499,   548,
     442,   443,   331,   156,   376,   921,   380,   436,   437,   924,
     498,   333,    20,   377,   331,   578,   581,   381,   331,   643,
     444,   445,   385,   333,   504,   388,   383,   333,   500,   389,
     500,   390,   938,   391,   392,   500,   499,   633,   393,   404,
     413,   416,   499,   414,   -67,   -68,   -69,   -70,   -72,   418,
     -73,   281,   419,   420,    20,   428,   731,   453,   456,   462,
     463,   464,   472,   459,   503,   502,   474,   502,   503,   503,
     473,   285,   502,   500,   692,   537,   559,   503,   503,   500,
     311,   538,   563,   499,   287,   539,   544,   658,   560,   662,
     576,   662,   288,   586,   289,   290,   291,   569,   587,   504,
     610,   292,   693,   618,   591,   293,   592,   622,   632,   589,
     502,   596,  1103,  1104,   597,   600,   502,   603,   295,   604,
     500,   614,   615,   623,   296,   616,   617,   624,   504,  1029,
     634,   625,   629,   635,   639,   640,   651,   297,   658,   753,
     648,   660,    20,   668,   681,   661,   665,   667,   643,  1051,
     678,   770,   541,   785,   682,   820,   686,   502,    20,   684,
     831,  1058,  1058,   694,   156,   685,   696,   705,   156,   156,
     844,   706,   707,    20,   708,   712,   710,    20,    20,   713,
     716,   714,   715,   753,   717,   718,   719,   820,  -647,   720,
     800,   724,   503,   721,   503,   722,   156,   726,   730,   503,
     737,   728,   729,   619,   738,    20,   809,   770,  1088,  1089,
     756,   504,   763,   759,   795,   760,   798,   836,   824,   842,
     845,   658,   853,   869,   838,   827,   785,   504,   841,   855,
     856,   843,   156,   875,   857,   876,   877,   503,   878,   883,
      20,    20,   869,   503,   888,   879,   880,   884,   156,   896,
     891,   156,   897,   898,   905,   904,   908,    20,   909,   910,
      20,   331,   914,   906,   907,   930,   932,   935,   939,   937,
     333,   941,   156,   156,   942,   916,    20,    20,   949,   952,
     995,    20,    20,   931,   503,   982,    20,  1002,   860,    20,
     994,  1011,   156,   997,  1003,  1009,  1004,  1008,  1010,  1012,
    1024,    20,  1013,  1014,  1015,   331,  1016,  1018,  1021,  1025,
     947,   948,   977,   281,   333,  1027,  1031,  1047,   929,   156,
     156,   282,  1055,  1032,   899,   902,   283,    20,    20,    20,
     284,  1036,  1062,   285,   911,   504,  1026,   911,  1075,   504,
     504,  1067,  1063,  1076,  1068,   286,   287,  1077,   504,   504,
    1080,  1081,   548,  1082,   288,  1083,   289,   290,   291,    20,
    1084,  1087,  1074,   292,  1085,  1086,  1073,   293,  1090,   294,
     984,   987,  1091,  1093,  1094,   911,  1095,  1096,  1107,   658,
     295,  1106,  1108,  1109,  1111,  1110,   296,   320,   321,   322,
     323,  1112,  1113,  1114,  1115,  1116,   627,   828,   585,   297,
     334,   335,   447,   451,   734,   446,   894,   902,   558,   448,
     789,  1044,  1045,   449,   892,   895,   450,  1053,  1054,   886,
     156,   156,   723,   929,     9,    21,   156,   156,   177,    20,
      20,  1039,   815,   825,   945,    20,    20,   826,  1019,   986,
     144,  1035,    39,  1020,   983,    42,  1060,   839,  1071,   145,
    1069,  1043,   130,   146,   835,   318,   881,   690,  1099,   762,
     168,   457,   147,   504,   406,   504,   454,   455,   303,    66,
     504,   695,   566,    70,   900,   458,     0,   382,   758,   601,
       0,     0,     0,     0,  1070,  1072,     0,    84,     0,    86,
       0,     0,     0,   148,     0,     0,     0,     0,  1105,     0,
      97,    98,     0,   100,     0,     0,   882,   156,   504,     0,
       0,     0,     0,     0,   504,     0,    20,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,  1035,  1100,  1101,
     430,   431,   432,   433,   433,   433,   433,   433,   433,     0,
       0,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,     0,     0,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   324,   476,    39,   846,
       0,    42,     0,   477,   478,   325,   893,   197,   479,   326,
     501,     0,     0,     0,     0,   199,     0,     0,   327,   480,
     481,   482,   483,     0,   554,    66,     0,     0,   484,    70,
       0,   201,   202,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   485,    84,     0,    86,     0,     0,     0,   328,
       0,   486,   204,   487,   205,   488,    97,    98,     0,   100,
     489,     0,     0,     0,   490,   491,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   492,     0,   493,   494,   209,
     210,   211,   212,     0,     0,   501,   213,   214,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   501,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,   223,     0,     0,     0,   224,
     225,     0,   404,     0,   495,     0,     0,     0,     0,     0,
       0,     0,   193,   324,   476,    39,     0,     0,    42,     0,
     477,   478,   325,   196,   197,   479,   326,     0,     0,     0,
       0,     0,   199,     0,     0,   327,   480,   481,   482,   483,
       0,     0,    66,     0,     0,   484,    70,     0,   201,   202,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   485,
      84,     0,    86,     0,     0,     0,   328,   501,   486,   204,
     487,   205,   488,    97,    98,     0,   100,   489,     0,     0,
       0,   490,   491,   501,     0,     0,     0,     0,     0,     0,
       0,     0,   492,     0,   493,   494,   209,   210,   211,   212,
       0,     0,     0,   213,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   223,     0,     0,     0,   224,   225,     0,   404,
       0,   495,   193,   194,   476,    39,     0,     0,    42,     0,
       0,   478,   195,   196,   197,   479,   198,     0,     0,     0,
       0,     0,   199,     0,     0,   200,   480,   481,   482,   483,
       0,     0,    66,     0,     0,   484,    70,     0,   201,   202,
       0,   501,     0,     0,     0,   501,   501,     0,     0,   485,
      84,     0,    86,     0,   501,   501,   203,     0,   486,   204,
     487,   205,   488,    97,    98,     0,   100,   489,     0,     0,
       0,   490,   491,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   319,     0,   493,   494,   209,   210,   211,   212,
       0,     0,     0,   213,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   223,     0,     0,     0,   224,   225,     0,   404,
       0,   495,     0,   193,   194,     0,    39,     0,     0,    42,
       0,     0,     0,   195,   196,   197,     0,   198,     0,     0,
       0,     0,     0,   199,     0,     0,   200,     0,     0,   501,
       0,   501,   953,    66,     0,     0,   501,    70,     0,   201,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,    86,     0,     0,     0,   203,     0,     0,
     204,     0,   205,     0,    97,    98,     0,   100,     0,     0,
       0,   954,     0,     0,   501,     0,     0,     0,     0,     0,
     501,     0,     0,   319,     0,   207,   208,   209,   210,   211,
     212,   955,     0,     0,   213,   214,     0,     0,   956,   957,
     958,   959,   960,   961,   962,     0,   963,   964,   965,     0,
       0,   966,   967,   968,   969,   970,   971,   972,     0,     0,
       0,   501,     0,   215,   216,   217,   218,   219,   220,   221,
     222,     0,     0,   223,     0,     0,     0,   224,   225,     0,
     414,   688,   193,   194,     0,    39,   973,   974,    42,     0,
       0,     0,   195,   196,   197,     0,   198,     0,   144,     0,
      39,     0,   199,    42,     0,   200,     0,   145,     0,     0,
       0,   146,    66,     0,     0,     0,    70,     0,   201,   202,
     147,     0,     0,     0,     0,     0,     0,    66,     0,     0,
      84,    70,    86,     0,     0,     0,   203,     0,     0,   204,
       0,   205,     0,    97,    98,    84,   100,    86,     0,     0,
     819,   148,     0,     0,     0,     0,     0,     0,    97,    98,
       0,   100,   319,     0,   207,   208,   209,   210,   211,   212,
       0,     0,     0,   213,   214,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   223,     0,     0,     0,   224,   225,   281,   414,
     144,     0,    39,     0,     0,    42,   282,   861,     0,   145,
       0,   283,     0,   146,     0,   284,   862,   863,   285,     0,
       0,     0,   147,     0,     0,     0,     0,   864,     0,    66,
     286,   287,     0,    70,     0,     0,     0,     0,     0,   288,
       0,   289,   290,   291,     0,     0,     0,    84,   292,    86,
       0,     0,   865,   148,   294,     0,     0,     0,     0,     0,
      97,    98,     0,   100,     0,   295,   866,     0,     0,     0,
       0,   296,     0,     0,     0,     0,     0,     0,     0,   867,
       0,     0,   193,   194,   297,    39,     0,     0,    42,     0,
       0,     0,   195,   196,   197,     0,   198,     0,   144,     0,
      39,     0,   199,    42,     0,   200,     0,   145,     0,     0,
       0,   146,    66,     0,     0,     0,    70,     0,   201,   202,
     147,   421,     0,     0,     0,     0,     0,    66,   422,     0,
      84,    70,    86,     0,   868,     0,   203,     0,     0,   204,
       0,   205,     0,    97,    98,    84,   100,    86,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,    97,    98,
       0,   100,   319,     0,   207,   208,   209,   210,   211,   212,
       0,     0,     0,   213,   214,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,   223,     0,     0,     0,   224,   225,   193,   194,
       0,    39,     0,     0,    42,     0,     0,     0,   195,   196,
     197,     0,   198,     0,     0,     0,     0,     0,   199,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,    70,     0,   201,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,    86,     0,
       0,     0,   203,     0,     0,   204,     0,   205,     0,    97,
      98,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   319,     0,
     207,   208,   209,   210,   211,   212,     0,     0,     0,   213,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,   216,
     217,   218,   219,   220,   221,   222,     0,   299,   223,     0,
       0,     0,   224,   225,   193,   194,     0,    39,     0,     0,
      42,     0,     0,     0,   195,   196,   197,     0,   198,     0,
       0,     0,     0,     0,   199,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    66,     0,     0,     0,    70,     0,
     201,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,    86,     0,     0,     0,   203,     0,
       0,   204,     0,   205,     0,    97,    98,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,   207,   208,   209,   210,
     211,   212,     0,     0,     0,   213,   214,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,   223,     0,     0,     0,   224,   225,
     193,   194,     0,    39,     0,     0,    42,     0,     0,     0,
     195,   196,   197,     0,   198,     0,     0,     0,     0,     0,
     199,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,    70,     0,   201,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
      86,     0,     0,     0,   203,     0,     0,   204,     0,   205,
       0,    97,    98,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,     0,   207,   208,   209,   210,   211,   212,     0,     0,
       0,   213,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
     223,     0,     0,     0,   224,   225,   193,   324,     0,    39,
       0,     0,    42,     0,     0,     0,   325,   196,   197,     0,
     326,     0,     0,     0,     0,     0,   199,     0,     0,   327,
       0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
      70,     0,   201,   202,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,     0,    86,     0,     0,     0,
     328,     0,     0,   204,     0,   205,     0,    97,    98,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   329,     0,   207,   208,
     209,   210,   211,   212,     0,     0,     0,   213,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,   223,     0,     0,     0,
     224,   225,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,   114,     0,   115,   116,   117,   118,     0,
       0,     0,     0,     0,     0,   281,     0,   144,     0,    39,
     119,   120,    42,   282,   861,     0,   145,     0,   283,     0,
     146,     0,   284,   862,   863,   285,     0,     0,     0,   147,
       0,     0,     0,     0,   864,     0,    66,   286,   287,     0,
      70,     0,     0,     0,     0,     0,   288,     0,   289,   290,
     291,     0,     0,     0,    84,   292,    86,     0,     0,   865,
     148,   294,     0,     0,     0,     0,     0,    97,    98,     0,
     100,     0,   295,   866,   144,     0,    39,     0,   296,    42,
       0,     0,     0,   145,     0,     0,   867,   146,     0,     0,
       0,   297,     0,     0,     0,   144,   147,    39,     0,     0,
      42,     0,     0,    66,   145,     0,     0,    70,   146,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
       0,    84,     0,    86,    66,     0,     0,   148,    70,     0,
       0,     0,     0,     0,    97,    98,     0,   100,     0,     0,
     386,     0,    84,     0,    86,     0,     0,     0,   148,     0,
       0,     0,     0,   149,     0,    97,    98,     0,   100,     0,
       0,   409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   410
};

static const yytype_int16 yycheck[] =
{
      10,    29,   413,    22,   479,   210,   508,   183,   640,   591,
      29,     0,    22,   389,   390,   310,   404,   317,   624,    29,
      30,   712,   580,   696,    39,   583,   604,     0,    15,     5,
     904,     7,    85,     8,    10,     6,    43,   710,    14,    26,
      15,   577,    18,    50,    82,    85,   710,     4,    82,   404,
      39,    27,   710,   143,   856,   857,   340,    82,    34,   869,
      22,    99,    38,   591,    10,    99,    39,   740,    82,    95,
      96,   133,   763,   135,    99,   603,    52,   167,    54,    80,
      51,   143,    58,   710,    30,    99,   462,   463,   141,    65,
      66,   479,    68,   710,    79,     0,     1,   907,     3,   710,
     134,   710,   140,   143,    61,   607,    11,   710,    84,    84,
     783,    16,   710,   710,   124,    20,   206,   172,    23,   783,
     508,   136,   404,   997,   479,   783,   140,   142,   135,  1003,
      35,    36,   416,   715,    39,   136,   714,   939,   716,    44,
      85,    46,    47,    48,    41,   753,   133,   136,    53,    75,
      42,   136,    57,   508,    59,   846,   783,   133,   186,   404,
     170,   697,   124,   136,    69,    70,   783,   186,   223,   142,
      11,    76,   783,   709,   783,   711,   186,   785,    99,   189,
     783,    85,   210,    99,    89,   783,   783,    84,    85,    84,
     135,   210,    84,   488,    84,   223,   404,   479,   493,   494,
     210,   759,   760,   591,   223,    61,   136,   100,   170,     0,
      61,   819,   142,   223,   722,    58,    85,    58,    59,   607,
     141,    90,    91,    23,   100,   141,   508,   189,    84,   319,
     738,   136,   136,    84,   479,   132,   591,    69,   135,   329,
     133,    84,   137,    84,   719,   720,    84,   137,    89,   757,
     170,   306,   607,   728,   729,   283,   311,   133,   313,   314,
      82,   843,   133,   508,   283,   134,    82,    82,   136,   189,
      85,   479,   143,   283,    83,    82,   133,    99,   135,   307,
     133,   913,   135,    99,    99,   340,   143,   315,   307,    98,
      82,   113,    99,    85,   133,    43,   315,   307,   353,   143,
     508,    36,    50,   393,   143,   315,   113,    99,   133,   591,
     135,    46,    47,  1004,   133,   133,   135,   135,   143,   133,
     375,   113,   377,   404,   143,   607,    43,   715,    45,   143,
     420,   719,   720,    50,    84,   363,   364,   133,   428,   135,
     728,   729,   134,    85,   363,   364,   591,   143,   133,   141,
     135,   134,   133,   363,   364,   143,   137,   140,   143,   414,
     715,   416,   607,   453,   719,   720,   421,   422,   140,   134,
     845,   977,   134,   728,   729,   403,   141,    84,    84,   141,
    1012,   681,    89,   591,   403,   404,   111,   112,     8,  1021,
     136,   691,   894,   403,   404,    15,   142,   136,   479,   607,
    1032,    84,   492,   142,  1036,   136,   136,   141,   136,   143,
     136,   142,   142,   888,   142,   470,   142,   136,   105,   106,
     136,     7,   136,   142,    10,    84,   142,   508,   142,   724,
     485,   726,   487,   715,    92,    93,    94,   719,   720,    99,
     100,   101,   102,   103,   104,   464,   728,   729,    34,   477,
     745,   984,    38,   134,   987,   843,    84,   845,   477,   133,
     935,   133,   850,   137,    99,   137,    52,   477,    54,   133,
     715,   458,   459,   137,   719,   720,   141,   133,   143,    65,
      66,   137,    68,   728,   729,   135,   136,   618,   843,   508,
     845,   622,   141,    41,   143,   850,   132,   141,   508,   143,
     888,   141,   141,   143,   143,   136,   894,   715,   563,   136,
     591,   719,   720,   541,   690,    79,    80,    79,    80,  1077,
     728,   729,   541,   136,  1082,  1083,   607,   133,   618,  1087,
     134,   541,   134,   888,    77,    78,   912,   134,   593,   894,
     134,   596,   597,   919,   134,   600,    85,   935,   603,   604,
     107,   606,   757,   357,   358,   136,   932,   108,   934,   569,
     109,   843,   132,   845,   592,   110,   361,   362,   850,   624,
     365,   366,   591,   592,    85,   870,   135,   359,   360,   874,
     935,   591,   592,   133,   603,   467,   468,    84,   607,   576,
     367,   368,    84,   603,   404,    84,   143,   607,   843,    84,
     845,    84,   897,   133,   137,   850,   888,   569,    84,   141,
     134,   136,   894,   141,    85,    85,    85,    85,    85,   135,
      85,     3,   135,    84,   634,    84,   681,    84,    84,    84,
      84,   140,   135,    99,   715,   843,   135,   845,   719,   720,
     133,    23,   850,   888,   631,   135,   133,   728,   729,   894,
     113,   135,   140,   935,    36,   135,   135,   712,   135,   714,
     141,   716,    44,    84,    46,    47,    48,   140,   143,   479,
      84,    53,   634,    84,   134,    57,   134,    84,    84,   143,
     888,   134,  1093,  1094,   134,   134,   894,   134,    70,   134,
     935,   143,   143,   135,    76,   143,   142,   133,   508,   994,
     133,   142,   142,    81,   134,   134,    73,    89,   763,   696,
      84,   143,   722,     9,   113,   143,   143,   143,   705,  1014,
     143,   708,    99,   710,   133,   753,    99,   935,   738,   133,
     758,  1026,  1027,    84,   753,   100,   141,   133,   757,   758,
     795,    84,   142,   753,   141,   113,   141,   757,   758,   133,
     143,   134,   133,   740,    84,   143,   135,   785,    25,   135,
     722,    25,   843,   135,   845,   134,   785,     9,   143,   850,
      84,   135,   135,   133,   140,   785,   738,   764,  1073,  1074,
     133,   591,   113,   135,    33,   135,   141,    89,   142,   135,
      19,   846,    84,   821,   142,   757,   783,   607,   142,   134,
     133,   143,   821,   141,   133,    84,    84,   888,    84,   837,
     820,   821,   840,   894,   135,   143,   143,   143,   837,   142,
     140,   840,   135,   135,    85,   136,    42,   837,    42,    84,
     840,   850,    84,   861,   862,   134,    84,   135,   133,   140,
     850,    61,   861,   862,    84,    84,   856,   857,    85,   134,
      84,   861,   862,   881,   935,   142,   866,   137,   820,   869,
     135,    84,   881,   136,   136,   134,   113,   141,   134,   134,
      47,   881,   135,   135,   134,   894,   134,    84,   134,    36,
     908,   909,   113,     3,   894,    80,   143,   140,   875,   908,
     909,    11,   142,   134,   856,   857,    16,   907,   908,   909,
      20,   134,   137,    23,   866,   715,    79,   869,    84,   719,
     720,   137,   142,    84,   142,    35,    36,   135,   728,   729,
      84,    84,   977,   135,    44,   135,    46,    47,    48,   939,
     141,   135,    78,    53,   143,   143,    77,    57,   135,    59,
     927,   928,   135,   134,   134,   907,   135,   133,   142,  1004,
      70,   143,    80,    79,   135,   143,    76,   211,   212,   213,
     214,   135,    84,   143,   143,   135,   559,   757,   473,    89,
     224,   225,   370,   374,   682,   369,   850,   939,   422,   371,
     713,  1009,  1010,   372,   848,   850,   373,  1015,  1016,   843,
    1009,  1010,   670,   980,     4,    11,  1015,  1016,   133,  1009,
    1010,  1005,   740,   756,   907,  1015,  1016,   756,   978,   928,
       5,   998,     7,   980,   927,    10,  1027,   783,  1042,    14,
    1041,  1008,    24,    18,   764,   210,    21,   626,  1084,   705,
     124,   378,    27,   843,   311,   845,   377,   377,   186,    34,
     850,   636,   458,    38,   856,   382,    -1,   279,   702,   487,
      -1,    -1,    -1,    -1,  1041,  1042,    -1,    52,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,  1096,    -1,
      65,    66,    -1,    68,    -1,    -1,    71,  1096,   888,    -1,
      -1,    -1,    -1,    -1,   894,    -1,  1096,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1084,  1085,  1086,
     354,   355,   356,   357,   358,   359,   360,   361,   362,    -1,
      -1,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,    -1,    -1,    -1,    -1,   935,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
     404,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      29,    30,    31,    -1,   418,    34,    -1,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    -1,    -1,   479,    95,    96,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   508,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,   134,    -1,    -1,    -1,   138,
     139,    -1,   141,    -1,   143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    -1,    -1,    -1,    58,   591,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,   607,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,   134,    -1,    -1,    -1,   138,   139,    -1,   141,
      -1,   143,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    37,    38,    -1,    40,    41,
      -1,   715,    -1,    -1,    -1,   719,   720,    -1,    -1,    51,
      52,    -1,    54,    -1,   728,   729,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,   134,    -1,    -1,    -1,   138,   139,    -1,   141,
      -1,   143,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,   843,
      -1,   845,    24,    34,    -1,    -1,   850,    38,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,
      61,    -1,    63,    -1,    65,    66,    -1,    68,    -1,    -1,
      -1,    63,    -1,    -1,   888,    -1,    -1,    -1,    -1,    -1,
     894,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    83,    -1,    -1,    95,    96,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,    -1,    -1,
      -1,   935,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,    -1,    -1,   134,    -1,    -1,    -1,   138,   139,    -1,
     141,   142,     4,     5,    -1,     7,   138,   139,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    -1,     5,    -1,
       7,    -1,    24,    10,    -1,    27,    -1,    14,    -1,    -1,
      -1,    18,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      52,    38,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,
      -1,    63,    -1,    65,    66,    52,    68,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    68,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,   134,    -1,    -1,    -1,   138,   139,     3,   141,
       5,    -1,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      -1,    16,    -1,    18,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    47,    48,    -1,    -1,    -1,    52,    53,    54,
      -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    68,    -1,    70,    71,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,     4,     5,    89,     7,    -1,    -1,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    -1,     5,    -1,
       7,    -1,    24,    10,    -1,    27,    -1,    14,    -1,    -1,
      -1,    18,    34,    -1,    -1,    -1,    38,    -1,    40,    41,
      27,    43,    -1,    -1,    -1,    -1,    -1,    34,    50,    -1,
      52,    38,    54,    -1,   139,    -1,    58,    -1,    -1,    61,
      -1,    63,    -1,    65,    66,    52,    68,    54,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    68,    84,    -1,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
      -1,    -1,   134,    -1,    -1,    -1,   138,   139,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    63,    -1,    65,
      66,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,    -1,   133,   134,    -1,
      -1,    -1,   138,   139,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,
      -1,    61,    -1,    63,    -1,    65,    66,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,   134,    -1,    -1,    -1,   138,   139,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    63,
      -1,    65,    66,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
     134,    -1,    -1,    -1,   138,   139,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    63,    -1,    65,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,   134,    -1,    -1,    -1,
     138,   139,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,     7,
     101,   102,    10,    11,    12,    -1,    14,    -1,    16,    -1,
      18,    -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      48,    -1,    -1,    -1,    52,    53,    54,    -1,    -1,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      68,    -1,    70,    71,     5,    -1,     7,    -1,    76,    10,
      -1,    -1,    -1,    14,    -1,    -1,    84,    18,    -1,    -1,
      -1,    89,    -1,    -1,    -1,     5,    27,     7,    -1,    -1,
      10,    -1,    -1,    34,    14,    -1,    -1,    38,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    52,    -1,    54,    34,    -1,    -1,    58,    38,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,    -1,    -1,
      71,    -1,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    84,    -1,    65,    66,    -1,    68,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    23,   145,   264,   265,   388,    75,     0,   265,
      69,   266,   267,   268,   269,   389,    84,    84,   146,   148,
     273,   267,   136,   355,   356,   357,   410,   143,    82,    99,
     113,   371,   391,   143,    85,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    84,    86,    87,    88,    89,   101,
     102,   147,   148,   154,   358,   359,   360,   361,   362,   380,
     357,    39,   261,   270,   271,   272,   276,   327,   339,   349,
     354,   390,   410,    84,     5,    14,    18,    27,    58,    84,
     147,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   332,   333,   372,   373,   148,    84,   360,   140,
     133,   137,   134,   363,   428,    84,   262,   271,   274,   391,
      41,   132,   136,   334,   335,   100,   133,   143,   391,   133,
     137,   137,   361,     4,     5,    14,    15,    16,    18,    24,
      27,    40,    41,    58,    61,    63,    84,    86,    87,    88,
      89,    90,    91,    95,    96,   124,   125,   126,   127,   128,
     129,   130,   131,   134,   138,   139,   154,   163,   164,   165,
     166,   167,   168,   169,   170,   172,   173,   174,   175,   176,
     177,   178,   182,   183,   184,   185,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   207,   273,   364,   365,   366,   367,   368,
     381,   382,   383,   384,   385,   386,   387,   429,    85,   141,
     263,     3,    11,    16,    20,    23,    35,    36,    44,    46,
      47,    48,    53,    57,    59,    70,    76,    89,   275,   133,
     336,   392,   335,   373,   137,    85,   136,   134,   134,   186,
     398,   113,   391,   134,   134,   134,   149,   332,   333,    84,
     189,   189,   189,   189,     5,    14,    18,    27,    58,    84,
     149,   154,   207,   273,   189,   189,    85,    90,    91,   134,
     136,    85,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   206,    92,    93,    94,    95,    96,    83,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   132,    85,   133,   133,   135,
     135,    84,   388,   143,   430,    84,    71,   149,    84,    84,
      84,   133,   137,    84,   171,   207,   149,    43,    50,   187,
     188,   296,   399,   400,   141,   212,   368,   207,   207,    71,
      84,   149,   179,   134,   141,   337,   136,   391,   135,   135,
      84,    43,    50,   161,   162,   207,   393,   171,    84,   207,
     189,   189,   189,   189,   193,   193,   194,   194,   195,   195,
     149,   149,   195,   195,   196,   196,   197,   198,   199,   200,
     201,   203,   207,    84,   365,   366,    84,   367,   389,    99,
     369,   411,    84,    84,   140,   350,   426,   411,   411,   391,
     133,   137,   135,   133,   135,   149,     6,    12,    13,    17,
      28,    29,    30,    31,    37,    51,    60,    62,    64,    69,
      73,    74,    84,    86,    87,   143,   149,   169,   174,   175,
     176,   189,   190,   191,   205,   210,   211,   212,   213,   214,
     215,   216,   217,   221,   224,   225,   226,   227,   228,   234,
     235,   236,   237,   242,   243,   244,   245,   246,   247,   248,
     249,   255,   256,   257,   258,   260,   401,   135,   135,   135,
      82,    99,   180,   396,   135,    85,   135,   393,   207,   288,
     337,   338,   422,   171,   189,   391,   160,   207,   160,   133,
     135,   137,   391,   140,   391,   135,   390,   370,   410,   140,
     277,   278,   412,   411,   411,   154,   141,   351,   278,   340,
     423,   278,   328,   420,   207,   188,    84,   143,   149,   143,
     211,   134,   134,     8,    15,    84,   134,   134,   207,   406,
     134,   406,   212,   134,   134,     6,    51,   140,   212,   212,
      84,   218,   219,   210,   143,   143,   143,   142,    84,   133,
     181,   397,    84,   135,   133,   142,   137,   162,   207,   142,
     100,   133,    84,   147,   133,    81,   374,   375,   413,   134,
     134,   352,   353,   410,   427,   430,   413,   413,    84,   222,
     223,    73,   217,   225,   238,   241,   403,   149,   207,   208,
     143,   143,   207,   209,   207,   143,   207,   143,     9,   250,
     251,   252,   407,   408,   207,   217,   259,   209,   143,   207,
     210,   113,   133,   396,   133,   100,    99,   396,   142,   288,
     334,   394,   410,   147,    84,   375,   141,   279,   293,   294,
     295,   297,   410,   415,   415,   133,    84,   142,   141,   341,
     141,   329,   113,   133,   134,   133,   143,    84,   143,   135,
     135,   135,   134,   252,    25,   254,     9,   253,   135,   135,
     143,   207,   220,   337,   219,   337,   395,    84,   140,   272,
     280,   281,   282,   285,   289,   290,   298,   304,   308,   310,
     318,   322,   325,   410,   414,   430,   133,    45,   400,   135,
     135,   142,   353,   113,   342,   343,   344,   345,   347,   348,
     410,   424,   430,   272,   282,   285,   289,   298,   304,   308,
     310,   318,   322,   330,   331,   410,   421,   430,   208,   223,
     209,   225,   209,   239,   404,    33,   211,   211,   141,   229,
     147,   159,   212,   212,   211,   211,    11,    59,    89,   147,
     159,   376,   377,   378,   379,   281,   143,   212,   292,    57,
     149,   274,   309,   323,   142,   295,   297,   147,   150,   159,
     332,   149,   413,   413,   208,   343,    89,   425,   142,   331,
     274,   142,   135,   143,   207,    19,     8,    15,   230,   231,
     232,   233,   402,    84,   409,   134,   133,   133,   274,    61,
     147,    12,    21,    22,    32,    57,    71,    84,   139,   149,
     311,   312,   314,   316,   319,   141,    84,    84,    84,   143,
     143,    21,    71,   149,   143,   240,   241,   405,   135,   211,
     208,   140,   231,    15,   213,   233,   142,   135,   135,   147,
     378,   379,   147,   379,   136,    85,   149,   149,    42,    42,
      84,   147,   291,   134,    84,    42,    84,   286,   287,   291,
     143,   212,   317,   143,   212,   321,   299,   300,   301,   410,
     134,   149,    84,    61,    84,   135,   211,   140,   212,   133,
     293,    61,    84,   283,   284,   286,   291,   149,   149,    85,
     411,   415,   134,    24,    63,    83,    90,    91,    92,    93,
      94,    95,    96,    98,    99,   100,   103,   104,   105,   106,
     107,   108,   109,   138,   139,   313,   315,   113,   133,   143,
     141,   411,   142,   301,   410,   416,   300,   410,   417,    36,
      46,    47,   302,   418,   135,    84,   411,   136,   141,   411,
     211,   379,   137,   136,   113,   133,   143,   143,   141,   134,
     134,    84,   134,   135,   135,   134,   134,   288,    84,   287,
     299,   134,   418,   418,    47,    36,    79,    80,   143,   212,
     324,   143,   134,   293,   346,   410,   134,   293,   208,   284,
     305,   306,   307,   410,   149,   149,   415,   140,   320,   419,
     143,   212,   326,   149,   149,   142,   415,   143,   212,   303,
     303,   415,   137,   142,    79,    80,   415,   137,   142,   307,
     410,   306,   410,    77,    78,    84,    84,   135,     4,    61,
      84,    84,   135,   135,   141,   143,   143,   135,   212,   212,
     135,   135,   413,   134,   134,   135,   133,   413,   413,   346,
     410,   410,   413,   393,   393,   149,   143,   142,    80,    79,
     143,   135,   135,    84,   143,   143,   135
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 45 "cs_bison.y"
    {
	      Console.WriteLine("Error happend: sLin:{0} sCol:{1} eLin:{2} eCol:{3}", 
		(yylsp[(1) - (1)]).StartLine, (yylsp[(1) - (1)]).StartColumn, (yylsp[(1) - (1)]).EndLine, (yylsp[(1) - (1)]).EndColumn); 
	      throw new ApplicationException();
	;}
    break;

  case 261:
#line 697 "cs_bison.y"
    {
		Console.WriteLine("Namespace detected:");
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 3162 "cs_bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1901 "cs_bison.y"


public Parser(Scanner s) : base(s) {}
