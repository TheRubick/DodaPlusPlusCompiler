/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxAnalyzer.y"

    #define __USE_C99_MATH
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    using namespace std;
    int yylex(void);
    void yyerror(char *);

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    Identifiers = 258,
    INT = 259,
    FLOAT = 260,
    BOOL = 261,
    STRING = 262,
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
    boolType = 288
  };
#endif
/* Tokens.  */
#define Identifiers 258
#define INT 259
#define FLOAT 260
#define BOOL 261
#define STRING 262
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "syntaxAnalyzer.y"

    int intVal;
    float floatVal;
    bool boolVal;
    char* stringVal;

#line 206 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

#define YYUNDEFTOK  2
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    39,     2,     2,
      44,    45,    37,    36,    47,    35,     2,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    43,
       2,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    91,    91,    92,    95,    96,    97,    98,   101,   102,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   115,
     118,   119,   122,   123,   124,   127,   128,   131,   133,   134,
     137,   140,   143,   144,   147,   148,   151,   152,   155,   158,
     159,   162,   163,   164,   165,   168,   169,   170,   171,   172,
     175,   178,   179,   180,   182,   183,   184,   185,   188,   189,
     190,   191,   192,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Identifiers", "INT", "FLOAT", "BOOL",
  "STRING", "VOID", "Constant", "EQUAL", "NOT_EQUAL", "GREATER_THAN",
  "GREATER_EQUAL", "LESS_THAN", "LESS_EQUAL", "AND", "OR", "NOT", "IF",
  "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "FUNC", "RETURN", "floatType", "intType", "stringType", "boolType",
  "'='", "'-'", "'+'", "'*'", "'/'", "'%'", "'^'", "'{'", "'}'", "';'",
  "'('", "')'", "':'", "','", "$accept", "program", "statments",
  "block_statment", "statment", "while_statment", "if_statment",
  "matched_if", "unmatched_if", "for_statment", "for_begining",
  "do_while_statment", "switch_statment", "case_statment",
  "cases_statment", "func_defintion_statment", "return_statment",
  "func_return_statments", "data_type", "arguments", "func_call_statment",
  "var_declare_statment", "value", "expression_statment",
  "expression_statment_lv0", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    61,    45,    43,    42,    47,    37,
      94,   123,   125,    59,    40,    41,    58,    44
};
# endif

#define YYPACT_NINF (-118)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
     263,   -32,  -117,  -117,  -117,  -117,     2,   121,   -25,   -10,
     -13,    -4,    -3,    89,  -117,  -117,  -117,  -117,   170,  -117,
     121,    51,   263,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
       9,  -117,  -117,    65,  -117,    29,  -117,   445,  -117,   325,
      82,  -117,   121,   121,    70,    83,    95,    96,    97,  -117,
     201,   336,  -117,   263,  -117,  -117,  -117,    71,  -117,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,  -117,   101,   -34,    10,    74,   349,
     385,    67,    75,  -117,    10,    72,    78,    79,  -117,  -117,
     121,   536,   536,    39,    39,    39,    39,   530,   523,    10,
      43,    43,    85,    85,    85,  -117,  -117,  -117,   325,   121,
      87,   -13,   121,   121,   -23,   325,   325,    10,   130,    10,
      10,   170,  -117,  -117,   397,   479,   104,    90,   -23,  -117,
     -16,    24,  -117,    98,  -117,   121,    92,   263,  -117,   -13,
     100,   122,   433,   263,   263,  -117,   232,  -117,   103,   -13,
     294,   121,   232,   105,   263,  -117,   123,   489,   106,  -117,
     107,   113,   114,  -117,  -117,  -117,  -117,  -117
