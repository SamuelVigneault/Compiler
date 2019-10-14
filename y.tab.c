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
    0,    1,    1,    2,    2,    3,    5,    6,    6,    6,
    6,    6,    6,    4,    4,   13,   13,   16,   16,   14,
   17,   17,   18,   18,   19,   19,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   23,   23,   24,   25,   27,
   33,   33,   33,   33,   26,   35,   20,   20,   28,   37,
   31,   39,   40,   40,   38,   38,   36,   22,   34,   34,
   43,   43,   45,   45,   44,   44,   47,   47,   48,   48,
   50,   50,   50,   50,   51,   51,   54,   54,   54,   54,
   54,   54,   54,   54,   55,   55,   61,   61,   61,   61,
   60,   60,   64,   64,   64,   64,   64,   64,   65,   65,
   65,   70,   70,   70,   72,   72,   72,   72,   72,   72,
   72,   41,   41,   41,   71,   71,   75,   73,   73,   73,
   73,   73,   30,   32,   29,   57,   56,   59,   58,   42,
   52,   53,   49,   46,   62,   67,   66,   68,   69,   63,
   80,   74,   15,    8,    9,   10,   11,   76,   77,   78,
   79,    7,   12,
};
static const short yylen[] = {                            2,
    1,    1,    2,    1,    1,    2,    2,    3,    1,    1,
    1,    1,    1,    6,    6,    1,    0,    1,    3,    4,
    0,    2,    0,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    2,    2,    3,    2,    2,
    6,    6,    5,    5,    2,    2,    2,    4,    4,    2,
    3,    3,    0,    1,    1,    3,    3,    2,    3,    1,
    1,    1,    3,    3,    1,    1,    3,    3,    1,    1,
    3,    3,    3,    3,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    3,    1,    1,    3,    3,    3,    3,
    1,    1,    3,    3,    3,    3,    3,    3,    2,    2,
    1,    1,    1,    1,    1,    1,    3,    4,    6,    3,
    3,    1,    1,    4,    2,    2,    3,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,
};
static const short yydefred[] = {                         0,
  143,  144,  145,  146,  147,  153,    0,    0,    2,    4,
    5,    0,    0,    9,   10,   11,   12,   13,    0,    3,
    6,  152,    0,    0,    0,    8,    0,    0,   18,    0,
    0,    0,    0,    7,    0,    0,    0,   21,   14,   19,
   15,    0,   22,    0,  141,  142,    0,    0,    0,  125,
  124,    0,    0,  123,    0,    0,  148,  150,  149,  151,
  140,  139,   29,    0,   20,    0,   27,   24,   25,   26,
   28,   30,   31,   32,   33,   34,   35,    0,    0,    0,
    0,    0,    0,    0,    0,   60,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  103,  104,  105,  106,    0,  118,  119,  120,  121,
  122,    0,    0,   46,   50,    0,    0,    0,    0,    0,
    0,  115,   36,   37,    0,    0,   39,   40,   58,   45,
   47,    0,  130,    0,  134,    0,    0,  133,    0,    0,
  131,  132,    0,    0,    0,    0,  126,  127,  128,  129,
    0,    0,    0,    0,    0,    0,    0,    0,  135,    0,
    0,    0,    0,  102,   99,  137,  136,  138,    0,    0,
    0,    0,    0,    0,  100,    0,    0,  116,    0,    0,
    0,    0,    0,  111,  110,  107,   55,    0,    0,    0,
   38,    0,   59,   64,   63,   67,   68,   71,   72,   73,
   74,   77,   78,   79,   80,   81,   82,   83,   84,   89,
   90,   87,   88,   93,   94,   95,   96,   97,   98,  117,
    0,    0,    0,   57,  108,    0,    0,   52,   51,   48,
   49,  114,   44,    0,   43,    0,    0,   56,   42,   41,
  109,
};
static const short yydgoto[] = {                          7,
    8,    9,   10,   11,   12,   30,   66,   14,   15,   16,
   17,   18,   31,   67,   19,   32,   42,   44,   68,   69,
   70,   71,   72,   73,   74,   75,   76,   77,   78,   79,
  126,   80,   81,   82,   83,  114,   84,  188,  122,  189,
  164,  134,   86,   87,   88,  136,   89,   90,  139,   91,
   92,  143,  144,   93,   94,  151,  152,  153,  154,   95,
   96,  160,   97,   98,   99,  169,  170,  171,  100,  101,
  102,  103,  104,  105,  106,  107,  108,  109,  110,  111,
};
static const short yysindex[] = {                        14,
    0,    0,    0,    0,    0,    0,    0,   14,    0,    0,
    0,  -31,  -18,    0,    0,    0,    0,    0,  -17,    0,
    0,    0,   -5,   -2,    7,    0,   20,   20,    0,  -18,
   23,   22,   29,    0,   31,   20,   31,    0,    0,    0,
    0,   20,    0,  168,    0,    0,   40,   46,   46,    0,
    0,   49,   63,    0,   70,   85,    0,    0,    0,    0,
    0,    0,    0,  405,    0,   88,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   27,   94,   87,
  306,  107,  306,  306,  111,    0,  115,  115,  122,  122,
  -13,  -13,  105,  105,   76,   76,  405,  190,  190,  405,
  225,    0,    0,    0,    0,   88,    0,    0,    0,    0,
    0,  376,  405,    0,    0,  -17,  -17,  116,  142,  147,
  405,    0,    0,    0,  405,  159,    0,    0,    0,    0,
    0,  193,    0,  405,    0,  405,  405,    0,  405,  405,
    0,    0,  405,  405,  405,  405,    0,    0,    0,    0,
  405,  405,  405,  405,  405,  405,  405,  405,    0,  405,
  405,  405,  405,    0,    0,    0,    0,    0,  405,  405,
  405,  405,  405,  405,    0,  -17,  405,    0,  405,  405,
  164,  166,  173,    0,    0,    0,    0,  181,  195,  -38,
    0,  306,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  183,   95,  343,    0,    0,   20,  405,    0,    0,    0,
    0,    0,    0,  201,    0,  206,   15,    0,    0,    0,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,  240,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  218,    0,    0,  226,  226,    0,    0,
    0,  235,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  216,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  426,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  470,    0,   30,  102,   16,   82,
  251,  296,   52,  114,  165,  213,    0,  509,  526,    0,
  492,    0,    0,    0,    0,  448,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  244,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  261,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  250,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                         0,
    0,  256,  224,    0,    5,    1,   -9,    0,    0,    0,
    0,    0,  262,   64,    0,    0,    0,    0,  -53,  119,
  -81,  -70,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -62,    0,  267,    0,  192,  215,    0,
  -44,    0,    0,   -8,    0,  242,    0,  158,  245,    0,
  163,  247,  253,    0,   17,  248,  249,  254,  259,  214,
    0,  258,  207,    0,  -86,  257,  260,  264,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 576
static const short yytable[] = {                         85,
   13,  120,  132,   24,   22,   22,  227,  124,   13,   25,
  165,  229,   21,  175,    1,    2,    3,    4,    5,   85,
   34,    2,    3,    4,    5,  141,  142,  128,   23,  130,
  131,   29,   29,   85,   45,   46,   85,    6,   85,   85,
   40,  180,   26,    6,   52,   53,   27,   55,   56,   22,
  181,   57,   58,   59,   60,   28,   61,   65,  187,   65,
   65,   23,  187,   65,  241,   65,   36,   85,   85,   62,
  123,  193,   35,   61,   61,   64,   85,   61,   37,   61,
   85,   38,  214,  215,  216,  217,  218,  219,  112,   85,
   75,   75,   75,   75,  113,   75,   75,  116,   39,   75,
   41,   75,   45,   46,  159,   61,  182,  183,  222,  223,
  231,  117,   52,   53,  221,   55,   56,   22,  118,   57,
   58,   59,   60,   66,   61,   66,   66,  194,  195,   66,
  127,   66,   85,  119,   85,   85,  121,   62,  147,  148,
  149,  150,  125,   64,  233,   62,   62,   85,  133,   62,
  129,   62,   76,   76,   76,   76,  135,   76,   76,  234,
  236,   76,  138,   76,  238,  184,  220,  202,  203,  204,
  205,  206,  207,  208,  209,   45,   46,   85,   85,   47,
   48,   49,   85,   50,   51,   52,   53,   54,   55,   56,
   22,  185,   57,   58,   59,   60,  186,   61,   85,   85,
   85,   85,  191,   85,   85,   85,   85,  192,   85,   85,
   62,   63,   85,  224,   85,  225,   64,  226,   38,   65,
  166,  167,  168,   23,   23,  227,  237,   23,   23,   23,
  232,   23,   23,   23,   23,   23,   23,   23,   23,    1,
   23,   23,   23,   23,  228,   23,   86,   86,   86,   86,
  239,   86,   86,   86,   86,  240,   86,   86,   23,   23,
   86,    7,   86,   20,   23,   43,   23,   23,   26,   26,
  176,  177,   26,   26,   26,   17,   26,   26,   26,   26,
   26,   26,   26,   26,   16,   26,   26,   26,   26,   33,
   26,   69,   69,   53,   69,   69,  196,  197,   69,   54,
   69,  161,  163,   26,   26,  198,  199,  200,  201,   26,
  230,   26,   26,   45,   46,  115,  190,   47,   48,   49,
  178,   50,   51,   52,   53,   54,   55,   56,   22,  137,
   57,   58,   59,   60,  140,   61,   70,   70,  145,   70,
   70,  155,  156,   70,  146,   70,    0,  157,   62,   63,
   45,   46,  158,  162,   64,  172,   38,    0,  173,    0,
   52,   53,  174,   55,   56,   22,    0,   57,   58,   59,
   60,    0,   61,  210,  211,  212,  213,    0,    0,    0,
    0,    0,    0,   45,   46,   62,    0,    0,    0,    0,
    0,   64,  235,   52,   53,    0,   55,   56,   22,    0,
   57,   58,   59,   60,    0,   61,    0,    0,    0,    0,
    0,    0,   45,   46,    0,    0,    0,    0,   62,  179,
    0,    0,   52,   53,   64,   55,   56,   22,    0,   57,
   58,   59,   60,    0,   61,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   62,    0,    0,
    0,    0,    0,   64,  112,  112,  112,  112,  112,  112,
  112,  112,  112,  112,  112,  112,  112,  112,    0,  112,
  112,  112,  112,  112,    0,  112,  113,  113,  113,  113,
  113,  113,  113,  113,  113,  113,  113,  113,  113,  113,
    0,  113,  113,  113,  113,  113,    0,  113,  102,  102,
  102,  102,  102,  102,  102,  102,  102,    0,  102,  102,
  102,  102,    0,  102,  102,  102,  102,  102,    0,  102,
  101,  101,  101,  101,  101,  101,  101,  101,  101,    0,
  101,  101,  101,  101,    0,  101,  101,   91,   91,  101,
    0,  101,   91,   91,   91,   91,    0,   91,   91,   91,
   91,    0,   91,   91,   92,   92,   91,    0,   91,   92,
   92,   92,   92,    0,   92,   92,   92,   92,    0,   92,
   92,    0,    0,   92,    0,   92,
};
static const short yycheck[] = {                         44,
    0,   64,   84,   13,   23,   23,   45,   78,    8,   19,
   97,   50,   44,  100,    1,    2,    3,    4,    5,   64,
   30,    2,    3,    4,    5,   39,   40,   81,   47,   83,
   84,   27,   28,   78,    8,    9,   81,   24,   83,   84,
   36,  112,   48,   24,   18,   19,   49,   21,   22,   23,
  113,   25,   26,   27,   28,   49,   30,   42,  121,   44,
   45,   47,  125,   48,   50,   50,   45,  112,  113,   43,
   44,  134,   50,   44,   45,   49,  121,   48,   50,   50,
  125,   51,  169,  170,  171,  172,  173,  174,   49,  134,
   39,   40,   41,   42,   49,   44,   45,   49,   35,   48,
   37,   50,    8,    9,   29,   30,  116,  117,  179,  180,
  192,   49,   18,   19,  177,   21,   22,   23,   49,   25,
   26,   27,   28,   42,   30,   44,   45,  136,  137,   48,
   44,   50,  177,   49,  179,  180,   49,   43,   34,   35,
   36,   37,   49,   49,   50,   44,   45,  192,   38,   48,
   44,   50,   39,   40,   41,   42,   42,   44,   45,  222,
  223,   48,   41,   50,  227,   50,  176,  151,  152,  153,
  154,  155,  156,  157,  158,    8,    9,  222,  223,   12,
   13,   14,  227,   16,   17,   18,   19,   20,   21,   22,
   23,   50,   25,   26,   27,   28,   50,   30,   34,   35,
   36,   37,   44,   39,   40,   41,   42,   15,   44,   45,
   43,   44,   48,   50,   50,   50,   49,   45,   51,   52,
   31,   32,   33,    8,    9,   45,  226,   12,   13,   14,
   48,   16,   17,   18,   19,   20,   21,   22,   23,    0,
   25,   26,   27,   28,   50,   30,   34,   35,   36,   37,
   50,   39,   40,   41,   42,   50,   44,   45,   43,   44,
   48,   44,   50,    8,   49,   42,   51,   52,    8,    9,
   46,   47,   12,   13,   14,   50,   16,   17,   18,   19,
   20,   21,   22,   23,   50,   25,   26,   27,   28,   28,
   30,   41,   42,   50,   44,   45,  139,  140,   48,   50,
   50,   95,   96,   43,   44,  143,  144,  145,  146,   49,
  192,   51,   52,    8,    9,   49,  125,   12,   13,   14,
  106,   16,   17,   18,   19,   20,   21,   22,   23,   88,
   25,   26,   27,   28,   90,   30,   41,   42,   92,   44,
   45,   94,   94,   48,   92,   50,   -1,   94,   43,   44,
    8,    9,   94,   96,   49,   99,   51,   -1,   99,   -1,
   18,   19,   99,   21,   22,   23,   -1,   25,   26,   27,
   28,   -1,   30,  160,  161,  162,  163,   -1,   -1,   -1,
   -1,   -1,   -1,    8,    9,   43,   -1,   -1,   -1,   -1,
   -1,   49,   50,   18,   19,   -1,   21,   22,   23,   -1,
   25,   26,   27,   28,   -1,   30,   -1,   -1,   -1,   -1,
   -1,   -1,    8,    9,   -1,   -1,   -1,   -1,   43,   44,
   -1,   -1,   18,   19,   49,   21,   22,   23,   -1,   25,
   26,   27,   28,   -1,   30,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   43,   -1,   -1,
   -1,   -1,   -1,   49,   29,   30,   31,   32,   33,   34,
   35,   36,   37,   38,   39,   40,   41,   42,   -1,   44,
   45,   46,   47,   48,   -1,   50,   29,   30,   31,   32,
   33,   34,   35,   36,   37,   38,   39,   40,   41,   42,
   -1,   44,   45,   46,   47,   48,   -1,   50,   29,   30,
   31,   32,   33,   34,   35,   36,   37,   -1,   39,   40,
   41,   42,   -1,   44,   45,   46,   47,   48,   -1,   50,
   29,   30,   31,   32,   33,   34,   35,   36,   37,   -1,
   39,   40,   41,   42,   -1,   44,   45,   29,   30,   48,
   -1,   50,   34,   35,   36,   37,   -1,   39,   40,   41,
   42,   -1,   44,   45,   29,   30,   48,   -1,   50,   34,
   35,   36,   37,   -1,   39,   40,   41,   42,   -1,   44,
   45,   -1,   -1,   48,   -1,   50,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 1
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
"Expr : T_NewArray T_LParen Ident T_Comma Type T_RParen",
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
#line 310 "decaf.y"
      /* |  IfStmt { $$ = $1; } 
	 IfStmt: T_If T_LParen Expr T_RParen StmtBlock T_Else StmtBlock { $$ = new ParseTree("IFSTMT", $3, $5, $7); }
      */

int yyerror(const char * s)
{
  fprintf(stderr, "%s\n", s);
  return 0;
}
#line 612 "y.tab.c"

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
case 7:
#line 101 "decaf.y"
	{yyval = new ParseTree("variable", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 8:
#line 103 "decaf.y"
	{ yyval = new ParseTree("arraytype", yystack.l_mark[-2]); }
break;
case 9:
#line 104 "decaf.y"
	{ yyval = new ParseTree("primtype", yystack.l_mark[0]); }
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
	{ yyval = new ParseTree("usertype", yystack.l_mark[0]); }
break;
case 14:
#line 112 "decaf.y"
	{ yyval = new ParseTree("functiondecl", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 15:
#line 113 "decaf.y"
	{ yyval = new ParseTree("functiondecl", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 17:
#line 116 "decaf.y"
	{ yyval = new ParseTree("formals"); }
break;
case 18:
#line 118 "decaf.y"
	{ yyval = new ParseTree("formals", yystack.l_mark[0]); }
break;
case 19:
#line 119 "decaf.y"
	{yystack.l_mark[-2]->addChild(yystack.l_mark[-1]); }
break;
case 20:
#line 121 "decaf.y"
	{ yyval = new ParseTree("stmtblock", yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 21:
#line 123 "decaf.y"
	{ yyval = new ParseTree("vardecls"); }
break;
case 22:
#line 124 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 23:
#line 126 "decaf.y"
	{ yyval = new ParseTree("stmts"); }
break;
case 24:
#line 127 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 29:
#line 136 "decaf.y"
	{ yyval = new ParseTree("nullstmt"); }
break;
case 36:
#line 144 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1]); }
break;
case 37:
#line 145 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 38:
#line 147 "decaf.y"
	{ yyval = new ParseTree("print", yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 39:
#line 149 "decaf.y"
	{ yyval = new ParseTree("break", yystack.l_mark[-1]); }
break;
case 40:
#line 151 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 41:
#line 153 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-3], yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 42:
#line 154 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 43:
#line 155 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-2], yystack.l_mark[-1], nullptr); }
break;
case 44:
#line 156 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-1], nullptr); }
break;
case 45:
#line 158 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 46:
#line 160 "decaf.y"
	{ yyval = new ParseTree("while", yystack.l_mark[0]); }
break;
case 47:
#line 164 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 48:
#line 165 "decaf.y"
	{yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]);}
break;
case 49:
#line 167 "decaf.y"
	{ yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 50:
#line 169 "decaf.y"
	{ yyval = new ParseTree("if", yystack.l_mark[0]); }
break;
case 51:
#line 173 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 52:
#line 175 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 53:
#line 177 "decaf.y"
	{ yyval = new ParseTree("actuals");  }
break;
case 55:
#line 180 "decaf.y"
	{ yyval = new ParseTree("actuals", yystack.l_mark[0]);  }
break;
case 56:
#line 181 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[0]); }
break;
case 57:
#line 183 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 59:
#line 187 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 63:
#line 193 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 64:
#line 194 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 67:
#line 199 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 68:
#line 200 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 71:
#line 206 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 72:
#line 207 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 73:
#line 208 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 74:
#line 209 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 77:
#line 214 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 78:
#line 215 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 79:
#line 216 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 80:
#line 217 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 81:
#line 218 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 82:
#line 219 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 83:
#line 220 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 84:
#line 221 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 87:
#line 226 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 88:
#line 227 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 89:
#line 228 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 90:
#line 229 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 93:
#line 234 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 94:
#line 235 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 95:
#line 236 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 96:
#line 237 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 97:
#line 238 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 98:
#line 239 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 99:
#line 241 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 100:
#line 242 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 107:
#line 251 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 108:
#line 252 "decaf.y"
	{ yyval = new ParseTree("new", yystack.l_mark[-1]); }
break;
case 109:
#line 253 "decaf.y"
	{ yyval = new ParseTree("newarray", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 110:
#line 254 "decaf.y"
	{ yyval = new ParseTree("readline"); }
break;
case 111:
#line 255 "decaf.y"
	{ yyval = new ParseTree("readinteger"); }
break;
case 114:
#line 259 "decaf.y"
	{ yyval = new ParseTree("aref", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 115:
#line 261 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 116:
#line 262 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 117:
#line 264 "decaf.y"
	{ yyval = new ParseTree("field_access", yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 123:
#line 274 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 124:
#line 275 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 125:
#line 276 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 126:
#line 277 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 127:
#line 278 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 128:
#line 279 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 129:
#line 280 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 130:
#line 281 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 131:
#line 282 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 132:
#line 283 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 133:
#line 284 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 134:
#line 285 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 135:
#line 286 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 136:
#line 287 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 137:
#line 288 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 138:
#line 289 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 139:
#line 290 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 140:
#line 291 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 141:
#line 292 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 142:
#line 293 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 143:
#line 294 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 144:
#line 295 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 145:
#line 296 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 146:
#line 297 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 147:
#line 298 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 148:
#line 299 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 149:
#line 300 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 150:
#line 301 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 151:
#line 302 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 152:
#line 303 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 153:
#line 304 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
#line 1262 "y.tab.c"
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
