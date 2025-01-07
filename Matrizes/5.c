/*
5. Dada uma matriz 5x5, elabore um algoritmo que imprima:
A diagonal principal
A diagonal secundária
A soma da linha 4
A soma da coluna 2
Tudo, exceto a diagonal principal
*/
#include <stdio.h>

void diagonal1(int matriz[][5])
{
    printf("Diagonal principal: ");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i == j)
                printf("%d ", matriz[i][j]);
}

void diagonal2(int matriz[][5])
{
    printf("Diagonal secundaria: ");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (i == 4 - j)
                printf("%d ", matriz[i][j]);
}

void soma1(int matriz[][5])
{
    printf("Soma linha 4: ");
    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma += matriz[3][i];

    printf("%d ", soma);
}

void soma2(int matriz[][5])
{
    printf("Soma coluna 2: ");
    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma += matriz[i][1];

    printf("%d ", soma);
}

int main()
{
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 100, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    diagonal1(matriz);
    printf("\n");

    diagonal2(matriz);
    printf("\n");

    soma1(matriz);
    printf("\n");

    soma2(matriz);
    printf("\n");

    diagonal2(matriz);
    printf("\n");

    soma1(matriz);
    printf("\n");

    soma2(matriz);
    printf("\n");
    return 0;
}
