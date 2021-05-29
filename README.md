# DodaPlusPlusCompiler
## To run the files

1. flex lexicalAnalyzer.l
2. yacc -d syntaxAnalyzer.y
3. g++ lex.yy.c y.tab.c 
4. ./a.out

```
yacc -d syntaxAnalyzer.y
&& flex lexicalAnalyzer.l
&& g++ lex.yy.c y.tab.c 
./a.out
```
# for cleaning the directory
```
rm y.tab.* && rm a.out && rm lex.yy.c
```