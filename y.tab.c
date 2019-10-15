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
    0,    1,    1,    2,    2,    2,    2,    3,    7,    8,
    8,    8,    8,    8,    8,    4,    4,   15,   15,   18,
   18,   16,   19,   19,   20,   20,    5,   23,   23,   24,
   24,   26,   26,   25,   25,   27,   27,   22,   22,    6,
   28,   28,   29,   29,   21,   21,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   33,   33,   34,   35,   37,
   43,   43,   43,   43,   36,   45,   30,   30,   38,   47,
   41,   49,   50,   50,   48,   48,   46,   32,   44,   44,
   53,   53,   55,   55,   54,   54,   57,   57,   58,   58,
   60,   60,   60,   60,   61,   61,   64,   64,   64,   64,
   64,   64,   64,   64,   65,   65,   71,   71,   71,   71,
   70,   70,   74,   74,   74,   74,   74,   74,   75,   75,
   75,   80,   80,   80,   82,   82,   82,   82,   82,   82,
   82,   85,   85,   86,   51,   51,   51,   81,   81,   87,
   83,   83,   83,   83,   83,   40,   42,   39,   67,   66,
   69,   68,   52,   62,   63,   59,   56,   72,   77,   76,
   78,   79,   73,   92,   84,   17,   10,   11,   12,   13,
   88,   89,   90,   91,    9,   14,
};
static const short yylen[] = {                            2,
    1,    1,    2,    1,    1,    1,    1,    2,    2,    3,
    1,    1,    1,    1,    1,    6,    6,    1,    0,    1,
    3,    4,    0,    2,    0,    2,    7,    0,    2,    0,
    1,    2,    3,    0,    2,    1,    1,    1,    1,    2,
    3,    3,    5,    5,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    2,    2,    3,    2,    2,
    6,    6,    5,    5,    2,    2,    2,    4,    4,    2,
    3,    3,    0,    1,    1,    3,    3,    2,    3,    1,
    1,    1,    3,    3,    1,    1,    3,    3,    1,    1,
    3,    3,    3,    3,    1,    1,    3,    3,    3,    3,
    3,    3,    3,    3,    1,    1,    3,    3,    3,    3,
    1,    1,    3,    3,    3,    3,    3,    3,    2,    2,
    1,    1,    1,    1,    1,    1,    3,    4,    6,    3,
    3,    1,    1,    1,    1,    1,    4,    2,    2,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
  166,  167,  168,  169,  170,    0,    0,  176,    0,    0,
    2,    4,    5,    6,    7,    0,    0,   11,   12,   13,
   14,   15,    0,    0,  175,   38,   39,    0,    0,    3,
    8,    0,    0,    0,   40,    0,    0,    0,    0,    0,
   41,   10,    0,    0,    0,    0,   42,   29,    0,    0,
    0,   20,    0,    0,    0,    0,    0,    0,   32,   34,
    0,    9,    0,    0,    0,    0,    0,    0,   33,   23,
   16,   21,   17,   43,   44,   27,   36,   37,   35,    0,
   24,    0,  164,  165,    0,    0,    0,  148,  147,    0,
    0,  146,    0,    0,  171,  173,  172,  174,  163,  162,
   49,    0,   22,    0,   47,   26,   45,   46,   48,   50,
   51,   52,   53,   54,   55,    0,    0,    0,    0,    0,
    0,    0,    0,   80,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  123,
  124,  125,  126,    0,  141,  142,  143,  144,  145,    0,
    0,   66,   70,    0,    0,    0,    0,    0,    0,  138,
   56,   57,    0,    0,   59,   60,   78,   65,   67,    0,
  153,    0,  157,    0,    0,  156,    0,    0,  154,  155,
    0,    0,    0,    0,  149,  150,  151,  152,    0,    0,
    0,    0,    0,    0,    0,    0,  158,    0,    0,    0,
    0,  122,  119,  160,  159,  161,    0,    0,    0,    0,
    0,    0,  120,    0,    0,  139,    0,    0,    0,    0,
    0,  131,  130,  127,   75,    0,    0,    0,   58,    0,
   79,   84,   83,   87,   88,   91,   92,   93,   94,   97,
   98,   99,  100,  101,  102,  103,  104,  109,  110,  107,
  108,  113,  114,  115,  116,  117,  118,  140,    0,    0,
    0,   77,  128,    0,    0,   72,   71,   68,   69,  137,
   64,    0,   63,    0,    0,  134,    0,  133,   76,   62,
   61,  129,
};
static const short yydgoto[] = {                          9,
   10,   11,   12,   13,   14,   15,   16,   53,  104,   18,
   19,   20,   21,   22,   54,  105,   23,   55,   80,   82,
  106,   28,   40,   50,   68,   51,   79,   24,   38,  107,
  108,  109,  110,  111,  112,  113,  114,  115,  116,  117,
  164,  118,  119,  120,  121,  152,  122,  226,  160,  227,
  202,  172,  124,  125,  126,  174,  127,  128,  177,  129,
  130,  181,  182,  131,  132,  189,  190,  191,  192,  133,
  134,  198,  135,  136,  137,  207,  208,  209,  138,  139,
  140,  141,  142,  143,  277,  278,  144,  145,  146,  147,
  148,  149,
};
static const short yysindex[] = {                       155,
    0,    0,    0,    0,    0,   13,  -14,    0,    0,  155,
    0,    0,    0,    0,    0,  -32,  -13,    0,    0,    0,
    0,    0,  -14,   26,    0,    0,    0,    6,  -25,    0,
    0,  -26,   -9,   -2,    0,  -13,  -14,   16,   13,   52,
    0,    0,  101,  101,   18,   22,    0,    0,  -14,   23,
   31,    0,  -13,   29,   39,   42,  101,  101,    0,    0,
  -14,    0,   56,  101,   56,   67,   79,   95,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  101,
    0,  172,    0,    0,   85,   87,   87,    0,    0,   89,
  100,    0,  102,  104,    0,    0,    0,    0,    0,    0,
    0,  436,    0,  147,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  378,  152,  121,  308,  130,
  308,  308,  169,    0,  171,  171,  170,  170,   72,   72,
  107,  107,   91,   91,  436,  145,  145,  436,   99,    0,
    0,    0,    0,  147,    0,    0,    0,    0,    0,  407,
  436,    0,    0,  -14,  436,  175,  183,  192,  436,    0,
    0,    0,  436,  178,    0,    0,    0,    0,    0,  232,
    0,  436,    0,  436,  436,    0,  436,  436,    0,    0,
  436,  436,  436,  436,    0,    0,    0,    0,  436,  436,
  436,  436,  436,  436,  436,  436,    0,  436,  436,  436,
  436,    0,    0,    0,    0,    0,  436,  436,  436,  436,
  436,  436,    0,  -14,  436,    0,  436,  436,  201,  206,
  212,    0,    0,    0,    0,  213,  209,  -27,    0,  308,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  215,  105,
  345,    0,    0,  250,  436,    0,    0,    0,    0,    0,
    0,  214,    0,  216,  221,    0,  228,    0,    0,    0,
    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  287,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   -5,    0,    0,
    0,    0,  248,    0,    0,    0,    0,    0,    0,  247,
    0,    0,  253,  253,    0,    0,    0,    0,    0,    0,
  258,    0,    0,    0,  261,    0,  253,  253,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  218,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  457,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  501,    0,   20,  398,  332,  369,   11,  125,
  164,  300,  260,  433,    0,  540,  557,    0,  523,    0,
    0,    0,    0,  479,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  268,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  263,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   67,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  269,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
    0,  303,  -29,  255,    0,    0,   58,    1,   -4,    0,
    0,    0,    0,    9,  -37,   30,  313,    0,    0,    0,
  -39,  293,    0,    0,    0,    0,    0,    0,    0,  113,
 -122, -108,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -97,    0,  259,    0,  184,  205,    0,
  -78,    0,    0,   -3,    0,  229,    0,   51,  230,    0,
   36,  226,  231,    0,  419,  233,  237,  246,  249,  191,
    0,  245,  116,    0, -121,  223,  225,  256,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
#define YYTABLESIZE 615
static const short yytable[] = {                        170,
   17,   26,   29,  123,  158,   28,   56,  162,   25,   25,
   17,   31,   33,  203,   27,   39,  213,  265,   34,   66,
   67,   42,  267,  123,   36,   41,    1,    2,    3,    4,
    5,   45,   46,   32,   26,   25,    8,  123,   77,   43,
  123,  218,  123,  123,   59,   28,   44,   27,   62,    8,
   81,   89,   89,  219,   89,   89,   69,  221,   89,   47,
   89,  225,   49,   81,   81,  225,   57,   81,   17,   81,
   58,  123,  123,   60,  231,   61,  123,   35,   63,  166,
  123,  168,  169,   64,  123,  252,  253,  254,  255,  256,
  257,   65,   71,  123,   73,    1,    2,    3,    4,    5,
   52,   52,    2,    3,    4,    5,   70,  269,  260,  261,
  179,  180,   83,   84,   52,   52,   74,  259,    8,  197,
   99,   72,   90,   91,    8,   93,   94,   25,   75,   95,
   96,   97,   98,  150,   99,  151,  123,  154,  123,  123,
  185,  186,  187,  188,  214,  215,   76,  100,  155,  220,
  156,  123,  157,  102,  271,    1,    2,    3,    4,    5,
    6,    7,  272,  274,  165,   90,   90,  279,   90,   90,
  232,  233,   90,  167,   90,  204,  205,  206,    8,   83,
   84,  123,  123,   85,   86,   87,  123,   88,   89,   90,
   91,   92,   93,   94,   25,  159,   95,   96,   97,   98,
  163,   99,   95,   95,   95,   95,  171,   95,   95,  258,
  176,   95,  173,   95,  100,  101,  236,  237,  238,  239,
  102,  229,   70,  103,  222,   25,   25,  234,  235,   25,
   25,   25,  223,   25,   25,   25,   25,   25,   25,   25,
   25,  224,   25,   25,   25,   25,  230,   25,  199,  201,
  262,    2,    3,    4,    5,  263,  264,  265,  266,  276,
   25,   25,  270,  280,  275,  281,   25,   32,   25,   25,
   46,   46,   25,    8,   46,   46,   46,  282,   46,   46,
   46,   46,   46,   46,   46,   46,    1,   46,   46,   46,
   46,    9,   46,  105,  105,  105,  105,   30,  105,  105,
  105,  105,   19,  105,  105,   46,   46,  105,   31,  105,
   18,   46,   30,   46,   46,   83,   84,   73,  132,   85,
   86,   87,   78,   88,   89,   90,   91,   92,   93,   94,
   25,   48,   95,   96,   97,   98,   37,   99,   96,   96,
   96,   96,  268,   96,   96,  153,  228,   96,  216,   96,
  100,  101,   83,   84,  175,  183,  102,  178,   70,  210,
  184,  211,   90,   91,  193,   93,   94,   25,  194,   95,
   96,   97,   98,   85,   99,   85,   85,  195,  200,   85,
  196,   85,    0,    0,    0,   83,   84,  100,  248,  249,
  250,  251,  212,  102,  273,   90,   91,    0,   93,   94,
   25,    0,   95,   96,   97,   98,    0,   99,    0,    0,
   86,    0,   86,   86,   83,   84,   86,    0,   86,    0,
  100,  161,    0,    0,   90,   91,  102,   93,   94,   25,
    0,   95,   96,   97,   98,    0,   99,    0,    0,    0,
    0,   82,   82,   83,   84,   82,    0,   82,    0,  100,
  217,    0,    0,   90,   91,  102,   93,   94,   25,    0,
   95,   96,   97,   98,    0,   99,  106,  106,  106,  106,
    0,  106,  106,  106,  106,    0,  106,  106,  100,    0,
  106,    0,  106,    0,  102,  135,  135,  135,  135,  135,
  135,  135,  135,  135,  135,  135,  135,  135,  135,    0,
  135,  135,  135,  135,  135,    0,  135,  136,  136,  136,
  136,  136,  136,  136,  136,  136,  136,  136,  136,  136,
  136,    0,  136,  136,  136,  136,  136,    0,  136,  122,
  122,  122,  122,  122,  122,  122,  122,  122,    0,  122,
  122,  122,  122,    0,  122,  122,  122,  122,  122,    0,
  122,  121,  121,  121,  121,  121,  121,  121,  121,  121,
    0,  121,  121,  121,  121,    0,  121,  121,  111,  111,
  121,    0,  121,  111,  111,  111,  111,    0,  111,  111,
  111,  111,    0,  111,  111,  112,  112,  111,    0,  111,
  112,  112,  112,  112,    0,  112,  112,  112,  112,    0,
  112,  112,    0,    0,  112,    0,  112,  240,  241,  242,
  243,  244,  245,  246,  247,
};
static const short yycheck[] = {                        122,
    0,    6,    7,   82,  102,   11,   44,  116,   23,   23,
   10,   44,   17,  135,    6,   10,  138,   45,   23,   57,
   58,   48,   50,  102,   24,   51,    1,    2,    3,    4,
    5,   36,   37,   47,   39,   23,   24,  116,   68,   49,
  119,  150,  121,  122,   49,   51,   49,   39,   53,   24,
   80,   41,   42,  151,   44,   45,   61,  155,   48,   44,
   50,  159,   11,   44,   45,  163,   49,   48,   68,   50,
   49,  150,  151,   51,  172,   45,  155,   52,   50,  119,
  159,  121,  122,   45,  163,  207,  208,  209,  210,  211,
  212,   50,   63,  172,   65,    1,    2,    3,    4,    5,
   43,   44,    2,    3,    4,    5,   51,  230,  217,  218,
   39,   40,    8,    9,   57,   58,   50,  215,   24,   29,
   30,   64,   18,   19,   24,   21,   22,   23,   50,   25,
   26,   27,   28,   49,   30,   49,  215,   49,  217,  218,
   34,   35,   36,   37,   46,   47,   52,   43,   49,  154,
   49,  230,   49,   49,   50,    1,    2,    3,    4,    5,
    6,    7,  260,  261,   44,   41,   42,  265,   44,   45,
  174,  175,   48,   44,   50,   31,   32,   33,   24,    8,
    9,  260,  261,   12,   13,   14,  265,   16,   17,   18,
   19,   20,   21,   22,   23,   49,   25,   26,   27,   28,
   49,   30,   39,   40,   41,   42,   38,   44,   45,  214,
   41,   48,   42,   50,   43,   44,  181,  182,  183,  184,
   49,   44,   51,   52,   50,    8,    9,  177,  178,   12,
   13,   14,   50,   16,   17,   18,   19,   20,   21,   22,
   23,   50,   25,   26,   27,   28,   15,   30,  133,  134,
   50,    2,    3,    4,    5,   50,   45,   45,   50,  264,
   43,   44,   48,   50,  264,   50,   49,   47,   51,   52,
    8,    9,   23,   24,   12,   13,   14,   50,   16,   17,
   18,   19,   20,   21,   22,   23,    0,   25,   26,   27,
   28,   44,   30,   34,   35,   36,   37,   51,   39,   40,
   41,   42,   50,   44,   45,   43,   44,   48,   51,   50,
   50,   49,   10,   51,   52,    8,    9,   50,   50,   12,
   13,   14,   68,   16,   17,   18,   19,   20,   21,   22,
   23,   39,   25,   26,   27,   28,   24,   30,   39,   40,
   41,   42,  230,   44,   45,   87,  163,   48,  144,   50,
   43,   44,    8,    9,  126,  130,   49,  128,   51,  137,
  130,  137,   18,   19,  132,   21,   22,   23,  132,   25,
   26,   27,   28,   42,   30,   44,   45,  132,  134,   48,
  132,   50,   -1,   -1,   -1,    8,    9,   43,  198,  199,
  200,  201,  137,   49,   50,   18,   19,   -1,   21,   22,
   23,   -1,   25,   26,   27,   28,   -1,   30,   -1,   -1,
   42,   -1,   44,   45,    8,    9,   48,   -1,   50,   -1,
   43,   44,   -1,   -1,   18,   19,   49,   21,   22,   23,
   -1,   25,   26,   27,   28,   -1,   30,   -1,   -1,   -1,
   -1,   44,   45,    8,    9,   48,   -1,   50,   -1,   43,
   44,   -1,   -1,   18,   19,   49,   21,   22,   23,   -1,
   25,   26,   27,   28,   -1,   30,   34,   35,   36,   37,
   -1,   39,   40,   41,   42,   -1,   44,   45,   43,   -1,
   48,   -1,   50,   -1,   49,   29,   30,   31,   32,   33,
   34,   35,   36,   37,   38,   39,   40,   41,   42,   -1,
   44,   45,   46,   47,   48,   -1,   50,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,
   42,   -1,   44,   45,   46,   47,   48,   -1,   50,   29,
   30,   31,   32,   33,   34,   35,   36,   37,   -1,   39,
   40,   41,   42,   -1,   44,   45,   46,   47,   48,   -1,
   50,   29,   30,   31,   32,   33,   34,   35,   36,   37,
   -1,   39,   40,   41,   42,   -1,   44,   45,   29,   30,
   48,   -1,   50,   34,   35,   36,   37,   -1,   39,   40,
   41,   42,   -1,   44,   45,   29,   30,   48,   -1,   50,
   34,   35,   36,   37,   -1,   39,   40,   41,   42,   -1,
   44,   45,   -1,   -1,   48,   -1,   50,  189,  190,  191,
  192,  193,  194,  195,  196,
};
#define YYFINAL 9
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
"Decl1 : InterfaceDec",
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
"InterfaceDec : Interface T_RBrace",
"Interface : T_Interface Ident T_LBrace",
"Interface : Interface Prototype T_Semicolon",
"Prototype : Type Ident T_LParen Formals T_RParen",
"Prototype : Void Ident T_LParen Formals T_RParen",
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
#line 349 "decaf.y"
      /* |  IfStmt { $$ = $1; } 
	 IfStmt: T_If T_LParen Expr T_RParen StmtBlock T_Else StmtBlock { $$ = new ParseTree("IFSTMT", $3, $5, $7); }
      */

int yyerror(const char * s)
{
  fprintf(stderr, "%s\n", s);
  return 0;
}
#line 663 "y.tab.c"

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
case 9:
#line 103 "decaf.y"
	{yyval = new ParseTree("variable", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 10:
#line 105 "decaf.y"
	{ yyval = new ParseTree("arraytype", yystack.l_mark[-2]); }
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
	{ yyval = new ParseTree("primtype", yystack.l_mark[0]); }
break;
case 15:
#line 110 "decaf.y"
	{ yyval = new ParseTree("usertype", yystack.l_mark[0]); }
break;
case 16:
#line 114 "decaf.y"
	{ yyval = new ParseTree("functiondecl", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 17:
#line 115 "decaf.y"
	{ yyval = new ParseTree("functiondecl", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 19:
#line 118 "decaf.y"
	{ yyval = new ParseTree("formals"); }
break;
case 20:
#line 120 "decaf.y"
	{ yyval = new ParseTree("formals", yystack.l_mark[0]); }
break;
case 21:
#line 121 "decaf.y"
	{yystack.l_mark[-2]->addChild(yystack.l_mark[-1]); }
break;
case 22:
#line 123 "decaf.y"
	{ yyval = new ParseTree("stmtblock", yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 23:
#line 125 "decaf.y"
	{ yyval = new ParseTree("vardecls"); }
break;
case 24:
#line 126 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 25:
#line 128 "decaf.y"
	{ yyval = new ParseTree("stmts"); }
break;
case 26:
#line 129 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 27:
#line 133 "decaf.y"
	{ yyval = new ParseTree("class", yystack.l_mark[-5], yystack.l_mark[-4], yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 28:
#line 135 "decaf.y"
	{ yyval = nullptr; }
break;
case 29:
#line 136 "decaf.y"
	{ yyval = new ParseTree("extends", yystack.l_mark[0]); }
break;
case 30:
#line 138 "decaf.y"
	{ yyval = nullptr; }
break;
case 32:
#line 141 "decaf.y"
	{ yyval = new ParseTree("implements", yystack.l_mark[0]); }
break;
case 33:
#line 142 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[0]); }
break;
case 34:
#line 144 "decaf.y"
	{ yyval = new ParseTree("fields"); }
break;
case 35:
#line 145 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 41:
#line 157 "decaf.y"
	{ yyval = new ParseTree("interface", yystack.l_mark[-1]); }
break;
case 42:
#line 158 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[-1]); }
break;
case 43:
#line 160 "decaf.y"
	{ yyval = new ParseTree("prototype", yystack.l_mark[-4], yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 44:
#line 161 "decaf.y"
	{ yyval = new ParseTree("prototype", yystack.l_mark[-4], yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 49:
#line 170 "decaf.y"
	{ yyval = new ParseTree("nullstmt"); }
break;
case 56:
#line 178 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1]); }
break;
case 57:
#line 179 "decaf.y"
	{ yyval = new ParseTree("return", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 58:
#line 181 "decaf.y"
	{ yyval = new ParseTree("print", yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 59:
#line 183 "decaf.y"
	{ yyval = new ParseTree("break", yystack.l_mark[-1]); }
break;
case 60:
#line 185 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 61:
#line 187 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-3], yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 62:
#line 188 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-2], yystack.l_mark[-1]); }
break;
case 63:
#line 189 "decaf.y"
	{ yyval = new ParseTree("for", yystack.l_mark[-2], yystack.l_mark[-1], nullptr); }
break;
case 64:
#line 190 "decaf.y"
	{ yyval = new ParseTree("for", nullptr, yystack.l_mark[-1], nullptr); }
break;
case 65:
#line 192 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 66:
#line 194 "decaf.y"
	{ yyval = new ParseTree("while", yystack.l_mark[0]); }
break;
case 67:
#line 198 "decaf.y"
	{ yystack.l_mark[-1]->addChild(yystack.l_mark[0]); }
break;
case 68:
#line 199 "decaf.y"
	{yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]);}
break;
case 69:
#line 201 "decaf.y"
	{ yystack.l_mark[-3]->addChild(yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 70:
#line 203 "decaf.y"
	{ yyval = new ParseTree("if", yystack.l_mark[0]); }
break;
case 71:
#line 207 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 72:
#line 209 "decaf.y"
	{yyval = yystack.l_mark[-1]; }
break;
case 73:
#line 211 "decaf.y"
	{ yyval = new ParseTree("actuals");  }
break;
case 75:
#line 214 "decaf.y"
	{ yyval = new ParseTree("actuals", yystack.l_mark[0]);  }
break;
case 76:
#line 215 "decaf.y"
	{ yystack.l_mark[-2]->addChild(yystack.l_mark[0]); }
break;
case 77:
#line 217 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 79:
#line 221 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 83:
#line 227 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 84:
#line 228 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 87:
#line 233 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 88:
#line 234 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 91:
#line 240 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 92:
#line 241 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 93:
#line 242 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 94:
#line 243 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 97:
#line 248 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 98:
#line 249 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 99:
#line 250 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 100:
#line 251 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 101:
#line 252 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 102:
#line 253 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 103:
#line 254 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 104:
#line 255 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 107:
#line 260 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 108:
#line 261 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 109:
#line 262 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 110:
#line 263 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 113:
#line 268 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 114:
#line 269 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 115:
#line 270 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 116:
#line 271 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 117:
#line 272 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 118:
#line 273 "decaf.y"
	{ yyval = new ParseTree("binop", yystack.l_mark[-2], yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 119:
#line 275 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 120:
#line 276 "decaf.y"
	{ yyval = new ParseTree("uop", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 127:
#line 285 "decaf.y"
	{ yyval = yystack.l_mark[-1]; }
break;
case 128:
#line 286 "decaf.y"
	{ yyval = new ParseTree("new", yystack.l_mark[-1]); }
break;
case 129:
#line 287 "decaf.y"
	{ yyval = new ParseTree("newarray", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 130:
#line 288 "decaf.y"
	{ yyval = new ParseTree("readline"); }
break;
case 131:
#line 289 "decaf.y"
	{ yyval = new ParseTree("readinteger"); }
break;
case 134:
#line 294 "decaf.y"
	{ yyval  = new ParseTree("usertype", yystack.l_mark[0]); }
break;
case 137:
#line 298 "decaf.y"
	{ yyval = new ParseTree("aref", yystack.l_mark[-3], yystack.l_mark[-1]); }
break;
case 138:
#line 300 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 139:
#line 301 "decaf.y"
	{ yyval = new ParseTree("call", yystack.l_mark[-1], yystack.l_mark[0]); }
break;
case 140:
#line 303 "decaf.y"
	{ yyval = new ParseTree("field_access", yystack.l_mark[-2], yystack.l_mark[0]); }
break;
case 146:
#line 313 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 147:
#line 314 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 148:
#line 315 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 149:
#line 316 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 150:
#line 317 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 151:
#line 318 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 152:
#line 319 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 153:
#line 320 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 154:
#line 321 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 155:
#line 322 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 156:
#line 323 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 157:
#line 324 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 158:
#line 325 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 159:
#line 326 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 160:
#line 327 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 161:
#line 328 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 162:
#line 329 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 163:
#line 330 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 164:
#line 331 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 165:
#line 332 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 166:
#line 333 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 167:
#line 334 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 168:
#line 335 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 169:
#line 336 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 170:
#line 337 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 171:
#line 338 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 172:
#line 339 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 173:
#line 340 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 174:
#line 341 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 175:
#line 342 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
case 176:
#line 343 "decaf.y"
	{ yyval = new ParseTree(myTok); }
break;
#line 1365 "y.tab.c"
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
