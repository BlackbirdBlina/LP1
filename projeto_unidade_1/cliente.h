#ifndef cliente_h
#define cliente_h
#include <string>
using namespace std;


// Declaração da classe Cliente
class Cliente {
    private:
    string nome;
    string cpf;

    public:
    // Declaração do construtor parametrizado
    Cliente(string nome, string cpf);

    // Declaração dos métodos getter
    string getnome();
    string getcpf();
};


#endif
