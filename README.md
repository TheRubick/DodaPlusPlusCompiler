# DodaPlusPlusCompiler
## To run the files

1. flex lexicalAnalyzer.l
2. yacc -d syntaxAnalyzer.y
3. g++ lex.yy.c y.tab.c 
4. ./a.out


```
<<<<<<< HEAD
yacc -d syntaxAnalyzer.y && flex lexicalAnalyzer.l && g++ lex.yy.c y.tab.c 
./a.out
=======
yacc -d syntaxAnalyzer.y &&flex lexicalAnalyzer.l && g++ lex.yy.c y.tab.c Doda.cpp && 
./a.out < ./input.txt
>>>>>>> c7294751dd61953dc03a5a064fdea63b27a400e2
```
# for cleaning the directory
```
rm y.tab.* && rm a.out && rm lex.yy.c
```
g++ lex.yy.c y.tab.c 
./a.out

if (x == y) {y = 1 + 2 ;} else {y = 2*2;} 
if (x == y) { z = 5 ;} else {} 
 
if (x == y) { z = 5 ;}  s7 
if(x){} else {} s7
if(x){z =5 ;}
if(x){z = 5 ;} else {}
