/*
3.
Escreva um programa que copia o conteúdo de uma matriz M para outra matriz C. O programa deve:
Alocar duas matrizes dinamicamente, M e C, ambas de dimensões m×n.
Preencher M com valores fornecidos pelo usuário.
Implementar uma função copiarMatriz(int** M, int** C, int m, int n) que utiliza apenas aritmética de ponteiros para copiar os valores de M para C.
Imprimir ambas as matrizes para verificar a cópia.
Liberar a memória das duas matrizes.
*/
#include <stdio.h>
#include<stdlib.h>

void copiarMatriz(int** M, int** C, int m, int n);

int main()
{
    int m, n;
    printf("Entre com o numero de linhas e de colunas: ");
    scanf("%d %d", &m, &n);

    int **M, **C;
    M = (int **)malloc(m*sizeof(int *));
    C = (int **)malloc(m*sizeof(int *));
    if (M == NULL || C == NULL)
    {
        printf("Nao ha espaco suficiente");
        exit(1);
    }
    for (int i = 0; i < m; i++)
    {
        *(M+i) = (int *)malloc(n*sizeof(int));
        *(C+i) = (int *)malloc(n*sizeof(int));
        if (*(M+i) == NULL || *(C+i) == NULL)
        {
            printf("Nao ha espaco suficiente");
            exit(1);
        }
    }

    printf("Entre com os numeros da matriz:\n");
    for (int i = 0; i < m; i++)  
        for (int j = 0; j < n; j++)     
            scanf("%d", *(M+i)+j);

    copiarMatriz(M, C, m, n);

    printf("\nMatriz M:\n");
    for (int i = 0; i < m; i++)  
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(M+i)+j));
        }
        printf("\n");
    }

    
    printf("\nMatriz C:\n");
    for (int i = 0; i < m; i++)  
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(C+i)+j));
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        free(*(M+i));
        free(*(C+i));
    }
    free(M);
    free(C);
    return 0;
}

void copiarMatriz(int** M, int** C, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            *(*(C+i)+j) = *(*(M+i)+j);
}