/* A Bison parser, made from ASN1.y
   by GNU bison 1.32.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	ASSIG	257
# define	NUM	258
# define	IDENTIFIER	259
# define	OPTIONAL	260
# define	INTEGER	261
# define	SIZE	262
# define	OCTET	263
# define	STRING	264
# define	SEQUENCE	265
# define	BIT	266
# define	UNIVERSAL	267
# define	PRIVATE	268
# define	APPLICATION	269
# define	DEFAULT	270
# define	CHOICE	271
# define	OF	272
# define	OBJECT	273
# define	STR_IDENTIFIER	274
# define	BOOLEAN	275
# define	TRUE	276
# define	FALSE	277
# define	TOKEN_NULL	278
# define	ANY	279
# define	DEFINED	280
# define	BY	281
# define	SET	282
# define	EXPLICIT	283
# define	IMPLICIT	284
# define	DEFINITIONS	285
# define	TAGS	286
# define	BEGIN	287
# define	END	288
# define	UTCTime	289
# define	GeneralizedTime	290
# define	FROM	291
# define	IMPORTS	292
# define	ENUMERATED	293

#line 29 "ASN1.y"
 
#include <int.h> 
#include <errors.h>
#include <parser_aux.h>
#include <structure.h>


FILE *file_asn1;            /* Pointer to file to parse */
asn1_retCode result_parse;  /* result of the parser algorithm */
node_asn *p_tree;        /* pointer to the root of the structure 
                            created by the parser*/     
unsigned long lineNumber; /* line number describing the parser position 
                             inside the file */
char lastToken[MAX_NAME_SIZE+1];      /* last token find in the file to parse before the
                                         'parse error' */ 
char identifierMissing[MAX_NAME_SIZE+1]; /* identifier name not found */
char *fileName;           /* file to parse */

int yyerror (char *);
int yylex(void);


