/*
2 Construa um programa que aloque em tempo de execução (dinamicamente) uma matriz de ordem m x n (linha por coluna) usando só aritmética de ponteiros. Usar o programa para definir a seguinte matriz
1 2 3
4 5 6
a) Imprima os valores da matriz usando aritmética de ponteiros.
b) Imprima os valores da matriz usando indexes.
c) Liberar a área de memória alocada pela matriz.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("Digite o numero de linhas: ");
    scanf("%d", &m);
    printf("Digite o numero de colunas: ");
    scanf("%d", &n);

    int **matriz = (int **)malloc(m * sizeof(int *));
    if (matriz == NULL)
    {
        printf("Nao ha espaco suficiente\nTerminando programa.");
        exit(1);
    }

    for (int i = 0; i < m; i++)
    {
        *(matriz+i) = (int *)malloc(n*sizeof(int));
        if (*(matriz+i) == NULL)
        {
            printf("Nao ha espaco suficiente\nTerminando programa.");
            exit(1);
        }
    }

    printf("Digite os numeros da matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)       
            scanf("%d", (*(matriz+i)+j));
        
    //imprimindo a matriz
    //a)
    printf("\nImprimindo a matriz do jeito A:\n");
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(matriz+i)+j));
        }
        printf("\n");
    }

    //b)
    printf("\nImprimindo a matriz do jeito B:\n");
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    free(matriz);
    return 0;
}
