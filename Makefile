# Makefile baseado nos slides apresentados pelo Professor Isaac Franco

#Makefile for "LP1 - Sistema Bancário Simples" C++ Application

#Created by Sabrina Barbosa 29/04/2025

PROG = programa

CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o cliente.o conta_banc.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o:

	$(CC) $(CPPFLAGS) -c main.cpp

cliente.o: cliente.h

	$(CC) $(CPPFLAGS) -c cliente.cpp

conta_banc.O: conta_banc.h

	$(CC) $(CPPFLAGS) -c conta_banc.cpp

clean:
	rm -f $(PROG) $(OBJS)
