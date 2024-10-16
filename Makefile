CC = gcc
CFLAGS = -Wall -Wextra -g3
SRC = main.c src/calculadora.c
OUTPUT = output/main

all:
    $(CC) $(CFLAGS) $(SRC) -o $(OUTPUT)
