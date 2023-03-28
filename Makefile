CFLAGS=-std=c99 -Wall
CC=gcc

rectangle: rectangle.o main.o
	$(CC) $(CFLAGS) rectangle.o main.o -o rectangle

main.o: main.c rectangle.h
	$(CC) $(CFLAGS) -c main.c

rectangle.o: rectangle.h rectangle.c
	$(CC) $(CFLAGS) -c rectangle.c

test: test.o rectangle.o
	$(CC) $(CFLAGS) rectangle.o test.o -o test

test.o: rectangle.h tests/test.c
	$(CC) $(CFLAGS) -c tests/test.c

gh-test-rectangle: clean test
	./test

clean:
	rm -f rectangle *.o test