#line 53 "ASN1.y"
#ifndef YYSTYPE
typedef union {
  unsigned int constant;
  char str[MAX_NAME_SIZE+1];
  node_asn* node;
} yystype;
# define YYSTYPE yystype
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		180
#define	YYFLAG		-32768
#define	YYNTBASE	50

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 293 ? yytranslate[x] : 90)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,    40,    44,    41,    49,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     9,    11,    14,    17,    19,    21,    23,    25,
      27,    29,    33,    38,    40,    44,    46,    51,    53,    56,
      58,    60,    62,    66,    71,    73,    76,    79,    82,    85,
      88,    90,    95,   103,   105,   107,   109,   114,   122,   124,
     128,   131,   135,   140,   142,   146,   149,   155,   160,   163,
     165,   168,   170,   172,   174,   176,   178,   180,   182,   184,
     186,   188,   190,   192,   194,   197,   199,   202,   205,   208,
     210,   214,   219,   223,   228,   233,   237,   242,   247,   249,
     254,   258,   266,   273,   278,   280,   282,   284,   287,   292,
     296,   298
};
static const short yyrhs[] =
{
      88,    31,    89,    32,     3,    33,    87,    34,     0,     4,
       0,    40,     4,     0,    41,     4,     0,    51,     0,    52,
       0,     4,     0,     5,     0,    53,     0,     5,     0,    42,
      53,    43,     0,     5,    42,    53,    43,     0,    56,     0,
      57,    44,    56,     0,    54,     0,     5,    42,     4,    43,
       0,    58,     0,    59,    58,     0,    13,     0,    14,     0,
      15,     0,    45,     4,    46,     0,    45,    60,     4,    46,
       0,    61,     0,    61,    29,     0,    61,    30,     0,    16,
      55,     0,    16,    22,     0,    16,    23,     0,     7,     0,
       7,    47,    57,    48,     0,    64,    42,    54,    49,    49,
      54,    43,     0,    21,     0,    35,     0,    36,     0,     8,
      42,    54,    43,     0,     8,    42,    54,    49,    49,    54,
      43,     0,    67,     0,    42,    67,    43,     0,     9,    10,
       0,     9,    10,    68,     0,     5,    42,     4,    43,     0,
      70,     0,    71,    44,    70,     0,    12,    10,     0,    12,
      10,    47,    71,    48,     0,    39,    47,    71,    48,     0,
      19,    20,     0,     5,     0,     5,    68,     0,    64,     0,
      73,     0,    65,     0,    66,     0,    69,     0,    72,     0,
      80,     0,    74,     0,    82,     0,    83,     0,    81,     0,
      24,     0,    75,     0,    62,    75,     0,    76,     0,    76,
      63,     0,    76,     6,     0,     5,    77,     0,    78,     0,
      79,    44,    78,     0,    11,    47,    79,    48,     0,    11,
      18,    75,     0,    11,    68,    18,    75,     0,    28,    47,
      79,    48,     0,    28,    18,    75,     0,    28,    68,    18,
      75,     0,    17,    47,    79,    48,     0,    25,     0,    25,
      26,    27,     5,     0,     5,     3,    76,     0,     5,    19,
      20,     3,    47,    59,    48,     0,     5,     5,     3,    47,
      59,    48,     0,     5,     7,     3,    53,     0,    84,     0,
      85,     0,    86,     0,    87,    86,     0,     5,    47,    59,
      48,     0,     5,    47,    48,     0,    29,     0,    30,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   113,   126,   127,   130,   134,   135,   138,   139,   142,
     143,   146,   148,   153,   154,   158,   160,   165,   166,   170,
     171,   172,   175,   177,   181,   182,   183,   186,   188,   189,
     192,   193,   195,   202,   205,   206,   209,   211,   217,   218,
     221,   222,   226,   231,   232,   236,   237,   242,   248,   251,
     253,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   270,   271,   276,   277,   280,   283,   286,
     287,   291,   293,   295,   300,   302,   304,   309,   313,   314,
     319,   322,   326,   331,   337,   338,   341,   342,   346,   349,
     373,   374
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "\"::=\"", "NUM", "IDENTIFIER", "OPTIONAL", 
  "INTEGER", "SIZE", "OCTET", "STRING", "SEQUENCE", "BIT", "UNIVERSAL", 
  "PRIVATE", "APPLICATION", "DEFAULT", "CHOICE", "OF", "OBJECT", 
  "STR_IDENTIFIER", "BOOLEAN", "TRUE", "FALSE", "TOKEN_NULL", "ANY", 
  "DEFINED", "BY", "SET", "EXPLICIT", "IMPLICIT", "DEFINITIONS", "TAGS", 
  "BEGIN", "END", "UTCTime", "GeneralizedTime", "FROM", "IMPORTS", 
  "ENUMERATED", "'+'", "'-'", "'('", "')'", "','", "'['", "']'", "'{'", 
  "'}'", "'.'", "definitions", "pos_num", "neg_num", "pos_neg_num", 
  "num_identifier", "pos_neg_identifier", "constant", "constant_list", 
  "obj_constant", "obj_constant_list", "class", "tag_type", "tag", 
  "default", "integer_def", "boolean_def", "Time", "size_def2", 
  "size_def", "octet_string_def", "bit_element", "bit_element_list", 
  "bit_string_def", "enumerated_def", "object_def", "type_assig_right", 
  "type_assig_right_tag", "type_assig_right_tag_default", "type_assig", 
  "type_assig_list", "sequence_def", "set_def", "choise_def", "any_def", 
  "type_def", "constant_def", "type_constant", "type_constant_list", 
  "definitions_id", "explicit_implicit", NULL
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,    50,    51,    51,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    60,    61,    61,    62,    62,    62,    63,    63,    63,
      64,    64,    64,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    71,    71,    72,    72,    73,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    77,    78,    79,
      79,    80,    80,    80,    81,    81,    81,    82,    83,    83,
      84,    85,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     8,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     1,     4,     1,     2,     1,
       1,     1,     3,     4,     1,     2,     2,     2,     2,     2,
       1,     4,     7,     1,     1,     1,     4,     7,     1,     3,
       2,     3,     4,     1,     3,     2,     5,     4,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     1,
       3,     4,     3,     4,     4,     3,     4,     4,     1,     4,
       3,     7,     6,     4,     1,     1,     1,     2,     4,     3,
       1,     1
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,    89,    15,    17,
       0,    90,    91,     0,     0,    88,    18,     0,     0,     0,
      16,     0,     0,    84,    85,    86,     0,     0,     0,     0,
       0,     1,    87,    49,    30,     0,     0,     0,     0,     0,
      33,    62,    78,     0,    34,    35,     0,     0,    24,     0,
      51,    53,    54,    55,    56,    52,    58,    63,    80,    57,
      61,    59,    60,     0,     0,     0,     0,     0,    38,    50,
       0,    40,     0,     0,     0,    45,     0,    48,     0,     0,
       0,     0,     0,     0,    19,    20,    21,     0,    25,    26,
      64,     0,     0,     2,     0,     0,     5,     6,    83,     0,
       0,     0,     0,     0,    13,     0,    41,    72,     0,    69,
       0,     0,     0,     0,     0,    75,     0,     0,     0,    43,
       0,    22,     0,     8,     0,     0,     3,     4,     0,     0,
      39,     0,     0,     0,    31,    65,    68,     0,    71,    73,
       0,    77,    79,    74,    76,     0,     0,    47,    23,     0,
      82,     0,    36,     0,     0,    11,    14,    67,     0,    66,
      70,    46,     0,    44,     0,    81,     0,    12,    10,    28,
      29,     9,    27,    42,     0,     0,    32,    37,     0,     0,
       0
};

static const short yydefgoto[] =
{
     178,    96,    97,    98,     8,   172,   104,   105,     9,    10,
      87,    48,    49,   159,    50,    51,    52,    68,    69,    53,
     119,   120,    54,    55,    56,    57,    58,   136,   109,   110,
      59,    60,    61,    62,    23,    24,    25,    26,     2,    13
};

