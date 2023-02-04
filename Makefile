CC = g++
SRC = ${wildcard ./src/*.cpp}
BUILD = ./build/cml.o

all:
	${CC} ${SRC} -o ${BUILD}


	