=======
     311,   -28,  -118,  -118,  -118,  -118,     1,   122,   -12,    24,
     -14,    41,    42,    75,  -118,  -118,  -118,  -118,   156,  -118,
     122,    88,   311,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
      44,  -118,  -118,    86,  -118,    52,  -118,     9,  -118,   342,
      94,  -118,   122,   122,    77,    87,    96,    97,    98,  -118,
     187,   353,  -118,   311,  -118,  -118,  -118,    74,  -118,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,  -118,   111,   -30,   506,    81,   366,
     402,    72,    79,  -118,   506,    78,    80,    83,  -118,  -118,
     122,   550,   550,    38,    38,    38,    38,   544,   537,   506,
     -27,   -27,    93,    93,    93,  -118,  -118,  -118,   342,   122,
      95,   -14,   122,   122,    25,   342,   342,   506,   125,   506,
     506,   311,  -118,   414,   462,   104,    92,    25,  -118,   -17,
      -5,  -118,   218,    99,  -118,   122,   102,   311,  -118,   -14,
     101,  -118,   119,   450,   311,   311,  -118,   249,  -118,   108,
     -14,   280,   122,   249,   103,   311,  -118,   100,   496,   114,
    -118,   115,   126,  -118,  -118,  -118,  -118,  -118
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    59,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    54,    57,    56,     0,    10,
       0,     0,     3,     6,     4,    11,    12,    20,    21,    13,
       0,    15,    16,     0,    61,     0,    60,     0,    62,    45,
       0,    78,     0,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     1,    23,     6,     4,    14,    51,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
<<<<<<< HEAD
       0,     0,     0,     0,    18,     0,     0,    46,     0,     0,
       0,     0,     0,    28,    27,     0,     0,     0,     9,    57,
       0,    75,    76,    71,    72,    73,    74,    69,    70,    62,
      64,    63,    65,    66,    67,    68,    45,    49,     0,     0,
       0,     0,     0,     0,     0,    44,    44,    51,     0,    47,
      52,     0,    24,    19,     0,     0,     0,     0,     0,    30,
       0,     0,    48,    20,    29,     0,     0,     0,    34,     0,
       0,     0,     0,     0,    23,    35,     0,    36,     0,     0,
      23,     0,     0,     0,     0,    26,    10,     0,     0,    38,
      20,    21,     0,    37,    39,    22,    25,    32
=======
       0,     0,     0,     0,    18,     0,     0,    47,     0,     0,
       0,     0,     0,    29,    28,     0,     0,     0,     9,    58,
       0,    76,    77,    72,    73,    74,    75,    70,    71,    63,
      65,    64,    66,    67,    68,    69,    46,    50,     0,     0,
       0,     0,     0,     0,     0,    45,    45,    52,     0,    48,
      53,    24,    19,     0,     0,     0,     0,     0,    31,     0,
       0,    49,     0,    20,    30,     0,     0,    24,    35,     0,
       0,    25,     0,     0,    24,    23,    36,     0,    37,     0,
       0,    23,     0,     0,     0,    24,    27,     0,     0,     0,
      39,    20,    21,    33,    38,    40,    22,    26
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -117,  -117,     0,    20,   -18,  -117,  -117,  -116,     6,  -117,
    -117,  -117,  -117,  -117,    28,  -117,    11,  -117,     4,  -100,
    -117,   116,  -117,    -6,  -117
=======
    -118,  -118,     0,    19,   -19,  -118,  -118,  -117,    12,  -118,
    -118,  -118,  -118,  -118,    23,  -118,    18,  -118,    -4,   -45,
    -118,   128,  -118,    -6,  -118
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    53,    23,    24,    25,    26,    27,    28,    29,
      82,    30,    31,   127,   128,    32,   154,   148,    33,    76,
      34,    35,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
<<<<<<< HEAD
      22,    41,   126,   127,    55,   133,     2,     3,     4,     5,
      40,   107,    39,   108,    51,   130,   131,    48,    50,    42,
      59,    60,    61,    62,    63,    64,    65,    66,    18,   139,
      44,   108,    55,    77,    43,    55,    79,    80,   160,    84,
      45,    46,    54,    75,    67,    68,    69,    70,    71,    72,
      73,    52,    56,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    57,   140,
      54,   108,    58,    54,    68,    69,    70,    71,    72,    73,
      70,    71,    72,    73,   117,    78,     1,     2,     3,     4,
       5,    81,     6,     2,     3,     4,     5,    47,    85,    86,
      87,     7,   119,   120,   106,    90,   124,   125,   109,    77,
      77,   112,   118,    14,    15,    16,    17,   114,   113,    75,
      75,    50,   115,   116,     1,    73,    55,    20,   121,   142,
     122,   123,    55,   132,    55,   136,   137,   144,   143,     7,
     141,   146,   148,   150,   154,   157,   152,   159,   164,   165,
     162,    14,    15,    16,    17,   166,   138,   167,     0,   145,
     161,    83,     0,   158,    54,    20,     0,     0,     0,   155,
      54,     0,    54,     1,     2,     3,     4,     5,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       0,     9,    10,    11,    12,     0,     0,     0,    13,     0,
