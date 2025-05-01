#include <iostream>
#include "conta_banc.h"

// Implementação do construtor para a inicialização da classe ContaBancaria
ContaBancaria::ContaBancaria(const int numero, Cliente titular, double saldo):
    numero(numero), titular(titular), saldo(saldo) {/* vazio */}

// Implementação do métedo depositar para adicionar mais "bufunfa" na conta. Acessa o saldo da classe ContaBancaria e soma o saldo ao valor do argumento
void ContaBancaria::depositar(double valor) {
    saldo = saldo + valor;
}

// Implementação do métedo sacar para "tirar" "bufunfa" da conta. Acessa o saldo da classe ContaBancaria e subtrai o valor do argumento do saldo
void ContaBancaria::sacar(double valor) {
    // Verificando se há saldo suficiente para realizar a operação de saque
    if(saldo >= valor){
        saldo = saldo - valor;
    }
}

// Implementação do método transferir para um único destino
void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    // Verificando se há saldo suficiente para realizar a operação de transferência (depósito na conta de destino)
    if(saldo >= valor){
        destino.depositar(valor);

        //"Aplica" o método sacar na conta do titular que está realizando a transferência. "This" é uma referência padrão para a conta/objeto de origem
        this->sacar(valor);

        // Exibe para o usuário a informação de que a transferência foi realizada
        cout << "Transferido: R$ "<< valor << " da conta " << numero << " para a conta " << destino.numero << endl;
    }
}

// Implementação do método transferir para mais de um destino
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    // Verificando se há saldo suficiente para realizar a operação de transferência (depósito nas contas de destino)
    if(saldo >= valor){
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);

        //"Aplica" o método sacar na conta do titular que está realizando a transferência. "This" é uma referência padrão para a *conta*/objeto de origem
        this->sacar(valor);

        // Exibe para o usuário a informação de que as transferências foram realizadas
        cout << "Transferido: R$ "<< valor/2 << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") " << "da conta " << numero << endl;
    }
}

// Implementação do método exibirSaldo para visualizar quanta bufunfa o titular tem
void ContaBancaria::exibirSaldo() {
    // Exibe a informação do saldo
    cout << "Saldo atual da conta "<< numero << ": R$ " << saldo << endl;
}

// Implementação do método exibirInformacoes para visualizar os dados do titular
void ContaBancaria::exibirInformacoes() {
    // Exibe as informações do titular
    cout << "Titular: " << titular.getnome() << ", CPF: " << titular.getcpf() << endl;
    // Exibe as informações da conta
    cout << "Número da Conta: "<< numero << ", Saldo: R$ " << saldo << endl;
}

