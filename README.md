# DodaPlusPlusCompiler
## To run the files

1. flex lexicalAnalyzer.l
2. yacc -d syntaxAnalyzer.y
3. g++ lex.yy.c y.tab.c 
4. ./a.out

flex lexicalAnalyzer.l yacc -d syntaxAnalyzer.y g++ lex.yy.c y.tab.c ./a.out