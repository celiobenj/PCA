// 6. Faça um programa para imprimir a tabuada de 1 a 9 utilizando laços de repetição.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i ++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");       
    }

    return 0;
}
