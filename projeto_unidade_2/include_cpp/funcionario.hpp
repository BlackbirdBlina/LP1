#ifndef funcionario_h
#define funcionario_h
#include <string>
using namespace std;

// Declaração da classe Funcionario
class Funcionario {

    // Atributos protegidos
    protected:
    string nome;
    float salarioBase;

    // Atributos privados
    private:
    int id;

    // Métodos públicos
    public:
    // Declaração do construtor parametrizado
    Funcionario(string nome, float salarioBase, int id);

    // Declaração do destrutor
    virtual ~Funcionario() = default;

    // Declaração dos métodos setters
    void setNome(string nome);
    void setSalarioBase(float salarioBase);
    void setId(int id);

    // Declaração dos métodos getters
    string getNome();
    float getSalarioBase();
    int getId();

    // Declaração dos métodos virtuais
    virtual void exibirInformacoes();

    // Declaração do método virtual puro
    virtual float calcularSalarioFinal() = 0;

};

#endif
