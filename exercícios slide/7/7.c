//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <stdio.h>

int main(){
    float F, C;

    printf("Digite uma temperatura em graus Farenheit: ");
    scanf("%f", &F);

    C = 5.0/9 * (F-32);

    printf("Essa temperatura corresponde a %.2f graus Celsius.", C);

    return 0;
}
