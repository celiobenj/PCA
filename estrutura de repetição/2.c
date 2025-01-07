// 2. Escreva um algoritmo que lê 50 números inteiros e em seguida mostra a soma de todos os ímpares lidos.

#include <stdio.h>

int main()
{
    int num = 0, soma = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%d", &num);
        if (num%2 == 1) soma += num;
    }

    printf("A soma dos impares lidos e: %d", soma);

    return 0;
}
