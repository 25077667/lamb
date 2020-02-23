CC = g++
flags = -std=c++14 -O2

all: genObject
	${CC} ${flags} GradeBook.o client.cpp -o client.out
	
genObject: GradeBook.*
	${CC} ${flags} GradeBook.cpp GradeBook.h -c
