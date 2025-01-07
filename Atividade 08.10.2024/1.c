#include <stdio.h>

/*
1. Tabela de Multiplicação
Escreva um programa que gera e imprime as tabelas de multiplicação de 1 a 10.
*/

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}
