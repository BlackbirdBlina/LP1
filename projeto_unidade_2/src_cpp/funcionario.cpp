#include "funcionario.hpp"
// #include <string>
using namespace std;

// Implementação do construtor para a inicialização da classe Funcionario
Funcionario::Funcionario(string nome, float salarioBase, int id):
    nome(nome), salarioBase(salarioBase), id(id) {/* vazio */}

// Métedo get para acessar e "pegar/capturar" o atributo nome da classe Funcionario
string Funcionario::getNome() {
    return nome;
}

// Métedo get para acessar e "pegar/capturar" o atributo SalarioBase da classe Funcionario
float Funcionario::getSalarioBase() {
    return salarioBase;
}

// Métedo get para acessar e "pegar/capturar" o atributo id da classe Funcionario
int Funcionario::getId() {
    return id;
}
