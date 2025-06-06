#include <iostream>
#include "gerente.hpp"
using namespace std;

// Implementação do construtor para a inicialização da subclasse Gerente
Gerente::Gerente(string nome, float salarioBase, int id, int bonusMensal):
    Funcionario(nome, salarioBase, id), bonusMensal(bonusMensal) {/* vazio */}

// Implementação dos métodos setters
void Gerente::setBonusMensal(int bonusMensal){
    this->bonusMensal = bonusMensal;
}

// Implementação dos métodos getters
int Gerente::getBonusMensal(){
    return bonusMensal;
}

// Implementação dos métodos calcularSalarioFinal e exibirInformacoes como sobrescrita dos métodos virtuais
float Gerente::calcularSalarioFinal(){
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << getBonusMensal() << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