static const short yypact[] =
{
      10,   -24,     9,     0,    91,-32768,    36,-32768,-32768,-32768,
       2,-32768,-32768,    52,    42,-32768,-32768,   106,    82,    53,
  -32768,   121,    14,-32768,-32768,-32768,    11,    32,   124,   125,
     109,-32768,-32768,     5,    84,   120,    12,   122,    86,   114,
  -32768,-32768,   110,    54,-32768,-32768,    88,    99,    94,    83,
      95,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,    92,    25,   135,    98,   134,-32768,-32768,
      19,     5,    83,   138,   126,   100,   138,-32768,   118,    83,
     138,   128,   143,   103,-32768,-32768,-32768,   146,-32768,-32768,
  -32768,    30,   101,-32768,   147,   148,-32768,-32768,-32768,   107,
      30,   112,   111,    25,-32768,   -30,-32768,-32768,    32,-32768,
      -6,    83,   143,    35,   151,-32768,    41,    83,   115,-32768,
      43,-32768,   113,-32768,   116,     4,-32768,-32768,   101,   -21,
  -32768,    25,   117,    19,-32768,    20,-32768,   138,-32768,-32768,
      49,-32768,-32768,-32768,-32768,   154,   143,-32768,-32768,   119,
  -32768,     7,-32768,   123,   127,-32768,-32768,-32768,    76,-32768,
  -32768,-32768,   130,-32768,    30,-32768,    30,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   131,   132,-32768,-32768,   161,   162,
  -32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,  -100,   -90,-32768,    31,-32768,   -10,   -65,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,    96,    39,-32768,
      21,    57,-32768,-32768,-32768,   -47,    58,-32768,    34,    -7,
  -32768,-32768,-32768,-32768,-32768,-32768,   150,-32768,-32768,-32768
};


#define	YYLAST		176


static const short yytable[] =
{
      16,   124,    90,   132,     5,     6,     5,     6,     5,     6,
     129,     5,     6,    66,   133,     1,    22,    27,   134,    28,
      66,    29,   152,     3,   102,   107,   157,   125,   153,    93,
      72,   154,   115,    30,     5,   123,   158,    33,   137,    34,
       4,    35,   138,    36,    37,    31,    18,    67,     7,    38,
      15,    39,   150,    40,    67,   165,    41,    42,   171,    73,
      43,   103,    66,   151,   139,    94,    95,    44,    45,   113,
     144,    46,    79,   116,   174,    74,   175,    47,    14,   137,
      93,   168,    81,   141,    17,   137,    21,   146,    33,   143,
      34,   147,    35,   146,    36,    37,    67,   161,   169,   170,
      38,    80,    39,    83,    40,     5,     6,    41,    42,    19,
     106,    43,    84,    85,    86,    16,    94,    95,    44,    45,
      11,    12,    46,    88,    89,    20,    22,    63,    64,    65,
      71,    70,    75,    76,    77,    82,    78,    91,    99,    92,
     100,    16,    66,   108,   111,   114,   117,   112,   118,   121,
     122,   126,   127,   131,   128,   130,   142,   145,   162,   148,
     155,   179,   180,   101,   156,   149,   135,   163,   164,   140,
     167,   160,   166,   173,   176,   177,    32
};

