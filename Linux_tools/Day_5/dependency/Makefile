CC=gcc

one:first.o second.o sub.o
	$(CC) first.o second.o sub.o -o output

first.o:first.c	file.h
	$(CC) -c first.c

second.o:second.c	file.h
	$(CC) -c second.c

sub.o:sub.c	file.h
	$(CC) -c sub.c

clean:
	rm -rf *.o output

