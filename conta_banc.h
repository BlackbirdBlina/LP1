#ifndef conta_banc_h
#define conta_banc_h
#include "cliente.h"
#include <string>

// Declaração da classe Cliente
class ContaBancaria {
    private:
    int numero;
    double saldo;
    Cliente titular;

    public:
    // Declaração do construtor parametrizado
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirSaldo();
    void exibirInformacoes();

};

#endif