=======
      22,    41,    40,    55,   133,     2,     3,     4,     5,    48,
      70,    71,    72,    73,    51,   107,    39,   108,    50,    59,
      60,    61,    62,    63,    64,    65,    66,    18,   139,    44,
     108,    55,    42,    77,    55,    75,    79,    80,   161,    84,
     140,    54,   108,    67,    68,    69,    70,    71,    72,    73,
     125,   126,    74,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    43,    54,
     129,   130,    54,    68,    69,    70,    71,    72,    73,     2,
       3,     4,     5,    47,   117,    45,    46,    56,    52,    57,
       1,     2,     3,     4,     5,    58,     6,    78,    81,    85,
      86,    87,   119,   120,   118,     7,   123,   124,    90,    77,
      77,    75,    75,    55,   106,   109,   112,    14,    15,    16,
      17,   132,   113,   114,   115,     1,    55,   116,   131,   143,
     122,    20,    55,    73,    55,   136,   121,   145,   137,   149,
       7,   142,   147,   163,   151,   160,   158,   153,   144,   155,
     138,    54,    14,    15,    16,    17,   165,   166,   146,     1,
       2,     3,     4,     5,    54,     6,    20,   162,   167,   156,
      54,   159,    54,    83,     7,     8,     0,     9,    10,    11,
      12,     0,     0,     0,    13,     0,    14,    15,    16,    17,
       1,     2,     3,     4,     5,     0,     6,    18,    49,    19,
      20,     0,     0,     0,     0,     7,     8,     0,     9,    10,
      11,    12,     0,     0,     0,    13,     0,    14,    15,    16,
      17,     1,     2,     3,     4,     5,     0,     6,    18,    88,
      19,    20,     0,     0,     0,     0,     7,     8,     0,     9,
      10,    11,    12,     0,     0,     0,    13,     0,    14,    15,
      16,    17,     1,     2,     3,     4,     5,     0,     6,    18,
     141,    19,    20,     0,     0,     0,     0,     7,     8,     0,
       9,    10,    11,    12,     0,     0,     0,    13,   152,    14,
      15,    16,    17,     1,     2,     3,     4,     5,     0,     6,
      18,     0,    19,    20,     0,     0,     0,     0,     7,     8,
       0,     9,    10,    11,    12,     0,     0,   157,    13,     0,
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
      14,    15,    16,    17,     1,     2,     3,     4,     5,     0,
       6,    18,     0,    19,    20,     0,     0,     0,     0,     7,
       8,     0,     9,    10,    11,    12,     0,     0,     0,    13,
       0,    14,    15,    16,    17,     1,     2,     3,     4,     5,
<<<<<<< HEAD
       0,     6,    18,    88,    19,    20,     0,     0,     0,     0,
       7,     8,     0,     9,    10,    11,    12,     0,     0,     0,
      13,   151,    14,    15,    16,    17,     1,     2,     3,     4,
       5,     0,     6,    18,     0,    19,    20,     0,     0,     0,
       0,     7,     8,     0,     9,    10,    11,    12,     0,     0,
       0,    13,     0,    14,    15,    16,    17,     1,     2,     3,
       4,     5,     0,     6,    18,     0,    19,    20,     0,     0,
       0,     0,     7,     8,     0,     9,    10,    11,    12,     0,
       0,     0,    13,     0,    14,    15,    16,    17,     1,     2,
       3,     4,     5,     0,     0,    18,     0,   156,    20,     0,
       0,     0,     0,     7,     0,     0,    59,    60,    61,    62,
      63,    64,    65,    66,     0,    14,    15,    16,    17,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,    20,
