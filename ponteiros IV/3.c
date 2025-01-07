/*
3. Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais (double). A implementação deste programa deve considerar as dimensões fornecida pelo usuário (Dica: represente a matriz através de variáveis do tipo double **, usando alocação dinâmica de memória)
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

    double **matriz1 = (double **)malloc(m * sizeof(double *));
    if (matriz1 == NULL)
    {
        printf("Nao ha espaco suficiente\nTerminando programa.");
        exit(1);
    }

    for (int i = 0; i < m; i++)
    {
        *(matriz1+i) = (double *)malloc(n*sizeof(double));
        if (*(matriz1+i) == NULL)
        {
            printf("Nao ha espaco suficiente\nTerminando programa.");
            exit(1);
        }
    }

    double **matriz2 = (double **)malloc(m * sizeof(double *));
    if (matriz2 == NULL)
    {
        printf("Nao ha espaco suficiente\nTerminando programa.");
        exit(1);
    }

    for (int i = 0; i < m; i++)
    {
        *(matriz2+i) = (double *)malloc(n*sizeof(double));
        if (*(matriz2+i) == NULL)
        {
            printf("Nao ha espaco suficiente\nTerminando programa.");
            exit(1);
        }
    }

    printf("Digite os numeros da matriz 1: \n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)       
            scanf("%lf", (*(matriz1+i)+j));

    printf("\nDigite os numeros da matriz 2: \n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)       
            scanf("%lf", (*(matriz2+i)+j));

    printf("Matriz 1 somada com matriz 2: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2lf ", (*(*(matriz1+i)+j) + *(*(matriz2+i)+j)));
        }
        printf("\n");
    }
            
    free(matriz1);
    free(matriz2);
    return 0;
}
