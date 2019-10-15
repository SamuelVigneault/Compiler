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
   15,   18,   18,   19,   19,    5,   22,   22,   23,   23,
   25,   25,   24,   24,   26,   26,   21,   21,   20,   20,
   28,   28,   28,   28,   28,   28,   28,   28,   28,   30,
   30,   31,   32,   34,   40,   40,   40,   40,   33,   42,
   27,   27,   35,   44,   38,   46,   47,   47,   45,   45,
   43,   29,   41,   41,   50,   50,   52,   52,   51,   51,
   54,   54,   55,   55,   57,   57,   57,   57,   58,   58,
   61,   61,   61,   61,   61,   61,   61,   61,   62,   62,
   68,   68,   68,   68,   67,   67,   71,   71,   71,   71,
   71,   71,   72,   72,   72,   77,   77,   77,   79,   79,
   79,   79,   79,   79,   79,   82,   82,   83,   48,   48,
   48,   78,   78,   84,   80,   80,   80,   80,   80,   37,
   39,   36,   64,   63,   66,   65,   49,   59,   60,   56,
   53,   69,   74,   73,   75,   76,   70,   89,   81,   16,
    9,   10,   11,   12,   85,   86,   87,   88,    8,   13,
};
static const short yylen[] = {                            2,
    1,    1,    2,    1,    1,    1,    2,    2,    3,    1,
    1,    1,    1,    1,    6,    6,    1,    0,    1,    3,
    4,    0,    2,    0,    2,    7,    0,    2,    0,    1,
    2,    3,    0,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    2,
    2,    3,    2,    2,    6,    6,    5,    5,    2,    2,
    2,    4,    4,    2,    3,    3,    0,    1,    1,    3,
    3,    2,    3,    1,    1,    1,    3,    3,    1,    1,
    3,    3,    1,    1,    3,    3,    3,    3,    1,    1,
    3,    3,    3,    3,    3,    3,    3,    3,    1,    1,
    3,    3,    3,    3,    1,    1,    3,    3,    3,    3,
    3,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    3,    4,    6,    3,    3,    1,    1,    1,    1,    1,
    4,    2,    2,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
  160,  161,  162,  163,  164,    0,  170,    0,    0,    2,
    4,    5,    6,    0,    0,   10,   11,   12,   13,   14,
    0,  169,   37,   38,    0,    3,    7,    0,    0,    0,
    0,    0,    9,    0,    0,   28,    0,    0,    0,   19,
    0,    0,    0,    0,   31,   33,    0,    8,    0,    0,
    0,    0,   32,   22,   15,   20,   16,   26,   35,   36,
   34,    0,   23,    0,  158,  159,    0,    0,    0,  142,
  141,    0,    0,  140,    0,    0,  165,  167,  166,  168,
  157,  156,   43,    0,   21,    0,   41,   25,   39,   40,
   42,   44,   45,   46,   47,   48,   49,    0,    0,    0,
    0,    0,    0,    0,    0,   74,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  117,  118,  119,  120,    0,  135,  136,  137,  138,
  139,    0,    0,   60,   64,    0,    0,    0,    0,    0,
    0,  132,   50,   51,    0,    0,   53,   54,   72,   59,
   61,    0,  147,    0,  151,    0,    0,  150,    0,    0,
  148,  149,    0,    0,    0,    0,  143,  144,  145,  146,
    0,    0,    0,    0,    0,    0,    0,    0,  152,    0,
    0,    0,    0,  116,  113,  154,  153,  155,    0,    0,
    0,    0,    0,    0,  114,    0,    0,  133,    0,    0,
    0,    0,    0,  125,  124,  121,   69,    0,    0,    0,
   52,    0,   73,   78,   77,   81,   82,   85,   86,   87,
   88,   91,   92,   93,   94,   95,   96,   97,   98,  103,
  104,  101,  102,  107,  108,  109,  110,  111,  112,  134,
    0,    0,    0,   71,  122,    0,    0,   66,   65,   62,
   63,  131,   58,    0,   57,    0,    0,  128,    0,  127,
   70,   56,   55,  123,
};
static const short yydgoto[] = {                          8,
    9,   10,   11,   12,   13,   14,   41,   86,   16,   17,
   18,   19,   20,   42,   87,   21,   43,   62,   64,   88,
   25,   32,   38,   52,   39,   61,   89,   90,   91,   92,
   93,   94,   95,   96,   97,   98,   99,  146,  100,  101,
  102,  103,  134,  104,  208,  142,  209,  184,  154,  106,
  107,  108,  156,  109,  110,  159,  111,  112,  163,  164,
  113,  114,  171,  172,  173,  174,  115,  116,  180,  117,
  118,  119,  189,  190,  191,  120,  121,  122,  123,  124,
  125,  259,  260,  126,  127,  128,  129,  130,  131,
};
static const short yysindex[] = {                       123,
    0,    0,    0,    0,    0,   24,    0,    0,  123,    0,
    0,    0,    0,  -37,  -11,    0,    0,    0,    0,    0,
   -9,    0,    0,    0,   22,    0,    0,  -14,   48,   53,
   24,   39,    0,   15,   15,    0,   -9,    5,   14,    0,
  -11,   18,   38,   54,    0,    0,   -9,    0,   64,   15,
   64,   25,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   15,    0,  175,    0,    0,   72,   82,   82,    0,
    0,   93,  101,    0,  106,  111,    0,    0,    0,    0,
    0,    0,    0,  454,    0,  122,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  396,  130,  133,
  326,  136,  326,  326,   99,    0,  124,  124,  112,  112,
   34,   34,  331,  331,   49,   49,  454,   76,   76,  454,
   88,    0,    0,    0,    0,  122,    0,    0,    0,    0,
    0,  425,  454,    0,    0,   -9,  454,  135,  149,  154,
  454,    0,    0,    0,  454,  166,    0,    0,    0,    0,
    0,  200,    0,  454,    0,  454,  454,    0,  454,  454,
    0,    0,  454,  454,  454,  454,    0,    0,    0,    0,
  454,  454,  454,  454,  454,  454,  454,  454,    0,  454,
  454,  454,  454,    0,    0,    0,    0,    0,  454,  454,
  454,  454,  454,  454,    0,   -9,  454,    0,  454,  454,
  171,  173,  180,    0,    0,    0,    0,  185,  188,   20,
    0,  326,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  191,   73,  363,    0,    0,  109,  454,    0,    0,    0,
    0,    0,    0,  192,    0,  193,  189,    0,  196,    0,
    0,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,  241,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   -5,    0,    0,    0,  207,    0,
    0,  209,    0,  215,  215,    0,    0,    0,  220,    0,
    0,    0,  226,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  236,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  475,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  519,    0,    7,  278,   19,  268,
  128,  187,  104,  117,  172,  233,    0,  558,  575,    0,
  541,    0,    0,    0,    0,  497,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  232,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  281,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  234,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  242,    0,    0,    0,
    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,  277,  -41,  239,    0,   10,    1,   -6,    0,    0,
    0,    0,    2,  261,  -27,    0,    0,    0,    0,   16,
  274,    0,    0,    0,    0,    0,  102, -102,  -94,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -79,    0,  246,    0,  174,  194,    0,  -61,    0,    0,
  -16,    0,  213,    0,   74,  217,    0,  231,  205,  219,
    0,  186,  222,  223,  227,  259,  218,    0,  258,   59,
    0, -104,  210,  257,  260,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 625
static const short yytable[] = {                         23,
   15,  152,  105,  144,  140,   27,   27,   24,   29,   15,
   59,   22,  185,   22,   30,  195,    2,    3,    4,    5,
   63,   55,  105,   57,   23,    1,    2,    3,    4,    5,
   45,   31,   24,   33,   48,   28,  105,  200,    7,  105,
   53,  105,  105,   40,   40,   27,   22,    7,    7,   37,
   75,   75,   15,  201,   75,   46,   75,  203,   47,   56,
   79,  207,   79,   79,  247,  207,   79,   49,   79,  249,
  105,  105,  161,  162,  213,  105,   58,  179,   81,  105,
   65,   66,   50,  105,  234,  235,  236,  237,  238,  239,
   72,   73,  105,   75,   76,   22,   34,   77,   78,   79,
   80,   35,   81,   51,  242,  243,  186,  187,  188,  251,
    2,    3,    4,    5,   54,   82,  148,  241,  150,  151,
  132,   84,  253,    1,    2,    3,    4,    5,    6,  202,
  133,   22,    7,  196,  197,  105,  153,  105,  105,  214,
  215,  136,   89,   89,   89,   89,    7,   89,   89,  137,
  105,   89,  158,   89,  138,   90,   90,   90,   90,  139,
   90,   90,  254,  256,   90,  155,   90,  261,   83,   83,
  141,   83,   83,  181,  183,   83,  147,   83,  145,  149,
  105,  105,   65,   66,  204,  105,   67,   68,   69,  240,
   70,   71,   72,   73,   74,   75,   76,   22,  205,   77,
   78,   79,   80,  206,   81,   99,   99,   99,   99,  211,
   99,   99,   99,   99,  212,   99,   99,   82,   83,   99,
  244,   99,  245,   84,  246,   54,   85,   84,   84,  247,
   84,   84,  216,  217,   84,   28,   84,  248,  252,  258,
    1,  262,  263,   24,   24,  264,  257,   24,   24,   24,
    8,   24,   24,   24,   24,   24,   24,   24,   24,   29,
   24,   24,   24,   24,   18,   24,  100,  100,  100,  100,
   30,  100,  100,  100,  100,   17,  100,  100,   24,   24,
  100,   67,  100,   68,   24,   26,   24,   24,   40,   40,
   60,  126,   40,   40,   40,   44,   40,   40,   40,   40,
   40,   40,   40,   40,   36,   40,   40,   40,   40,   80,
   40,   80,   80,  250,  135,   80,  165,   80,  210,  198,
  157,   76,   76,   40,   40,   76,  160,   76,  192,   40,
  166,   40,   40,   65,   66,  175,  176,   67,   68,   69,
  177,   70,   71,   72,   73,   74,   75,   76,   22,    0,
   77,   78,   79,   80,    0,   81,  222,  223,  224,  225,
  226,  227,  228,  229,  167,  168,  169,  170,   82,   83,
   65,   66,  178,  182,   84,  193,   54,    0,  194,    0,
   72,   73,    0,   75,   76,   22,    0,   77,   78,   79,
   80,    0,   81,  218,  219,  220,  221,  230,  231,  232,
  233,    0,    0,   65,   66,   82,    0,    0,    0,    0,
    0,   84,  255,   72,   73,    0,   75,   76,   22,    0,
   77,   78,   79,   80,    0,   81,    0,    0,    0,    0,
    0,    0,   65,   66,    0,    0,    0,    0,   82,  143,
    0,    0,   72,   73,   84,   75,   76,   22,    0,   77,
   78,   79,   80,    0,   81,    0,    0,    0,    0,    0,
    0,   65,   66,    0,    0,    0,    0,   82,  199,    0,
    0,   72,   73,   84,   75,   76,   22,    0,   77,   78,
   79,   80,    0,   81,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   82,    0,    0,    0,
    0,    0,   84,  129,  129,  129,  129,  129,  129,  129,
  129,  129,  129,  129,  129,  129,  129,    0,  129,  129,
  129,  129,  129,    0,  129,  130,  130,  130,  130,  130,
  130,  130,  130,  130,  130,  130,  130,  130,  130,    0,
  130,  130,  130,  130,  130,    0,  130,  116,  116,  116,
  116,  116,  116,  116,  116,  116,    0,  116,  116,  116,
  116,    0,  116,  116,  116,  116,  116,    0,  116,  115,
  115,  115,  115,  115,  115,  115,  115,  115,    0,  115,
  115,  115,  115,    0,  115,  115,  105,  105,  115,    0,
  115,  105,  105,  105,  105,    0,  105,  105,  105,  105,
    0,  105,  105,  106,  106,  105,    0,  105,  106,  106,
  106,  106,    0,  106,  106,  106,  106,    0,  106,  106,
    0,    0,  106,    0,  106,
};
static const short yycheck[] = {                          6,
    0,  104,   64,   98,   84,   11,   44,    6,   15,    9,
   52,   23,  117,   23,   21,  120,    2,    3,    4,    5,
   62,   49,   84,   51,   31,    1,    2,    3,    4,    5,
   37,   10,   31,   48,   41,   47,   98,  132,   24,  101,
   47,  103,  104,   34,   35,   51,   23,   24,   24,   11,
   44,   45,   52,  133,   48,   51,   50,  137,   45,   50,
   42,  141,   44,   45,   45,  145,   48,   50,   50,   50,
  132,  133,   39,   40,  154,  137,   52,   29,   30,  141,
    8,    9,   45,  145,  189,  190,  191,  192,  193,  194,
   18,   19,  154,   21,   22,   23,   49,   25,   26,   27,
   28,   49,   30,   50,  199,  200,   31,   32,   33,  212,
    2,    3,    4,    5,   51,   43,  101,  197,  103,  104,
   49,   49,   50,    1,    2,    3,    4,    5,    6,  136,
   49,   23,   24,   46,   47,  197,   38,  199,  200,  156,
  157,   49,   39,   40,   41,   42,   24,   44,   45,   49,
  212,   48,   41,   50,   49,   39,   40,   41,   42,   49,
   44,   45,  242,  243,   48,   42,   50,  247,   41,   42,
   49,   44,   45,  115,  116,   48,   44,   50,   49,   44,
  242,  243,    8,    9,   50,  247,   12,   13,   14,  196,
   16,   17,   18,   19,   20,   21,   22,   23,   50,   25,
   26,   27,   28,   50,   30,   34,   35,   36,   37,   44,
   39,   40,   41,   42,   15,   44,   45,   43,   44,   48,
   50,   50,   50,   49,   45,   51,   52,   41,   42,   45,
   44,   45,  159,  160,   48,   47,   50,   50,   48,  246,
    0,   50,   50,    8,    9,   50,  246,   12,   13,   14,
   44,   16,   17,   18,   19,   20,   21,   22,   23,   51,
   25,   26,   27,   28,   50,   30,   34,   35,   36,   37,
   51,   39,   40,   41,   42,   50,   44,   45,   43,   44,
   48,   50,   50,   50,   49,    9,   51,   52,    8,    9,
   52,   50,   12,   13,   14,   35,   16,   17,   18,   19,
   20,   21,   22,   23,   31,   25,   26,   27,   28,   42,
   30,   44,   45,  212,   69,   48,  112,   50,  145,  126,
  108,   44,   45,   43,   44,   48,  110,   50,  119,   49,
  112,   51,   52,    8,    9,  114,  114,   12,   13,   14,
  114,   16,   17,   18,   19,   20,   21,   22,   23,   -1,
   25,   26,   27,   28,   -1,   30,  171,  172,  173,  174,
  175,  176,  177,  178,   34,   35,   36,   37,   43,   44,
    8,    9,  114,  116,   49,  119,   51,   -1,  119,   -1,
   18,   19,   -1,   21,   22,   23,   -1,   25,   26,   27,
   28,   -1,   30,  163,  164,  165,  166,  180,  181,  182,
  183,   -1,   -1,    8,    9,   43,   -1,   -1,   -1,   -1,
   -1,   49,   50,   18,   19,   -1,   21,   22,   23,   -1,
   25,   26,   27,   28,   -1,   30,   -1,   -1,   -1,   -1,
   -1,   -1,    8,    9,   -1,   -1,   -1,   -1,   43,   44,
   -1,   -1,   18,   19,   49,   21,   22,   23,   -1,   25,
   26,   27,   28,   -1,   30,   -1,   -1,   -1,   -1,   -1,
   -1,    8,    9,   -1,   -1,   -1,   -1,   43,   44,   -1,
   -1,   18,   19,   49,   21,   22,   23,   -1,   25,   26,
   27,   28,   -1,   30,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   43,   -1,   -1,   -1,
   -1,   -1,   49,   29,   30,   31,   32,   33,   34,   35,
   36,   37,   38,   39,   40,   41,   42,   -1,   44,   45,
   46,   47,   48,   -1,   50,   29,   30,   31,   32,   33,
   34,   35,   36,   37,   38,   39,   40,   41,   42,   -1,
   44,   45,   46,   47,   48,   -1,   50,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   -1,   39,   40,   41,
   42,   -1,   44,   45,   46,   47,   48,   -1,   50,   29,
   30,   31,   32,   33,   34,   35,   36,   37,   -1,   39,
   40,   41,   42,   -1,   44,   45,   29,   30,   48,   -1,
   50,   34,   35,   36,   37,   -1,   39,   40,   41,   42,
   -1,   44,   45,   29,   30,   48,   -1,   50,   34,   35,
   36,   37,   -1,   39,   40,   41,   42,   -1,   44,   45,
   -1,   -1,   48,   -1,   50,
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
"ClassDec : T_Class Idents Extend Implem T_LBrace Field1 T_RBrace",
"Extend :",
"Extend : T_Extends Idents",
"Implem :",
"Implem : Implem1",
"Implem1 : T_Implements Ident",
"Implem1 : Implem1 T_Comma Ident",
"Field1 :",
"Field1 : Field1 Field",
"Field : VarDec",
"Field : FuncDec",
"Idents : Ident",
"Idents : TIdent",
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
"Expr : T_NewArray T_LParen Expr14 T_Comma NewArrayType T_RParen",
"Expr : T_ReadLine T_LParen T_RParen",
"Expr : T_ReadInteger T_LParen T_RParen",
"NewArrayType : Type",
"NewArrayType : NewArrayHack",
"NewArrayHack : Ident",
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
#line 337 "decaf.y"
      /* |  IfStmt { $$ = $1; } 
	 IfStmt: T_If T_LParen Expr T_RParen StmtBlock T_Else StmtBlock { $$ = new ParseTree("IFSTMT", $3, $5, $7); }
      */

int yyerror(const char * s)
{
  fprintf(stderr, "%s\n", s);
  return 0;
}
#line 649 "y.tab.c"

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
case 43:
#line 158 "decaf.y"
	{ yyval = new ParseTree("nullstmt"); }
break;
case 50:
#line 166 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1]); }
break;
case 51:
#line 167 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 52:
#line 169 "decaf.y"
	{ yyval = new ParseTree("print", yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 53:
#line 171 "decaf.y"
	{ yyval = new ParseTree("break", yystack.l_mark[-1]); }
break;
case 54:
#line 173 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 55:
#line 175 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-3], yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 56:
#line 176 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 57:
#line 177 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-2], yystack.l_mark[-1], nullptr); }
break;
case 58:
#line 178 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-1], nullptr); }
break;
case 59:
#line 180 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 60:
#line 182 "decaf.y"
	{ yyval = new ParseTree("while", yystack.l_mark[0]); }
break;
case 61:
#line 186 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 62:
#line 187 "decaf.y"
	{yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]);}
break;
case 63:
#line 189 "decaf.y"
	{ yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 64:
#line 191 "decaf.y"
	{ yyval = new ParseTree("if", yystack.l_mark[0]); }
break;
case 65:
#line 195 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 66:
#line 197 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 67:
#line 199 "decaf.y"
	{ yyval = new ParseTree("actuals");  }
break;
case 69:
#line 202 "decaf.y"
	{ yyval = new ParseTree("actuals", yystack.l_mark[0]);  }
break;
case 70:
#line 203 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[0]); }
break;
case 71:
#line 205 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 73:
#line 209 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 77:
#line 215 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 78:
#line 216 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 81:
#line 221 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 82:
#line 222 "decaf.y"
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
case 87:
#line 230 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 88:
#line 231 "decaf.y"
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
case 97:
#line 242 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 98:
#line 243 "decaf.y"
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
case 103:
#line 250 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 104:
#line 251 "decaf.y"
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
#line 260 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 112:
#line 261 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 113:
#line 263 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 114:
#line 264 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 121:
#line 273 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 122:
#line 274 "decaf.y"
	{ yyval = new ParseTree("new", yystack.l_mark[-1]); }
break;
case 123:
#line 275 "decaf.y"
	{ yyval = new ParseTree("newarray", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 124:
#line 276 "decaf.y"
	{ yyval = new ParseTree("readline"); }
break;
case 125:
#line 277 "decaf.y"
	{ yyval = new ParseTree("readinteger"); }
break;
case 128:
#line 282 "decaf.y"
	{ yyval  = new ParseTree("usertype", yystack.l_mark[0]); }
break;
case 131:
#line 286 "decaf.y"
	{ yyval = new ParseTree("aref", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 132:
#line 288 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 133:
#line 289 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 134:
#line 291 "decaf.y"
	{ yyval = new ParseTree("field_access", yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 140:
#line 301 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 141:
#line 302 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 142:
#line 303 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 143:
#line 304 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 144:
#line 305 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 145:
#line 306 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 146:
#line 307 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 147:
#line 308 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 148:
#line 309 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 149:
#line 310 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 150:
#line 311 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 151:
#line 312 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 152:
#line 313 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 153:
#line 314 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 154:
#line 315 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 155:
#line 316 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 156:
#line 317 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 157:
#line 318 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 158:
#line 319 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 159:
#line 320 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 160:
#line 321 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 161:
#line 322 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 162:
#line 323 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 163:
#line 324 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 164:
#line 325 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 165:
#line 326 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 166:
#line 327 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 167:
#line 328 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 168:
#line 329 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 169:
#line 330 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 170:
#line 331 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
#line 1335 "y.tab.c"
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
