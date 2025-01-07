/*
8  Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. Sua assinatura deve ser: void troca(float *a, float *b);
*/
#include <stdio.h>

void troca(float *a, float *b)
{
    float aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    float a = 11.1;
    float b = 22.2;

    troca(&a, &b);

    printf("%.2f\n", a);
    printf("%.2f\n", b);
    return 0;
}
