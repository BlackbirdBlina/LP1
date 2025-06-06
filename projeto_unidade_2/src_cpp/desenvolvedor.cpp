#include <iostream>
#include "desenvolvedor.hpp"
using namespace std;

// Implementação do construtor para a inicialização da subclasse Desenvolvedor
Desenvolvedor::Desenvolvedor(string nome, float salarioBase, int id, int quantidadeDeProjetos):
    Funcionario(nome, salarioBase, id), quantidadeDeProjetos(quantidadeDeProjetos) {/* vazio */}

// Implementação dos métodos setters
void Desenvolvedor::setQuantidadeDeProjetos(int quantidadeDeProjetos){
    this->quantidadeDeProjetos = quantidadeDeProjetos;
}

// Implementação dos métodos getters
int Desenvolvedor::getQuantidadeDeProjetos(){
    return quantidadeDeProjetos;
}

// Implementação dos métodos calcularSalarioFinal e exibirInformacoes como sobrescrita dos métodos virtuais
float Desenvolvedor::calcularSalarioFinal(){
    return salarioBase + (500 * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << getQuantidadeDeProjetos() << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}