static const short yycheck[] =
{
      10,    91,    49,   103,     4,     5,     4,     5,     4,     5,
     100,     4,     5,     8,    44,     5,     5,     3,    48,     5,
       8,     7,    43,    47,     5,    72,     6,    92,    49,     4,
      18,   131,    79,    19,     4,     5,    16,     5,    44,     7,
      31,     9,    48,    11,    12,    34,     4,    42,    48,    17,
      48,    19,    48,    21,    42,    48,    24,    25,   158,    47,
      28,    42,     8,   128,   111,    40,    41,    35,    36,    76,
     117,    39,    18,    80,   164,    36,   166,    45,    42,    44,
       4,     5,    43,    48,    32,    44,    33,    44,     5,    48,
       7,    48,     9,    44,    11,    12,    42,    48,    22,    23,
      17,    47,    19,     4,    21,     4,     5,    24,    25,     3,
      71,    28,    13,    14,    15,   125,    40,    41,    35,    36,
      29,    30,    39,    29,    30,    43,     5,     3,     3,    20,
      10,    47,    10,    47,    20,    47,    26,    42,     3,    47,
      42,   151,     8,     5,    18,    27,    18,    47,     5,    46,
       4,     4,     4,    42,    47,    43,     5,    42,     4,    46,
      43,     0,     0,    67,   133,    49,   108,   146,    49,   112,
      43,   137,    49,    43,    43,    43,    26
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#ifdef __cplusplus
# define YYSTD(x) std::x
#else
# define YYSTD(x) x
#endif

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
#  define YYSIZE_T YYSTD (size_t)
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#    define YYSIZE_T YYSTD (size_t)
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  ifdef __cplusplus
#   include <cstdlib> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T std::size_t
#  else
#   ifdef __STDC__
#    include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#    define YYSIZE_T size_t
#   endif
#  endif
#  define YYSTACK_ALLOC YYSTD (malloc)
#  define YYSTACK_FREE YYSTD (free)
# endif

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Relocate the TYPE STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Type, Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	yymemcpy ((char *) yyptr, (char *) (Stack),			\
		  yysize * (YYSIZE_T) sizeof (Type));			\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (Type) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# ifdef __cplusplus
#  include <cstddef> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T std::size_t
# else
#  ifdef __STDC__
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  ifdef __cplusplus
#   include <cstdio>  /* INFRINGES ON USER NAME SPACE */
#  else
#   include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYFPRINTF YYSTD (fprintf)
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace. [The following comment makes no
   sense to me.  Could someone clarify it?  --akim] Since this is
   uninitialized, it does not stop multiple parsers from coexisting.
   */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#if ! defined (yyoverflow) && ! defined (yymemcpy)
# if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#  define yymemcpy __builtin_memcpy
# else				/* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
#  if defined (__STDC__) || defined (__cplusplus)
yymemcpy (char *yyto, const char *yyfrom, YYSIZE_T yycount)
#  else
yymemcpy (yyto, yyfrom, yycount)
     char *yyto;
     const char *yyfrom;
     YYSIZE_T yycount;
#  endif
{
  register const char *yyf = yyfrom;
  register char *yyt = yyto;
  register YYSIZE_T yyi = yycount;

  while (yyi-- != 0)
    *yyt++ = *yyf++;
}
# endif
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 341 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# ifdef __cplusplus
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else /* !__cplusplus */
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif /* !__cplusplus */
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

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
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (short, yyss);
	YYSTACK_RELOCATE (YYSTYPE, yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (YYLTYPE, yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 1:
#line 116 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_DEFINITIONS|yyvsp[-5].constant);
                    _asn1_set_name(yyval.node,_asn1_get_name(yyvsp[-7].node));
                    _asn1_set_name(yyvsp[-7].node,"");
                    _asn1_set_right(yyvsp[-7].node,yyvsp[-1].node);
                    _asn1_set_down(yyval.node,yyvsp[-7].node);
      	   
		    p_tree=yyval.node;
		    }
    break;
case 2:
#line 126 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 3:
#line 127 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 4:
#line 130 "ASN1.y"
{strcpy(yyval.str,"-");
                       strcat(yyval.str,yyvsp[0].str);}
    break;
case 5:
#line 134 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 6:
#line 135 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 7:
#line 138 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 8:
#line 139 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 9:
#line 142 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 10:
#line 143 "ASN1.y"
{strcpy(yyval.str,yyvsp[0].str);}
    break;
case 11:
#line 146 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_CONSTANT); 
                                       _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 12:
#line 148 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_CONSTANT);
	                               _asn1_set_name(yyval.node,yyvsp[-3].str); 
                                       _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 13:
#line 153 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 14:
#line 154 "ASN1.y"
{yyval.node=yyvsp[-2].node;
                                            _asn1_set_right(_asn1_get_last_right(yyvsp[-2].node),yyvsp[0].node);}
    break;
case 15:
#line 158 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_CONSTANT); 
                                   _asn1_set_value(yyval.node,yyvsp[0].str,strlen(yyvsp[0].str)+1);}
    break;
case 16:
#line 160 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_CONSTANT);
	                            _asn1_set_name(yyval.node,yyvsp[-3].str); 
                                    _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 17:
#line 165 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 18:
#line 166 "ASN1.y"
{yyval.node=yyvsp[-1].node;
                                                    _asn1_set_right(_asn1_get_last_right(yyvsp[-1].node),yyvsp[0].node);}
    break;
case 19:
#line 170 "ASN1.y"
{yyval.constant=CONST_UNIVERSAL;}
    break;
case 20:
#line 171 "ASN1.y"
{yyval.constant=CONST_PRIVATE;}
    break;
case 21:
#line 172 "ASN1.y"
{yyval.constant=CONST_APPLICATION;}
    break;
case 22:
#line 175 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_TAG); 
                            _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 23:
#line 177 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_TAG | yyvsp[-2].constant); 
                                _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 24:
#line 181 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 25:
#line 182 "ASN1.y"
{yyval.node=_asn1_mod_type(yyvsp[-1].node,CONST_EXPLICIT);}
    break;
case 26:
#line 183 "ASN1.y"
{yyval.node=_asn1_mod_type(yyvsp[-1].node,CONST_IMPLICIT);}
    break;
case 27:
#line 186 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_DEFAULT); 
                                       _asn1_set_value(yyval.node,yyvsp[0].str,strlen(yyvsp[0].str)+1);}
    break;
case 28:
#line 188 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_DEFAULT|CONST_TRUE);}
    break;
case 29:
#line 189 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_DEFAULT|CONST_FALSE);}
    break;
case 30:
#line 192 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_INTEGER);}
    break;
case 31:
#line 193 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_INTEGER|CONST_LIST);
	                                 _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 32:
#line 196 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_INTEGER|CONST_MIN_MAX);
                                         _asn1_set_down(yyval.node,_asn1_add_node(TYPE_SIZE)); 
                                         _asn1_set_value(_asn1_get_down(yyval.node),yyvsp[-1].str,strlen(yyvsp[-1].str)+1); 
                                         _asn1_set_name(_asn1_get_down(yyval.node),yyvsp[-4].str);}
    break;
case 33:
#line 202 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_BOOLEAN);}
    break;
case 34:
#line 205 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_TIME|CONST_UTC);}
    break;
case 35:
#line 206 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_TIME|CONST_GENERALIZED);}
    break;