=======
       0,     0,    18,     0,    19,    20,     0,     0,     0,     0,
       7,     0,     0,    59,    60,    61,    62,    63,    64,    65,
      66,     0,    14,    15,    16,    17,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,    20,    67,    68,    69,
      70,    71,    72,    73,     0,     0,     0,     0,    89,     0,
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       0,   110,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,    59,    60,    61,    62,    63,    64,
      65,    66,     0,     0,     0,     0,    67,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,   111,    67,    68,
      69,    70,    71,    72,    73,     0,     0,     0,     0,   134,
      59,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,     0,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,    67,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,   150,    67,    68,    69,    70,
      71,    72,    73,     0,     0,   135,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,    59,    60,    61,    62,
      63,    64,    65,    66,     0,     0,     0,     0,     0,     0,
      67,    68,    69,    70,    71,    72,    73,     0,     0,   164,
      67,    68,    69,    70,    71,    72,    73,    59,    60,    61,
      62,    63,    64,    65,    59,    60,    61,    62,    63,    64,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,     0,    68,
      69,    70,    71,    72,    73,    68,    69,    70,    71,    72,
      73
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
       0,     7,    25,    26,    22,   121,     4,     5,     6,     7,
       6,    45,    44,    47,    20,   115,   116,    13,    18,    44,
      10,    11,    12,    13,    14,    15,    16,    17,    41,    45,
      10,    47,    50,    39,    44,    53,    42,    43,   154,    45,
      44,    44,    22,    39,    34,    35,    36,    37,    38,    39,
      40,     0,    43,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     3,    45,
      50,    47,    43,    53,    35,    36,    37,    38,    39,    40,
      37,    38,    39,    40,    90,     3,     3,     4,     5,     6,
       7,    21,     9,     4,     5,     6,     7,     8,     3,     3,
       3,    18,   108,   109,     3,    34,   112,   113,    34,   115,
     116,    44,   108,    30,    31,    32,    33,    45,    43,   115,
     116,   121,    44,    44,     3,    40,   144,    44,    41,   135,
     110,   111,   150,     3,   152,    31,    46,   137,    46,    18,
      42,    41,    20,   143,    41,   151,   146,    42,    42,    42,
      27,    30,    31,    32,    33,    42,   128,    43,    -1,   139,
     154,    45,    -1,   152,   144,    44,    -1,    -1,    -1,   149,
     150,    -1,   152,     3,     4,     5,     6,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    28,    -1,
=======
       0,     7,     6,    22,   121,     4,     5,     6,     7,    13,
      37,    38,    39,    40,    20,    45,    44,    47,    18,    10,
      11,    12,    13,    14,    15,    16,    17,    41,    45,    10,
      47,    50,    44,    39,    53,    39,    42,    43,   155,    45,
      45,    22,    47,    34,    35,    36,    37,    38,    39,    40,
      25,    26,    43,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    44,    50,
     115,   116,    53,    35,    36,    37,    38,    39,    40,     4,
       5,     6,     7,     8,    90,    44,    44,    43,     0,     3,
       3,     4,     5,     6,     7,    43,     9,     3,    21,     3,
       3,     3,   108,   109,   108,    18,   112,   113,    34,   115,
     116,   115,   116,   132,     3,    34,    44,    30,    31,    32,
      33,   121,    43,    45,    44,     3,   145,    44,     3,   135,
     111,    44,   151,    40,   153,    31,    41,   137,    46,    20,
      18,    42,    41,    43,   144,    42,   152,   147,    46,    41,
     127,   132,    30,    31,    32,    33,    42,    42,   139,     3,
       4,     5,     6,     7,   145,     9,    44,   155,    42,   150,
     151,   153,   153,    45,    18,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
       3,     4,     5,     6,     7,    -1,     9,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,     3,     4,     5,     6,     7,    -1,     9,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,     3,     4,     5,     6,     7,    -1,     9,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    24,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,     3,     4,     5,     6,     7,    -1,     9,
      41,    -1,    43,    44,    -1,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    27,    28,    -1,
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
      30,    31,    32,    33,     3,     4,     5,     6,     7,    -1,
       9,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,     3,     4,     5,     6,     7,
<<<<<<< HEAD
      -1,     9,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,     3,     4,     5,     6,
       7,    -1,     9,    41,    -1,    43,    44,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,     3,     4,     5,
       6,     7,    -1,     9,    41,    -1,    43,    44,    -1,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,     3,     4,
       5,     6,     7,    -1,    -1,    41,    -1,    43,    44,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    30,    31,    32,    33,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    44,
