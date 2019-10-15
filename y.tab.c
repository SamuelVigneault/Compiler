#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 60 "decaf.y"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stack>
#include "tokentype.h" 
#include "parsetree.h"

  /* we are building parse trees */
#define YYSTYPE ParseTree *

using namespace std;

 
 extern Token *myTok;
 extern int yylineno;
 int yylex();
 ParseTree *top;
 ParseTree *tempo;

 /* stack<Token *> opstack;  // used this last time.  Might not need this time?
    Token *optok; */
 
 
#line 44 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define T_Void 1
#define T_Int 2
#define T_Double 3
#define T_Bool 4
#define T_String 5
#define T_Class 6
#define T_Interface 7
#define T_Null 8
#define T_This 9
#define T_Extends 10
#define T_Implements 11
#define T_For 12
#define T_While 13
#define T_If 14
#define T_Else 15
#define T_Return 16
#define T_Break 17
#define T_New 18
#define T_NewArray 19
#define T_Print 20
#define T_ReadInteger 21
#define T_ReadLine 22
#define T_Identifier 23
#define T_TypeIdentifier 24
#define T_IntConstant 25
#define T_BoolConstant 26
#define T_DoubleConstant 27
#define T_StringConstant 28
#define T_Plus 29
#define T_Minus 30
#define T_Times 31
#define T_Div 32
#define T_Mod 33
#define T_Less 34
#define T_LessEqual 35
#define T_Greater 36
#define T_GreaterEqual 37
#define T_Assign 38
#define T_Equal 39
#define T_NotEqual 40
#define T_And 41
#define T_Or 42
#define T_Not 43
#define T_Semicolon 44
#define T_Comma 45
#define T_Dot 46
#define T_LBracket 47
#define T_RBracket 48
#define T_LParen 49
#define T_RParen 50
#define T_LBrace 51
#define T_RBrace 52
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    3,    6,    7,    7,
    7,    7,    7,    7,    4,    4,   14,   14,   17,   17,
   15,   18,   18,   19,   19,    5,   21,   21,   22,   22,
   24,   24,   23,   23,   25,   25,   20,   20,   27,   27,
   27,   27,   27,   27,   27,   27,   27,   29,   29,   30,
   31,   33,   39,   39,   39,   39,   32,   41,   26,   26,
   34,   43,   37,   45,   46,   46,   44,   44,   42,   28,
   40,   40,   49,   49,   51,   51,   50,   50,   53,   53,
   54,   54,   56,   56,   56,   56,   57,   57,   60,   60,
   60,   60,   60,   60,   60,   60,   61,   61,   67,   67,
   67,   67,   66,   66,   70,   70,   70,   70,   70,   70,
   71,   71,   71,   76,   76,   76,   78,   78,   78,   78,
   78,   78,   78,   47,   47,   47,   77,   77,   81,   79,
   79,   79,   79,   79,   36,   38,   35,   63,   62,   65,
   64,   48,   58,   59,   55,   52,   68,   73,   72,   74,
   75,   69,   86,   80,   16,    9,   10,   11,   12,   82,
   83,   84,   85,    8,   13,
};
static const short yylen[] = {                            2,
    1,    1,    2,    1,    1,    1,    2,    2,    3,    1,
    1,    1,    1,    1,    6,    6,    1,    0,    1,    3,
    4,    0,    2,    0,    2,    7,    0,    2,    0,    1,
    2,    3,    0,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    2,    2,    3,
    2,    2,    6,    6,    5,    5,    2,    2,    2,    4,
    4,    2,    3,    3,    0,    1,    1,    3,    3,    2,
    3,    1,    1,    1,    3,    3,    1,    1,    3,    3,
    1,    1,    3,    3,    3,    3,    1,    1,    3,    3,
    3,    3,    3,    3,    3,    3,    1,    1,    3,    3,
    3,    3,    1,    1,    3,    3,    3,    3,    3,    3,
    2,    2,    1,    1,    1,    1,    1,    1,    3,    4,
    6,    3,    3,    1,    1,    4,    2,    2,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
  155,  156,  157,  158,  159,    0,  165,    0,    0,    2,
    4,    5,    6,    0,    0,   10,   11,   12,   13,   14,
    0,  164,    0,    3,    7,    0,    0,    0,    0,    0,
    9,    0,    0,   28,    0,    0,    0,   19,    0,    0,
    0,    0,   31,   33,    0,    8,    0,    0,    0,    0,
   32,   22,   15,   20,   16,   26,   35,   36,   34,    0,
   23,    0,  153,  154,    0,    0,    0,  137,  136,    0,
    0,  135,    0,    0,  160,  162,  161,  163,  152,  151,
   41,    0,   21,    0,   39,   25,   37,   38,   40,   42,
   43,   44,   45,   46,   47,    0,    0,    0,    0,    0,
    0,    0,    0,   72,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  115,
  116,  117,  118,    0,  130,  131,  132,  133,  134,    0,
    0,   58,   62,    0,    0,    0,    0,    0,    0,  127,
   48,   49,    0,    0,   51,   52,   70,   57,   59,    0,
  142,    0,  146,    0,    0,  145,    0,    0,  143,  144,
    0,    0,    0,    0,  138,  139,  140,  141,    0,    0,
    0,    0,    0,    0,    0,    0,  147,    0,    0,    0,
    0,  114,  111,  149,  148,  150,    0,    0,    0,    0,
    0,    0,  112,    0,    0,  128,    0,    0,    0,    0,
    0,  123,  122,  119,   67,    0,    0,    0,   50,    0,
   71,   76,   75,   79,   80,   83,   84,   85,   86,   89,
   90,   91,   92,   93,   94,   95,   96,  101,  102,   99,
  100,  105,  106,  107,  108,  109,  110,  129,    0,    0,
    0,   69,  120,    0,    0,   64,   63,   60,   61,  126,
   56,    0,   55,    0,    0,   68,   54,   53,  121,
};
static const short yydgoto[] = {                          8,
    9,   10,   11,   12,   13,   14,   39,   84,   16,   17,
   18,   19,   20,   40,   85,   21,   41,   60,   62,   86,
   30,   36,   50,   37,   59,   87,   88,   89,   90,   91,
   92,   93,   94,   95,   96,   97,  144,   98,   99,  100,
  101,  132,  102,  206,  140,  207,  182,  152,  104,  105,
  106,  154,  107,  108,  157,  109,  110,  161,  162,  111,
  112,  169,  170,  171,  172,  113,  114,  178,  115,  116,
  117,  187,  188,  189,  118,  119,  120,  121,  122,  123,
  124,  125,  126,  127,  128,  129,
};
static const short yysindex[] = {                        96,
    0,    0,    0,    0,    0,    5,    0,    0,   96,    0,
    0,    0,    0,   -2,  -17,    0,    0,    0,    0,    0,
    5,    0,   45,    0,    0,   13,   18,   25,    5,   53,
    0,   16,   16,    0,    5,   29,   50,    0,  -17,   33,
   58,   64,    0,    0,    5,    0,   60,   16,   60,   44,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   16,
    0,  177,    0,    0,   68,   75,   75,    0,    0,   84,
   94,    0,   97,  102,    0,    0,    0,    0,    0,    0,
    0,  448,    0,  106,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  390,  111,  105,  320,  122,
  320,  320,  135,    0,  137,  137,  140,  140,  -32,  -32,
   72,   72,   63,   63,  448,   38,   38,  448,   89,    0,
    0,    0,    0,  106,    0,    0,    0,    0,    0,  419,
  448,    0,    0,    5,  448,   88,  134,  142,  448,    0,
    0,    0,  448,  157,    0,    0,    0,    0,    0,  191,
    0,  448,    0,  448,  448,    0,  448,  448,    0,    0,
  448,  448,  448,  448,    0,    0,    0,    0,  448,  448,
  448,  448,  448,  448,  448,  448,    0,  448,  448,  448,
  448,    0,    0,    0,    0,    0,  448,  448,  448,  448,
  448,  448,    0,    5,  448,    0,  448,  448,  162,  167,
  180,    0,    0,    0,    0,  182,  173,  -14,    0,  320,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  206,  104,
  357,    0,    0,   16,  448,    0,    0,    0,    0,    0,
    0,  209,    0,  215,  -25,    0,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,  270,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    2,    0,    0,    0,  232,    0,    0,  229,
    0,  228,  228,    0,    0,    0,  239,    0,    0,    0,
  249,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  230,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  469,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  513,    0,   71,  272,   34,  262,   15,  100,
  117,  130,  174,  227,    0,  552,  569,    0,  535,    0,
    0,    0,    0,  491,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  258,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  275,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  259,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,  302,  -34,  263,    0,  -21,    1,   -6,    0,    0,
    0,    0,    0,  281,    3,    0,    0,    0,    0,  -67,
    0,    0,    0,    0,    0,  113, -100,  -93,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -77,
    0,  248,    0,  187,  197,    0,  -58,    0,    0,   22,
    0,  219,    0,   83,  223,    0,  190,  225,  234,    0,
   61,  237,  243,  250,  255,  178,    0,  246,  172,    0,
 -101,  244,  251,  253,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 619
static const short yytable[] = {                         23,
   15,  150,  142,  103,  138,   22,  159,  160,   27,   15,
   38,   38,   27,  183,   28,   57,  193,    2,    3,    4,
    5,   26,   34,  103,  259,   61,   54,   22,   43,   26,
  245,  146,   46,  148,  149,  247,  198,  103,   51,    7,
  103,   25,  103,  103,    1,    2,    3,    4,    5,   53,
   15,   55,   27,  199,   29,   81,   81,  201,   81,   81,
   31,  205,   81,   35,   81,  205,   32,    7,  184,  185,
  186,  103,  103,   33,  211,   77,  103,   77,   77,   44,
  103,   77,   47,   77,  103,  232,  233,  234,  235,  236,
  237,  177,   79,  103,   45,   56,    1,    2,    3,    4,
    5,    6,   48,  240,  241,  165,  166,  167,  168,  249,
   52,   63,   64,   49,   73,   73,  130,  239,   73,    7,
   73,   70,   71,  131,   73,   74,   22,  200,   75,   76,
   77,   78,  134,   79,  194,  195,  103,  202,  103,  103,
   82,   82,  135,   82,   82,  136,   80,   82,  145,   82,
  137,  103,   82,  251,  139,   87,   87,   87,   87,  143,
   87,   87,  252,  254,   87,  147,   87,  256,   88,   88,
   88,   88,  151,   88,   88,  212,  213,   88,  153,   88,
  156,  103,  103,  203,   63,   64,  103,  238,   65,   66,
   67,  204,   68,   69,   70,   71,   72,   73,   74,   22,
  209,   75,   76,   77,   78,  210,   79,   97,   97,   97,
   97,  242,   97,   97,   97,   97,  243,   97,   97,   80,
   81,   97,  246,   97,  244,   82,  245,   52,   83,  220,
  221,  222,  223,  224,  225,  226,  227,   24,   24,  214,
  215,   24,   24,   24,  255,   24,   24,   24,   24,   24,
   24,   24,   24,  250,   24,   24,   24,   24,  257,   24,
   98,   98,   98,   98,  258,   98,   98,   98,   98,    1,
   98,   98,   24,   24,   98,    8,   98,   18,   24,   29,
   24,   24,   38,   38,  179,  181,   38,   38,   38,   30,
   38,   38,   38,   38,   38,   38,   38,   38,   17,   38,
   38,   38,   38,   78,   38,   78,   78,   65,   66,   78,
   24,   78,   58,   42,  133,   74,   74,   38,   38,   74,
  196,   74,  248,   38,  155,   38,   38,   63,   64,  208,
  158,   65,   66,   67,  163,   68,   69,   70,   71,   72,
   73,   74,   22,  164,   75,   76,   77,   78,  173,   79,
  216,  217,  218,  219,  174,  228,  229,  230,  231,  180,
  190,  175,   80,   81,   63,   64,  176,  191,   82,  192,
   52,    0,    0,    0,   70,   71,    0,   73,   74,   22,
    0,   75,   76,   77,   78,    0,   79,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   63,   64,   80,
    0,    0,    0,    0,    0,   82,  253,   70,   71,    0,
   73,   74,   22,    0,   75,   76,   77,   78,    0,   79,
    0,    0,    0,    0,    0,    0,   63,   64,    0,    0,
    0,    0,   80,  141,    0,    0,   70,   71,   82,   73,
   74,   22,    0,   75,   76,   77,   78,    0,   79,    0,
    0,    0,    0,    0,    0,   63,   64,    0,    0,    0,
    0,   80,  197,    0,    0,   70,   71,   82,   73,   74,
   22,    0,   75,   76,   77,   78,    0,   79,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   80,    0,    0,    0,    0,    0,   82,  124,  124,  124,
  124,  124,  124,  124,  124,  124,  124,  124,  124,  124,
  124,    0,  124,  124,  124,  124,  124,    0,  124,  125,
  125,  125,  125,  125,  125,  125,  125,  125,  125,  125,
  125,  125,  125,    0,  125,  125,  125,  125,  125,    0,
  125,  114,  114,  114,  114,  114,  114,  114,  114,  114,
    0,  114,  114,  114,  114,    0,  114,  114,  114,  114,
  114,    0,  114,  113,  113,  113,  113,  113,  113,  113,
  113,  113,    0,  113,  113,  113,  113,    0,  113,  113,
  103,  103,  113,    0,  113,  103,  103,  103,  103,    0,
  103,  103,  103,  103,    0,  103,  103,  104,  104,  103,
    0,  103,  104,  104,  104,  104,    0,  104,  104,  104,
  104,    0,  104,  104,    0,    0,  104,    0,  104,
};
static const short yycheck[] = {                          6,
    0,  102,   96,   62,   82,   23,   39,   40,   15,    9,
   32,   33,   11,  115,   21,   50,  118,    2,    3,    4,
    5,   47,   29,   82,   50,   60,   48,   23,   35,   47,
   45,   99,   39,  101,  102,   50,  130,   96,   45,   24,
   99,   44,  101,  102,    1,    2,    3,    4,    5,   47,
   50,   49,   51,  131,   10,   41,   42,  135,   44,   45,
   48,  139,   48,   11,   50,  143,   49,   24,   31,   32,
   33,  130,  131,   49,  152,   42,  135,   44,   45,   51,
  139,   48,   50,   50,  143,  187,  188,  189,  190,  191,
  192,   29,   30,  152,   45,   52,    1,    2,    3,    4,
    5,    6,   45,  197,  198,   34,   35,   36,   37,  210,
   51,    8,    9,   50,   44,   45,   49,  195,   48,   24,
   50,   18,   19,   49,   21,   22,   23,  134,   25,   26,
   27,   28,   49,   30,   46,   47,  195,   50,  197,  198,
   41,   42,   49,   44,   45,   49,   43,   48,   44,   50,
   49,  210,   49,   50,   49,   39,   40,   41,   42,   49,
   44,   45,  240,  241,   48,   44,   50,  245,   39,   40,
   41,   42,   38,   44,   45,  154,  155,   48,   42,   50,
   41,  240,  241,   50,    8,    9,  245,  194,   12,   13,
   14,   50,   16,   17,   18,   19,   20,   21,   22,   23,
   44,   25,   26,   27,   28,   15,   30,   34,   35,   36,
   37,   50,   39,   40,   41,   42,   50,   44,   45,   43,
   44,   48,   50,   50,   45,   49,   45,   51,   52,  169,
  170,  171,  172,  173,  174,  175,  176,    8,    9,  157,
  158,   12,   13,   14,  244,   16,   17,   18,   19,   20,
   21,   22,   23,   48,   25,   26,   27,   28,   50,   30,
   34,   35,   36,   37,   50,   39,   40,   41,   42,    0,
   44,   45,   43,   44,   48,   44,   50,   50,   49,   51,
   51,   52,    8,    9,  113,  114,   12,   13,   14,   51,
   16,   17,   18,   19,   20,   21,   22,   23,   50,   25,
   26,   27,   28,   42,   30,   44,   45,   50,   50,   48,
    9,   50,   50,   33,   67,   44,   45,   43,   44,   48,
  124,   50,  210,   49,  106,   51,   52,    8,    9,  143,
  108,   12,   13,   14,  110,   16,   17,   18,   19,   20,
   21,   22,   23,  110,   25,   26,   27,   28,  112,   30,
  161,  162,  163,  164,  112,  178,  179,  180,  181,  114,
  117,  112,   43,   44,    8,    9,  112,  117,   49,  117,
   51,   -1,   -1,   -1,   18,   19,   -1,   21,   22,   23,
   -1,   25,   26,   27,   28,   -1,   30,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,    8,    9,   43,
   -1,   -1,   -1,   -1,   -1,   49,   50,   18,   19,   -1,
   21,   22,   23,   -1,   25,   26,   27,   28,   -1,   30,
   -1,   -1,   -1,   -1,   -1,   -1,    8,    9,   -1,   -1,
   -1,   -1,   43,   44,   -1,   -1,   18,   19,   49,   21,
   22,   23,   -1,   25,   26,   27,   28,   -1,   30,   -1,
   -1,   -1,   -1,   -1,   -1,    8,    9,   -1,   -1,   -1,
   -1,   43,   44,   -1,   -1,   18,   19,   49,   21,   22,
   23,   -1,   25,   26,   27,   28,   -1,   30,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   43,   -1,   -1,   -1,   -1,   -1,   49,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,
   42,   -1,   44,   45,   46,   47,   48,   -1,   50,   29,
   30,   31,   32,   33,   34,   35,   36,   37,   38,   39,
   40,   41,   42,   -1,   44,   45,   46,   47,   48,   -1,
   50,   29,   30,   31,   32,   33,   34,   35,   36,   37,
   -1,   39,   40,   41,   42,   -1,   44,   45,   46,   47,
   48,   -1,   50,   29,   30,   31,   32,   33,   34,   35,
   36,   37,   -1,   39,   40,   41,   42,   -1,   44,   45,
   29,   30,   48,   -1,   50,   34,   35,   36,   37,   -1,
   39,   40,   41,   42,   -1,   44,   45,   29,   30,   48,
   -1,   50,   34,   35,   36,   37,   -1,   39,   40,   41,
   42,   -1,   44,   45,   -1,   -1,   48,   -1,   50,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 52
#if YYDEBUG
static const char *yyname[] = {

"end-of-file","T_Void","T_Int","T_Double","T_Bool","T_String","T_Class",
"T_Interface","T_Null","T_This","T_Extends","T_Implements","T_For","T_While",
"T_If","T_Else","T_Return","T_Break","T_New","T_NewArray","T_Print",
"T_ReadInteger","T_ReadLine","T_Identifier","T_TypeIdentifier","T_IntConstant",
"T_BoolConstant","T_DoubleConstant","T_StringConstant","T_Plus","T_Minus",
"T_Times","T_Div","T_Mod","T_Less","T_LessEqual","T_Greater","T_GreaterEqual",
"T_Assign","T_Equal","T_NotEqual","T_And","T_Or","T_Not","T_Semicolon",
"T_Comma","T_Dot","T_LBracket","T_RBracket","T_LParen","T_RParen","T_LBrace",
"T_RBrace",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : Decl",
"Decl : Decl1",
"Decl : Decl Decl1",
"Decl1 : VarDec",
"Decl1 : FuncDec",
"Decl1 : ClassDec",
"VarDec : Var T_Semicolon",
"Var : Type Ident",
"Type : Type T_LBracket T_RBracket",
"Type : Int",
"Type : Double",
"Type : Bool",
"Type : String",
"Type : TIdent",
"FuncDec : Type Ident T_LParen Formals T_RParen StmtBlock",
"FuncDec : Void Ident T_LParen Formals T_RParen StmtBlock",
"Formals : Formals1",
"Formals :",
"Formals1 : Var",
"Formals1 : Formals1 T_Comma Var",
"StmtBlock : T_LBrace VarDecSt StmtSt T_RBrace",
"VarDecSt :",
"VarDecSt : VarDecSt VarDec",
"StmtSt :",
"StmtSt : StmtSt Stmt",
"ClassDec : T_Class Ident Extend Implem T_LBrace Field1 T_RBrace",
"Extend :",
"Extend : T_Extends Ident",
"Implem :",
"Implem : Implem1",
"Implem1 : T_Implements Ident",
"Implem1 : Implem1 T_Comma Ident",
"Field1 :",
"Field1 : Field1 Field",
"Field : VarDec",
"Field : FuncDec",
"Stmt : Open",
"Stmt : Matched",
"Matched : StmtBlock",
"Matched : Expr15",
"Matched : T_Semicolon",
"Matched : ReturnStmt",
"Matched : PrintStmt",
"Matched : BreakStmt",
"Matched : WhileStmt",
"Matched : ForStmt",
"Matched : MatchedIfStmt",
"ReturnStmt : Return T_Semicolon",
"ReturnStmt : Return Expr15",
"PrintStmt : Print ActualsPrint T_Semicolon",
"BreakStmt : Break T_Semicolon",
"ForStmt : ForHeader Stmt",
"ForHeader : T_For T_LParen Expr15 Expr15 Expr14 T_RParen",
"ForHeader : T_For T_LParen T_Semicolon Expr15 Expr14 T_RParen",
"ForHeader : T_For T_LParen Expr15 Expr15 T_RParen",
"ForHeader : T_For T_LParen T_Semicolon Expr15 T_RParen",
"WhileStmt : WhileHeader Stmt",
"WhileHeader : T_While Expr16",
"Open : IfHeader Stmt",
"Open : IfHeader Matched T_Else Open",
"MatchedIfStmt : IfHeader Matched T_Else Matched",
"IfHeader : T_If Expr16",
"ActualsPrint : T_LParen Actuals1 T_RParen",
"ActualsCall : T_LParen Actuals T_RParen",
"Actuals :",
"Actuals : Actuals1",
"Actuals1 : Expr14",
"Actuals1 : Actuals1 T_Comma Expr14",
"Expr16 : T_LParen Expr14 T_RParen",
"Expr15 : Expr14 T_Semicolon",
"Expr14 : LValue Assign Expr14",
"Expr14 : Expr13",
"Expr13 : Expr11",
"Expr13 : Expr12",
"Expr12 : Expr12 Or Expr11",
"Expr12 : Expr11 Or Expr11",
"Expr11 : Expr10",
"Expr11 : Expr9",
"Expr10 : Expr10 And Expr9",
"Expr10 : Expr9 And Expr9",
"Expr9 : Expr8",
"Expr9 : Expr71",
"Expr8 : Expr8 Equal Expr71",
"Expr8 : Expr8 NotEqual Expr71",
"Expr8 : Expr71 Equal Expr71",
"Expr8 : Expr71 NotEqual Expr71",
"Expr71 : Expr7",
"Expr71 : Expr6",
"Expr7 : Expr7 LessEqual Expr6",
"Expr7 : Expr7 Less Expr6",
"Expr7 : Expr7 GreaterEqual Expr6",
"Expr7 : Expr7 Greater Expr6",
"Expr7 : Expr6 LessEqual Expr6",
"Expr7 : Expr6 Less Expr6",
"Expr7 : Expr6 GreaterEqual Expr6",
"Expr7 : Expr6 Greater Expr6",
"Expr6 : Expr4",
"Expr6 : Expr5",
"Expr5 : Expr5 Plus Expr4",
"Expr5 : Expr5 Negat Expr4",
"Expr5 : Expr4 Plus Expr4",
"Expr5 : Expr4 Negat Expr4",
"Expr4 : Expr3",
"Expr4 : Expr2",
"Expr3 : Expr3 Mult Expr2",
"Expr3 : Expr3 Div Expr2",
"Expr3 : Expr3 Mod Expr2",
"Expr3 : Expr2 Mult Expr2",
"Expr3 : Expr2 Div Expr2",
"Expr3 : Expr2 Mod Expr2",
"Expr2 : Negat Expr2",
"Expr2 : Excla Expr2",
"Expr2 : Expr1",
"Expr1 : LValue",
"Expr1 : Call",
"Expr1 : Expr",
"Expr : Constant",
"Expr : This",
"Expr : T_LParen Expr14 T_RParen",
"Expr : T_New T_LParen Ident T_RParen",
"Expr : T_NewArray T_LParen Expr14 T_Comma Type T_RParen",
"Expr : T_ReadLine T_LParen T_RParen",
"Expr : T_ReadInteger T_LParen T_RParen",
"LValue : Ident",
"LValue : FieldA",
"LValue : Expr1 T_LBracket Expr14 T_RBracket",
"Call : Ident ActualsCall",
"Call : FieldA ActualsCall",
"FieldA : Expr1 T_Dot Ident",
"Constant : IntC",
"Constant : DoubleC",
"Constant : BoolC",
"Constant : StringC",
"Constant : Null",
"Print : T_Print",
"Break : T_Break",
"Return : T_Return",
"Less : T_Less",
"LessEqual : T_LessEqual",
"Greater : T_Greater",
"GreaterEqual : T_GreaterEqual",
"Assign : T_Assign",
"Equal : T_Equal",
"NotEqual : T_NotEqual",
"And : T_And",
"Or : T_Or",
"Plus : T_Plus",
"Div : T_Div",
"Mult : T_Times",
"Mod : T_Mod",
"Excla : T_Not",
"Negat : T_Minus",
"Null : T_Null",
"This : T_This",
"Void : T_Void",
"Int : T_Int",
"Double : T_Double",
"Bool : T_Bool",
"String : T_String",
"IntC : T_IntConstant",
"DoubleC : T_DoubleConstant",
"BoolC : T_BoolConstant",
"StringC : T_StringConstant",
"Ident : T_Identifier",
"TIdent : T_TypeIdentifier",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 330 "decaf.y"
      /* |  IfStmt { $$ = $1; } 
	 IfStmt: T_If T_LParen Expr T_RParen StmtBlock T_Else StmtBlock { $$ = new ParseTree("IFSTMT", $3, $5, $7); }
      */

int yyerror(const char * s)
{
  fprintf(stderr, "%s\n", s);
  return 0;
}
#line 639 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 89 "decaf.y"
	{ top = yyval = yystack.l_mark[0];}
break;
case 2:
#line 91 "decaf.y"
	{ yyval = new ParseTree("program", yystack.l_mark[0]); }
break;
case 3:
#line 92 "decaf.y"
	{yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 8:
#line 102 "decaf.y"
	{yyval = new ParseTree("variable", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 9:
#line 104 "decaf.y"
	{ yyval = new ParseTree("arraytype", yystack.l_mark[-2]); }
break;
case 10:
#line 105 "decaf.y"
	{ yyval = new ParseTree("primtype", yystack.l_mark[0]); }
break;
case 11:
#line 106 "decaf.y"
	{ yyval = new ParseTree("primtype", yystack.l_mark[0]); }
break;
case 12:
#line 107 "decaf.y"
	{ yyval = new ParseTree("primtype", yystack.l_mark[0]); }
break;
case 13:
#line 108 "decaf.y"
	{ yyval = new ParseTree("primtype", yystack.l_mark[0]); }
break;
case 14:
#line 109 "decaf.y"
	{ yyval = new ParseTree("usertype", yystack.l_mark[0]); }
break;
case 15:
#line 113 "decaf.y"
	{ yyval = new ParseTree("functiondecl", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 16:
#line 114 "decaf.y"
	{ yyval = new ParseTree("functiondecl", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 18:
#line 117 "decaf.y"
	{ yyval = new ParseTree("formals"); }
break;
case 19:
#line 119 "decaf.y"
	{ yyval = new ParseTree("formals", yystack.l_mark[0]); }
break;
case 20:
#line 120 "decaf.y"
	{yystack.l_mark[-2]->addChild(yystack.l_mark[-1]); }
break;
case 21:
#line 122 "decaf.y"
	{ yyval = new ParseTree("stmtblock", yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 22:
#line 124 "decaf.y"
	{ yyval = new ParseTree("vardecls"); }
break;
case 23:
#line 125 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 24:
#line 127 "decaf.y"
	{ yyval = new ParseTree("stmts"); }
break;
case 25:
#line 128 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 26:
#line 132 "decaf.y"
	{ yyval = new ParseTree("class", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 27:
#line 134 "decaf.y"
	{ yyval = nullptr; }
break;
case 28:
#line 135 "decaf.y"
	{ yyval = new ParseTree("extends", yystack.l_mark[0]); }
break;
case 29:
#line 137 "decaf.y"
	{ yyval = nullptr; }
break;
case 31:
#line 140 "decaf.y"
	{ yyval = new ParseTree("implements", yystack.l_mark[0]); }
break;
case 32:
#line 141 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[0]); }
break;
case 33:
#line 143 "decaf.y"
	{ yyval = new ParseTree("fields"); }
break;
case 34:
#line 144 "decaf.y"
	{yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 41:
#line 156 "decaf.y"
	{ yyval = new ParseTree("nullstmt"); }
break;
case 48:
#line 164 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1]); }
break;
case 49:
#line 165 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 50:
#line 167 "decaf.y"
	{ yyval = new ParseTree("print", yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 51:
#line 169 "decaf.y"
	{ yyval = new ParseTree("break", yystack.l_mark[-1]); }
break;
case 52:
#line 171 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 53:
#line 173 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-3], yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 54:
#line 174 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 55:
#line 175 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-2], yystack.l_mark[-1], nullptr); }
break;
case 56:
#line 176 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-1], nullptr); }
break;
case 57:
#line 178 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 58:
#line 180 "decaf.y"
	{ yyval = new ParseTree("while", yystack.l_mark[0]); }
break;
case 59:
#line 184 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 60:
#line 185 "decaf.y"
	{yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]);}
break;
case 61:
#line 187 "decaf.y"
	{ yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 62:
#line 189 "decaf.y"
	{ yyval = new ParseTree("if", yystack.l_mark[0]); }
break;
case 63:
#line 193 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 64:
#line 195 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 65:
#line 197 "decaf.y"
	{ yyval = new ParseTree("actuals");  }
break;
case 67:
#line 200 "decaf.y"
	{ yyval = new ParseTree("actuals", yystack.l_mark[0]);  }
break;
case 68:
#line 201 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[0]); }
break;
case 69:
#line 203 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 71:
#line 207 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 75:
#line 213 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 76:
#line 214 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 79:
#line 219 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 80:
#line 220 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 83:
#line 226 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 84:
#line 227 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 85:
#line 228 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 86:
#line 229 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 89:
#line 234 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 90:
#line 235 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 91:
#line 236 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 92:
#line 237 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 93:
#line 238 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 94:
#line 239 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 95:
#line 240 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 96:
#line 241 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 99:
#line 246 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 100:
#line 247 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 101:
#line 248 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 102:
#line 249 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 105:
#line 254 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 106:
#line 255 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 107:
#line 256 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 108:
#line 257 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 109:
#line 258 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 110:
#line 259 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 111:
#line 261 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 112:
#line 262 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 119:
#line 271 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 120:
#line 272 "decaf.y"
	{ yyval = new ParseTree("new", yystack.l_mark[-1]); }
break;
case 121:
#line 273 "decaf.y"
	{ yyval = new ParseTree("newarray", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 122:
#line 274 "decaf.y"
	{ yyval = new ParseTree("readline"); }
break;
case 123:
#line 275 "decaf.y"
	{ yyval = new ParseTree("readinteger"); }
break;
case 126:
#line 279 "decaf.y"
	{ yyval = new ParseTree("aref", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 127:
#line 281 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 128:
#line 282 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 129:
#line 284 "decaf.y"
	{ yyval = new ParseTree("field_access", yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 135:
#line 294 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 136:
#line 295 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 137:
#line 296 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 138:
#line 297 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 139:
#line 298 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 140:
#line 299 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 141:
#line 300 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 142:
#line 301 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 143:
#line 302 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 144:
#line 303 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 145:
#line 304 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 146:
#line 305 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 147:
#line 306 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 148:
#line 307 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 149:
#line 308 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 150:
#line 309 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 151:
#line 310 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 152:
#line 311 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 153:
#line 312 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 154:
#line 313 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 155:
#line 314 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 156:
#line 315 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 157:
#line 316 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 158:
#line 317 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 159:
#line 318 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 160:
#line 319 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 161:
#line 320 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 162:
#line 321 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 163:
#line 322 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 164:
#line 323 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 165:
#line 324 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
#line 1321 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
