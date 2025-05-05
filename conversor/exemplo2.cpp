#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Modularização interna através de funções
float celsius2fahrenheit(float temp) {
    return temp * 1.8 + 32;
}

float fahrenheit2celsius(float temp) {
    return (temp - 32)/1.8;
}

// Função principal
int main(){
    int opcao;

    // Exibindo mensagens de opção de escolha e instrução ao usuário
    cout << "Conversor de temperatura" << endl;
    cout << "(1) Celsius -> Fahrenheit" << endl;
    cout << "(2) Fahrenheit -> Celsius" << endl;
    cout << "Digite uma opção: " << endl;

    // "Capturando" informação recebida pelo input do usuário, guardando valor na variável "opcao"
    cin >> opcao;

    // Declarando variáveis a serem usadas no Switch e solicitando ao usuário qual temperatura deseja converter
    float temp;
    cout << "Digite a temperatura: ";
    cin >> temp;
    float conv;

    switch (opcao){
        case 1:
            // Guardando na variável "conv" a informação do valor convertido a partir da função "celsius2fahrenheit"
            conv = celsius2fahrenheit(temp);
            // Exibindo para o usuário a temperatura convertida
            cout << temp << "°C = " << conv << "°F" << endl;
            break;
        case 2:
            // Guardando na variável "conv" a informação do valor convertido a partir da função "fahrenheit2celsius"
            conv = fahrenheit2celsius(temp);
            // Exibindo para o usuário a temperatura convertida
            cout << temp << "°F = " << conv << "°C" << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
    }

    return 0;
}
