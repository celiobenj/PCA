#include <stdio.h>
#include <math.h>

/*
14. Cálculo do mínimo e máximo entre três números
Escreva um programa que leia três números em ponto flutuante e determine o menor e o maior entre eles usando as funções fmin() e fmax(). O programa deve exibir o menor e o maior valor entre os três números fornecidos.
*/

int main()
{
    double num1, num2, num3;

    printf("Escreva um numero: ");
    scanf("%lf", &num1);
    printf("Escreva outro numero: ");
    scanf("%lf", &num2);
    printf("Escreva mais um numero: ");
    scanf("%lf", &num3);

    double menor = fmin(num1, num2);
    menor = fmin(menor, num3);

    double maior = fmax(num1, num2);
    maior = fmax(maior, num3);

    printf("O menor valor e: %lf\n", menor);
    printf("O maior valor e: %lf\n", maior);

    return 0;
}
