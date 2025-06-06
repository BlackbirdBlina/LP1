#ifndef desenvolvedor_h
#define desenvolvedor_h
#include "funcionario.hpp"
using namespace std;

class Desenvolvedor : public Funcionario {

    // Atributos privados
    private:
    int quantidadeDeProjetos;

    public:
    // Declaração do construtor parametrizado
    Desenvolvedor(int quantidadeDeProjetos);

    // Declaração dos métodos setters
    void setQuantidadeDeProjetos(int quantidadeDeProjetos);

    // Declaração dos métodos getters
    int getQuantidadeDeProjetos();

};

#endif
