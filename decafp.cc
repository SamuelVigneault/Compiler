//#define Tokens



#include <iostream>
#include <vector>
//#include "tokentype.h"
#include "parsetree.h"

extern FILE* yyin;
extern Token *myTok;
extern int yylineno;
extern ParseTree *top;
extern int yydebug;

using namespace std;

int yylex();
int yyparse();

int main(int argc, char **argv) { 
  /* Make sure there's a given file name */
  if (argc != 2) {
    cout << "USAGE: " << argv[0] << " FILE" << endl;
    exit(1);
  }       
  yyin = fopen(argv[1], "r");
  /* and that it exists and can be read */
  if (!yyin) {
    cout << argv[1] << ": No such file or file can't be opened for reading." 
	 << endl;
    exit(1);
  }

  yydebug = 0;
#ifdef Tokens
  int tok;
  while ((tok=yylex()) != -1) {
    cout << tok << ' ';
    myTok->print();
  } 
  return 0; 
#else
  top = 0;
  yyparse();
  traverseTree(top, 0, 1);
  //cout << top->toString() << endl;
  return 0;
#endif
}
