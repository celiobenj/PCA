#include <stdio.h>
#include <math.h>

//2. Conversão de graus para radianos. Escreva um programa que leia um ângulo em graus e o converta para radianos usando a fórmula radianos = graus * (M_PI / 180). Utilize M_PI da math.h.

int main()
{
    float graus;

    printf("Digite o valor de um angulo em graus: ");
    scanf("%f", &graus);

    float radianos = graus * (M_PI / 180);

    printf("Esse angulo em rad, vale: %.2f\n", radianos);

    return 0;
}
