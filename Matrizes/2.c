/*
2. Criar uma função que efetue e apresente o resultado da soma entre duas matrizes nxn.
*/
#include <stdio.h>
int n;

void somaMatriz(int A[][n], int B[][n], int n);

int main()
{
    printf("Entre com o tamanho n da matriz n por n: ");
    scanf("%d", &n);

    int matrizA[n][n],
    matrizB[n][n],
    matrizSoma[n][n];

    printf("Entre com os valores da matriz A: \n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrizA[i][j]);

    printf("Entre com os valores da matriz B: \n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrizB[i][j]);

    somaMatriz(matrizA, matrizB, n);
    return 0;
}

void somaMatriz(int A[][n], int B[][n], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}
