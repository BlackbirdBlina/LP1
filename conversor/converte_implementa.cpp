#include "converte_declara.hpp"
// Implementando as funções declaradas/definidas em converte.hpp

// Calculando a convesão de Celsius para Fahrenheit
float celsius2fahrenheit(float temp) {
    return temp * 1.8 + 32;
}

// Calculando a convesão de Fahrenheit para Celsius
float fahrenheit2celsius(float temp) {
    return (temp - 32) / 1.8;
}
