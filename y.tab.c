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
    #include "Doda.h"
    #include <stdbool.h>
    #include <stdarg.h>
    #include "DodaSymbolTable.cpp"
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
extern int yylineno;
    
     /*
    Symbol Table
*/
    // DodaSymbolTable symbolTable;
    DodaSymbolTable symbolTable ;


#line 103 "y.tab.c"

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
/* "%code requires" blocks.  */
#line 34 "syntaxAnalyzer.y"
 
     #include "./Doda.h" 
     #define YYDEBUG 1 // This is new

     
     

#line 154 "y.tab.c"

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
#line 41 "syntaxAnalyzer.y"

    int intVal;
    float floatVal;
    bool boolVal;
    char stringVal;
    char* realStringVal;
    nodeType *nPtr;             /* node pointer */

#line 242 "y.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   594

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

#define YYUNDEFTOK  2
#define YYMAXUTOK   289


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
      46,    45,    37,    36,    48,    35,     2,    38,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,   115,   115,   116,   120,   121,   122,   123,   126,   126,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   143,   146,   147,   151,   157,   167,   169,   170,
     170,   173,   176,   179,   179,   182,   182,   183,   186,   191,
     198,   201,   201,   202,   202,   205,   206,   207,   208,   210,
     211,   216,   223,   224,   225,   228,   231,   234,   237,   242,
     243,   244,   245,   248,   249,   250,   251,   252,   254,   255,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Identifiers", "INT", "FLOAT", "BOOL",
  "STRINGG", "VOID", "Constant", "EQUAL", "NOT_EQUAL", "GREATER_THAN",
  "GREATER_EQUAL", "LESS_THAN", "LESS_EQUAL", "AND", "OR", "NOT", "IF",
  "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "FUNC", "RETURN", "floatType", "intType", "stringType", "boolType",
  "'='", "'-'", "'+'", "'*'", "'/'", "'%'", "'^'", "ifpred", "'{'", "'}'",
  "';'", "')'", "'('", "':'", "','", "$accept", "program", "statments",
  "block_statment", "$@1", "statment", "while_statment", "if_statment",
  "matched_if", "unmatched_if", "for_statment", "for_begining", "$@2",
  "do_while_statment", "switch_statment", "case_statment", "$@3",
  "cases_statment", "$@4", "func_defintion_statment", "return_statment",
  "func_return_statments", "$@5", "$@6", "data_type", "func_def_arguments",
  "arguments", "func_call_statment", "var_declare_statment", "value",
  "expression_statment", "expression_statment_lv0", YY_NULLPTR
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
      94,   289,   123,   125,    59,    41,    40,    58,    44
};
# endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-36)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -57,   148,   -57,   -16,   -26,   -57,   -57,   -57,   -57,     9,
       0,   -41,   -36,   -57,   -27,    20,   102,   -57,   -57,   -57,
     -57,   -57,     0,   182,   -57,    25,   -57,   -57,   -57,   -57,
     -57,   -57,     7,   -57,   -57,    33,   -57,    24,   -57,   459,
     -57,   -57,   -57,   -57,     0,     0,    77,   -57,     0,     0,
      62,     0,    81,    83,    84,   352,   -57,   -57,   294,   -57,
      63,   -57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   539,    51,    78,
      66,   365,   401,    73,    76,    72,   539,    85,    75,    82,
     -57,   216,     0,    35,    35,   -14,   -14,   -14,   -14,   554,
     547,     5,     5,    89,    89,    89,   -57,   -57,     0,     0,
     -57,   -57,     0,     0,   -57,    96,     9,     9,   -57,   539,
     -57,   539,   103,   -57,   412,   494,    96,   107,   -57,   109,
     130,   -39,    -8,   -57,   -57,     0,   -57,   106,    91,   -57,
     -57,     9,   -57,   -57,   448,    92,   328,   -57,   138,   -57,
     100,   101,   -57,   328,   -57,   -57,   115,   294,   -57,   118,
       0,   104,   260,   114,   504,   -57,   116,   -57,   -57,   -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,     0,    64,    45,    46,    47,    48,     0,
       0,     0,     0,     8,     0,     0,     0,    60,    59,    62,
      61,    10,     0,     0,     7,     0,     5,    11,    12,    23,
      24,    13,     0,    15,    16,     0,    66,     0,    65,     0,
      67,    21,    19,    20,     0,    52,     0,    83,     0,     0,
       0,    29,     0,     0,     0,     0,     6,     4,     0,    14,
      56,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    68,     0,    53,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
      63,     0,     0,    81,    82,    77,    78,    79,    80,    75,
      76,    70,    69,    71,    72,    73,    74,    55,    52,     0,
       8,     8,     0,     0,    30,    33,    49,    49,     9,    57,
      54,    58,    26,    22,     0,     0,    33,     0,    32,     0,
       0,     0,     0,     8,    31,     0,    37,     0,     0,    50,
       8,     0,    41,    25,     0,     0,     0,    38,     0,    39,
       0,     0,     8,     0,    36,    51,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    42,     0,    34,    40,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -56,    -6,   -57,   -22,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,    34,   -57,   -57,
      -1,   -57,   -57,   -57,    -5,    45,    55,   -57,    79,   -57,
     -10,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    84,    85,    32,    33,   126,   127,   128,   129,    34,
     161,   149,   150,   151,    35,   131,    78,    36,    37,    38,
      39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    57,    91,     4,    46,    48,   140,    50,    44,   141,
      49,    54,    55,     5,     6,     7,     8,    56,    10,    51,
      45,    70,    71,    72,    73,    74,    75,    41,    42,    43,
      17,    18,    19,    20,    77,    79,    60,   142,    81,    82,
     141,    86,    72,    73,    74,    75,    22,    64,    65,    66,
      67,    59,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    52,    58,    61,    57,
      70,    71,    72,    73,    74,    75,     5,     6,     7,     8,
      80,     9,   119,    83,    87,    56,    88,    89,    62,    63,
      64,    65,    66,    67,    68,    69,   107,    92,    79,   121,
     109,   162,   124,   125,   122,   123,     5,     6,     7,     8,
      53,   130,   130,    70,    71,    72,    73,    74,    75,   112,
     113,   116,   -35,   133,   154,   144,   108,   143,   117,    75,
     115,   159,   137,   139,   147,   138,   148,   145,   146,   153,
      57,   155,   156,   157,   160,   163,   158,   165,     2,     3,
     164,     4,     5,     6,     7,     8,    56,     9,   167,   169,
     136,   166,   132,   120,   114,     0,    10,    11,     0,    12,
      13,    14,    15,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    -2,     3,     0,     4,     5,     6,     7,     8,
      -8,     9,    21,     0,    22,     0,     0,     0,     0,     0,
      10,    11,     0,    12,    13,    14,    15,     0,     0,     0,
      16,     0,    17,    18,    19,    20,     0,     3,     0,     4,
       5,     6,     7,     8,    -2,     9,    21,     0,    22,     0,
       0,     0,     0,     0,    10,    11,     0,    12,    13,    14,
      15,     0,     0,     0,    16,     0,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,    -8,   118,
      21,     3,    22,     4,     5,     6,     7,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,    12,    13,    14,    15,     0,     0,     0,    16,   160,
      17,    18,    19,    20,     0,     3,     0,     4,     5,     6,
       7,     8,    -8,     9,    21,     0,    22,     0,     0,     0,
       0,     0,    10,    11,     0,    12,    13,    14,    15,     0,
       0,     0,    16,     0,    17,    18,    19,    20,     0,     3,
       0,     4,     5,     6,     7,     8,    -8,     9,    21,     0,
      22,     0,     0,     0,     0,     0,    10,    11,     0,    12,
      13,    14,    15,     0,     0,     0,    16,     0,    17,    18,
      19,    20,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,    21,     0,    22,    62,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,    90,     0,     0,
      70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
     110,    62,    63,    64,    65,    66,    67,    68,    69,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,    69,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,     0,     0,     0,     0,   111,    70,    71,    72,
      73,    74,    75,     0,     0,     0,     0,   134,    62,    63,
      64,    65,    66,    67,    68,    69,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,    74,    75,     0,
       0,     0,     0,   152,    70,    71,    72,    73,    74,    75,
       0,     0,     0,    76,    62,    63,    64,    65,    66,    67,
      68,    69,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    72,    73,    74,    75,     0,     0,     0,   135,    70,
      71,    72,    73,    74,    75,     0,     0,     0,   168,    62,
      63,    64,    65,    66,    67,    68,    69,    62,    63,    64,
      65,    66,    67,    68,    62,    63,    64,    65,    66,    67,
       0,     0,     0,     0,    70,    71,    72,    73,    74,    75,
       0,     0,    70,    71,    72,    73,    74,    75,     0,    70,
      71,    72,    73,    74,    75
};

