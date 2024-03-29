# dependencies
all: pa1
clean:
	rm -f pa1 *.o
# macros
CC = gcc
FLAGS = -Wall -g

pa1: main.o pa1.o
	$(CC) $(FLAGS) main.o pa1.o -o $@

main.o: main.c pa1.h
	$(CC) $(FLAGS) -c $<

pa1.o: pa1.c pa1.h
	$(CC) $(FLAGS) -c $<