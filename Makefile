derlecalistir:program calistir

program:Node.o Trees.o Main.o 
	g++ ./lib/Node.o ./lib/Trees.o ./lib/Main.o -o ./bin/program

Node.o:
	g++ -I "./include" -c ./src/Node.cpp -o  ./lib/Node.o

Trees.o:
	g++ -I "./include" -c ./src/Trees.cpp -o  ./lib/Trees.o

Main.o:
	g++ -I "./include" -c ./src/Main.cpp -o  ./lib/Main.o

calistir:
	./bin/program.exe