/*
1.
Escreva um programa para criar, manipular e liberar uma matriz dinâmica de inteiros. O programa deve:
Alocar uma matriz de tamanho m x n usando ponteiros para ponteiros.
Preencher a matriz com números baseados na fórmula matriz[i][j]=i²+j².
Implementar uma função que encontra o maior número em cada linha, utilizando apenas aritmética de ponteiros para acessar os valores.
Liberar toda a memória alocada.
*/
#include <stdio.h>
#include <stdlib.h>

void maiorDaLinha(int **matriz, int m, int n, int *res);

int main()
{
    int m, n;
    printf("Numero de linhas e colunas: ");
    scanf("%d %d", &m, &n);

    int **matriz;
    matriz = (int **)malloc(m*sizeof(int *));
    if (matriz == NULL)
    {
        printf("Nao ha espaco suficiente");
        exit(1);
    }    
    for (int i = 0; i < m; i++)
    {
        *(matriz+i) = (int *)malloc(n*sizeof(int));
        if (*(matriz+i) == NULL)
        {
            printf("Nao ha espaco suficiente");
            exit(1);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(matriz+i)+j) = i*i+j*j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int res[m];
    maiorDaLinha(matriz, m, n, res);
    
    printf("\nMaiores valores por linha:\n");
    for (int i = 0; i < m; i++)
        printf("%d ", res[i]);

    for (int i = 0; i < m; i++)
    {
        free(*(matriz+i));
    }
    free(matriz);
    return 0;
}

void maiorDaLinha(int **matriz, int m, int n, int *res)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n-1; j++)
            if (*(*(matriz+i)+j) < *(*(matriz+i)+j+1)) 
                *(res+i) = *(*(matriz+i)+j+1);
}
