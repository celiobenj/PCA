/*
5 Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
*/
#include <stdio.h>

int ordena(int *a, int *b, int *c)
{
    if (*a == *b && *b == *c)
        return 1;

    int aux;
    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if (*a > *c)
    {
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if (*b > *c)
    {
        aux = *b;
        *b = *c;
        *c = aux;
    }
    return 0;
}

int main()
{
    int a = 1, b = -1, c = 0;

    if (ordena(&a, &b, &c))
    {
        printf("Os valores sao iguais\n");
    }
    else
    {
        printf("Os valores ordenados ficam:\n");
        printf("Menor: %d\n", a);
        printf("Meio: %d\n", b);
        printf("Maior: %d\n", c);
    }

    return 0;
}
