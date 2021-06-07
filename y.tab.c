/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "syntaxAnalyzer.y" /* yacc.c:339  */

    #define __USE_C99_MATH
    #include <stdio.h>
    #include <stdlib.h>
    #include "Doda.h"
    
    #include <stdbool.h>
    #include <stdarg.h>
    using namespace std;
    int yylex(void);
    void yyerror(char *);

    /* prototypes */
    nodeType *opr(int oper, int nops, ...);
    
    nodeType *id(string i);
    nodeType *con(int value);
    nodeType *conF(float value);
    nodeType *conB(bool value);
    nodeType *conC(char value);
    nodeType *arg(string i);
    void freeNode(nodeType *p);
    int ex(nodeType *p);




#line 94 "y.tab.c" /* yacc.c:339  */

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
/* "%code requires" blocks.  */
#line 29 "syntaxAnalyzer.y" /* yacc.c:355  */
 
     #include "./Doda.h" 
     
     

#line 130 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    Identifiers = 258,
    INT = 259,
    FLOAT = 260,
    BOOL = 261,
    STRINGG = 262,
    VOID = 263,
    Constant = 264,
    EQUAL = 265,
    NOT_EQUAL = 266,
    GREATER_THAN = 267,
    GREATER_EQUAL = 268,
    LESS_THAN = 269,
    LESS_EQUAL = 270,
    AND = 271,
    OR = 272,
    NOT = 273,
    IF = 274,
    ELSE = 275,
    WHILE = 276,
    DO = 277,
    FOR = 278,
    SWITCH = 279,
    CASE = 280,
    DEFAULT = 281,
    BREAK = 282,
    FUNC = 283,
    RETURN = 284,
    floatType = 285,
    intType = 286,
    stringType = 287,
    boolType = 288,
    ifpred = 289
  };
#endif
/* Tokens.  */
#define Identifiers 258
#define INT 259
#define FLOAT 260
#define BOOL 261
#define STRINGG 262
#define VOID 263
#define Constant 264
#define EQUAL 265
#define NOT_EQUAL 266
#define GREATER_THAN 267
#define GREATER_EQUAL 268
#define LESS_THAN 269
#define LESS_EQUAL 270
#define AND 271
#define OR 272
#define NOT 273
#define IF 274
#define ELSE 275
#define WHILE 276
#define DO 277
#define FOR 278
#define SWITCH 279
#define CASE 280
#define DEFAULT 281
#define BREAK 282
#define FUNC 283
#define RETURN 284
#define floatType 285
#define intType 286
#define stringType 287
#define boolType 288
#define ifpred 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "syntaxAnalyzer.y" /* yacc.c:355  */

    int intVal;
    float floatVal;
    bool boolVal;
    char stringVal;
    char* realStringVal;
    nodeType *nPtr;             /* node pointer */

#line 219 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "y.tab.c" /* yacc.c:358  */

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

<<<<<<< HEAD
#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))
=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

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
<<<<<<< HEAD
  yy_state_t yyss_alloc;
=======
  yytype_int16 yyss_alloc;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
<<<<<<< HEAD
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)
=======
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
<<<<<<< HEAD
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
=======
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
=======
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
<<<<<<< HEAD
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
=======
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
<<<<<<< HEAD
          YYPTRDIFF_T yyi;                      \
=======
          YYSIZE_T yyi;                         \
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
<<<<<<< HEAD
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   632
=======
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   740
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
=======
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
      45,    46,    37,    36,    48,    35,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    44,
       2,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    92,    92,    93,    96,    97,    98,    99,   102,   103,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   116,
     119,   120,   123,   124,   125,   128,   129,   132,   134,   135,
     138,   141,   144,   147,   148,   151,   152,   155,   158,   159,
     162,   163,   164,   165,   167,   168,   169,   171,   172,   173,
     176,   179,   180,   181,   183,   184,   185,   186,   189,   190,
     191,   192,   193,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210
=======
       0,   105,   105,   106,   109,   110,   111,   112,   115,   116,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   129,
     132,   133,   136,   139,   140,   143,   145,   146,   149,   152,
     155,   158,   159,   162,   163,   166,   169,   170,   173,   174,
     175,   176,   178,   179,   180,   182,   183,   184,   187,   190,
     191,   192,   195,   196,   197,   198,   201,   202,   203,   204,
     205,   207,   208,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Identifiers", "INT", "FLOAT", "BOOL",
<<<<<<< HEAD
  "STRING", "VOID", "Constant", "EQUAL", "NOT_EQUAL", "GREATER_THAN",
=======
  "STRINGG", "VOID", "Constant", "EQUAL", "NOT_EQUAL", "GREATER_THAN",
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
  "GREATER_EQUAL", "LESS_THAN", "LESS_EQUAL", "AND", "OR", "NOT", "IF",
  "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "FUNC", "RETURN", "floatType", "intType", "stringType", "boolType",
  "'='", "'-'", "'+'", "'*'", "'/'", "'%'", "'^'", "ifpred", "'{'", "'}'",
  "';'", "'('", "')'", "':'", "','", "$accept", "program", "statments",
  "block_statment", "statment", "while_statment", "if_statment",
  "matched_if", "unmatched_if", "for_statment", "for_begining",
  "do_while_statment", "switch_statment", "case_statment",
  "cases_statment", "func_defintion_statment", "return_statment",
  "func_return_statments", "data_type", "func_def_arguments", "arguments",
  "func_call_statment", "var_declare_statment", "value",
  "expression_statment", "expression_statment_lv0", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
