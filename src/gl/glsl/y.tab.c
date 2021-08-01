
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "grammar.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int yylex(void);
extern void yyerror(char *);
extern int yyparse();
extern int yyrestart(FILE*);

typedef struct yy_buffer_state * YY_BUFFER_STATE;
extern YY_BUFFER_STATE yy_scan_string(const char * str);
extern void yy_delete_buffer(YY_BUFFER_STATE yy_buffer);

#include "parse.h"
#include "symbols.h"

static int syntax_check;
static int layout_status = LAYOUT_UNDEF;
static int io_status = NORMAL_VAR;
static int dtype = TYPE_VOID;

void reset_status_flags(){
	layout_status = LAYOUT_UNDEF;
	io_status = NORMAL_VAR;
	dtype = TYPE_VOID;
}



/* Line 189 of yacc.c  */
#line 104 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IN = 258,
     OUT = 259,
     LAYOUT = 260,
     LOC = 261,
     UNIFORM = 262,
     MAT4 = 263,
     MAT3 = 264,
     MAT2 = 265,
     VEC4 = 266,
     VEC3 = 267,
     VEC2 = 268,
     SAMPLER2D = 269,
     LEFT_PAREN = 270,
     RIGHT_PAREN = 271,
     LEFT_BRACE = 272,
     RIGHT_BRACE = 273,
     EQ = 274,
     SEMICOLON = 275,
     DOT = 276,
     COMMA = 277,
     FLOAT = 278,
     DOUBLE = 279,
     INT = 280,
     VOID = 281,
     BOOL = 282,
     IDENTIFIER = 283,
     INTCONSTANT = 284,
     FLOATCONSTANT = 285,
     SIMPLESTATEMENT = 286
   };
#endif
/* Tokens.  */
#define IN 258
#define OUT 259
#define LAYOUT 260
#define LOC 261
#define UNIFORM 262
#define MAT4 263
#define MAT3 264
#define MAT2 265
#define VEC4 266
#define VEC3 267
#define VEC2 268
#define SAMPLER2D 269
#define LEFT_PAREN 270
#define RIGHT_PAREN 271
#define LEFT_BRACE 272
#define RIGHT_BRACE 273
#define EQ 274
#define SEMICOLON 275
#define DOT 276
#define COMMA 277
#define FLOAT 278
#define DOUBLE 279
#define INT 280
#define VOID 281
#define BOOL 282
#define IDENTIFIER 283
#define INTCONSTANT 284
#define FLOATCONSTANT 285
#define SIMPLESTATEMENT 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 59 "grammar.y"

	char* str;
	buffer_t* buf;
	int intval;
	float floatval;
	/* double doubleval; */
	/* unsigned int uintval; */



