#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Exemplo de código sem modularização. Todas as instruções dentro da main
int main(){
    int opcao;

    cout << "Conversor de temperatura" << endl;
    cout << "(1) Celsius -> Fahrenheit" << endl;
    cout << "(2) Fahrenheit -> Celsius" << endl;
    cout << "Digite uma opção: " << endl;

    cin >> opcao;

    float temp;
    cout << "Digite a temperatura: ";
    cin >> temp;
    float conv;

    switch (opcao){
        case 1:
            conv = temp * 1.8 + 32;
            cout << temp << "°C = " << conv << "°F" << endl;
            break;
        case 2:
            conv = (temp - 32)/1.8;
            cout << temp << "°F = " << conv << "°C" << endl;
            break;
        default:
            cout << "Opção inválida" << endl;
    }

    return 0;
}

