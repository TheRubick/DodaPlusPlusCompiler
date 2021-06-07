%{
    #define __USE_C99_MATH
    #include <stdio.h>
    #include <stdlib.h>
    #include "Doda.h"
    
    #include <stdbool.h>
    #include <stdarg.h>
    using namespace std;
    int yylex(void);
    void yyerror(char *);

    /* prototypes */
    nodeType *opr(int oper, int nops, ...);
    nodeType *id(string i);
    nodeType *con(int value);
    nodeType *conF(float value);
    nodeType *conB(bool value);
    nodeType *conC(char value);
    void freeNode(nodeType *p);
    int ex(nodeType *p);



%}

 %code requires { 
     #include "./Doda.h" 
     
     }

%union {
    int intVal;
    float floatVal;
    bool boolVal;
    char stringVal;
    char* realStringVal;
    nodeType *nPtr;             /* node pointer */
};


%token <realStringVal>Identifiers
// TYPES
%token INT
%token FLOAT
%token BOOL
%token STRINGG
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
%token <floatVal> floatType
%token <intVal> intType
%token <stringVal>stringType
%token <boolVal> boolType
//statments tokens
%type <nPtr> statments block_statment statment while_statment if_statment value
%type <nPtr> matched_if unmatched_if for_statment for_begining do_while_statment switch_statment
%type <nPtr> case_statment cases_statment func_defintion_statment return_statment
%type <nPtr> func_return_statments func_def_arguments arguments func_call_statment
%type <nPtr> var_declare_statment expression_statment expression_statment_lv0 data_type program
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
%left ifpred

%start program 

%%

program:                    {printf("program emptyyyyy");}
        | statments         {   printf("program"); } 
        ;

statments: statment                 { ex($1);  printf("statment\n");}
        |  statments statment       { ex($2); printf("statments statement");}
        |  block_statment           {printf("block statement");}
        |  statments block_statment {printf("statments block statement");}
        ;

block_statment: '{' '}'  {;}
              |  '{' statments '}'  {;}
              ;
statment:   ';' {;}
        |   while_statment {;}
        |   if_statment    {printf(" know if statment\n");}
        |   for_statment   {;}
        |   do_while_statment ';' {;}
        |   switch_statment  {;}
        |   func_defintion_statment  {;}
        |   var_declare_statment ';' {printf("st_var_dec");}
        |   expression_statment ';' {$$ = $1;}
        ;

while_statment: WHILE '(' expression_statment ')' block_statment  {;}
            ;

if_statment: matched_if  {printf("matched if '''''\n");}
           | unmatched_if {printf(" un matched if '''''\n");}
            ;

matched_if: IF '(' expression_statment ')' '{' statments '}' ELSE '{' matched_if '}' %prec ifpred {printf("matchedIf 1st\n");}
          | statments  {printf("matchedIf statments\n");}
          | {printf("matchedIf empty\n");}
          ;

unmatched_if: IF '(' expression_statment ')' '{' statments '}' {printf("unmatched if 1");}
            | IF '(' expression_statment ')' '{' matched_if '}' ELSE '{' unmatched_if '}' {printf("matchedIf 2st\n");}
            ;

for_statment: FOR '(' for_begining ';' expression_statment ';' expression_statment ')' block_statment {;}
            ;
for_begining: expression_statment {;}
            | var_declare_statment {;}
            ;

do_while_statment: DO block_statment WHILE '(' expression_statment ')' {;}
                 ;

switch_statment: SWITCH '(' Identifiers ')' cases_statment  {;}
               ;

case_statment: CASE intType ':' statment BREAK ';' {;}
             ;
// force default statment
cases_statment: DEFAULT ':' statment {;}
              | case_statment cases_statment {;}
              ;

func_defintion_statment: FUNC VOID Identifiers '(' func_def_arguments ')' block_statment {;}
                       | FUNC data_type Identifiers '(' func_def_arguments ')' func_return_statments {;}
                       ;

return_statment:  RETURN expression_statment ';'  {;}
               ;

func_return_statments: '{' return_statment '}' {;}
                     |  '{' statments  return_statment '}' {;}
                     ;

data_type: INT {;}
         | FLOAT {;} 
         | BOOL {;}
         | STRINGG {;}
         ;
func_def_arguments: {;}
             | data_type Identifiers {;}
             | func_def_arguments ',' data_type Identifiers {;}
             ;
arguments: {;}
         | expression_statment {;} // test this
         | arguments ',' expression_statment {;} //could be more than one in identifire check
         ;

func_call_statment: Identifiers '(' arguments ')' {;}
                  ;

var_declare_statment: data_type Identifiers  {printf("var_declare");}
                    | data_type Identifiers '=' expression_statment  {;}
                    | Constant data_type Identifiers '=' expression_statment  {;}
                    ;

value: intType {$$ = con($1);}
     | floatType {$$ = conF($1);}
     | boolType {$$ = conB($1);}
     | stringType {$$ = conC($1);}   
     ;

expression_statment: '(' expression_statment ')'  {;} 
                    | Identifiers {printf("identifier found\n");}
                    | value { $$ = $1; printf("value \n");}
                    | func_call_statment {printf("func call\n");}
                    | expression_statment_lv0 {$$ = $1; printf("Expression \n");}
                    ;             
expression_statment_lv0: Identifiers '=' expression_statment {$$ = opr('=',2,id($1),$3); ;}
                   | expression_statment '+' expression_statment {$$ = opr('+',2,$1,$3); }
                   
                   | expression_statment '-' expression_statment {$$ = opr('-',2,$1,$3);}
                   | expression_statment '*' expression_statment {$$ = opr('*',2,$1,$3);}
                   | expression_statment '/' expression_statment {$$ = opr('/',2,$1,$3);}
                   | expression_statment '%' expression_statment {$$ = opr('%',2,$1,$3);}
                   | expression_statment '^' expression_statment {$$ = opr('^',2,$1,$3);}
                   | expression_statment AND expression_statment {$$ = opr(AND,2,$1,$3);}
                   | expression_statment OR expression_statment {$$ = opr(OR,2,$1,$3);}
                   | expression_statment GREATER_THAN expression_statment {$$ = opr(GREATER_THAN,2,$1,$3);}
                   | expression_statment GREATER_EQUAL expression_statment {$$ = opr(GREATER_EQUAL,2,$1,$3);}
                   | expression_statment LESS_THAN expression_statment {$$ = opr(LESS_THAN,2,$1,$3);}
                   | expression_statment LESS_EQUAL expression_statment {$$ = opr(LESS_EQUAL,2,$1,$3);}
                   | expression_statment EQUAL expression_statment {$$ = opr(EQUAL,2,$1,$3);}
                   | expression_statment NOT_EQUAL expression_statment {$$ = opr(NOT_EQUAL,2,$1,$3);}
                   | NOT expression_statment {$$ = opr(NOT,1,$2);}
                   ;
%%

nodeType *con(int value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.value = value;

    return p;
}

nodeType *conF(float value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeConFloat; // change type
    p->conF.value = value; //change call 

    return p;
}

nodeType *conB(bool value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeConBool; // change type
    p->conB.value = value; //change call 

    return p;
}



nodeType *conC(char value) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeConChar; // change type
    p->conC.value = value; //change call 

    return p;
}

nodeType *id(string i) {
    nodeType *p;

    /* allocate node */
    if ((p = (nodeType *)malloc(sizeof(nodeType))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = i;

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = (nodeType *)malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror((char *)"out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

void freeNode(nodeType *p) {
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}

int main(void) {
    yyparse();
    return 0;
}