static const yytype_int16 yycheck[] =
{
      10,    23,    58,     3,     9,    46,    45,    13,    34,    48,
      46,    16,    22,     4,     5,     6,     7,    23,    18,    46,
      46,    35,    36,    37,    38,    39,    40,    43,    44,    45,
      30,    31,    32,    33,    44,    45,     3,    45,    48,    49,
      48,    51,    37,    38,    39,    40,    46,    12,    13,    14,
      15,    44,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    46,    42,    44,    91,
      35,    36,    37,    38,    39,    40,     4,     5,     6,     7,
       3,     9,    92,    21,     3,    91,     3,     3,    10,    11,
      12,    13,    14,    15,    16,    17,    45,    34,   108,   109,
      34,   157,   112,   113,   110,   111,     4,     5,     6,     7,
       8,   116,   117,    35,    36,    37,    38,    39,    40,    46,
      44,    46,    26,    20,   146,   135,    48,   133,    46,    40,
      45,   153,    25,     3,   140,    26,   141,    31,    47,    47,
     162,     3,    42,    42,    29,    27,   152,    43,     0,     1,
     160,     3,     4,     5,     6,     7,   162,     9,    44,    43,
     126,   162,   117,   108,    85,    -1,    18,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,     0,     1,    -1,     3,     4,     5,     6,     7,
      42,     9,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    -1,     1,    -1,     3,
       4,     5,     6,     7,    42,     9,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,     1,    46,     3,     4,     5,     6,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    -1,     1,    -1,     3,     4,     5,
       6,     7,    42,     9,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    -1,     1,
      -1,     3,     4,     5,     6,     7,    42,     9,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    44,    -1,    46,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      45,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    45,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    45,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    45,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    10,
      11,    12,    13,    14,    15,    16,    17,    10,    11,    12,
      13,    14,    15,    16,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    35,
      36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,     0,     1,     3,     4,     5,     6,     7,     9,
      18,    19,    21,    22,    23,    24,    28,    30,    31,    32,
      33,    44,    46,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    62,    63,    68,    73,    76,    77,    78,    79,
      80,    43,    44,    45,    34,    46,    73,    79,    46,    46,
      52,    46,    46,     8,    73,    79,    52,    54,    42,    44,
       3,    44,    10,    11,    12,    13,    14,    15,    16,    17,
      35,    36,    37,    38,    39,    40,    44,    79,    75,    79,
       3,    79,    79,    21,    60,    61,    79,     3,     3,     3,
      45,    51,    34,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    45,    48,    34,
      45,    45,    46,    44,    77,    45,    46,    46,    43,    79,
      75,    79,    52,    52,    79,    79,    64,    65,    66,    67,
      73,    74,    74,    20,    45,    44,    66,    25,    26,     3,
      45,    48,    45,    52,    79,    31,    47,    52,    73,    70,
      71,    72,    45,    47,    54,     3,    42,    42,    52,    54,
      29,    69,    51,    27,    79,    43,    69,    44,    44,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    53,    52,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    56,    56,    57,    58,    59,    60,    61,
      60,    62,    63,    65,    64,    67,    66,    66,    68,    68,
      69,    71,    70,    72,    70,    73,    73,    73,    73,    74,
      74,    74,    75,    75,    75,    76,    77,    77,    77,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     1,     2,     1,     0,     4,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     5,     1,     1,     7,     5,     9,     1,     0,
       2,     6,     5,     0,     7,     0,     4,     2,     7,     7,
       3,     0,     4,     0,     5,     1,     1,     1,     1,     0,
       2,     4,     0,     1,     3,     4,     2,     4,     5,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2
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
#line 115 "syntaxAnalyzer.y"
                                    { ex((yyvsp[0].nPtr));  }
#line 1619 "y.tab.c"
    break;

  case 4:
#line 120 "syntaxAnalyzer.y"
                                   { (yyval.nPtr) = opr(';',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr)); }
