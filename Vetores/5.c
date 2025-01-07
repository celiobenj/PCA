/*
5 Criar e utilizar num programa uma função que receba uma sequência de n números e mude a sequência para o fatorial de cada uns dos números da sequência (o comprimento máximo da sequência é 100 pelo que n tem que ser um número menor que 100). Exemplo: sequência inicial {2,5,7}  sequência final {2, 120, 5040}
*/
#include <stdio.h>

int fat(int n)
{
    if (n == 0 || n == 1) return 1;
    return n*fat(n-1);
}

void vetorFat(int vetor[], int n)
{
    for (int i = 0; i < n; i++) 
        printf("%d ", fat(vetor[i]));
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

    vetorFat(sequencia, n);

    return 0;
}