<<<<<<< HEAD
static const yytype_int16 yytoknum[] =
=======
static const yytype_uint16 yytoknum[] =
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    61,    45,    43,    42,    47,    37,
      94,   289,   123,   125,    59,    40,    41,    58,    44
};
# endif

<<<<<<< HEAD
#define YYPACT_NINF (-107)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
=======
#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
     305,   -39,  -107,  -107,  -107,  -107,     4,    77,   -12,    -6,
     -26,     7,     8,    23,  -107,  -107,  -107,  -107,   150,  -107,
      77,    36,   305,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
      38,  -107,  -107,    78,  -107,    42,  -107,   498,  -107,    77,
      84,  -107,    77,    77,    67,   336,    86,    87,    88,  -107,
     181,   348,  -107,   305,  -107,  -107,  -107,    58,  -107,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,  -107,   -43,   555,    59,   361,   398,
      49,    52,  -107,   555,    51,    53,    54,  -107,  -107,    77,
     592,   592,    35,    35,    35,    35,   586,    10,   555,    39,
      39,    63,    63,    63,  -107,  -107,    77,    77,    62,   -26,
      77,    77,    17,     4,     4,   555,   555,   555,   305,  -107,
     411,   509,    81,    66,    17,  -107,   114,   -29,    37,   212,
      76,  -107,    77,    74,   305,  -107,  -107,   -26,     4,    82,
     103,   106,   448,   305,  -107,  -107,   126,   243,  -107,    89,
      90,   -26,   107,  -107,    77,   243,    92,   305,   111,  -107,
      94,   544,    93,  -107,    97,    96,   100,  -107,  -107,  -107,
    -107,    77,  -107,   461,    91,   305,   274,  -107