=======
      -1,    -1,    41,    -1,    43,    44,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    30,    31,    32,    33,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    44,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,    -1,
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    45,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    45,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    45,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      34,    35,    36,    37,    38,    39,    40,    10,    11,    12,
      13,    14,    15,    16,    10,    11,    12,    13,    14,    15,
      -1,    -1,    12,    13,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    35,
      36,    37,    38,    39,    40,    35,    36,    37,    38,    39,
      40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    18,    19,    21,
      22,    23,    24,    28,    30,    31,    32,    33,    41,    43,
      44,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      59,    60,    63,    66,    68,    69,    70,    71,    72,    44,
      66,    71,    44,    44,    51,    44,    44,     8,    66,    42,
      50,    71,     0,    50,    51,    52,    43,     3,    43,    10,
      11,    12,    13,    14,    15,    16,    17,    34,    35,    36,
      37,    38,    39,    40,    43,    66,    67,    71,     3,    71,
      71,    21,    58,    69,    71,     3,     3,     3,    42,    45,
      34,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,     3,    45,    47,    34,
      45,    45,    44,    43,    45,    44,    44,    71,    66,    71,
<<<<<<< HEAD
      71,    41,    51,    51,    71,    71,    25,    26,    61,    62,
      67,    67,     3,    55,    45,    43,    31,    46,    62,    45,
      45,    42,    71,    46,    50,    51,    41,    65,    20,    45,
      50,    29,    50,    64,    41,    51,    43,    71,    64,    42,
      55,    56,    27,    43,    42,    42,    42,    43
=======
      71,    41,    51,    71,    71,    25,    26,    61,    62,    67,
      67,     3,    50,    55,    45,    43,    31,    46,    62,    45,
      45,    42,    42,    71,    46,    50,    51,    41,    65,    20,
      45,    50,    29,    50,    64,    41,    51,    27,    71,    64,
      42,    55,    56,    43,    43,    42,    42,    42
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    54,    55,    55,    55,    56,    56,    57,    58,    58,
      59,    60,    61,    61,    62,    62,    63,    63,    64,    65,
      65,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      68,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     5,
<<<<<<< HEAD
       1,     1,    11,     1,     5,    11,     9,     1,     1,     6,
       5,     4,     7,     3,     2,     7,     7,     3,     3,     4,
       1,     1,     1,     1,     0,     2,     1,     3,     4,     4,
       2,     4,     5,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2
=======
       1,     1,    11,     1,     0,     7,    11,     9,     1,     1,
       6,     5,     4,     6,     3,     2,     7,     7,     3,     3,
       4,     1,     1,     1,     1,     0,     2,     1,     3,     4,
       4,     2,     4,     5,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
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
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


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
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 91 "syntaxAnalyzer.y"
                            {printf("program emptyyyyy");}
#line 1578 "y.tab.c"
    break;

  case 3:
#line 92 "syntaxAnalyzer.y"
                            { printf("program"); }
#line 1584 "y.tab.c"
    break;

  case 4:
#line 95 "syntaxAnalyzer.y"
                                    {printf("statment");}
#line 1590 "y.tab.c"
    break;

  case 5:
#line 96 "syntaxAnalyzer.y"
                                    {;}
#line 1596 "y.tab.c"
    break;

  case 6:
#line 97 "syntaxAnalyzer.y"
                                    {;}
#line 1602 "y.tab.c"
    break;

  case 7:
#line 98 "syntaxAnalyzer.y"
                                    {;}
#line 1608 "y.tab.c"
    break;

  case 8:
#line 101 "syntaxAnalyzer.y"
                         {;}
#line 1614 "y.tab.c"
    break;

  case 9:
#line 102 "syntaxAnalyzer.y"
                                    {;}
#line 1620 "y.tab.c"
    break;

  case 10:
#line 104 "syntaxAnalyzer.y"
                {;}
#line 1626 "y.tab.c"
    break;

  case 11:
#line 105 "syntaxAnalyzer.y"
                           {;}
#line 1632 "y.tab.c"
    break;

  case 12:
#line 106 "syntaxAnalyzer.y"
                           {;}
#line 1638 "y.tab.c"
    break;

  case 13:
#line 107 "syntaxAnalyzer.y"
                           {;}
#line 1644 "y.tab.c"
    break;

  case 14:
#line 108 "syntaxAnalyzer.y"
                                  {;}
#line 1650 "y.tab.c"
    break;

  case 15:
#line 109 "syntaxAnalyzer.y"
                             {;}
#line 1656 "y.tab.c"
    break;

  case 16:
#line 110 "syntaxAnalyzer.y"
                                     {;}
#line 1662 "y.tab.c"
    break;

  case 17:
