# Makefile for endianness example
#
# Jim Teresco, CS 220, Siena College, CSC 433, The College of Saint Rose
#
# Tue Aug 16 13:53:11 EDT 2005
#
# $Id$
#
CFILES=show_bytes.c
OFILES=$(CFILES:.c=.o)
CC=gcc

show_bytes:	$(OFILES)
	$(CC) -o show_bytes $(OFILES)

clean::
	/bin/rm -f show_bytes $(OFILES)
