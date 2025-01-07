/*
7 Escreva uma função que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor do elemento mínimo e o valor do elemento máximo do vetor. Escreva também uma função main que use a função.
*/
#include <stdio.h>

void minMax(int v[], int tam, int *min, int *max)
{
    *min = *v;
    *max = *v;
    for (int i = 0; i < tam; i++)
    {
        if (*(v + i) < *min)
            *min = *(v + i);
        if (*(v + i) > *max)
            *max = *(v + i);
    }
}

int main()
{
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int v[tam];
    printf("Popule o vetor: \n");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", v + i);
    }

    int min, max;
    minMax(v, tam, &min, &max);

    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);
    return 0;
}
