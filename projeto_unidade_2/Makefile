# Makefile baseado nos slides apresentados pelo Professor Isaac Franco
#Makefile for "LP1 - Sistema de Cadastro de Funcionários em uma Empresa" C++ Application

#Created by Sabrina Barbosa 06/06/2025

PROG = programa

CC = g++

SRC = src_cpp
INC = include_cpp
TEST = test_cpp

CPPFLAGS = -Iinclude_cpp -O0 -g -Wall -pedantic -std=c++17

OBJS = main.o funcionario.o desenvolvedor.o gerente.o estagiario.o

$(PROG): $(OBJS)

	$(CC) -o $(PROG) $(OBJS)

main.o: $(TEST)/main.cpp

	$(CC) $(CPPFLAGS) -c $(TEST)/main.cpp

funcionario.o: $(INC)/funcionario.hpp $(SRC)/funcionario.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp

desenvolvedor.o: $(INC)/desenvolvedor.hpp $(SRC)/desenvolvedor.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/desenvolvedor.cpp

gerente.o: $(INC)/gerente.hpp $(SRC)/gerente.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/gerente.cpp

estagiario.o: $(INC)/estagiario.hpp $(SRC)/estagiario.cpp

	$(CC) $(CPPFLAGS) -c $(SRC)/estagiario.cpp

clean:
	rm -f $(PROG) $(OBJS)
