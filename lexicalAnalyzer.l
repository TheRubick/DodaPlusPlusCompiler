%{
    //#include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
    int Variables,dataTypes,Constants,MathExps,relationalExps,
    binaryLogicalExps,unaryLogicalExps,Keywords,oneConditions,
    Assignment,floatType,intType,stringType,boolType,oneVariable,
    openPar,closedPar,openCurBrace,closedCurBrace,
    comma,semiColon,whiteSpaces;
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

%%

[ \t] {whiteSpaces++;printf("Spaces occured\n");}

"Const"[ \t]+("Int"|"Float"|"Bool"|"String") {Constants++;printf("Constant = %s\n",yytext);}

("Int"|"Float"|"Bool"|"String")       {dataTypes++;printf("dataType = %s\n",yytext);}

[\+\*\-\%\/\^]   {MathExps++;printf("MathExp = %s\n",yytext);}

(==|\!=|\>=|\<=|\<|\>)  {relationalExps++;printf("RelationalLogicalExp = %s\n",yytext);}

[\|\&]   {binaryLogicalExps++;printf("BinaryLogicalExp = %s\n",yytext);}

\! {unaryLogicalExps++;printf("unaryExp = %s\n",yytext);}

"=" {Assignment++;printf("Assignment = %s\n",yytext);}

("else"|"for"|"do"|"break"|"case"|"func"|"default\:") {Keywords++;printf("Keyword = %s\n",yytext);}

("if"|"while") {oneConditions++;printf("oneStatCondition = %s\n",yytext);}

"switch" {oneVariable++;printf("oneVariable = %s\n",yytext);}

([0-9]+\.[0-9]+)|(\.[0-9]+)|([0-9]+\.) {floatType++;printf("floatType = %s\n",yytext);}

[0-9]+ {intType++;printf("intType = %s\n",yytext);}

(\".*\")|(\'.*\') {stringType++;printf("stringType = %s\n",yytext);}

"false"|"true" {boolType++;printf("boolType = %s\n",yytext);}

\( {openPar++;printf("openPar = %s\n",yytext);}

\) {closedPar++;printf("closedPar = %s\n",yytext);}

\{ {openCurBrace++;printf("openCurBrace = %s\n",yytext);}

\} {closedCurBrace++;printf("closedCurBrace = %s\n",yytext);}

\, {comma++;printf("comma = %s\n",yytext);}

\; {semiColon++;printf("semiColon = %s\n",yytext);}

[a-zA-Z\_][0-9a-zA-Z\_]* {Variables++;printf("Variable = %s\n",yytext);}

[\#\?\@\~\.\[\]\\\`\"\'\:]           {printf("invalid character\n");} //@TODO complete the invalid characters

%%
int main(void){
    yylex();
    printf("\ndataTypes = %d, Constants = %d\n",dataTypes,Constants);
    printf("\nMathExps = %d, BinaryLogicalExps = %d, RelationalLogicalExps = %d\n",MathExps,binaryLogicalExps,relationalExps);
    return 0;
}
/*
    To be called at the EOF
*/
int yywrap(void) {
    return 1;
}