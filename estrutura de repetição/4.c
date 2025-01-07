// 4. Construa um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior e o menor valor fornecido.

#include <stdio.h>

int main()
{
    int maior = -32.768, menor = 32.767, num;

    for (int i = 0; i < 20; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%d", &num);
        
        if (num > maior) maior = num;

        if (num < menor) menor = num;
    }

    printf("O maior e o menor valor fornecidos foram: %d e %d", maior, menor);

    return 0;
}
