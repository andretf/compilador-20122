#
# UFRGS - Compiladores B - Marcelo Johann - 2009/2 - Etapa 1
#
# Makefile for single compiler call
# All source files must be included from code embedded in scanner.l
# In our case, you probably need #include "hash.c" at the beginning
# and #include "main.c" in the last part of the scanner.l
#

CC=gcc
CFLAGS=-std=c99
LEX=lex

etapa1: lex.yy.c
	$(CC) $(CFLAGS) -o etapa1 lex.yy.c

lex.yy.c: scanner.l
	$(LEX) scanner.l

clean:
	rm -rf lex.yy.c etapa1 main.o

