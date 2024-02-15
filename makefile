CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -Wvla -g
RM = rm -rf
EXECUTABLE = cliente

all: bignumber.o
	$(CC) $(CFLAGS) bignumber.o client.c -o $(EXECUTABLE)

bignumber.o: bignumber.h
	$(CC) $(CFLAGS) -c bignumber.c

clean:
	$(RM) *.o $(EXECUTABLE)
