CC = g++
SRC = ${wildcard ./src/*.cpp ./testing/main.cpp}
BUILD = ./build/cml.o

all:
	${CC} ${SRC} -o ${BUILD}


	