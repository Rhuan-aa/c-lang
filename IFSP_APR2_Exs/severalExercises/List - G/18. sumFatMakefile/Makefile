CC = gcc
CFLAGS = -Wall -Wextra

all: meu_programa

meu_programa: main.o funcoes.o
	$(CC) $(CFLAGS) -o meu_programa main.o funcoes.o

main.o: main.c funcoes.h
	$(CC) $(CFLAGS) -c -o main.o main.c

funcoes.o: funcoes.c funcoes.h
	$(CC) $(CFLAGS) -c -o funcoes.o funcoes.c

clean:
	rm -f meu_programa main.o list.o
