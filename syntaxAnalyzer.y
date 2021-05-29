%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char *);
%}

%token Variables
%token dataTypes
%token Constant
%token MathExps
%token relationalExps
%token binaryLogicalExps
%token unaryLogicalExps
%token Keywords
%token oneStatConditions
%token Assignment
%token floatType
%token intType
%token stringType
%token boolType
%token openPar
%token closedPar
%token openCurBrace
%token closedCurBrace
%token comma
%token semiColon

%%

program:
        program expr '\n'         { printf("%d\n", $2); }
        | 
        ;

expr:
        INTEGER
        | expr '+' expr           { $$ = $1 + $3; }
        | expr '-' expr           { $$ = $1 - $3; }
        ;

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}