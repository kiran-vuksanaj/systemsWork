all: main.o funcs.o
	gcc -o program main.o funcs.o

main.o: main.c funcs.h
	gcc -c main.c

funcs.o: funcs.c
	gcc -c funcs.c
