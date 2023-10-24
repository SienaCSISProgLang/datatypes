# Makefile for gcd program
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=ccomplex.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

ccomplex:	$(OFILES)
	$(CC) -o ccomplex $(OFILES)

clean::
	/bin/rm -f ccomplex $(OFILES)
