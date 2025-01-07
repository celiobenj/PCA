#include <stdio.h>

/*
6. Escreva um programa que determine se um número fornecido pelo usuário é um número perfeito. Um número perfeito é um número inteiro positivo que é igual à soma de seus divisores próprios (excluindo ele mesmo). Dica: Você pode usar um laço para iterar sobre os possíveis divisores e acumular a soma dos divisores próprios.
*/

int main()
{
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) if (num % i == 0) soma += i;

    (soma == num) ? 
        printf("E perfeito"): 
        printf("Nao e perfeito"); 

    return 0;
}
