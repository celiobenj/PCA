//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>

int main(){
    float F, C;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = C*9.0/5 + 32;

    printf("Essa temperatura corresponde a %.2f graus Farenheit.", F);

    return 0;
}
