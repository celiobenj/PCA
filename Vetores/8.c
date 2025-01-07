/*
8  Criar uma função para ordenar um vetor em ordem ascendente utilizando o algoritmo Selection-Sort. Este algoritmo funciona da seguinte forma:
    * Percorrer o array comparando os elementos para determinar qual é o menor.
    * Intercambiar o elemento com menor valor com o elemento que está na primeira posição.
    * Procurar o segundo menor valor e intercambiar com o elemento que está na segunda posição.
    * Continuar o algoritmo até que todos os elementos estejam ordenados.
Exemplo:
array=[70,90,1,3,0,100,2]
Primeira execução acha o menor (0) e intercambia com o que está na primeira posição, o resultado é  array=[0,90,1,3,70,100,2]
Segunda execução acha o menor desde a segunda posição até o final do array (1) e intercambia com o que está na segunda posição, o resultado é  array=[0,1,90,3,70,100,2]
Terceira execução acha o menor desde a terceira posição até o final do array (2) e intercambia com o que está na terceira posição, o resultado é  array=[0,1,2,3,70,100,90]
O processo continua até ordenar o vetor.
(Tentem fazer sozinhos, não procurar soluções na Internet. Na solução não pode usar o comando break).
*/
#include <stdio.h>

void selectionSort(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            int pos_menor = i;
            if (vetor[j] < vetor[i]) pos_menor = j;

            int aux = vetor[i];
            vetor[i] = vetor[pos_menor];
            vetor[pos_menor] = aux;
        }
    }

    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);
    
}

int main()
{
    int n = 4;
    printf("Digite o numero elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    printf("Digite os elementos de A: ");
    for (int i = 0; i < n; i++)
        scanf(" %d", &vetor[i]);

    selectionSort(vetor, n);
    return 0;
}
