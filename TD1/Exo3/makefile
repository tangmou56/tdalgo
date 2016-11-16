main: main.o fonction.o
	gcc -o main main.o fonction.o -lm
main.o : main.c	defi.h
	gcc -c main.c
fonction.o : fonction.c defi.h
	gcc -c fonction.c