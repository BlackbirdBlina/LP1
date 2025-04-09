#include "num_amigos.h"

int soma_divisores(int num){

    int soma = 0;

    // O maior divisor próprio de um número é no máximo a metade desse número
    for (int i = 1; i <= num / 2; i++){
        if (num % i == 0){
            soma = soma + i;
        }
    }

    return soma;
}

