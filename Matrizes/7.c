/*
7. Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular o custo total para cada itinerário.

Exemplo:
4    1    2    3
5    2    1    400
2    1    3    8
7    1    2    5

O custo do itinerário 0 3 1 3 3 2 1 0 é

a03 + a31 + a13 + a33 + a32 + a21 + a10 = 3 + 1 + 400 + 5 + 2 + 1 + 5 = 417
*/
#include <stdio.h>

int main()
{
    int A[4][4] = {
        {4, 1, 2, 3},
        {5, 2, 1, 400},
        {2, 1, 3, 8},
        {7, 1, 2, 5},
    };

    int itinerarios[8] = {0, 3, 1, 3, 3, 2, 1, 0};

    int custo = 0;
    for (int i = 0; i < 8-1; i++)
    {
        custo += A[itinerarios[i]][itinerarios[i+1]];
    }

    printf("%d", custo);
    return 0;
}
