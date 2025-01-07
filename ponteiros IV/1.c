/*
1 Crie uma função que aloca e lê um vetor de n inteiros. Crie outra função que recebe o vetor e retorna o maior e o menor valor. O programa principal deve executar as duas funções, imprimir os valores retornados pela 2ª função e liberar a memória alocada pela 1ª função.
*/
#include <stdio.h>
#include <stdlib.h>

void entrada(int *n, int *(*v))
{
    printf("Digite a quantidade de numeros: ");
    scanf("%d", n);

    *v = (int *)malloc(*n * sizeof(int));
    if (*v == NULL){
        printf("Nao ha espaco suficiente\nTerminando programa.");
        exit(1);
    }

    printf("Digite os %d inteiros: ", *n);
    for (int i = 0; i < *n; i++)
        scanf("%d", *v+i);
}

void maiorMenor(int n, int *v, int *maior, int *menor)
{
    for (int i = 0; i < n; i++)
    {
        if (*(v+i) > *maior) *maior = *(v+i);
        if (*(v+i) < *menor) *menor = *(v+i);
    }
}

int main()
{
    int n, *v;
    entrada(&n, &v);

    int maior = *v, menor = *v;
    maiorMenor(n, v, &maior, &menor);
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    free(v);
    return 0;
}
