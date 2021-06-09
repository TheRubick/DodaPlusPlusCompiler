yacc -d syntaxAnalyzer.y &&flex lexicalAnalyzer.l && \
g++ lex.yy.c y.tab.c Doda.cpp DodaSymbolTable.cpp