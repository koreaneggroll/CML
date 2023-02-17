CC = g++
SRC = ${wildcard ./src/*.cpp ./testing/main.cpp}
INCLUDE = ${wildcard ./include/*.hpp}
BUILD = ./build/cml.o

all:
	${CC} ${SRC} -o ${BUILD}


precomp:
	${CC} ${INCLUDE}
	