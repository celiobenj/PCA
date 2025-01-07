#include <stdio.h>

/*
5. Faça um programa em C que calcula e escreve a seguinte soma: soma =
1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

int main()
{
    double soma;
    for (int i = 1, j = 1; i <= 99; i += 2, j++) soma += (double) i/j;
    
    printf("Soma: %lf", soma);

    return 0;
}
