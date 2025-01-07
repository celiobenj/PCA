/*
1 Criar um programa que dada uma sequência de n números a imprima na ordem inversa à da leitura. (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)
*/
#include <stdio.h>

int main()
{
    int n;
    while (1)
    {
        printf("Digite um numero inteiro entre 1 e 100: ");
        scanf(" %d", &n);
        if (0 < n && n <= 100) break;
        printf("Tente novamente\n");
    }

    int sequencia[n];
    for (int i = 0; i < n; i++)
    {
        printf("Entre com o numero %d da sequencia: ", i+1);
        scanf(" %d", &sequencia[i]);
    }

    printf("A ordem inversa dessa sequencia e: ");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", sequencia[i]);
    }

    return 0;
}
