all: main.o ../csv_c/
	gcc -o driver main.o ../csv_c/csv.o
main.o: main.c ../csv_c/csv.h
	gcc -c main.c
run:
	./driver
clean:
	rm *.o
	rm driver
	rm *~