case 36:
#line 209 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SIZE|CONST_1_PARAM);
	                              _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 37:
#line 212 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SIZE|CONST_MIN_MAX);
	                              _asn1_set_value(yyval.node,yyvsp[-4].str,strlen(yyvsp[-4].str)+1);
                                      _asn1_set_name(yyval.node,yyvsp[-1].str);}
    break;
case 38:
#line 217 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 39:
#line 218 "ASN1.y"
{yyval.node=yyvsp[-1].node;}
    break;
case 40:
#line 221 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OCTET_STRING);}
    break;
case 41:
#line 222 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OCTET_STRING|CONST_SIZE);
                                           _asn1_set_down(yyval.node,yyvsp[0].node);}
    break;
case 42:
#line 226 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_CONSTANT);
	                           _asn1_set_name(yyval.node,yyvsp[-3].str); 
                                    _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);}
    break;
case 43:
#line 231 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 44:
#line 232 "ASN1.y"
{yyval.node=yyvsp[-2].node;
                                                       _asn1_set_right(_asn1_get_last_right(yyvsp[-2].node),yyvsp[0].node);}
    break;
case 45:
#line 236 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_BIT_STRING);}
    break;
case 46:
#line 238 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_BIT_STRING|CONST_LIST);
                                _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 47:
#line 243 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_ENUMERATED|CONST_LIST);
                                _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 48:
#line 248 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OBJECT_ID);}
    break;
case 49:
#line 251 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_IDENTIFIER);
                                       _asn1_set_value(yyval.node,yyvsp[0].str,strlen(yyvsp[0].str)+1);}
    break;
case 50:
#line 253 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_IDENTIFIER|CONST_SIZE);
                                       _asn1_set_value(yyval.node,yyvsp[-1].str,strlen(yyvsp[-1].str)+1);
                                       _asn1_set_down(yyval.node,yyvsp[0].node);}
    break;
case 51:
#line 256 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 52:
#line 257 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 53:
#line 258 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 55:
#line 260 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 56:
#line 261 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 57:
#line 262 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 58:
#line 263 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 59:
#line 264 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 60:
#line 265 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 61:
#line 266 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 62:
#line 267 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_NULL);}
    break;
case 63:
#line 270 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 64:
#line 271 "ASN1.y"
{yyval.node=_asn1_mod_type(yyvsp[0].node,CONST_TAG);
                                               _asn1_set_right(yyvsp[-1].node,_asn1_get_down(yyval.node));
                                               _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 65:
#line 276 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 66:
#line 277 "ASN1.y"
{yyval.node=_asn1_mod_type(yyvsp[-1].node,CONST_DEFAULT);
                                                       _asn1_set_right(yyvsp[0].node,_asn1_get_down(yyval.node));
						       _asn1_set_down(yyval.node,yyvsp[0].node);}
    break;
case 67:
#line 280 "ASN1.y"
{yyval.node=_asn1_mod_type(yyvsp[-1].node,CONST_OPTION);}
    break;
case 68:
#line 283 "ASN1.y"
{yyval.node=_asn1_set_name(yyvsp[0].node,yyvsp[-1].str);}
    break;
case 69:
#line 286 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 70:
#line 287 "ASN1.y"
{yyval.node=yyvsp[-2].node;
                                                _asn1_set_right(_asn1_get_last_right(yyvsp[-2].node),yyvsp[0].node);}
    break;
case 71:
#line 291 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SEQUENCE);
                                              _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 72:
#line 293 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SEQUENCE_OF);
                                              _asn1_set_down(yyval.node,yyvsp[0].node);}
    break;
case 73:
#line 295 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SEQUENCE_OF|CONST_SIZE);
                                            _asn1_set_right(yyvsp[-2].node,yyvsp[0].node);
                                            _asn1_set_down(yyval.node,yyvsp[-2].node);}
    break;
case 74:
#line 300 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SET);
                                     _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 75:
#line 302 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SET_OF);
                                     _asn1_set_down(yyval.node,yyvsp[0].node);}
    break;
case 76:
#line 304 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_SET_OF|CONST_SIZE);
                                       _asn1_set_right(yyvsp[-2].node,yyvsp[0].node);
                                       _asn1_set_down(yyval.node,yyvsp[-2].node);}
    break;
case 77:
#line 309 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_CHOICE);
                                             _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 78:
#line 313 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_ANY);}
    break;
case 79:
#line 314 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_ANY|CONST_DEFINED_BY);
                                        _asn1_set_down(yyval.node,_asn1_add_node(TYPE_CONSTANT));
	                                _asn1_set_name(_asn1_get_down(yyval.node),yyvsp[0].str);}
    break;
case 80:
#line 319 "ASN1.y"
{yyval.node=_asn1_set_name(yyvsp[0].node,yyvsp[-2].str);}
    break;
case 81:
#line 323 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OBJECT_ID|CONST_ASSIGN);
                         _asn1_set_name(yyval.node,yyvsp[-6].str);  
                         _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 82:
