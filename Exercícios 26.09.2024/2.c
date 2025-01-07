#include <stdio.h>

/*
2. Escreva um programa em C que lê 15 valores reais, encontra o maior e o
menor deles e mostra o resultado.
*/

int main()
{
    double num, menor = __DBL_MAX__, maior = __DBL_MIN__;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &num);

        if (num < menor) menor = num;
        if (num > maior) maior = num;       
    }

    printf("O maior valor entre esses e: %.2lf\n", maior);
    printf("O menor valor entre esses e: %.2lf\n", menor);

    return 0;
}
