#include <stdio.h>
#include <math.h>

//5. Cálculo do seno de um ângulo em graus. Escreva um programa que leia um ângulo em graus, o converta para radianos e calcule o seno desse ângulo. Use a função sin() para o cálculo e a conversão radianos = graus * (M_PI / 180).

int main()
{
    float graus;
    printf("Digite o valor de um angulo em graus: ");
    scanf("%f", &graus);

    float rad = graus * (M_PI / 180);

    float seno = sin(rad);

    printf("O seno deste angulo e: %.2f\n", seno); 

    return 0;
}