#line 327 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OBJECT_ID|CONST_ASSIGN|CONST_1_PARAM);
                         _asn1_set_name(yyval.node,yyvsp[-5].str);  
                         _asn1_set_value(yyval.node,yyvsp[-4].str,strlen(yyvsp[-4].str)+1);
                         _asn1_set_down(yyval.node,yyvsp[-1].node);}
    break;
case 83:
#line 332 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_INTEGER|CONST_ASSIGN);
                         _asn1_set_name(yyval.node,yyvsp[-3].str);  
                         _asn1_set_value(yyval.node,yyvsp[0].str,strlen(yyvsp[0].str)+1);}
    break;
case 84:
#line 337 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 85:
#line 338 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 86:
#line 341 "ASN1.y"
{yyval.node=yyvsp[0].node;}
    break;
case 87:
#line 342 "ASN1.y"
{yyval.node=yyvsp[-1].node;
                                                          _asn1_set_right(_asn1_get_last_right(yyvsp[-1].node),yyvsp[0].node);}
    break;
case 88:
#line 346 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OBJECT_ID);
                                                          _asn1_set_down(yyval.node,yyvsp[-1].node);
                                                          _asn1_set_name(yyval.node,yyvsp[-3].str);}
    break;
case 89:
#line 349 "ASN1.y"
{yyval.node=_asn1_add_node(TYPE_OBJECT_ID);
                                                          _asn1_set_name(yyval.node,yyvsp[-2].str);}
    break;
case 90:
#line 373 "ASN1.y"
{yyval.constant=CONST_EXPLICIT;}
    break;
case 91:
#line 374 "ASN1.y"
{yyval.constant=CONST_IMPLICIT;}
    break;
}

#line 727 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 378 "ASN1.y"




const char *key_word[]={"::=","OPTIONAL","INTEGER","SIZE","OCTET","STRING"
                       ,"SEQUENCE","BIT","UNIVERSAL","PRIVATE","OPTIONAL"
                       ,"DEFAULT","CHOICE","OF","OBJECT","IDENTIFIER"
                       ,"BOOLEAN","TRUE","FALSE","APPLICATION","ANY","DEFINED"
                       ,"SET","BY","EXPLICIT","IMPLICIT","DEFINITIONS","TAGS"
                       ,"BEGIN","END","UTCTime","GeneralizedTime","FROM"
                       ,"IMPORTS","NULL","ENUMERATED"};
const int key_word_token[]={ASSIG,OPTIONAL,INTEGER,SIZE,OCTET,STRING
                       ,SEQUENCE,BIT,UNIVERSAL,PRIVATE,OPTIONAL
                       ,DEFAULT,CHOICE,OF,OBJECT,STR_IDENTIFIER
                       ,BOOLEAN,TRUE,FALSE,APPLICATION,ANY,DEFINED
                       ,SET,BY,EXPLICIT,IMPLICIT,DEFINITIONS,TAGS
                       ,BEGIN,END,UTCTime,GeneralizedTime,FROM
                       ,IMPORTS,TOKEN_NULL,ENUMERATED};

/*************************************************************/
/*  Function: yylex                                          */
/*  Description: looks for tokens in file_asn1 pointer file. */
/*  Return: int                                              */
/*    Token identifier or ASCII code or 0(zero: End Of File) */
/*************************************************************/
int 
yylex() 
{
  int c,counter=0,k;
  char string[MAX_NAME_SIZE+1]; /* will contain the next token */  

  while(1)
    {
    while((c=fgetc(file_asn1))==' ' || c=='\t' || c=='\n')
      if(c=='\n') lineNumber++;

    if(c==EOF){
      strcpy(lastToken,"End Of File");
      return 0;
    }

    if(c=='(' || c==')' || c=='[' || c==']' || 
       c=='{' || c=='}' || c==',' || c=='.' ||
       c=='+'){
      lastToken[0]=c;lastToken[1]=0;
      return c;
    }
    if(c=='-'){  /* Maybe the first '-' of a comment */
      if((c=fgetc(file_asn1))!='-'){
	ungetc(c,file_asn1);
	lastToken[0]='-';lastToken[1]=0;
	return '-';
      }
      else{ /* Comments */
	counter=0;
	/* A comment finishes at the end of line */
	while((c=fgetc(file_asn1))!=EOF && c!='\n');
	if(c==EOF){
 	  strcpy(lastToken,"End Of File");
	  return 0;
	}
	else{
	  lineNumber++;
	  continue; /* next char, please! (repeat the search) */
	}
      }
    }
    string[counter++]=c;
    /* Till the end of the token */
    while(!((c=fgetc(file_asn1))==EOF || c==' '|| c=='\t' || c=='\n' || 
	     c=='(' || c==')' || c=='[' || c==']' || 
	     c=='{' || c=='}' || c==',' || c=='.'))
      {
	if(counter>=MAX_NAME_SIZE){
	  result_parse=ASN1_NAME_TOO_LONG;
	  return 0;
	}
	string[counter++]=c;
      }
    ungetc(c,file_asn1);
    string[counter]=0;
    strcpy(lastToken,string);

    /* Is STRING a number? */
    for(k=0;k<counter;k++) 
      if(!isdigit(string[k])) break;
    if(k>=counter)
      {
      strcpy(yylval.str,string);  
      return NUM; /* return the number */
      }
 
    /* Is STRING a keyword? */
    for(k=0;k<(sizeof(key_word)/sizeof(char*));k++)  
      if(!strcmp(string,key_word[k])) return key_word_token[k]; 
 
    /* STRING is an IDENTIFIER */
    strcpy(yylval.str,string);
    return IDENTIFIER;
    }
}


