# Makefile for union program
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=union.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

union:	$(OFILES)
	$(CC) -o union $(OFILES)

clean::
	/bin/rm -f union $(OFILES)
