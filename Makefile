CXX=c++
CXXFLAGS=-g -std=c++11

main: Source.o Class.o
	g++ -std=c++11 -o main main.cpp Source.o Class.o\
Source:
	g++ -std=c++11 -c Source.cpp
Class:
	g++ -std=c++11 -c Class.cpp
clean:
	rm *.o main