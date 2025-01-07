/*
1 Construa um algoritmo que efetue e apresente o resultado da soma entre duas matrizes 3 x 5. Inicialize a matriz com valores quaisquer e imprima o resultado na tela.
*/
#include <stdio.h>

void somaMatriz(int A[][5], int B[][5], int soma[][5]);

int main()
{
    int matrizA[3][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    },
    matrizB[3][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    },
    matrizSoma[3][5];

    somaMatriz(matrizA, matrizB, matrizSoma);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void somaMatriz(int A[][5], int B[][5], int soma[][5])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            soma[i][j] = A[i][j] + B[i][j];
}