/* Line 214 of yacc.c  */
#line 213 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   73

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNRULES -- Number of states.  */
#define YYNSTATES  65

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    17,    21,
      24,    27,    31,    35,    37,    41,    44,    46,    49,    53,
      55,    58,    60,    62,    64,    66,    69,    71,    73,    75,
      77,    79,    81,    83,    85,    87,    89,    91,    93,    95,
      98,   100,   102,   104,   106,   108,   115,   117,   119
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    34,    -1,    35,    -1,    34,    35,    -1,
      36,    -1,    37,    -1,    38,    20,    -1,    46,    52,    20,
      -1,    38,    42,    -1,    39,    16,    -1,    39,    40,    16,
      -1,    46,    53,    15,    -1,    41,    -1,    40,    22,    41,
      -1,    47,    52,    -1,    47,    -1,    17,    18,    -1,    17,
      43,    18,    -1,    44,    -1,    43,    44,    -1,    42,    -1,
      45,    -1,    31,    -1,    47,    -1,    48,    47,    -1,    26,
      -1,    23,    -1,    24,    -1,    25,    -1,    27,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,    49,    -1,    48,    49,    -1,    50,    -1,
      51,    -1,     3,    -1,     4,    -1,     7,    -1,     5,    15,
       6,    19,    54,    16,    -1,    28,    -1,    28,    -1,    29,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,   101,   104,   109,   116,   124,   129,   144,
     153,   159,   171,   187,   191,   202,   211,   219,   225,   237,
     238,   247,   248,   251,   260,   261,   264,   269,   274,   279,
     284,   289,   294,   299,   304,   309,   314,   319,   327,   328,
     331,   332,   335,   339,   343,   349,   355,   361,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IN", "OUT", "LAYOUT", "LOC", "UNIFORM",
  "MAT4", "MAT3", "MAT2", "VEC4", "VEC3", "VEC2", "SAMPLER2D",
  "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACE", "RIGHT_BRACE", "EQ",
  "SEMICOLON", "DOT", "COMMA", "FLOAT", "DOUBLE", "INT", "VOID", "BOOL",
  "IDENTIFIER", "INTCONSTANT", "FLOATCONSTANT", "SIMPLESTATEMENT",
  "$accept", "root", "translation_unit", "glsl_code", "decl_expression",
  "def_function", "function_prototype", "function_header", "params_list",
  "parameter_declaration", "compound_statement", "statements_list",
  "statement", "simple_statement", "full_type", "type_specifier",
  "type_descriptors_list", "type_descriptor", "io_decl", "layout_decl",
  "variable_name", "function_name", "layout_val", 0
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
     285,   286
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      38,    38,    39,    40,    40,    41,    41,    42,    42,    43,
      43,    44,    44,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      49,    49,    50,    50,    50,    51,    52,    53,    54
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     3,     2,
       2,     3,     3,     1,     3,     2,     1,     2,     3,     1,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     6,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    42,    43,     0,    44,    31,    32,    33,    34,    35,
      36,    37,    27,    28,    29,    26,    30,     0,     2,     3,
       5,     6,     0,     0,     0,    24,     0,    38,    40,    41,
       0,     1,     4,     0,     7,     9,    10,     0,    13,    16,
      46,     0,     0,    25,    39,     0,    17,    23,    21,     0,
      19,    22,    11,     0,    46,    15,     8,    12,     0,    18,
      20,    14,    48,     0,    45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    21,    22,    23,    37,    38,
      48,    49,    50,    51,    24,    25,    26,    27,    28,    29,
      41,    42,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -24
