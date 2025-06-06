#ifndef estagiario_hpp
#define estagiario_hpp
#include "funcionario.hpp"

class Estagiario : public Funcionario {

    // Atributos privados
    private:
    int horasTrabalhadas;

    public:
    // Declaração do construtor parametrizado
    Estagiario(int horasTrabalhadas);

    // Declaração dos métodos setters
    void setHorasTrabalhadas(int horasTrabalhadas);

    // Declaração dos métodos getters
    int getHorasTrabalhadas();
};

#endif
