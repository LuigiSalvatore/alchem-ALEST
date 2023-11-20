#Luigi Salvatore Bos-Mikich 18/11/2023

APPLICATIVO = app
CFLAGS = -c -std=c++11
MAIN_NAME = main
DASHOES = ${MAIN_NAME}.o Graph.o Vertice.o Edge.o #math_integer.o
NomeDoAPP = ${APPLICATIVO}
all:			${APPLICATIVO}

${APPLICATIVO}:	${DASHOES}
	g++ -o ${APPLICATIVO} ${DASHOES}

${MAIN_NAME}.o: 		${MAIN_NAME}.cpp Graph.cpp Graph.hpp Edge.cpp Edge.h Vertice.cpp Vertice.hpp math_integer.h
	g++ ${CFLAGS} ${MAIN_NAME}.cpp

Graph.o: 		Graph.cpp Graph.hpp Edge.cpp Edge.h Vertice.cpp Vertice.hpp math_integer.h
	g++ ${CFLAGS} 	Graph.cpp

Vertice.o: 			Vertice.cpp Vertice.hpp
	g++ ${CFLAGS} 	Vertice.cpp

math_integer.o: 	math_integer.h
	g++ ${CFLAGS} 	math_integer.h

Edge.o: 			Edge.cpp Edge.h
	g++ ${CFLAGS} 	Edge.cpp

run:			${APPLICATIVO} 
	./${APPLICATIVO}

clean: 			
	del ${DASHOES} ${APPLICATIVO}