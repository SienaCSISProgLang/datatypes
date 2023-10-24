# Makefile for enum example program
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=enum_example.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

enum_example:	$(OFILES)
	$(CC) -o enum_example $(OFILES)

clean::
	/bin/rm -f enum_example $(OFILES)
