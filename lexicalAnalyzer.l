%{
    #include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
%}

%%

"Const" {return Constant;}

"int"          {printf("Integeeer\n");return INT;}
"Float"        {return FLOAT;}
"Bool"         {return BOOL;}
"String"       {return STRING;}
"Void"         {return VOID;}

[\+\*\-\%\/\^\}\{\(\)\,\;\:\=]   {printf("yaraaab"); return yytext[0];}


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

.*(\.{2,}).* {printf("invalid sequence\n");} //invalid float number

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {yylval.floatVal = atof(yytext); return floatType;}
[0-9]+ {yylval.intVal = atoi(yytext); return intType;}
(\".*(\"|\\)\")|(\'.*\') {printf("invalid sequence\n");}
(\"\")|(\"("\n"|"\t"|"\r"|.*)\")|(\"\'("\n"|"\t"|"\r"|.*)\'\") {yylval.stringVal = yytext; return stringType;}
"false" {yylval.boolVal = false; return boolType;}
"true" {yylval.boolVal = true; return boolType;}

[a-zA-Z\_][0-9a-zA-Z\_]* {yylval.stringVal = yytext; printf("Lex iden\n"); return Identifiers;} // Identifiers

[\#\?\@\~\.\[\]\\\`\"\']   {yyerror("invalid character\n");} //The invalid characters

%%
/*
    To be called at the EOF
*/
int yywrap(void) {
    return 1;
}