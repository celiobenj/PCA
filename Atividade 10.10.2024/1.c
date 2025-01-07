#include <stdio.h>

/*
1. Número Perfeito
Escreva um programa em C que determine se um número fornecido pelo usuário é um número perfeito. Um número perfeito é aquele cuja soma de seus divisores próprios (excluindo o próprio número) é igual a ele. Exemplo: 6 é um número perfeito, pois seus divisores próprios (1, 2 e 3) somam 6.
*/

int main()
{
    int n, soma = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
        if (n%i == 0) soma += i;

    (soma == n) ? 
        printf("E numero perfeito"):
        printf("Nao e numero perfeito");

    return 0;
}
