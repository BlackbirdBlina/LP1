#include <iostream>
#include "estagiario.hpp"
using namespace std;

// Implementação do construtor para a inicialização da subclasse Estagiario
Estagiario::Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas):
    Funcionario(nome, salarioBase, id), horasTrabalhadas(horasTrabalhadas) {/* vazio */}

// Implementação dos métodos setters
void Estagiario::setHorasTrabalhadas(int horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
}

// Implementação dos métodos getters
int Estagiario::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

// Implementação dos métodos calcularSalarioFinal e exibirInformacoes como sobrescrita dos métodos virtuais
float Estagiario::calcularSalarioFinal(){
    return salarioBase * (horasTrabalhadas / 160.0);
}

void Estagiario::exibirInformacoes(){
    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << getHorasTrabalhadas() << endl;
    cout << "Salário base: " << getSalarioBase() << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