#line 111 "syntaxAnalyzer.y"
                                     {printf("st_var_dec");}
#line 1668 "y.tab.c"
    break;

  case 18:
#line 112 "syntaxAnalyzer.y"
                                    {;}
#line 1674 "y.tab.c"
    break;

  case 19:
#line 115 "syntaxAnalyzer.y"
                                                                  {;}
#line 1680 "y.tab.c"
    break;

  case 20:
#line 118 "syntaxAnalyzer.y"
                         {;}
#line 1686 "y.tab.c"
    break;

  case 21:
#line 119 "syntaxAnalyzer.y"
                          {;}
#line 1692 "y.tab.c"
    break;

  case 22:
#line 122 "syntaxAnalyzer.y"
                                                                                      {printf("matchedIf 1st\n");}
#line 1698 "y.tab.c"
    break;

  case 23:
#line 123 "syntaxAnalyzer.y"
                       {printf("matchedIf statments\n");}
#line 1704 "y.tab.c"
    break;

  case 24:
#line 124 "syntaxAnalyzer.y"
            {printf("matchedIf empty\n");}
#line 1710 "y.tab.c"
    break;

  case 25:
#line 127 "syntaxAnalyzer.y"
                                                               {;}
#line 1716 "y.tab.c"
    break;

  case 26:
#line 128 "syntaxAnalyzer.y"
                                                                                          {;}
#line 1722 "y.tab.c"
    break;

  case 27:
#line 131 "syntaxAnalyzer.y"
                                                                                                      {;}
#line 1728 "y.tab.c"
    break;

  case 28:
#line 133 "syntaxAnalyzer.y"
                                  {;}
#line 1734 "y.tab.c"
    break;

  case 29:
#line 134 "syntaxAnalyzer.y"
                                   {;}
#line 1740 "y.tab.c"
    break;

  case 30:
#line 137 "syntaxAnalyzer.y"
                                                                       {;}
#line 1746 "y.tab.c"
    break;

  case 31:
#line 140 "syntaxAnalyzer.y"
                                                           {;}
#line 1752 "y.tab.c"
    break;

  case 32:
#line 143 "syntaxAnalyzer.y"
<<<<<<< HEAD
                                                        {;}
#line 1754 "y.tab.c"
=======
                                          {;}
#line 1758 "y.tab.c"
>>>>>>> 49cc0b3383434b3c1a4612e111244a7ac5d3e498
    break;

  case 33:
#line 144 "syntaxAnalyzer.y"
                                                    {;}
#line 1764 "y.tab.c"
    break;

  case 34:
#line 147 "syntaxAnalyzer.y"
                                      {;}
#line 1770 "y.tab.c"
    break;

  case 35:
#line 148 "syntaxAnalyzer.y"
                                             {;}
#line 1776 "y.tab.c"
    break;

  case 36:
#line 151 "syntaxAnalyzer.y"
                                                                                {;}
#line 1782 "y.tab.c"
    break;

  case 37:
#line 152 "syntaxAnalyzer.y"
                                                                                            {;}
#line 1788 "y.tab.c"
    break;

  case 38:
#line 155 "syntaxAnalyzer.y"
                                                  {;}
#line 1794 "y.tab.c"
    break;

  case 39:
#line 158 "syntaxAnalyzer.y"
                                               {;}
#line 1800 "y.tab.c"
    break;

  case 40:
#line 159 "syntaxAnalyzer.y"
                                                           {;}
#line 1806 "y.tab.c"
    break;

  case 41:
#line 162 "syntaxAnalyzer.y"
               {;}
#line 1812 "y.tab.c"
    break;

  case 42:
#line 163 "syntaxAnalyzer.y"
                 {;}
#line 1818 "y.tab.c"
    break;

  case 43:
#line 164 "syntaxAnalyzer.y"
                {;}
#line 1824 "y.tab.c"
    break;

  case 44:
#line 165 "syntaxAnalyzer.y"
                  {;}
#line 1830 "y.tab.c"
    break;

  case 45:
#line 168 "syntaxAnalyzer.y"
           {;}
#line 1836 "y.tab.c"
    break;

  case 46:
#line 169 "syntaxAnalyzer.y"
                                 {;}
#line 1842 "y.tab.c"
    break;

  case 47:
#line 170 "syntaxAnalyzer.y"
                               {;}