/*************************************************************/
/*  Function: _asn1_create_errorDescription                  */
/*  Description: creates a string with the description of the*/
/*    error.                                                 */
/*  Parameters:                                              */
/*    error : error to describe.                             */
/*    errorDescription: string that will contain the         */
/*                      description.                         */
/*************************************************************/
void
_asn1_create_errorDescription(int error,char *errorDescription)
{
  switch(error){
  case ASN1_SUCCESS: case ASN1_FILE_NOT_FOUND: 
    if (errorDescription!=NULL) errorDescription[0]=0;
    break;
  case ASN1_SYNTAX_ERROR:
    if (errorDescription!=NULL) {
	strcpy(errorDescription,fileName);
	strcat(errorDescription,":");
	_asn1_ltostr(lineNumber,errorDescription+strlen(fileName)+1);
	strcat(errorDescription,": parse error near '");
	strcat(errorDescription,lastToken);
	strcat(errorDescription,"'");
    }
    break;
  case ASN1_NAME_TOO_LONG:
    if (errorDescription!=NULL) {
       strcpy(errorDescription,fileName);
       strcat(errorDescription,":");
       _asn1_ltostr(lineNumber,errorDescription+strlen(fileName)+1);
       strcat(errorDescription,": name too long (more than ");
       _asn1_ltostr(MAX_NAME_SIZE,errorDescription+strlen(errorDescription));
       strcat(errorDescription," characters)");
    }
    break;
  case ASN1_IDENTIFIER_NOT_FOUND:
    if (errorDescription!=NULL) {
       strcpy(errorDescription,fileName);
       strcat(errorDescription,":");
       strcat(errorDescription,": identifier '");
       strcat(errorDescription,identifierMissing);
       strcat(errorDescription,"' not found");
    }
    break;
  default:
    if (errorDescription!=NULL) errorDescription[0]=0;
    break;
  }

}


/**
  * asn1_parser2tree - function used to start the parse algorithm.
  * @file_name: specify the path and the name of file that contains ASN.1 declarations.
  * @definitions: return the pointer to the structure created from 
  *   "file_name" ASN.1 declarations.  
  * @errorDescription : return the error description or an empty string if success.
  * Description:
  *
  * Creates the structures needed to manage the definitions included in *FILE_NAME file.
  *
  * Returns:
  *
  * ASN1_SUCCESS\: the file has a correct syntax and every identifier is known.
  *
  * ASN1_ELEMENT_NOT_EMPTY\: *POINTER not ASN1_TYPE_EMPTY.
  *
  * ASN1_FILE_NOT_FOUND\: an error occured while opening FILE_NAME.
  *
  * ASN1_SYNTAX_ERROR\: the syntax is not correct.
  *
  * ASN1_IDENTIFIER_NOT_FOUND\: in the file there is an identifier that is not defined.
  * ASN1_NAME_TOO_LONG\: in the file there is an identifier whith more than MAX_NAME_SIZE characters.
  **/
asn1_retCode
asn1_parser2tree(char *file_name,ASN1_TYPE *definitions,char *errorDescription){

  p_tree=ASN1_TYPE_EMPTY;

  if(*definitions != ASN1_TYPE_EMPTY)
    return ASN1_ELEMENT_NOT_EMPTY;

  *definitions=ASN1_TYPE_EMPTY;

  fileName = file_name;

  /* open the file to parse */
  file_asn1=fopen(file_name,"r");

  if(file_asn1==NULL){
    result_parse=ASN1_FILE_NOT_FOUND;
  }
  else{
    result_parse=ASN1_SUCCESS;

    lineNumber=1;
    yyparse();

    fclose(file_asn1);
    
    if(result_parse==ASN1_SUCCESS){ /* syntax OK */
      /* set IMPLICIT or EXPLICIT property */
      _asn1_set_default_tag(p_tree);
      /* set CONST_SET and CONST_NOT_USED */
      _asn1_type_set_config(p_tree);
      /* check the identifier definitions */
      result_parse=_asn1_check_identifier(p_tree);
      if(result_parse==ASN1_SUCCESS){ /* all identifier defined */
	/* Delete the list and keep the ASN1 structure */
	_asn1_delete_list();
	/* Convert into DER coding the value assign to INTEGER constants */
	_asn1_change_integer_value(p_tree);
	/* Expand the IDs of OBJECT IDENTIFIER constants */
	_asn1_expand_object_id(p_tree);

	*definitions=p_tree;
      }
      else /* some identifiers not defined */ 
	/* Delete the list and the ASN1 structure */
	_asn1_delete_list_and_nodes();
    }
    else  /* syntax error */
      /* Delete the list and the ASN1 structure */
      _asn1_delete_list_and_nodes();
  }

  if (errorDescription!=NULL) 
	_asn1_create_errorDescription(result_parse,errorDescription);

  return result_parse;
}


