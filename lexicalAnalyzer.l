%{
    //#include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
    int Identifiers,Variables,Constants,MathExps,relationalExps,
    binaryLogicalExps,unaryLogicalExps,Keywords,oneStatConditions,
    Assignment,floatType,intType,stringType,boolType,
    openPar,closedPar,openCurBrace,closedCurBrace,
    comma,semiColon;
%}

%%

Const[ \t]+(Int|Float|Bool|String) {Constants++;printf("Constant = %s\n",yytext);}

(Int|Float|Bool|String)       {Variables++;printf("Variable = %s\n",yytext);}

[\+\*\-\%\/\^]   {MathExps++;printf("MathExp = %s\n",yytext);}

(==|\!=|\>=|\<=|\<|\>)  {relationalExps++;printf("RelationalLogicalExp = %s\n",yytext);}

[\|\&]   {binaryLogicalExps++;printf("BinaryLogicalExp = %s\n",yytext);}

\! {unaryLogicalExps++;printf("unaryExp = %s\n",yytext);}

= {Assignment++;printf("Assignment = %s\n",yytext);}

(else|for|do|break|case|func|default\:) {Keywords++;printf("Keyword = %s\n",yytext);}

(if|while|switch) {oneStatConditions++;printf("oneStatCondition = %s",yytext);}

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {floatType++;printf("floatType = %s\n",yytext);}

[0-9]+ {intType++;printf("intType = %s\n",yytext);}

(\".*\")|(\'.*\') {stringType++;printf("stringType = %s\n",yytext);}

false|true {boolType++;printf("boolType = %s\n",yytext);}

\( {openPar++;printf("openPar = %s\n",yytext);}

\) {closedPar++;printf("closedPar = %s\n",yytext);}

\{ {openCurBrace++;printf("openCurBrace = %s\n",yytext);}

\} {closedCurBrace++;printf("closedCurBrace = %s\n",yytext);}

\, {comma++;printf("comma = %s\n",yytext);}

\; {semiColon++;printf("semiColon = %s\n",yytext);}

[a-zA-Z\_][0-9a-zA-Z\_]* {Identifiers++;printf("Identifier = %s",yytext);}

[\?\@\#\$\~]           {printf("invalid");} //@TODO complete the invalid characters

%%
int main(void){
    yylex();
    printf("\nVariables = %d, Constants = %d\n",Variables,Constants);
    printf("\nMathExps = %d, BinaryLogicalExps = %d, RelationalLogicalExps = %d\n",MathExps,binaryLogicalExps,relationalExps);
    return 0;
}
/*
    To be called at the EOF
*/
int yywrap(void) {
    return 1;
}