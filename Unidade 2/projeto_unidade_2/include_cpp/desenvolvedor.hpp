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
    Desenvolvedor(string nome, float salarioBase, int id, int quantidadeDeProjetos);

    // Declaração do destrutor
    ~Desenvolvedor() = default;

    // Declaração dos métodos setters
    void setQuantidadeDeProjetos(int quantidadeDeProjetos);

    // Declaração dos métodos getters
    int getQuantidadeDeProjetos();

    // Declaração dos métodos exibirInformacoes e calcularSalarioFinal para sobrescrever os métodos virtuais
    void exibirInformacoes();

    float calcularSalarioFinal();

};

#endif
