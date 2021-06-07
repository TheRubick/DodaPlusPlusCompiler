generate:
	flex -l -o ./gen/lex.cc ./rules/lexer.l
	yacc -d ./rules/parser.y -o ./gen/parser.cc
compile:
	g++ -g -o ./bin/V++.exe \
	./gen/parser.cc \
	./gen/lex.cc \
	./generator/quadCompiler.cpp \
	./semantic_analysis/error_handler.cpp
clear:
	clear
build:
	@make -s clear
	@make -s generate
	@make -s compile
run:
	./bin/V++.exe
inputfile:
	./bin/V++.exe < ./input/input1.txt
	