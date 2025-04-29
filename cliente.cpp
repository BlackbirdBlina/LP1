#include "cliente.h"

// Implementação do construtor para a inicialização da classe Cliente
Cliente::Cliente(const string nome, string cpf):
    nome(nome), cpf(cpf) {/* vazio */}

// Métedo get para acessar e "pegar" o atributo nome da classe Cliente
string Cliente::getnome() {
    return nome;
}

// Métedo get para acessar e "pegar" o atributo cpf da classe Cliente
string Cliente::getcpf() {
    return cpf;
}


