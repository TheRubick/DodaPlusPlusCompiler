%{
    #include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
%}

%%

"Const" {return Constant;}

"Int"          {return INT;}
"Float"        {return FLOAT;}
"Bool"         {return BOOL;}
"String"       {return STRING;}

[\+\*\-\%\/\^\}\{\(\)\,\;\:\=]   {return yytext[0];}


"==" {return EQUAL;}
"!=" {return NOT_EQUAL;}
">=" {return GREATER_EQUAL;}
"<=" {return LESS_EQUAL;}
"<"  {return LESS_THAN;}
">"  {return GREATER_THAN;}

\| {return OR;}
\& {return AND;}
\! {return NOT;}


"else" {return ELSE;}
"for" {return FOR;}
"do" {return DO;}
"break" {return BREAK;}
"case" {return CASE;}
"func" {return FUNC;}
"default" {return DEFAULT;}
"if"  {return IF;}
"while" {return WHILE;}
"switch" {return SWITCH;}
"return" {return RETURN;}

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {return floatType;}
[0-9]+ {return intType;}
(\".*\")|(\'.*\') {return stringType;}
"false"|"true" {return boolType;}

[a-zA-Z\_][0-9a-zA-Z\_]* {return Identifiers;} // Identifiers

[\#\?\@\~\.\[\]\\\`\"\']   {yyerror("invalid character\n");} //@TODO complete the invalid characters

%%
/*
    To be called at the EOF
*/
int yywrap(void) {
    return 1;
}