#line 1848 "y.tab.c"
    break;

  case 48:
#line 171 "syntaxAnalyzer.y"
                                             {;}
#line 1854 "y.tab.c"
    break;

  case 49:
#line 172 "syntaxAnalyzer.y"
                                               {;}
#line 1860 "y.tab.c"
    break;

  case 50:
#line 175 "syntaxAnalyzer.y"
                                                  {;}
#line 1866 "y.tab.c"
    break;

  case 51:
#line 178 "syntaxAnalyzer.y"
                                             {printf("var_declare");}
#line 1872 "y.tab.c"
    break;

  case 52:
#line 179 "syntaxAnalyzer.y"
                                                                     {;}
#line 1878 "y.tab.c"
    break;

  case 53:
#line 180 "syntaxAnalyzer.y"
                                                                              {;}
#line 1884 "y.tab.c"
    break;

  case 54:
#line 182 "syntaxAnalyzer.y"
               {;}
#line 1890 "y.tab.c"
    break;

  case 55:
#line 183 "syntaxAnalyzer.y"
                 {;}
#line 1896 "y.tab.c"
    break;

  case 56:
#line 184 "syntaxAnalyzer.y"
                {;}
#line 1902 "y.tab.c"
    break;

  case 57:
#line 185 "syntaxAnalyzer.y"
                  {;}
#line 1908 "y.tab.c"
    break;

  case 58:
#line 188 "syntaxAnalyzer.y"
                                                   {;}
#line 1914 "y.tab.c"
    break;

  case 59:
#line 189 "syntaxAnalyzer.y"
                                  {printf("identifier found\n");}
#line 1920 "y.tab.c"
    break;

  case 60:
#line 190 "syntaxAnalyzer.y"
                            {;}
#line 1926 "y.tab.c"
    break;

  case 61:
#line 191 "syntaxAnalyzer.y"
                                         {printf("func call\n");}
#line 1932 "y.tab.c"
    break;

  case 62:
#line 192 "syntaxAnalyzer.y"
                                              {;}
#line 1938 "y.tab.c"
    break;

  case 63:
#line 194 "syntaxAnalyzer.y"
                                                                     {printf("expression = \n");}
#line 1944 "y.tab.c"
    break;

  case 64:
#line 195 "syntaxAnalyzer.y"
                                                                 {;}
#line 1950 "y.tab.c"
    break;

  case 65:
#line 196 "syntaxAnalyzer.y"
                                                                 {;}
#line 1956 "y.tab.c"
    break;

  case 66:
#line 197 "syntaxAnalyzer.y"
                                                                 {;}
#line 1962 "y.tab.c"
    break;

  case 67:
#line 198 "syntaxAnalyzer.y"
                                                                 {;}
#line 1968 "y.tab.c"
    break;

  case 68:
#line 199 "syntaxAnalyzer.y"
                                                                 {;}
#line 1974 "y.tab.c"
    break;

  case 69:
#line 200 "syntaxAnalyzer.y"
                                                                 {;}
#line 1980 "y.tab.c"
    break;

  case 70:
#line 201 "syntaxAnalyzer.y"
                                                                 {;}
#line 1986 "y.tab.c"
    break;

  case 71:
#line 202 "syntaxAnalyzer.y"
                                                                {;}
#line 1992 "y.tab.c"
    break;

  case 72:
#line 203 "syntaxAnalyzer.y"
                                                                          {;}
#line 1998 "y.tab.c"
    break;

  case 73:
#line 204 "syntaxAnalyzer.y"
                                                                           {;}
#line 2004 "y.tab.c"
    break;

  case 74:
#line 205 "syntaxAnalyzer.y"
                                                                       {;}
#line 2010 "y.tab.c"
    break;

  case 75:
#line 206 "syntaxAnalyzer.y"
                                                                        {;}
#line 2016 "y.tab.c"
    break;

  case 76:
#line 207 "syntaxAnalyzer.y"
                                                                   {;}
#line 2022 "y.tab.c"
    break;

  case 77:
#line 208 "syntaxAnalyzer.y"
                                                                       {;}
#line 2028 "y.tab.c"
    break;

  case 78:
#line 209 "syntaxAnalyzer.y"
                                             {;}
#line 2034 "y.tab.c"
    break;


#line 2038 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 211 "syntaxAnalyzer.y"


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}
