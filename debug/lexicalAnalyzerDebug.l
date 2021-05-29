%{
    //#include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);;
    int Identifiers,
    INT,FLOAT,BOOL,STRING,Constant,VOID,
    EQUAL,NOT_EQUAL,GREATER_THAN,GREATER_EQUAL,LESS_THAN,LESS_EQUAL,
    AND,OR,NOT,
    IF,ELSE,WHILE,DO,FOR,SWITCH,CASE,DEFAULT,BREAK,FUNC,RETURN,
    floatType,intType,stringType,boolType,
    Symbols;
    char buf[10000];
    char *s;
    /*
        constant: Const | (Int,Float,Bool,String)
        dataTypes: (Int,Float,Bool,String)
        math experssions: +,*,-,/,%,^
        relational experessions: ==,!=,>=,<=,<,>
        binary logical experessions: |,&
        unary logical experssion: !
        assignment: =
        keywords: else,for,do,break,case,func,default:
        one condition: if,while,switch. One condition could be complex/nested
        oneVariale: switch as it hold only on variable
        Variables: must start with letter or underscore "_" followed by
        letters/digits/underscore
    */
%}

%x STRINGINPUT

%%

"Const" {Constant++;printf("Constant = %s\n",yytext);}

"Int"          {INT++;printf("INT = %s\n",yytext);}
"Float"        {FLOAT++;printf("FLOAT = %s\n",yytext);}
"Bool"         {BOOL++;printf("BOOL = %s\n",yytext);}
"String"       {STRING++;printf("STRING = %s\n",yytext);}
"Void" {VOID++;printf("VOID = %s\n",yytext);}

[\+\*\-\%\/\^\}\{\(\)\,\;\:\=]   {Symbols++;printf("Symbols = %s\n",yytext);}


"==" {EQUAL++;printf("EQUAL = %s\n",yytext);}
"!=" {NOT_EQUAL++;printf("NOT_EQUAL = %s\n",yytext);}
">=" {GREATER_EQUAL++;printf("GREATER_EQUAL = %s\n",yytext);}
"<=" {LESS_EQUAL++;printf("LESS_EQUAL = %s\n",yytext);}
"<"  {LESS_THAN++;printf("LESS_THAN = %s\n",yytext);}
">"  {GREATER_THAN++;printf("GREATER_THAN = %s\n",yytext);}

\| {OR++;printf("OR = %s\n",yytext);}
\& {AND++;printf("AND = %s\n",yytext);}
\! {NOT++;printf("NOT = %s\n",yytext);}


"else" {ELSE++;printf("ELSE = %s\n",yytext);}

"for" {FOR++;printf("FOR = %s\n",yytext);}

"do" {DO++;printf("DO = %s\n",yytext);}

"break" {BREAK++;printf("BREAK = %s\n",yytext);}

"case" {CASE++;printf("CASE = %s\n",yytext);}

"func" {FUNC++;printf("FUNC = %s\n",yytext);}

"default" {DEFAULT++;printf("DEFAULT = %s\n",yytext);}

"if"  {IF++;printf("IF = %s\n",yytext);}

"while" {WHILE++;printf("WHILE = %s\n",yytext);}

"switch" {SWITCH++;printf("SWITCH = %s\n",yytext);}

"return" {RETURN++;printf("RETURN = %s\n",yytext);}

.*(\.{2,}).* {printf("invalid sequence\n");}

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {floatType++;printf("floatType = %s\n",yytext);}

[0-9]+ {intType++;printf("intType = %s\n",yytext);}

(\".*(\"|\\)\")|(\'.*\') {printf("invalid sequence\n");}

(\"\")|(\"("\n"|"\t"|"\r"|.*)\")|(\"\'("\n"|"\t"|"\r"|.*)\'\") {stringType++;printf("string = %s",yytext);}



"false"|"true" {boolType++;printf("boolType = %s\n",yytext);}

[a-zA-Z\_][0-9a-zA-Z\_]* {Identifiers++;printf("Identifiers = %s\n",yytext);} // Identifiers

[\#\?\@\~\.\[\]\\\`\"\']           {printf("invalid character\n");} //@TODO complete the invalid characters


%%
int main(void){
    yylex();
    return 0;
}
/*
    To be called at the EOF
*/
int yywrap(void) {
    return 1;
}

/*
"Const" {Constant++;printf("Constant = %s\n",yytext);}

"Int"          {INT++;printf("INT = %s\n",yytext);}
"Float"        {FLOAT++;printf("FLOAT = %s\n",yytext);}
"Bool"         {BOOL++;printf("BOOL = %s\n",yytext);}
"String"       {STRING++;printf("STRING = %s\n",yytext);}

[\+\*\-\%\/\^\}\{\(\)\,\;\:\=]   {Symbols++;printf("Symbols = %s\n",yytext);}


"==" {EQUAL++;printf("EQUAL = %s\n",yytext);}
"!=" {NOT_EQUAL++;printf("NOT_EQUAL = %s\n",yytext);}
">=" {GREATER_EQUAL++;printf("GREATER_EQUAL = %s\n",yytext);}
"<=" {LESS_EQUAL++;printf("LESS_EQUAL = %s\n",yytext);}
"<"  {LESS_THAN++;printf("LESS_THAN = %s\n",yytext);}
">"  {GREATER_THAN++;printf("GREATER_THAN = %s\n",yytext);}

\| {OR++;printf("OR = %s\n",yytext);}
\& {AND++;printf("AND = %s\n",yytext);}
\! {NOT++;printf("NOT = %s\n",yytext);}


"else" {ELSE++;printf("ELSE = %s\n",yytext);}

"for" {FOR++;printf("FOR = %s\n",yytext);}

"do" {DO++;printf("DO = %s\n",yytext);}

"break" {BREAK++;printf("BREAK = %s\n",yytext);}

"case" {CASE++;printf("CASE = %s\n",yytext);}

"func" {FUNC++;printf("FUNC = %s\n",yytext);}

"default" {DEFAULT++;printf("DEFAULT = %s\n",yytext);}

"if"  {IF++;printf("IF = %s\n",yytext);}

"while" {WHILE++;printf("WHILE = %s\n",yytext);}

"switch" {SWITCH++;printf("SWITCH = %s\n",yytext);}

"return" {RETURN++;printf("RETURN = %s\n",yytext);}

"void" {VOID++;printf("VOID = %s\n",yytext)}

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {floatType++;printf("floatType = %s\n",yytext);}

[0-9]+ {intType++;printf("intType = %s\n",yytext);}

(\".*\")|(\'.*\') {stringType++;printf("stringType = %s\n",yytext);}

"false"|"true" {boolType++;printf("boolType = %s\n",yytext);}

[a-zA-Z\_][0-9a-zA-Z\_]* {Identifiers++;printf("Identifiers = %s\n",yytext);} // Identifiers

[\#\?\@\~\.\[\]\\\`\"\']           {printf("invalid character\n");} //@TODO complete the invalid characters

*/