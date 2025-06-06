#include "funcionario.hpp"
using namespace std;

// Implementação do construtor para a inicialização da classe Funcionario
Funcionario::Funcionario(string nome, float salarioBase, int id):
    nome(nome), salarioBase(salarioBase), id(id) {}

// Métodos setters para acessar e modificar os aributos nome, salarioBase e id da classe Funcionario
void Funcionario::setNome(string nome) {
    this->nome = nome;
}

void Funcionario::setSalarioBase(float salarioBase) {
    this->salarioBase = salarioBase;
}

void Funcionario::setId(int id) {
    this->id = id;
}

// Métedos getters para acessar e "pegar/capturar" os atributos nome, salarioBase e id da classe Funcionario
string Funcionario::getNome() {
    return nome;
}

float Funcionario::getSalarioBase() {
    return salarioBase;
}

int Funcionario::getId() {
    return id;
}