#line 1625 "y.tab.c"
    break;

  case 5:
#line 121 "syntaxAnalyzer.y"
                                   { (yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1631 "y.tab.c"
    break;

  case 6:
#line 122 "syntaxAnalyzer.y"
                                    { (yyval.nPtr) = opr(';',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1637 "y.tab.c"
    break;

  case 7:
#line 123 "syntaxAnalyzer.y"
                                    {  (yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1643 "y.tab.c"
    break;

  case 8:
#line 126 "syntaxAnalyzer.y"
                 {symbolTable.addBlock();}
#line 1649 "y.tab.c"
    break;

  case 9:
#line 126 "syntaxAnalyzer.y"
                                                             { (yyval.nPtr) = (yyvsp[-1].nPtr); symbolTable.closeBlock(); }
#line 1655 "y.tab.c"
    break;

  case 10:
#line 129 "syntaxAnalyzer.y"
                {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1661 "y.tab.c"
    break;

  case 11:
#line 130 "syntaxAnalyzer.y"
                           {(yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1667 "y.tab.c"
    break;

  case 12:
#line 131 "syntaxAnalyzer.y"
                           {(yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1673 "y.tab.c"
    break;

  case 13:
#line 132 "syntaxAnalyzer.y"
                           {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1679 "y.tab.c"
    break;

  case 14:
#line 133 "syntaxAnalyzer.y"
                                  {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1685 "y.tab.c"
    break;

  case 15:
#line 134 "syntaxAnalyzer.y"
                             {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1691 "y.tab.c"
    break;

  case 16:
#line 135 "syntaxAnalyzer.y"
                                     {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1697 "y.tab.c"
    break;

  case 17:
#line 136 "syntaxAnalyzer.y"
                                     {(yyval.nPtr) = (yyvsp[-1].nPtr); symbolTable.addRecord(); }
#line 1703 "y.tab.c"
    break;

  case 18:
#line 137 "syntaxAnalyzer.y"
                                    {(yyval.nPtr) = (yyvsp[-1].nPtr); }
#line 1709 "y.tab.c"
    break;

  case 19:
#line 138 "syntaxAnalyzer.y"
                                        { (yyval.nPtr) =opr(';',2,NULL,NULL); fprintf(stdout,"\t error near ; near line %d\n",yylineno); yyerrok; }
#line 1715 "y.tab.c"
    break;

  case 20:
#line 139 "syntaxAnalyzer.y"
                                        { (yyval.nPtr) =opr(';',2,NULL,NULL); fprintf(stdout,"\t error near )  near line %d\n",yylineno); yyerrok; }
#line 1721 "y.tab.c"
    break;

  case 21:
#line 140 "syntaxAnalyzer.y"
                                        { (yyval.nPtr) =opr(';',2,NULL,NULL); fprintf(stdout,"\t error near } near line %d\n",yylineno); yyerrok; }
#line 1727 "y.tab.c"
    break;

  case 22:
#line 143 "syntaxAnalyzer.y"
                                                                  {(yyval.nPtr) = opr(WHILE,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1733 "y.tab.c"
    break;

  case 23:
#line 146 "syntaxAnalyzer.y"
                         { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1739 "y.tab.c"
    break;

  case 24:
#line 147 "syntaxAnalyzer.y"
                          {(yyval.nPtr) = (yyvsp[0].nPtr); }
#line 1745 "y.tab.c"
    break;

  case 25:
#line 151 "syntaxAnalyzer.y"
                                                                                            {(yyval.nPtr)=opr(IF,3, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr)); }
#line 1751 "y.tab.c"
    break;

  case 26:
#line 157 "syntaxAnalyzer.y"
                                                                                    {(yyval.nPtr)=opr(IF,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1757 "y.tab.c"
    break;

  case 27:
#line 167 "syntaxAnalyzer.y"
                                                                                                      {(yyval.nPtr) = opr(FOR,4,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1763 "y.tab.c"
    break;

  case 28:
#line 169 "syntaxAnalyzer.y"
                                  {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1769 "y.tab.c"
    break;

  case 29:
#line 170 "syntaxAnalyzer.y"
              {symbolTable.forFlag = true;}
#line 1775 "y.tab.c"
    break;

  case 30:
#line 170 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr)=(yyvsp[0].nPtr);}
#line 1781 "y.tab.c"
    break;

  case 31:
#line 173 "syntaxAnalyzer.y"
                                                                       {(yyval.nPtr) = opr(DO,2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 1787 "y.tab.c"
    break;

  case 32:
#line 176 "syntaxAnalyzer.y"
                                                            {(yyval.nPtr)=opr(SWITCH,2,id((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr));}
#line 1793 "y.tab.c"
    break;

  case 33:
#line 179 "syntaxAnalyzer.y"
               {symbolTable.addBlock();}
#line 1799 "y.tab.c"
    break;

  case 34:
#line 179 "syntaxAnalyzer.y"
                                                                             {(yyval.nPtr) =opr(CASE,2,con((yyvsp[-4].intVal)),(yyvsp[-2].nPtr)); symbolTable.closeBlock();}
#line 1805 "y.tab.c"
    break;

  case 35:
#line 182 "syntaxAnalyzer.y"
                {symbolTable.addBlock();}
#line 1811 "y.tab.c"
    break;

  case 36:
#line 182 "syntaxAnalyzer.y"
                                                               {(yyval.nPtr) = opr(DEFAULT,1,(yyvsp[0].nPtr));symbolTable.closeBlock();}
#line 1817 "y.tab.c"
    break;

  case 37:
#line 183 "syntaxAnalyzer.y"
                                             {(yyval.nPtr) = opr(';',2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1823 "y.tab.c"
    break;

  case 38:
#line 186 "syntaxAnalyzer.y"
                                                                                         {(yyval.nPtr)=opr(FUNC,3,id((yyvsp[-4].realStringVal)),(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); 
                            symbolTable.currentRecord.type = "void";
                            symbolTable.currentRecord.name = (yyvsp[-4].realStringVal);
                            symbolTable.currentRecord.kind = "func";
                            symbolTable.addRecord();}
#line 1833 "y.tab.c"
    break;

  case 39:
#line 191 "syntaxAnalyzer.y"
                                                                                                     {(yyval.nPtr)=opr(FUNC,3,id((yyvsp[-4].realStringVal)),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));
                            symbolTable.currentRecord.name = (yyvsp[-4].realStringVal);
                            symbolTable.currentRecord.kind = "func";
                            symbolTable.addRecord();
                            }
#line 1843 "y.tab.c"
    break;

  case 40:
#line 198 "syntaxAnalyzer.y"
                                                  {(yyval.nPtr) = opr(RETURN,1,(yyvsp[-1].nPtr));}
#line 1849 "y.tab.c"
    break;

  case 41:
#line 201 "syntaxAnalyzer.y"
                       {symbolTable.addBlock();}
#line 1855 "y.tab.c"
    break;

  case 42:
#line 201 "syntaxAnalyzer.y"
                                                                         {(yyval.nPtr)=(yyvsp[-1].nPtr);symbolTable.closeBlock();}
#line 1861 "y.tab.c"
    break;

  case 43:
#line 202 "syntaxAnalyzer.y"
                        {symbolTable.addBlock();}
#line 1867 "y.tab.c"
    break;

  case 44:
#line 202 "syntaxAnalyzer.y"
                                                                                     {(yyval.nPtr) = opr(';',2,(yyvsp[-2].nPtr),(yyvsp[-1].nPtr));symbolTable.closeBlock();}
#line 1873 "y.tab.c"
    break;

  case 45:
#line 205 "syntaxAnalyzer.y"
               {(yyval.intVal) = (yyvsp[0].intVal);symbolTable.currentRecord.type = "int";}
#line 1879 "y.tab.c"
    break;

  case 46:
#line 206 "syntaxAnalyzer.y"
                 {(yyval.intVal) = (yyvsp[0].intVal);symbolTable.currentRecord.type = "float";}
#line 1885 "y.tab.c"
    break;

  case 47:
#line 207 "syntaxAnalyzer.y"
                {(yyval.intVal) = (yyvsp[0].intVal);symbolTable.currentRecord.type = "bool";}
#line 1891 "y.tab.c"
    break;

  case 48:
#line 208 "syntaxAnalyzer.y"
                   {(yyval.intVal) = (yyvsp[0].intVal);symbolTable.currentRecord.type = "char";}
#line 1897 "y.tab.c"
    break;

  case 49:
#line 210 "syntaxAnalyzer.y"
                    {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1903 "y.tab.c"
    break;

  case 50:
#line 211 "syntaxAnalyzer.y"
                                     {(yyval.nPtr) = arg((yyvsp[0].realStringVal));
             symbolTable.currentRecord.name = (yyvsp[0].realStringVal);
             symbolTable.currentRecord.kind = "par";
             symbolTable.funcFlag = true;
             symbolTable.addToFunc();}
#line 1913 "y.tab.c"
    break;

  case 51:
#line 216 "syntaxAnalyzer.y"
                                                            {(yyval.nPtr) = opr(';',2,(yyvsp[-3].nPtr),arg((yyvsp[0].realStringVal)));
        
             symbolTable.currentRecord.name = (yyvsp[0].realStringVal);
             symbolTable.currentRecord.kind = "par";
             symbolTable.funcFlag = true;
             symbolTable.addToFunc();}
#line 1924 "y.tab.c"
    break;

  case 52:
#line 223 "syntaxAnalyzer.y"
           {(yyval.nPtr) = opr(';',2,NULL,NULL);}
#line 1930 "y.tab.c"
    break;

  case 53:
#line 224 "syntaxAnalyzer.y"
                               {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1936 "y.tab.c"
    break;

  case 54:
#line 225 "syntaxAnalyzer.y"
                                               {(yyval.nPtr) = opr(';',2,(yyvsp[0].nPtr),(yyvsp[-2].nPtr));}
#line 1942 "y.tab.c"
    break;

  case 55:
#line 228 "syntaxAnalyzer.y"
                                                  {(yyval.nPtr) = opr(FUNC,2,id((yyvsp[-3].realStringVal)),(yyvsp[-1].nPtr));}
#line 1948 "y.tab.c"
    break;

  case 56:
#line 231 "syntaxAnalyzer.y"
                                             {(yyval.nPtr) = opr(';',2,NULL,NULL); 
                    symbolTable.currentRecord.kind = "Var";
                    symbolTable.currentRecord.name = (yyvsp[0].realStringVal);}
#line 1956 "y.tab.c"
    break;

  case 57:
#line 234 "syntaxAnalyzer.y"
                                                                     {(yyval.nPtr) = opr('=',2,arg((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr)); 
                    symbolTable.currentRecord.kind = "Var";
                    symbolTable.currentRecord.name = (yyvsp[-2].realStringVal);}
#line 1964 "y.tab.c"
    break;

  case 58:
#line 237 "syntaxAnalyzer.y"
                                                                              {(yyval.nPtr) = opr('=',2,arg((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr));
                    symbolTable.currentRecord.kind = "Const";
                    symbolTable.currentRecord.name = (yyvsp[-2].realStringVal);}
#line 1972 "y.tab.c"
    break;

  case 59:
#line 242 "syntaxAnalyzer.y"
               {(yyval.nPtr) = con((yyvsp[0].intVal));}
#line 1978 "y.tab.c"
    break;

  case 60:
#line 243 "syntaxAnalyzer.y"
                 {(yyval.nPtr) = conF((yyvsp[0].floatVal));}
#line 1984 "y.tab.c"
    break;

  case 61:
#line 244 "syntaxAnalyzer.y"
                {(yyval.nPtr) = conB((yyvsp[0].boolVal)); }
#line 1990 "y.tab.c"
    break;

  case 62:
#line 245 "syntaxAnalyzer.y"
                  {(yyval.nPtr) = conC((yyvsp[0].stringVal));}
#line 1996 "y.tab.c"
    break;

  case 63:
#line 248 "syntaxAnalyzer.y"
                                                  {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2002 "y.tab.c"
    break;

  case 64:
#line 249 "syntaxAnalyzer.y"
                                  {(yyval.nPtr) =id((yyvsp[0].realStringVal));symbolTable.checkIdentifier((yyvsp[0].realStringVal),yylineno); symbolTable.addMatches((yyvsp[0].realStringVal)) ; }
#line 2008 "y.tab.c"
    break;

  case 65:
#line 250 "syntaxAnalyzer.y"
                            { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2014 "y.tab.c"
    break;

  case 66:
#line 251 "syntaxAnalyzer.y"
                                         { (yyval.nPtr) = (yyvsp[0].nPtr); }
#line 2020 "y.tab.c"
    break;

  case 67:
#line 252 "syntaxAnalyzer.y"
                                              {(yyval.nPtr) = (yyvsp[0].nPtr);  }
#line 2026 "y.tab.c"
    break;

  case 68:
#line 254 "syntaxAnalyzer.y"
                                                             {(yyval.nPtr) = opr('=',2,arg((yyvsp[-2].realStringVal)),(yyvsp[0].nPtr)); symbolTable.checkIdentifier((yyvsp[-2].realStringVal),yylineno) ; symbolTable.addMatches((yyvsp[-2].realStringVal)); symbolTable.checkIdentifiersType(yylineno);}
#line 2032 "y.tab.c"
    break;

  case 69:
#line 255 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr('+',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr)); symbolTable.checkIdentifiersType(yylineno); }
#line 2038 "y.tab.c"
    break;

  case 70:
#line 257 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr('-',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));symbolTable.checkIdentifiersType(yylineno);}
#line 2044 "y.tab.c"
    break;

  case 71:
#line 258 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr('*',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2050 "y.tab.c"
    break;

  case 72:
#line 259 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr('/',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));symbolTable.checkIdentifiersType(yylineno);}
#line 2056 "y.tab.c"
    break;

  case 73:
#line 260 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr('%',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2062 "y.tab.c"
    break;

  case 74:
#line 261 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr('^',2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2068 "y.tab.c"
    break;

  case 75:
#line 262 "syntaxAnalyzer.y"
                                                                 {(yyval.nPtr) = opr(AND,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2074 "y.tab.c"
    break;

  case 76:
#line 263 "syntaxAnalyzer.y"
                                                                {(yyval.nPtr) = opr(OR,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2080 "y.tab.c"
    break;

  case 77:
#line 264 "syntaxAnalyzer.y"
                                                                          {(yyval.nPtr) = opr(GREATER_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2086 "y.tab.c"
    break;

  case 78:
#line 265 "syntaxAnalyzer.y"
                                                                           {(yyval.nPtr) = opr(GREATER_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2092 "y.tab.c"
    break;

  case 79:
#line 266 "syntaxAnalyzer.y"
                                                                       {(yyval.nPtr) = opr(LESS_THAN,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2098 "y.tab.c"
    break;

  case 80:
#line 267 "syntaxAnalyzer.y"
                                                                        {(yyval.nPtr) = opr(LESS_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2104 "y.tab.c"
    break;

  case 81:
#line 268 "syntaxAnalyzer.y"
                                                                   {(yyval.nPtr) = opr(EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2110 "y.tab.c"
    break;

  case 82:
#line 269 "syntaxAnalyzer.y"
                                                                       {(yyval.nPtr) = opr(NOT_EQUAL,2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2116 "y.tab.c"
    break;

  case 83:
#line 270 "syntaxAnalyzer.y"
                                             {(yyval.nPtr) = opr(NOT,1,(yyvsp[0].nPtr));}
#line 2122 "y.tab.c"
    break;


#line 2126 "y.tab.c"

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
#line 272 "syntaxAnalyzer.y"


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
    
    //fprintf(" %s near line %d ",s,yylineno); 
    //fprintf(stdout, "%s\n", s);
}

int main(void) {
    // yydebug = 1; // This is new
    yyparse();
    return 0;
}
