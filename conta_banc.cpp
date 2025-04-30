#include <iostream>
#include "conta_banc.h"

// Implementação do construtor para a inicialização da classe ContaBancaria
ContaBancaria::ContaBancaria(const int numero, Cliente titular, double saldo = 0.0):
    numero(numero), titular(titular), saldo(saldo) {/* vazio */}

// Métedo depositar para adicionar mais "bufunfa" na conta. Acessa o saldo da classe ContaBancaria e soma o saldo ao valor do argumento
void ContaBancaria::depositar(double valor) {
    saldo = saldo + valor;
}

// Métedo sacar para "tirar" "bufunfa" da conta. Acessa o saldo da classe ContaBancaria e subtrai valor do argumento do saldo
void ContaBancaria::sacar(double valor) {
    if(saldo >= valor){
        saldo = saldo - valor;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if(saldo >= valor){
        destino.depositar(valor);

        //"Aplica" a função "sacar" na *conta* do titular que está realizando a transferência. "This" é uma referência padrão para a *conta*/objeto de origem
        this->sacar(valor);

        cout << "Transferido: R$ "<< valor/2 << "da conta " << numero << " para a conta " << destino.numero << endl;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    if(saldo >= valor){
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);

        //"Aplica" a função "sacar" na *conta* do titular que está realizando a transferência. "This" é uma referência padrão para a *conta*/objeto de origem
        this->sacar(valor);
        cout << "Transferido: R$ "<< valor/2 << "para cada conta (" << destino1.numero << " e " << destino2.numero << " )" << endl;
    }
}

void ContaBancaria::exibirSaldo() {
    cout << "Saldo atual da conta "<< numero << ": R$" << saldo << endl;
}

void ContaBancaria::exibirInformacoes() {
    cout << "Titular: " << titular.getnome() << ", CPF: " << titular.getcpf() << endl;
}

