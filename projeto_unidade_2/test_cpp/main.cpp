#include <iostream>
#include "funcionario.hpp"
#include "desenvolvedor.hpp"
#include "gerente.hpp"
#include "estagiario.hpp"
#include <vector>
using namespace std;


int main() {

    // Declaração do vetor de ponteiros para Funcionario com 10 posições
    vector<Funcionario*> funcionarios(10);

    // Variável de controle para realizar a exibição das informações de cada funcionário
    int qtdfuncionarios = 0;

    // Laço para percorrer e preencher o vetor de funcionarios
    for(int i = 0; i < 10; i++){

        // Declaração de variáveis a serem usadas para construir as instâncias da classe Funcionario
        int tipo = -1;
        int id;
        string nome;
        float salario;
        int qtdProjetos;
        int qtdHoras;
        float bonus;

        // Interagindo com o usuário para solicitar qual tipo de funcionário deseja cadastrar
        cout << "Qual tipo de funcionário deseja cadastrar?" << endl;
        cout << "Digite 1 para cadastrar 'Desenvolvedor', 2 para cadastrar 'Gerente' ou 3 para cadastrar 'Estagiário':" << endl;

        if(i > 6){
            cout << "Digite 0 se deseja finalizar os cadastros!" << endl;
        }

        cin >> tipo;
        cout << endl;
        cin.ignore();

        if (i > 6 && tipo == 0){
            break;
        }

        switch (tipo)
        {
        // Desenvolvedor
        case 1:

            // Interagindo com o usuário para solicitar informações necessárias para cadastrar o funcionário do tipo Desenvolvedor
            cout << "Digite o nome do Desenvolvedor:" << endl;
            getline(cin, nome);

            cout << "Digite o salário do Desenvolvedor:" << endl;
            cin >> salario;

            cout << "Digite o ID do Desenvolvedor:" << endl;
            cin >> id;

            cout << "Digite a quantidade de projetos do Desenvolvedor:" << endl;
            cin >> qtdProjetos;
            cout << endl;

            // Reservando espaço de memória na heap e preenchendo o espaço alocado com os valores passados para o construtor da subclasse
            funcionarios[i] = new Desenvolvedor(nome, salario, id, qtdProjetos);

            qtdfuncionarios += 1;

            break;

        // Gerente
        case 2:

            // Interagindo com o usuário para solicitar informações necessárias para cadastrar o funcionário do tipo Desenvolvedor
            cout << "Digite o nome do Gerente:" << endl;
            getline(cin, nome);

            cout << "Digite o salário do Gerente:" << endl;
            cin >> salario;

            cout << "Digite o ID do Gerente:" << endl;
            cin >> id;

            cout << "Digite qual foi o bônus mensal do Gerente:" << endl;
            cin >> bonus;
            cout << endl;

            // Reservando espaço de memória na heap e preenchendo o espaço alocado com os valores passados para o construtor da subclasse
            funcionarios[i] = new Gerente(nome, salario, id, bonus);

            qtdfuncionarios += 1;

            break;

        // Estagiário
        case 3:

            // Interagindo com o usuário para solicitar informações necessárias para cadastrar o funcionário do tipo Estagiário
            cout << "Digite o nome do Estagiário:" << endl;
            getline(cin, nome);

            cout << "Digite o salário do Estagiário:" << endl;
            cin >> salario;

            cout << "Digite o ID do Estagiário:" << endl;
            cin >> id;

            cout << "Digite a quantidade de horas trabalhadas pelo Estagiário:" << endl;
            cin >> qtdHoras;
            cout << endl;

            // Reservando espaço de memória na heap e preenchendo o espaço alocado com os valores passados para o construtor da subclasse
            funcionarios[i] = new Estagiario(nome, salario, id, qtdHoras);

            qtdfuncionarios += 1;

            break;

        default:
            cout << "Valor inválido. Por favor, digite um valor válido." << endl;
            return -1;
        }

    }

    // Laço para percorrer e exibir as informações cadastradas no vetor de funcionarios
    for(int i = 0; i < qtdfuncionarios; i++){
        funcionarios[i]->exibirInformacoes();
        cout << endl;

        // Liberando memória da heap
        delete funcionarios[i];
    }


    return 0;
}
