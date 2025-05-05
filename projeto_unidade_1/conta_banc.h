#ifndef conta_banc_h
#define conta_banc_h
#include "cliente.h"
#include <string>

// Declaração da classe Cliente
class ContaBancaria {
    private:
    int numero;
    Cliente titular;
    double saldo;


    public:
    // Declaração do construtor parametrizado
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0);

    // Declaração dos métodos de "ações" que o usuário pode realizar
    void depositar(double valor);
    void sacar(double valor);

    // Sobrecarga do método "transferir"
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);

    // Métodos de visualização
    void exibirSaldo();
    void exibirInformacoes();

};

#endif
