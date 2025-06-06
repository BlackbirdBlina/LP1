#ifndef estagiario_hpp
#define estagiario_hpp
#include "funcionario.hpp"

class Estagiario : public Funcionario {

    // Atributos privados
    private:
    int horasTrabalhadas;

    public:
    // Declaração do construtor parametrizado
    Estagiario(string nome, float salarioBase, int id, int horasTrabalhadas);

    // Declaração dos métodos setters
    void setHorasTrabalhadas(int horasTrabalhadas);

    // Declaração dos métodos getters
    int getHorasTrabalhadas();

    // Declaração dos métodos exibirInformacoes e calcularSalarioFinal para sobrescrever os métodos virtuais
    void exibirInformacoes();

    float calcularSalarioFinal();
};

#endif
