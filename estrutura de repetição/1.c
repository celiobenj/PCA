// 1. Faça um programa que leia do teclado cinco números e imprima na tela a soma destes cinco números. O programa só pode utilizar 2 (duas) variáveis.

#include <stdio.h>

int main()
{
    float num = 0, soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%f", &num);
        soma += num;
    }

    printf("A soma desses numeros e: %.2f", soma);

    return 0;
}
