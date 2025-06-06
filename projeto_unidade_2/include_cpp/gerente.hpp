#ifndef gerente_hpp
#define gerente_hpp
#include "funcionario.hpp"

class Gerente : public Funcionario {

    // Atributos privados
    private:
    float bonusMensal;

    public:
    // Declaração do construtor parametrizado
    Gerente(int bonusMensal);

    // Declaração dos métodos setters
    void setBonusMensal(int bonusMensal);

    // Declaração dos métodos getters
    int getBonusMensal();

};

#endif
