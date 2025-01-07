/*
6 Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais.

Dada uma matriz quadrada A5x5 , verificar se A é um quadrado mágico.
*/
#include <stdio.h>

int isQuadradoMagico(int matriz[][5], int tam);

int main()
{
    int matriz[5][5] = {
        {11, 24, 7, 20, 3},
        {4, 12, 25, 8, 16},
        {17, 5, 13, 21, 9},
        {10, 18, 1, 14, 22},
        {23, 6, 19, 2, 15},
    };

    if (isQuadradoMagico(matriz, 5)) printf("E sim");
    else printf("Nao e");

    return 0;
}

int isQuadradoMagico(int matriz[][5], int tam)
{
    for (int i = 0; i < tam-1; i++)
    {
        int somaLin1 = 0, somaLin2 = 0,
            somaCol1 = 0, somaCol2 = 0;
        for (int j = 0; j < tam; j++)
        {
            somaLin1 += matriz[i][j];
            somaLin2 += matriz[i+1][j];

            somaCol1 += matriz[j][i];
            somaCol2 += matriz[j][i+1];
        }
        if ((somaLin1 != somaLin2) || (somaCol1 != somaCol2)) return 0;
    }

    int somaD1 = 0, somaD2 = 0;
    for (int i = 0; i < tam; i++)
    {
        somaD1 += matriz[i][i];
        somaD2 += matriz[i][tam-1-i];
    }
    if (somaD1 != somaD2) return 0;

    return 1;
}
