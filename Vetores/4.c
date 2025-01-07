/*
4 Criar e utilizar num programa uma função que receba uma sequência de n números e retorne outra sequência só com os números par (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100)
*/
#include <stdio.h>

void vetorPar(int vetor[], int n)
{
    for (int i = 0; i < n; i++) 
        if (vetor[i]%2 == 0) 
            printf("%d ", vetor[i]);
}

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

    vetorPar(sequencia, n);

    return 0;
}
