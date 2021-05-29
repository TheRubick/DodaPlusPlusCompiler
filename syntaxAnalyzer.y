%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex(void);
    void yyerror(char *);
%}

%union {
    int intVal;
    float floatVal;
    bool boolVal;
    char* stringVal;
}


%token Identifiers
// TYPES
%token INT
%token FLOAT
%token BOOL
%token STRING
%token Constant // 5leha klma wa7da bs
//RELATIONAL 
%token EQUAL
%token NOT_EQUAL
%token GREATER_THAN
%token GREATER_EQUAL
%token LESS_THAN
%token LESS_EQUAL
//BOOLEAN
%token AND
%token OR
%token NOT
//KEYWORDS
%token IF
%token ELSE
%token WHILE
%token DO
%token FOR
%token SWITCH
%token CASE
%token DEFAULT
%token BREAK
%token FUNC
%token RETURN
// VALUES
%token floatType
%token intType
%token stringType
%token boolType

 
//Precedence
// ref: https://en.cppreference.com/w/c/language/operator_precedence

%right '='
%left OR
%left AND
%left NOT_EQUAL EQUAL
%left GREATER_THAN GREATER_EQUAL LESS_THAN LESS_EQUAL
%left '-' '+'
%left '*' '/' '%'
%left '^'
%right NOT


%%

program:
        program expr '\n'         { printf("%d\n", $2); }
        | 
        ;

expr:
        intType
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