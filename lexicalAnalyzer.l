%{
    
    #include <stdlib.h>
    #include "Doda.h"
    #include "y.tab.h"
    #include <string>
    
    void yyerror(char *);
%}

%%

"const" {return Constant;}

"int"          { yylval.intVal = 0; return INT;}
"float"        {yylval.intVal = 1; return FLOAT;}
"bool"         {yylval.intVal = 2; return BOOL;}
"char"       {yylval.intVal = 3; return STRINGG;}
"void"         {return VOID;}

[\+\*\-\%\/\^\}\{\(\)\,\;\:\=]   { return yytext[0];}


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

.*(\.{2,}).* {yyerror("invalid sequence\n");} //invalid float number

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {yylval.floatVal = std::stof(yytext); return floatType;}
[0-9]+ {yylval.intVal = atoi(yytext); return intType;}
(\".*\".*\")|(\".*\\\")|(\'.*\') {yyerror("invalid sequence\n");}
(\"\")|(\"("\n"|"\t"|"\r"|.*)\")|(\"\'("\n"|"\t"|"\r"|.*)\'\") {yylval.stringVal = yytext[0]; return stringType;}
"false" {yylval.boolVal = false; return boolType;}
"true" {yylval.boolVal = true; return boolType;}

[a-zA-Z\_][0-9a-zA-Z\_]* {yylval.realStringVal = strdup(yytext); printf("Lex iden\n"); return Identifiers;} // Identifiers

[\#\?\@\~\.\[\]\\\`\"\']   {yyerror("invalid character\n");} //The invalid characters

%%
/*
    To be called at the EOF
*/
int yywrap(void) {
    return 1;
}