=======
    -110,   164,  -110,   -32,  -110,  -110,  -110,  -110,    67,   419,
     -38,   -35,   -27,   -10,     3,    62,  -110,  -110,  -110,  -110,
     195,  -110,   419,   381,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,    31,  -110,  -110,    84,  -110,    44,  -110,     6,  -110,
     419,   419,    86,  -110,   419,   419,    13,    73,    87,    89,
      90,  -110,   226,   469,  -110,  -110,  -110,    60,  -110,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,  -110,   661,    49,   455,    65,   506,   518,
      63,    68,  -110,   661,    61,    66,    70,  -110,  -110,   419,
     140,   140,   -11,   -11,   -11,   -11,   700,   669,    46,    46,
      77,    77,    77,  -110,  -110,   419,   419,    71,   -27,   419,
     419,     5,    67,    67,   661,  -110,   661,   381,  -110,   555,
     616,    91,    74,     5,  -110,   117,   -42,     1,   257,    82,
    -110,   419,    79,   412,  -110,  -110,   -27,    67,    85,   110,
     111,   567,   412,  -110,  -110,   129,   288,  -110,    93,    94,
     -27,   106,  -110,   419,   288,    98,   381,   118,  -110,    99,
     651,   101,  -110,   319,   102,   103,  -110,  -110,  -110,  -110,
     419,  -110,   604,   108,   381,   350,  -110
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
<<<<<<< HEAD
static const yytype_int8 yydefact[] =
{
       2,    59,    40,    41,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    54,    57,    56,     0,    10,
       0,     0,     3,     6,     4,    11,    12,    20,    21,    13,
       0,    15,    16,     0,    61,     0,    60,     0,    62,    47,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     1,    23,     6,     4,    14,    51,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    48,     0,     0,     0,
       0,     0,    29,    28,     0,     0,     0,     9,    58,     0,
      76,    77,    72,    73,    74,    75,    70,    71,    63,    65,
      64,    66,    67,    68,    69,    50,     0,     0,     0,     0,
       0,     0,     0,    44,    44,    52,    49,    53,    24,    19,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
      20,    30,     0,     0,    24,    34,    45,     0,     0,     0,
      25,     0,     0,    24,     4,    35,     0,     0,    36,     0,
       0,     0,     4,    46,     0,     0,     0,    24,     0,    27,
       0,     0,     0,    38,    20,     0,     0,    32,    37,    39,
      22,     0,    26,     0,     0,    24,     0,    25
=======
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    57,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    53,    52,    55,    54,
       0,    10,     0,     2,     6,     4,    11,    12,    20,    21,
      13,     0,    15,    16,     0,    59,     0,    58,     0,    60,
       0,    45,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     7,     5,    14,    49,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    61,     0,    46,     0,     0,     0,
       0,     0,    27,    26,     0,     0,     0,     9,    56,     0,
      74,    75,    70,    71,    72,    73,    68,    69,    63,    62,
      64,    65,    66,    67,    48,    45,     0,     0,     0,     0,
       0,     0,    42,    42,    50,    47,    51,     0,    19,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,    20,
      28,     0,     0,     0,    32,    43,     0,     0,     0,    23,
       0,     0,     0,    31,    33,     0,     0,    34,     0,     0,
       0,     0,    44,     0,     0,     0,     0,     0,    25,     0,
       0,     0,    36,     0,     0,     0,    30,    35,    37,    22,
       0,    24,     0,     0,     0,     0,    23
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
<<<<<<< HEAD
    -107,  -107,     0,    -9,   -18,  -107,  -107,  -106,   -14,  -107,
    -107,  -107,  -107,  -107,    21,  -107,    -7,  -107,     1,    46,
    -107,  -107,   105,  -107,    -5,  -107
=======
    -110,  -110,   -17,   -12,   -14,  -110,  -110,  -109,    -9,  -110,
    -110,  -110,  -110,  -110,    33,  -110,     4,  -110,    -3,    47,
      54,  -110,   119,  -110,    -8,  -110
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,    21,    53,    23,    24,    25,    26,    27,    28,    29,
      81,    30,    31,   124,   125,    32,   156,   148,    33,   127,
      75,    34,    35,    36,    37,    38
=======
      -1,     1,    23,    24,    25,    26,    27,    28,    29,    30,
      81,    31,    32,   123,   124,    33,   155,   147,    34,   126,
      75,    35,    36,    37,    38,    39
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
<<<<<<< HEAD
      22,    44,    41,   105,    55,   106,    39,    40,     2,     3,
       4,     5,   130,    54,    48,    51,    18,   137,    50,   138,
      59,    60,    61,    62,    63,    64,    65,     2,     3,     4,
       5,    47,    55,    42,    76,    55,    52,    78,    79,    43,
      83,    54,   122,   123,    54,    68,    69,    70,    71,    72,
      73,   164,    45,    46,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   130,
      68,    69,    70,    71,    72,    73,    70,    71,    72,    73,
       1,    57,    56,   139,   115,   138,    58,    77,    80,    84,
      85,    86,    89,   107,   110,     7,   111,   112,   113,   114,
     119,   116,   117,    73,   118,   120,   121,    14,    15,    16,
      17,    55,   133,   134,   126,   126,   144,   136,   129,   141,
      54,   143,    20,   149,   147,   152,   150,   142,   145,   153,
     165,   157,   158,   175,   160,   163,   169,    55,   167,   146,
     170,   171,   159,   172,   166,   135,    54,   155,   162,   161,
      82,     0,     0,     1,     2,     3,     4,     5,    55,     6,
     128,     0,     0,     0,     0,     0,   173,    54,     7,     8,
       0,     9,    10,    11,    12,   176,     0,     0,    13,     0,
      14,    15,    16,    17,     1,     2,     3,     4,     5,     0,
       6,     0,    18,    49,    19,    20,     0,     0,     0,     7,
       8,     0,     9,    10,    11,    12,     0,     0,     0,    13,
       0,    14,    15,    16,    17,     1,     2,     3,     4,     5,
       0,     6,     0,    18,    87,    19,    20,     0,     0,     0,
       7,     8,     0,     9,    10,    11,    12,     0,     0,     0,
      13,     0,    14,    15,    16,    17,     1,     2,     3,     4,
       5,     0,     6,     0,    18,   140,    19,    20,     0,     0,
       0,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,   154,    14,    15,    16,    17,     1,     2,     3,
       4,     5,     0,     6,     0,    18,     0,    19,    20,     0,
       0,     0,     7,     8,     0,     9,    10,    11,    12,     0,
       0,     0,    13,     0,    14,    15,    16,    17,     1,     2,
       3,     4,     5,     0,     6,     0,    18,   177,    19,    20,
       0,     0,     0,     7,     8,     0,     9,    10,    11,    12,
       0,     0,     0,    13,     0,    14,    15,    16,    17,     1,
       2,     3,     4,     5,     0,     6,     0,    18,     0,    19,
      20,     0,     0,     0,     7,     0,     0,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    14,    15,    16,    17,
       0,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,    20,    67,    68,    69,    70,    71,    72,    73,     0,
       0,     0,     0,     0,    88,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,   108,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,     0,
       0,     0,     0,     0,   109,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,   131,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,     0,
       0,     0,     0,     0,   151,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,   174,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,    72,    73,     0,
       0,     0,    74,    67,    68,    69,    70,    71,    72,    73,
       0,     0,     0,   132,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,    67,    68,
      69,    70,    71,    72,    73,     0,     0,     0,   168,    67,
      68,    69,    70,    71,    72,    73,    59,    60,    61,    62,
      63,    64,     0,     0,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    68,    69,    70,
      71,    72,    73
=======
      46,    43,    40,    52,   136,    42,   137,    44,   129,    55,
      45,    54,    50,    41,    53,    20,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     121,   122,    74,    76,    80,    47,    78,    79,    55,    83,
      54,    67,    68,    69,    70,    71,    72,   138,    48,   137,
      73,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   129,     4,     5,     6,     7,
      49,     4,     5,     6,     7,    56,     3,     4,     5,     6,
       7,   114,     8,    69,    70,    71,    72,    57,    58,    77,
      84,     9,    85,    86,    89,   104,   118,    76,   116,   106,
     128,   119,   120,    16,    17,    18,    19,   111,   109,   125,
     125,   112,   110,   117,    55,   113,    54,    72,    22,   143,
     135,   133,   132,   141,   144,   140,   142,   146,   151,   154,
     148,   149,   152,   159,   145,   156,   157,   164,   158,   163,
      55,   162,    54,   166,   168,   160,   171,   170,   165,    55,
     174,    54,    61,    62,    63,    64,   134,   175,   161,   115,
     127,    55,   172,    54,     2,     0,    82,     3,     4,     5,
       6,     7,     0,     8,     0,    67,    68,    69,    70,    71,
      72,     0,     9,    10,     0,    11,    12,    13,    14,     0,
       0,     0,    15,     0,    16,    17,    18,    19,     3,     4,
       5,     6,     7,     0,     8,     0,    20,     0,    21,    22,
       0,     0,     0,     9,    10,     0,    11,    12,    13,    14,
       0,     0,     0,    15,     0,    16,    17,    18,    19,     3,
       4,     5,     6,     7,     0,     8,     0,    20,    51,    21,
      22,     0,     0,     0,     9,    10,     0,    11,    12,    13,
      14,     0,     0,     0,    15,     0,    16,    17,    18,    19,
       3,     4,     5,     6,     7,     0,     8,     0,    20,    87,
      21,    22,     0,     0,     0,     9,    10,     0,    11,    12,
      13,    14,     0,     0,     0,    15,     0,    16,    17,    18,
      19,     3,     4,     5,     6,     7,     0,     8,     0,    20,
     139,    21,    22,     0,     0,     0,     9,    10,     0,    11,
      12,    13,    14,     0,     0,     0,    15,   153,    16,    17,
      18,    19,     3,     4,     5,     6,     7,     0,     8,     0,
      20,     0,    21,    22,     0,     0,     0,     9,    10,     0,
      11,    12,    13,    14,     0,     0,     0,    15,     0,    16,
      17,    18,    19,     3,     4,     5,     6,     7,     0,     8,
       0,    20,   169,    21,    22,     0,     0,     0,     9,    10,
       0,    11,    12,    13,    14,     0,     0,     0,    15,     0,
      16,    17,    18,    19,     3,     4,     5,     6,     7,     0,
       8,     0,    20,   176,    21,    22,     0,     0,     0,     9,
      10,     0,    11,    12,    13,    14,     0,     0,     0,    15,
       0,    16,    17,    18,    19,     3,     4,     5,     6,     7,
       0,     8,     3,    20,     0,    21,    22,     0,     0,     0,
       9,    10,     0,    11,    12,    13,    14,     9,     0,     0,
      15,     0,    16,    17,    18,    19,     0,     0,     0,    16,
      17,    18,    19,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,     0,    22,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,     0,   105,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,    88,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,    59,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,     0,     0,     0,
       0,     0,   107,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,   108,    59,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,   130,    67,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,   150,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,     0,     0,     0,     0,     0,
     173,    67,    68,    69,    70,    71,    72,     0,     0,     0,
     131,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    59,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    72,     0,     0,     0,   167,    67,    68,    69,    70,
      71,    72,     0,     0,    67,    68,    69,    70,    71,    72,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
      72
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
       0,    10,     7,    46,    22,    48,    45,     6,     4,     5,
       6,     7,   118,    22,    13,    20,    42,    46,    18,    48,
      10,    11,    12,    13,    14,    15,    16,     4,     5,     6,
       7,     8,    50,    45,    39,    53,     0,    42,    43,    45,
      45,    50,    25,    26,    53,    35,    36,    37,    38,    39,
      40,   157,    45,    45,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   175,
      35,    36,    37,    38,    39,    40,    37,    38,    39,    40,
       3,     3,    44,    46,    89,    48,    44,     3,    21,     3,
       3,     3,    34,    34,    45,    18,    44,    46,    45,    45,
     109,   106,   107,    40,    42,   110,   111,    30,    31,    32,
      33,   129,    31,    47,   113,   114,   134,     3,   118,    43,
     129,    47,    45,    20,    42,   143,    20,   132,   137,     3,
      19,    42,    42,    42,    27,    43,    43,   155,    44,   138,
      43,    45,   151,    43,   158,   124,   155,   147,   155,   154,
      45,    -1,    -1,     3,     4,     5,     6,     7,   176,     9,
     114,    -1,    -1,    -1,    -1,    -1,   171,   176,    18,    19,
      -1,    21,    22,    23,    24,   175,    -1,    -1,    28,    -1,
=======
      12,     9,    34,    20,    46,     8,    48,    45,   117,    23,
      45,    23,    15,    45,    22,    42,    10,    11,    12,    13,
      14,    15,    16,    17,    35,    36,    37,    38,    39,    40,
      25,    26,    40,    41,    21,    45,    44,    45,    52,    47,
      52,    35,    36,    37,    38,    39,    40,    46,    45,    48,
      44,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,   174,     4,     5,     6,     7,
       8,     4,     5,     6,     7,    44,     3,     4,     5,     6,
       7,    89,     9,    37,    38,    39,    40,     3,    44,     3,
       3,    18,     3,     3,    34,    46,   108,   105,   106,    34,
     117,   109,   110,    30,    31,    32,    33,    46,    45,   112,
     113,    45,    44,    42,   128,    45,   128,    40,    45,   133,
       3,    47,    31,   131,   136,    43,    47,    42,   142,   146,
      20,    20,     3,    27,   137,    42,    42,    19,   150,   156,
     154,    43,   154,    44,    43,   153,    43,    45,   157,   163,
      42,   163,    12,    13,    14,    15,   123,   174,   154,   105,
     113,   175,   170,   175,     0,    -1,    47,     3,     4,     5,
       6,     7,    -1,     9,    -1,    35,    36,    37,    38,    39,
      40,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,     3,     4,
       5,     6,     7,    -1,     9,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,     3,
       4,     5,     6,     7,    -1,     9,    -1,    42,    43,    44,
      45,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
       3,     4,     5,     6,     7,    -1,     9,    -1,    42,    43,
      44,    45,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,     3,     4,     5,     6,     7,    -1,     9,    -1,    42,
      43,    44,    45,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,     3,     4,     5,     6,     7,    -1,     9,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,     3,     4,     5,     6,     7,    -1,     9,
      -1,    42,    43,    44,    45,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
      30,    31,    32,    33,     3,     4,     5,     6,     7,    -1,
       9,    -1,    42,    43,    44,    45,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,     3,     4,     5,     6,     7,
<<<<<<< HEAD
      -1,     9,    -1,    42,    43,    44,    45,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,     3,     4,     5,     6,
       7,    -1,     9,    -1,    42,    43,    44,    45,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,     3,     4,     5,
       6,     7,    -1,     9,    -1,    42,    -1,    44,    45,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,     3,     4,
       5,     6,     7,    -1,     9,    -1,    42,    43,    44,    45,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,     3,
       4,     5,     6,     7,    -1,     9,    -1,    42,    -1,    44,
      45,    -1,    -1,    -1,    18,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    30,    31,    32,    33,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    45,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    44,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    34,
      35,    36,    37,    38,    39,    40,    10,    11,    12,    13,
      14,    15,    -1,    -1,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    35,    36,    37,
      38,    39,    40
=======
      -1,     9,     3,    42,    -1,    44,    45,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    18,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      44,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    10,
      11,    12,    13,    14,    15,    16,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    35,    36,    37,    38,
      39,    40,    -1,    -1,    35,    36,    37,    38,    39,    40,
      10,    11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
<<<<<<< HEAD
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    18,    19,    21,
      22,    23,    24,    28,    30,    31,    32,    33,    42,    44,
      45,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      60,    61,    64,    67,    70,    71,    72,    73,    74,    45,
      67,    73,    45,    45,    52,    45,    45,     8,    67,    43,
      51,    73,     0,    51,    52,    53,    44,     3,    44,    10,
      11,    12,    13,    14,    15,    16,    17,    34,    35,    36,
      37,    38,    39,    40,    44,    69,    73,     3,    73,    73,
      21,    59,    71,    73,     3,     3,     3,    43,    46,    34,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    46,    48,    34,    46,    46,
      45,    44,    46,    45,    45,    73,    73,    73,    42,    52,
      73,    73,    25,    26,    62,    63,    67,    68,    68,    51,
      56,    46,    44,    31,    47,    63,     3,    46,    48,    46,
      43,    43,    73,    47,    53,    52,    67,    42,    66,    20,
      20,    46,    53,     3,    29,    51,    65,    42,    42,    52,
      27,    73,    65,    43,    56,    19,    57,    44,    44,    43,
      43,    45,    43,    73,    46,    42,    51,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      55,    55,    56,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    62,    63,    63,    64,    64,    65,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      70,    71,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     5,
       1,     1,    11,     1,     0,     7,    11,     9,     1,     1,
       6,     5,     6,     3,     2,     7,     7,     3,     3,     4,
       1,     1,     1,     1,     0,     2,     4,     0,     1,     3,
       4,     2,     4,     5,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2
=======
static const yytype_uint8 yystos[] =
{
       0,    50,     0,     3,     4,     5,     6,     7,     9,    18,
      19,    21,    22,    23,    24,    28,    30,    31,    32,    33,
      42,    44,    45,    51,    52,    53,    54,    55,    56,    57,
      58,    60,    61,    64,    67,    70,    71,    72,    73,    74,
      34,    45,    67,    73,    45,    45,    52,    45,    45,     8,
      67,    43,    51,    73,    52,    53,    44,     3,    44,    10,
      11,    12,    13,    14,    15,    16,    17,    35,    36,    37,
      38,    39,    40,    44,    73,    69,    73,     3,    73,    73,
      21,    59,    71,    73,     3,     3,     3,    43,    46,    34,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    46,    48,    34,    46,    46,    45,
      44,    46,    45,    45,    73,    69,    73,    42,    52,    73,
      73,    25,    26,    62,    63,    67,    68,    68,    51,    56,
      46,    44,    31,    47,    63,     3,    46,    48,    46,    43,
      43,    73,    47,    53,    52,    67,    42,    66,    20,    20,
      46,    53,     3,    29,    51,    65,    42,    42,    52,    27,
      73,    65,    43,    51,    19,    57,    44,    44,    43,    43,
      45,    43,    73,    46,    42,    51,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      55,    55,    56,    57,    57,    58,    59,    59,    60,    61,
      62,    63,    63,    64,    64,    65,    66,    66,    67,    67,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    71,
      71,    71,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     1,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     5,
       1,     1,    11,     7,    11,     9,     1,     1,     6,     5,
       6,     3,     2,     7,     7,     3,     3,     4,     1,     1,
       1,     1,     0,     2,     4,     0,     1,     3,     4,     2,
       4,     5,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

<<<<<<< HEAD
#define YYBACKUP(Token, Value)                                    \
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
=======
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
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

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


<<<<<<< HEAD
/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
=======
/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
<<<<<<< HEAD
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
=======
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
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
<<<<<<< HEAD
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
=======
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
=======
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
<<<<<<< HEAD
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
=======
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
=======
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
static YYPTRDIFF_T
=======
static YYSIZE_T
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
<<<<<<< HEAD
      YYPTRDIFF_T yyn = 0;
=======
      YYSIZE_T yyn = 0;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
            else
              goto append;

          append:
=======
            /* Fall through.  */
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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

<<<<<<< HEAD
  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
=======
  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;
=======
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
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

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
<<<<<<< HEAD
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
=======
      int yyn = yypact[*yyssp];
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
=======
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
    default: /* Avoid compiler warnings. */
=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
<<<<<<< HEAD
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
=======
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
          ++yyp;
          ++yyformat;
=======
          yyp++;
          yyformat++;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
    yy_state_fast_t yystate;
=======
    int yystate;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
<<<<<<< HEAD
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;
=======
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

<<<<<<< HEAD
    YYPTRDIFF_T yystacksize;
=======
    YYSIZE_T yystacksize;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

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
<<<<<<< HEAD
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
=======
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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

<<<<<<< HEAD

/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
=======
/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

<<<<<<< HEAD

/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
=======
 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
<<<<<<< HEAD
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
=======
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
<<<<<<< HEAD
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
=======
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
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
<<<<<<< HEAD
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
=======
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
<<<<<<< HEAD
# undef YYSTACK_RELOCATE
=======
#  undef YYSTACK_RELOCATE
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
<<<<<<< HEAD
=======
#endif /* no yyoverflow */
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

<<<<<<< HEAD
      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END
=======
      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
<<<<<<< HEAD
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */
=======

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

<<<<<<< HEAD

=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
/*-----------.
| yybackup.  |
`-----------*/
yybackup:
<<<<<<< HEAD
=======

>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
=======

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

<<<<<<< HEAD
  /* Discard the shifted token.  */
  yychar = YYEMPTY;
=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
| yyreduce -- do a reduction.  |
=======
| yyreduce -- Do a reduction.  |
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
  case 2:
#line 92 "syntaxAnalyzer.y"
                            {printf("program emptyyyyy");}
#line 1591 "y.tab.c"
    break;

  case 3:
#line 93 "syntaxAnalyzer.y"
                            { printf("program"); }
#line 1597 "y.tab.c"
    break;

  case 4:
#line 96 "syntaxAnalyzer.y"
                                    {printf("statment\n");}
#line 1603 "y.tab.c"
    break;

  case 5:
#line 97 "syntaxAnalyzer.y"
                                    {printf("statments statement");}
#line 1609 "y.tab.c"
    break;

  case 6:
#line 98 "syntaxAnalyzer.y"
                                    {printf("block statement");}
#line 1615 "y.tab.c"
    break;

  case 7:
#line 99 "syntaxAnalyzer.y"
                                    {printf("statments block statement");}
#line 1621 "y.tab.c"
    break;

  case 8:
#line 102 "syntaxAnalyzer.y"
                         {;}
#line 1627 "y.tab.c"
    break;

  case 9:
#line 103 "syntaxAnalyzer.y"
                                    {;}
#line 1633 "y.tab.c"
    break;

  case 10:
#line 105 "syntaxAnalyzer.y"
                {;}
#line 1639 "y.tab.c"
    break;

  case 11:
#line 106 "syntaxAnalyzer.y"
                           {;}
#line 1645 "y.tab.c"
    break;

  case 12:
#line 107 "syntaxAnalyzer.y"
                           {printf(" know if statment\n");}
#line 1651 "y.tab.c"
    break;

  case 13:
#line 108 "syntaxAnalyzer.y"
                           {;}
#line 1657 "y.tab.c"
    break;

  case 14:
#line 109 "syntaxAnalyzer.y"
                                  {;}
#line 1663 "y.tab.c"
    break;

  case 15:
#line 110 "syntaxAnalyzer.y"
                             {;}
#line 1669 "y.tab.c"
    break;

  case 16:
#line 111 "syntaxAnalyzer.y"
                                     {;}
#line 1675 "y.tab.c"
    break;

  case 17:
#line 112 "syntaxAnalyzer.y"
                                     {printf("st_var_dec");}
#line 1681 "y.tab.c"
    break;

  case 18:
#line 113 "syntaxAnalyzer.y"
                                    {;}
#line 1687 "y.tab.c"
    break;

  case 19:
#line 116 "syntaxAnalyzer.y"
                                                                  {;}
#line 1693 "y.tab.c"
    break;

  case 20:
#line 119 "syntaxAnalyzer.y"
                         {printf("matched if '''''\n");}
#line 1699 "y.tab.c"
    break;

  case 21:
#line 120 "syntaxAnalyzer.y"
                          {printf(" un matched if '''''\n");}
#line 1705 "y.tab.c"
    break;

  case 22:
#line 123 "syntaxAnalyzer.y"
                                                                                                  {printf("matchedIf 1st\n");}
#line 1711 "y.tab.c"
    break;

  case 23:
#line 124 "syntaxAnalyzer.y"
                       {printf("matchedIf statments\n");}
#line 1717 "y.tab.c"
    break;

  case 24:
#line 125 "syntaxAnalyzer.y"
            {printf("matchedIf empty\n");}
#line 1723 "y.tab.c"
    break;

  case 25:
#line 128 "syntaxAnalyzer.y"
                                                               {printf("unmatched if 1");}
#line 1729 "y.tab.c"
    break;

  case 26:
#line 129 "syntaxAnalyzer.y"
                                                                                          {printf("matchedIf 2st\n");}
#line 1735 "y.tab.c"
    break;

  case 27:
#line 132 "syntaxAnalyzer.y"
                                                                                                      {;}
#line 1741 "y.tab.c"
    break;

  case 28:
#line 134 "syntaxAnalyzer.y"
                                  {;}
#line 1747 "y.tab.c"
    break;

  case 29:
#line 135 "syntaxAnalyzer.y"
                                   {;}
#line 1753 "y.tab.c"
    break;

  case 30:
#line 138 "syntaxAnalyzer.y"
                                                                       {;}
#line 1759 "y.tab.c"
    break;

  case 31:
#line 141 "syntaxAnalyzer.y"
                                                            {;}
#line 1765 "y.tab.c"
    break;

  case 32:
#line 144 "syntaxAnalyzer.y"
                                                   {;}
#line 1771 "y.tab.c"
    break;

  case 33:
#line 147 "syntaxAnalyzer.y"
                                     {;}
#line 1777 "y.tab.c"
    break;

  case 34:
#line 148 "syntaxAnalyzer.y"
                                             {;}
#line 1783 "y.tab.c"
    break;

  case 35:
#line 151 "syntaxAnalyzer.y"
                                                                                         {;}
#line 1789 "y.tab.c"
    break;

  case 36:
#line 152 "syntaxAnalyzer.y"
                                                                                                     {;}
#line 1795 "y.tab.c"
    break;

  case 37:
#line 155 "syntaxAnalyzer.y"
                                                  {;}
#line 1801 "y.tab.c"
    break;

  case 38:
#line 158 "syntaxAnalyzer.y"
                                               {;}
#line 1807 "y.tab.c"
    break;

  case 39:
#line 159 "syntaxAnalyzer.y"
                                                           {;}
#line 1813 "y.tab.c"
    break;

  case 40:
#line 162 "syntaxAnalyzer.y"
               {;}
#line 1819 "y.tab.c"
    break;

  case 41:
#line 163 "syntaxAnalyzer.y"
                 {;}
#line 1825 "y.tab.c"
    break;

  case 42:
#line 164 "syntaxAnalyzer.y"
                {;}
#line 1831 "y.tab.c"
    break;

  case 43:
#line 165 "syntaxAnalyzer.y"
                  {;}
#line 1837 "y.tab.c"
    break;

  case 44:
#line 167 "syntaxAnalyzer.y"
                    {;}
#line 1843 "y.tab.c"
    break;

  case 45:
#line 168 "syntaxAnalyzer.y"
                                     {;}
#line 1849 "y.tab.c"
    break;

  case 46:
#line 169 "syntaxAnalyzer.y"
                                                            {;}
#line 1855 "y.tab.c"
    break;

  case 47:
#line 171 "syntaxAnalyzer.y"
           {;}
#line 1861 "y.tab.c"
    break;

  case 48:
#line 172 "syntaxAnalyzer.y"
                               {;}
#line 1867 "y.tab.c"
    break;

  case 49:
#line 173 "syntaxAnalyzer.y"
                                             {;}
#line 1873 "y.tab.c"
    break;

  case 50:
#line 176 "syntaxAnalyzer.y"
                                                  {;}
#line 1879 "y.tab.c"
    break;

  case 51:
#line 179 "syntaxAnalyzer.y"
                                             {printf("var_declare");}
#line 1885 "y.tab.c"
    break;

  case 52:
#line 180 "syntaxAnalyzer.y"
                                                                     {;}
#line 1891 "y.tab.c"
    break;

  case 53:
#line 181 "syntaxAnalyzer.y"
                                                                              {;}
#line 1897 "y.tab.c"
    break;

  case 54:
#line 183 "syntaxAnalyzer.y"
               {;}
#line 1903 "y.tab.c"
    break;

  case 55:
#line 184 "syntaxAnalyzer.y"
                 {;}
#line 1909 "y.tab.c"
    break;

  case 56:
#line 185 "syntaxAnalyzer.y"
                {;}
#line 1915 "y.tab.c"
    break;

  case 57:
#line 186 "syntaxAnalyzer.y"
                  {;}
#line 1921 "y.tab.c"
    break;

  case 58:
#line 189 "syntaxAnalyzer.y"
                                                  {;}
#line 1927 "y.tab.c"
    break;

  case 59:
#line 190 "syntaxAnalyzer.y"
                                  {printf("identifier found\n");}
#line 1933 "y.tab.c"
    break;

  case 60:
#line 191 "syntaxAnalyzer.y"
                            {;}
#line 1939 "y.tab.c"
    break;

  case 61:
#line 192 "syntaxAnalyzer.y"
                                         {printf("func call\n");}
#line 1945 "y.tab.c"
    break;

  case 62:
#line 193 "syntaxAnalyzer.y"
                                              {;}
#line 1951 "y.tab.c"
    break;

  case 63:
#line 195 "syntaxAnalyzer.y"
                                                                     {printf("expression = \n");}
#line 1957 "y.tab.c"
    break;

  case 64:
#line 196 "syntaxAnalyzer.y"
                                                                 {;}
#line 1963 "y.tab.c"
    break;

  case 65:
#line 197 "syntaxAnalyzer.y"
                                                                 {;}
#line 1969 "y.tab.c"
    break;

  case 66:
#line 198 "syntaxAnalyzer.y"
                                                                 {;}
#line 1975 "y.tab.c"
    break;

  case 67:
#line 199 "syntaxAnalyzer.y"
                                                                 {;}
#line 1981 "y.tab.c"
    break;

  case 68:
#line 200 "syntaxAnalyzer.y"
                                                                 {;}
#line 1987 "y.tab.c"
    break;

  case 69:
#line 201 "syntaxAnalyzer.y"
                                                                 {;}
#line 1993 "y.tab.c"
    break;

  case 70:
#line 202 "syntaxAnalyzer.y"
                                                                 {;}
#line 1999 "y.tab.c"
    break;

  case 71:
#line 203 "syntaxAnalyzer.y"
                                                                {;}
#line 2005 "y.tab.c"
    break;

  case 72:
#line 204 "syntaxAnalyzer.y"
                                                                          {;}
#line 2011 "y.tab.c"
    break;

  case 73:
#line 205 "syntaxAnalyzer.y"
                                                                           {;}
#line 2017 "y.tab.c"
    break;

  case 74:
#line 206 "syntaxAnalyzer.y"
                                                                       {;}
#line 2023 "y.tab.c"
    break;

  case 75:
#line 207 "syntaxAnalyzer.y"
                                                                        {;}
#line 2029 "y.tab.c"
    break;

  case 76:
#line 208 "syntaxAnalyzer.y"
                                                                   {;}
#line 2035 "y.tab.c"
    break;

  case 77:
#line 209 "syntaxAnalyzer.y"
                                                                       {;}
#line 2041 "y.tab.c"
    break;

  case 78:
#line 210 "syntaxAnalyzer.y"
                                             {;}
#line 2047 "y.tab.c"
    break;


#line 2051 "y.tab.c"

=======
        case 2:
#line 105 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { ex((yyvsp[0].nPtr));  printf("program"); }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 109 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr);  printf("statment\n");}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 110 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(';',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));  printf("statments statement\n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 111 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {  (yyval.nPtr) = (yyvsp[0].nPtr); printf("block statement");}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 112 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { (yyval.nPtr) = opr(';',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr)); printf("statments block statement\n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 115 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 116 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr); printf("enter block_statment\n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 118 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 119 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 120 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 122 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 123 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 124 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 125 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 126 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 129 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(WHILE,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); printf("matched if '''''\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr); printf(" un matched if '''''\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 136 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(IF,3,(yyvsp[-8].nPtr),(yyvsp[-5].nPtr),(yyvsp[-1].nPtr)); printf("matchedIf 1st\n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 139 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(IF,2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr)); printf("unmatched if 1");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 140 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(IF,3,(yyvsp[-8].nPtr),(yyvsp[-5].nPtr),(yyvsp[-1].nPtr));  printf("matchedIf 2st\n");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(FOR,4,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 145 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 146 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(DO,2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(SWITCH,2,id((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr));}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 155 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) =opr(CASE,2,con((yyvsp[-4].intVal)),(yyvsp[-2].nPtr)) ;}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(DEFAULT,1,(yyvsp[0].nPtr));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 162 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(FUNC,3,id((yyvsp[-4].realStringVal)),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 163 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=opr(FUNC,3,id((yyvsp[-4].realStringVal)),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(RETURN,1,(yyvsp[-1].nPtr));}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 169 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr)=(yyvsp[-1].nPtr);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 170 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,(yyvsp[-2].nPtr),(yyvsp[-1].nPtr));}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 173 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 174 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 175 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.intVal) = (yyvsp[0].intVal);}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 178 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 179 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = arg((yyvsp[0].realStringVal));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 180 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,(yyvsp[-3].nPtr),arg((yyvsp[0].realStringVal)));}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 182 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 183 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 184 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,(yyvsp[0].nPtr),(yyvsp[-2].nPtr));}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 187 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(FUNC,2,id((yyvsp[-3].realStringVal)),(yyvsp[-1].nPtr));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 190 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';',2,NULL,NULL); printf("var_declare");}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 191 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=',2,arg((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr));}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 192 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=',2,arg((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr));}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 195 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = con((yyvsp[0].intVal));}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 196 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = conF((yyvsp[0].floatVal));}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 197 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = conB((yyvsp[0].boolVal));}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 198 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = conC((yyvsp[0].stringVal));}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 201 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 202 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) =id((yyvsp[0].realStringVal)); printf("identifier found\n");}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); printf("value \n");}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 204 "syntaxAnalyzer.y" /* yacc.c:1646  */
    { (yyval.nPtr) = (yyvsp[0].nPtr); printf("func call\n");}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 205 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr); printf("Expression \n");}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 207 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=',2,arg((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr)); ;}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 208 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('+',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 210 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('-',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 211 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('*',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 212 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('/',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 213 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('%',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 214 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('^',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 215 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(AND,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(OR,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 217 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(GREATER_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(GREATER_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(LESS_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 220 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(LESS_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(NOT_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 223 "syntaxAnalyzer.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(NOT,1,(yyvsp[0].nPtr));}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1986 "y.tab.c" /* yacc.c:1646  */
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }
=======

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

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
<<<<<<< HEAD
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
=======
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
=======

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2

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

<<<<<<< HEAD

=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

<<<<<<< HEAD

=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

<<<<<<< HEAD

/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
=======
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
                  yystos[+*yyssp], yyvsp);
=======
                  yystos[*yyssp], yyvsp);
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
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
<<<<<<< HEAD
#line 212 "syntaxAnalyzer.y"


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
=======
#line 225 "syntaxAnalyzer.y" /* yacc.c:1906  */


nodeType *con(int value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.value = value;

    return p;
}

nodeType *conF(float value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeConFloat; // change type
    p->conF.value = value; //change call 

    return p;
}

nodeType *conB(bool value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeConBool; // change type
    p->conB.value = value; //change call 

    return p;
}



nodeType *conC(char value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeConChar; // change type
    p->conC.value = value; //change call 

    return p;
}

nodeType *id(string i) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = i;

    return p;
}
nodeType *arg(string i) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeArg;
    p->id.i = i;

    return p;
}
nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = (nodeType *)malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
}

int main(void) {
    yyparse();
    return 0;
}