static const yytype_int8 yypact[] =
{
       1,   -24,   -24,   -13,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,    17,     1,   -24,
     -24,   -24,    -1,    23,   -10,   -24,     1,   -24,   -24,   -24,
      14,   -24,   -24,    27,   -24,   -24,   -24,   -15,   -24,    -7,
       7,     3,    25,   -24,   -24,    10,   -24,   -24,   -24,    42,
     -24,   -24,   -24,    43,   -24,   -24,   -24,   -24,     9,   -24,
     -24,   -24,   -24,    26,   -24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -24,   -24,   -24,    44,   -24,   -24,   -24,   -24,   -24,   -12,
      21,   -24,    12,   -24,   -24,   -23,   -24,    37,   -24,   -24,
      32,   -24,   -24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -48
static const yytype_int8 yytable[] =
{
      39,    52,    30,    43,     1,     2,     3,    53,     4,     5,
       6,     7,     8,     9,    10,    11,    33,    31,    40,    34,
      45,    54,   -47,    56,    12,    13,    14,    15,    16,    58,
      39,     5,     6,     7,     8,     9,    10,    11,    62,    36,
      57,    61,    64,    35,    33,    46,    12,    13,    14,    15,
      16,     5,     6,     7,     8,     9,    10,    11,    47,    33,
      59,    60,    32,    44,     0,     0,    12,    13,    14,    15,
      16,    55,     0,    47
};

static const yytype_int8 yycheck[] =
{
      23,    16,    15,    26,     3,     4,     5,    22,     7,     8,
       9,    10,    11,    12,    13,    14,    17,     0,    28,    20,
       6,    28,    15,    20,    23,    24,    25,    26,    27,    19,
      53,     8,     9,    10,    11,    12,    13,    14,    29,    16,
      15,    53,    16,    22,    17,    18,    23,    24,    25,    26,
      27,     8,     9,    10,    11,    12,    13,    14,    31,    17,
      18,    49,    18,    26,    -1,    -1,    23,    24,    25,    26,
      27,    39,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    14,    23,    24,    25,    26,    27,    33,    34,    35,
      36,    37,    38,    39,    46,    47,    48,    49,    50,    51,
      15,     0,    35,    17,    20,    42,    16,    40,    41,    47,
      28,    52,    53,    47,    49,     6,    18,    31,    42,    43,
      44,    45,    16,    22,    28,    52,    20,    15,    19,    18,
      44,    41,    29,    54,    16
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 94 "grammar.y"
    {
	// interset a few inner variables
	emplace_profile("gl_Position", INNER_VAR, TYPE_VEC4, LAYOUT_UNDEF);
	emplace_profile("gl_FragColor", INNER_VAR, TYPE_VEC4, LAYOUT_UNDEF);
	// printf("////////// TRANSLATION_UNIT_PARSED //////////\n");
}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 101 "grammar.y"
    {
					// printf("\n");
				}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 104 "grammar.y"
    {
					// printf("\n");
				}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 109 "grammar.y"
    {
			/* translate glsl code and append to output code buffer */ 
			register_code(&parser_out, (yyvsp[(1) - (1)].buf)->data);
			free_buffer((yyvsp[(1) - (1)].buf));
			free((yyvsp[(1) - (1)].buf));
			reset_status_flags();
		 }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 116 "grammar.y"
    {
			register_code(&parser_out, (yyvsp[(1) - (1)].buf)->data);
			free_buffer((yyvsp[(1) - (1)].buf));
			free((yyvsp[(1) - (1)].buf));
			reset_status_flags();
		 }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 124 "grammar.y"
    {
					buffer_t * tmp_buf = (yyvsp[(1) - (2)].buf);
					register_code(tmp_buf, ";\n");
					(yyval.buf) = tmp_buf;
				}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 129 "grammar.y"
    {
					/* variable decl in shader */
				   	buffer_t * tmp_buf = (buffer_t*)malloc(sizeof(buffer_t));
				   	init_buffer(tmp_buf, 300);
				   	register_code(tmp_buf, (yyvsp[(1) - (3)].str));
				   	register_code(tmp_buf, (yyvsp[(2) - (3)].str));
					register_code(tmp_buf, " ;\n");
					/* register io flags */
					emplace_profile((yyvsp[(2) - (3)].str), io_status, dtype, layout_status);
				   	/* free the allocated space by strdup */
					free((yyvsp[(2) - (3)].str));
					(yyval.buf) = tmp_buf;
			   	}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 144 "grammar.y"
    {
				buffer_t * tmp_buf = (yyvsp[(1) - (2)].buf);
				register_code(tmp_buf, (yyvsp[(2) - (2)].buf)->data);
				free_buffer((yyvsp[(2) - (2)].buf));
				free((yyvsp[(2) - (2)].buf));
				(yyval.buf) = tmp_buf;
			}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 153 "grammar.y"
    {
						buffer_t* tmp_buf = (yyvsp[(1) - (2)].buf);
						register_code(tmp_buf, ")");
						(yyval.buf) = tmp_buf;
						// printf("\nend functional without params\n");
					}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 159 "grammar.y"
    {
					  	// printf("\nend functional with params\n");
						buffer_t * tmp_buf1 = (yyvsp[(1) - (3)].buf);
						buffer_t * tmp_buf2 = (yyvsp[(2) - (3)].buf);
						register_code(tmp_buf1, tmp_buf2->data);
						register_code(tmp_buf1, ")");
						(yyval.buf) = tmp_buf1;
						free_buffer(tmp_buf2);
						free(tmp_buf2);
					}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 171 "grammar.y"
    {
					// printf("begin functional: \n    ");
					buffer_t* tmp_buf = (buffer_t*)malloc(sizeof(buffer_t));
					init_buffer(tmp_buf, 300);
					register_code(tmp_buf, (yyvsp[(1) - (3)].str));
					if (!strcmp((yyvsp[(2) - (3)].str), "main")){
						register_code(tmp_buf, " glsl_");
					}
					register_code(tmp_buf, (yyvsp[(2) - (3)].str));
					register_code(tmp_buf, " ( ");
					/* pass the collected code buffer up */
					(yyval.buf) = tmp_buf; 
					/* free the allocated space by strdup */
					free((yyvsp[(2) - (3)].str));
				}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 187 "grammar.y"
    {
				/* pass it directly */
				(yyval.buf) = (yyvsp[(1) - (1)].buf); 
			}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 191 "grammar.y"
    {
				buffer_t* tmp_buf1 = (yyvsp[(1) - (3)].buf);
				buffer_t* tmp_buf2 = (yyvsp[(3) - (3)].buf);
				register_code(tmp_buf1, " , ");
				register_code(tmp_buf1, tmp_buf2->data);
				(yyval.buf) = tmp_buf1;
				free_buffer(tmp_buf2);
				free(tmp_buf2);
			}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 202 "grammar.y"
    {
							buffer_t* tmp_buf = (buffer_t*)malloc(sizeof(buffer_t));
							init_buffer(tmp_buf, 300);
							register_code(tmp_buf, (yyvsp[(1) - (2)].str));
							register_code(tmp_buf, (yyvsp[(2) - (2)].str));
							// printf("%s\t", $2);
							free((yyvsp[(2) - (2)].str));
							(yyval.buf) = tmp_buf;
						}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 211 "grammar.y"
    {
						 	buffer_t* tmp_buf = (buffer_t*)malloc(sizeof(buffer_t));
							init_buffer(tmp_buf, 300);
							register_code(tmp_buf, (yyvsp[(1) - (1)].str));
							(yyval.buf) = tmp_buf;
					 	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 219 "grammar.y"
    {
						buffer_t* comp_buf = (buffer_t*)malloc(sizeof(buffer_t));
						init_buffer(comp_buf, 10);
						register_code(comp_buf, "\n{}\n");
						(yyval.buf) = comp_buf;
					}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 225 "grammar.y"
    {
						buffer_t* comp_buf = (buffer_t*)malloc(sizeof(buffer_t));
						init_buffer(comp_buf, (yyvsp[(2) - (3)].buf)->size + 10);
						register_code(comp_buf, "\n{\n");
						register_code(comp_buf, (yyvsp[(2) - (3)].buf)->data);
						register_code(comp_buf, "\n}\n");
						free_buffer((yyvsp[(2) - (3)].buf));
						free((yyvsp[(2) - (3)].buf));
						(yyval.buf) = comp_buf;
					}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 237 "grammar.y"
    {(yyval.buf) = (yyvsp[(1) - (1)].buf);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 238 "grammar.y"
    {
				buffer_t* statement_list_buf = (yyvsp[(1) - (2)].buf);
				register_code(statement_list_buf, (yyvsp[(2) - (2)].buf)->data);
				free_buffer((yyvsp[(2) - (2)].buf));
				free((yyvsp[(2) - (2)].buf));
				(yyval.buf) = statement_list_buf;
			}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 247 "grammar.y"
    {(yyval.buf) = (yyvsp[(1) - (1)].buf);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 248 "grammar.y"
    {(yyval.buf) = (yyvsp[(1) - (1)].buf);}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 251 "grammar.y"
    {
					buffer_t* statement_buf = (buffer_t*)malloc(sizeof(buffer_t));
					init_buffer(statement_buf, 300);
					register_code(statement_buf, (yyvsp[(1) - (1)].str));
					free((yyvsp[(1) - (1)].str));
					(yyval.buf) = statement_buf;
				}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 260 "grammar.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 261 "grammar.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 264 "grammar.y"
    {
							// printf("void \t"); 
							(yyval.str) = " void "; 
							dtype = TYPE_VOID;
						}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 269 "grammar.y"
    {
				  			// printf("float \t"); 
							(yyval.str) = " float "; 
							dtype = TYPE_FLOAT;
						}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 274 "grammar.y"
    {
				  			// printf("double \t"); 
							(yyval.str) = " double "; 
							dtype = TYPE_DOUBLE;
						}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 279 "grammar.y"
    {
				  			// printf("int \t"); 
							(yyval.str) = " int "; 
							dtype = TYPE_INT;
						}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 284 "grammar.y"
    {
				  			// printf("bool \t"); 
							(yyval.str) = " bool "; 
							dtype = TYPE_BOOL;
						}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 289 "grammar.y"
    {
				  			// printf("mat4 \t"); 
							(yyval.str) = " mat4 "; 
							dtype = TYPE_MAT4;
						}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 294 "grammar.y"
    {
				  			// printf("mat3 \t"); 
							(yyval.str) = " mat3 "; 
							dtype = TYPE_MAT3;
						}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 299 "grammar.y"
    {
				  			// printf("mat2 \t"); 
							(yyval.str) = " mat2 "; 
							dtype = TYPE_MAT2;
						}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 304 "grammar.y"
    {
				  			// printf("vec4 \t"); 
							(yyval.str) = " vec4 "; 
							dtype = TYPE_VEC4;
						}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 309 "grammar.y"
    {
				  			// printf("vec3 \t"); 
							(yyval.str) = " vec3 "; 
							dtype = TYPE_VEC3;
						}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 314 "grammar.y"
    {
							// printf("vec2 \t"); 
							(yyval.str) = " vec2 "; 
							dtype = TYPE_VEC2;
						}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 320 "grammar.y"
    {
							// printf("sampler2D \t"); 
							(yyval.str) = " sampler2D ";
							dtype = TYPE_SAMPLER2D;
			  			}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 335 "grammar.y"
    {
			io_status = INPUT_VAR;
			// printf("input var\t");
		}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 339 "grammar.y"
    {
		   	io_status = OUTPUT_VAR;
		   	// printf("output var\t");
		}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 343 "grammar.y"
    {
		   	io_status = UNIFORM_VAR;
		   	// printf("uniform var\t");
		}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 349 "grammar.y"
    {
				// printf("layout num %d\t", $5);
				layout_status = (yyvsp[(5) - (6)].intval);
			}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 356 "grammar.y"
    {
							(yyval.str) = (yyvsp[(1) - (1)].str); 
							// printf("var name %s\t", $1);
						}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 362 "grammar.y"
    {
							(yyval.str) = (yyvsp[(1) - (1)].str); 
							// printf("func name %s\t", $1);
						}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 367 "grammar.y"
    {(yyval.intval) = (yyvsp[(1) - (1)].intval);}
    break;



/* Line 1455 of yacc.c  */
#line 1968 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 370 "grammar.y"


void yyerror(char *str){
	syntax_check = -1;
    fprintf(stderr,"error:%s\n",str);
}

int yywrap(){
    return 1;
}

int parse_file(const char* filename, char** output_buffer, int* buf_size)
{
	syntax_check = 0;
	FILE* fp = fopen(filename, "r");
	/* printf("opening file: %s\n", filename); */
	if (fp){
		yyrestart(fp);
	}
	init_buffer(&parser_out, 1000);
	reset_status_flags();
	/* printf("ready to parse\n\n"); */
    yyparse();
	/* print_profile(); */
	generate_data_path(&parser_out);
	fclose(fp);
	*output_buffer = parser_out.data;
	*buf_size = parser_out.size;
	free_lexer_buffer();
	return syntax_check;
}

int parse_string(const char* str, char** output_buffer, int* buf_size)
{
	syntax_check = 0;
    YY_BUFFER_STATE yy_buffer = yy_scan_string(str);
	init_buffer(&parser_out, 1000);
	reset_status_flags();
	/* printf("////////// TRANSLATION_UNIT_BEGIN //////////\n"); */
    yyparse();
	/* print_profile(); */
	generate_data_path(&parser_out);
    yy_delete_buffer(yy_buffer);
	*output_buffer = parser_out.data;
	*buf_size = parser_out.size;
	free_lexer_buffer();
	return syntax_check;
}