/**
  * asn1_parser2array - function that generates a C structure from an ASN1 file
  * @inputFileName: specify the path and the name of file that contains ASN.1 declarations.
  * @outputFileName: specify the path and the name of file that will contain the C vector definition.
  * @vectorName: specify the name of the C vector.
  * @errorDescription : return the error description or an empty string if success.
  * Description:
  *
  * Creates a file containing a C vector to use to manage the definitions included in
  * *INPUTFILENAME file. If *INPUTFILENAME is "/aa/bb/xx.yy" and OUTPUTFILENAME is NULL, the file created is "/aa/bb/xx_asn1_tab.c".
  * If VECTORNAME is NULL the vector name will be "xx_asn1_tab".
  *
  * Returns:
  *
  *  ASN1_SUCCESS\: the file has a correct syntax and every identifier is known. 
  *
  *  ASN1_FILE_NOT_FOUND\: an error occured while opening FILE_NAME.
  *
  *  ASN1_SYNTAX_ERROR\: the syntax is not correct.
  *
  *  ASN1_IDENTIFIER_NOT_FOUND\: in the file there is an identifier that is not defined.
  *  ASN1_NAME_TOO_LONG\: in the file there is an identifier whith more than MAX_NAME_SIZE characters.
  **/
int asn1_parser2array(char *inputFileName,char *outputFileName,char *vectorName,char *errorDescription){
  char *file_out_name=NULL;
  char *vector_name=NULL;
  char *char_p,*slash_p,*dot_p;

  p_tree=NULL;

  fileName = inputFileName;
    
  /* open the file to parse */
  file_asn1=fopen(inputFileName,"r");

  if(file_asn1==NULL)
    result_parse=ASN1_FILE_NOT_FOUND;
  else{
    result_parse=ASN1_SUCCESS;

    lineNumber=1;
    yyparse();

    fclose(file_asn1);

    if(result_parse==ASN1_SUCCESS){ /* syntax OK */
      /* set IMPLICIT or EXPLICIT property */
      _asn1_set_default_tag(p_tree);
      /* set CONST_SET and CONST_NOT_USED */
      _asn1_type_set_config(p_tree);
      /* check the identifier definitions */
      result_parse=_asn1_check_identifier(p_tree);

      if(result_parse==ASN1_SUCCESS){ /* all identifier defined */

	/* searching the last '/' and '.' in inputFileName */
	char_p=inputFileName;
	slash_p=inputFileName;
	while((char_p=strchr(char_p,'/'))){
	  char_p++;
	  slash_p=char_p;
	}

	char_p=slash_p;
	dot_p=inputFileName+strlen(inputFileName);
	
	while((char_p=strchr(char_p,'.'))){
	  dot_p=char_p;
	  char_p++;
	}

	if(outputFileName == NULL){ 
	  /* file_out_name = inputFileName + _asn1_tab.c */
	  file_out_name=(char *)malloc(dot_p-inputFileName+1+
                                       strlen("_asn1_tab.c"));
	  memcpy(file_out_name,inputFileName,dot_p-inputFileName);
	  file_out_name[dot_p-inputFileName]=0;
	  strcat(file_out_name,"_asn1_tab.c");
	}
	else{
	  /* file_out_name = inputFileName */
	  file_out_name=(char *)malloc(strlen(outputFileName)+1);
	  strcpy(file_out_name,outputFileName);
	}

	if(vectorName == NULL){ 
	  /* vector_name = file name + _asn1_tab */
	  vector_name=(char *)malloc(dot_p-slash_p+1+
                                       strlen("_asn1_tab"));
	  memcpy(vector_name,slash_p,dot_p-slash_p);
	  vector_name[dot_p-slash_p]=0;
	  strcat(vector_name,"_asn1_tab");
	}
	else{
	  /* vector_name = vectorName */
	  vector_name=(char *)malloc(strlen(vectorName)+1);
	  strcpy(vector_name,vectorName);
	}

	/* Save structure in a file */
	_asn1_create_static_structure(p_tree,
                  file_out_name,vector_name);

	free(file_out_name);
	free(vector_name);
      } /* result == OK */
    }   /* result == OK */
     
    /* Delete the list and the ASN1 structure */
    _asn1_delete_list_and_nodes();    
  } /* inputFile exist */

  if (errorDescription!=NULL)
	_asn1_create_errorDescription(result_parse,errorDescription);

  return result_parse;
}


/*************************************************************/
/*  Function: yyerror                                        */
/*  Description: function called when there are syntax errors*/
/*  Parameters:                                              */
/*    char *s : error description                            */
/*  Return: int                                              */
/*                                                           */
/*************************************************************/
int yyerror (char *s)
{
  /* Sends the error description to the std_out */

#ifdef DEBUG_PARSER
  _libasn1_log("yyerror:%s:%d: %s (Last Token:'%s')\n",fileName,
               lineNumber,s,lastToken); 
#endif

  if(result_parse!=ASN1_NAME_TOO_LONG) 
    result_parse=ASN1_SYNTAX_ERROR;

  return 0;
}















