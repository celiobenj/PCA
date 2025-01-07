/*
2.
Implemente usando ponteiros um programa que transponha uma matriz M de inteiros. O programa deve:
Receber as dimensões m e n e alocar dinamicamente uma matriz de tamanho m×n usando ponteiros para ponteiros.
Preencher a matriz com valores fornecidos pelo usuário.
Criar e preencher a matriz transposta T de dimensões n×m.
Imprimir as matrizes M e T.
Liberar toda a memória alocada.
*/
#include <stdio.h>
#include <stdlib.h>

void criaMatriz(int **matriz, int m, int n);

int main()
{
    int m, n;
    printf("Entre com o numero de linhas e de colunas: ");
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
    
    printf("Entre com os numeros da matriz: \n");
    for (int i = 0; i < m; i++)  
        for (int j = 0; j < n; j++)     
            scanf("%d", *(matriz+i)+j);    
    
    int **transposta;
    transposta = (int **)malloc(n*sizeof(int *));
    if (transposta == NULL)
    {
        printf("Nao ha espaco suficiente");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        *(transposta+i) = (int *)malloc(m*sizeof(int));
        if (*(transposta+i) == NULL)
        {
            printf("Nao ha espaco suficiente");
            exit(1);
        }  
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)   
            *(*(transposta+j)+i) = *(*(matriz+i)+j);
    
    printf("\nMatriz M:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(matriz+i)+j));
        }
        printf("\n");
    }

    printf("\nMatriz T:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", *(*(transposta+i)+j));
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
        free(*(matriz+i));
    for (int j = 0; j < n; j++)
        free(*(transposta+j));
    free(matriz);
    free(transposta);
    return 0;
}
