%{
    #define __USE_C99_MATH
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    using namespace std;
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
%token VOID
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

%right '=' //
%left OR
%left AND
%left NOT_EQUAL EQUAL
%left GREATER_THAN GREATER_EQUAL LESS_THAN LESS_EQUAL
%left '-' '+'
%left '*' '/' '%'
%left '^'
%right NOT //hights precedence

%start program 
/*
while stm
do while stm
for stm
if stm
esle stm
block stmt
fucn stmt
func call
return
switch
case
default
math expr
boolean expr
declare var and const
*/
%%

program:                    {printf("program emptyyyyy");}
        | statments         { printf("program"); } 
        ;

statments: statment                 {printf("statment");}
        |  statments statment       {;}
        |  block_statment           {;}
        |  statments block_statment {;}
        ;

block_statment: '{' '}'  {;}
              |  '{' statments '}'  {;}
              ;
statment:   ';' {;}
        |   while_statment {;}
        |   if_statment    {;}
        |   for_statment   {;}
        |   do_while_statment ';' {;}
        |   switch_statment  {;}
        |   func_defintion_statment  {;}
        |   var_declare_statment ';' {printf("st_var_dec");}
        |   expression_statment ';' {;}
        ;

while_statment: WHILE '(' expression_statment ')' block_statment  {;}
            ;

if_statment: matched_if  {;}
           | unmatched_if {;}
            ;

matched_if: IF '(' expression_statment ')' '{' matched_if '}' ELSE '{' matched_if '}' {;}
          | statments  {;}
          ;

unmatched_if: IF '(' expression_statment ')' block_statment {;}
            | IF '(' expression_statment ')' '{' matched_if '}' ELSE '{' unmatched_if '}' {;}
            ;

for_statment: FOR '(' for_begining ';' expression_statment ';' expression_statment ')' block_statment {;}
            ;
for_begining: expression_statment {;}
            | var_declare_statment {;}
            ;

do_while_statment: DO block_statment WHILE '(' expression_statment ')' {;}
                 ;

switch_statment: SWITCH '(' Identifiers ')' cases_statment {;}
               ;

case_statment: CASE intType ':' statments {;}
             | CASE intType ':' statments BREAK ';' {;}
             ;
// force default statment
cases_statment: DEFAULT ':' statments {;}
              | case_statment cases_statment {;}
              ;

func_defintion_statment: FUNC VOID Identifiers '(' arguments ')' block_statment {;}
                       | FUNC data_type Identifiers '(' arguments ')' func_return_statments {;}
                       ;

return_statment:  RETURN expression_statment ';'  {;}
               ;

func_return_statments: '{' return_statment '}' {;}
                     |  '{' statments  return_statment '}' {;}
                     ;

data_type: INT {;}
         | FLOAT {;} 
         | BOOL {;}
         | STRING {;}
         ;

arguments: {;}
         | data_type Identifiers {;}
         | expression_statment {;} // test this
         | arguments ',' expression_statment {;} //could be more than one in identifire check
         | arguments ',' data_type Identifiers {;}
         ;

func_call_statment: Identifiers '(' arguments ')' ';' {;}
                  ;

var_declare_statment: data_type Identifiers  {printf("var_declare");}
                    | data_type Identifiers '=' expression_statment  {;}
                    | Constant data_type Identifiers '=' expression_statment  {;}
                    ;
value: intType {;}
     | floatType {;}
     | boolType {;}
     | stringType {;}   
     ;

 expression_statment: '(' expression_statment ')'  {;} 
                    | Identifiers {;}
                    | value {;}
                    | func_call_statment {;}
                    | expression_statment_lv0 {;}
                    ;             
expression_statment_lv0: expression_statment '=' expression_statment {;}
                   | expression_statment '+' expression_statment_lv0 {;}
                   | expression_statment '-' expression_statment {;}
                   | expression_statment '*' expression_statment {;}
                   | expression_statment '/' expression_statment {;}
                   | expression_statment '%' expression_statment {;}
                   | expression_statment '^' expression_statment {;}
                   | expression_statment AND expression_statment {;}
                   | expression_statment OR expression_statment {;}
                   | expression_statment GREATER_THAN expression_statment {;}
                   | expression_statment GREATER_EQUAL expression_statment {;}
                   | expression_statment LESS_THAN expression_statment {;}
                   | expression_statment LESS_EQUAL expression_statment {;}
                   | expression_statment EQUAL expression_statment {;}
                   | expression_statment NOT_EQUAL expression_statment {;}
                   | NOT expression_statment {;}
                   ;
%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}