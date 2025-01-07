#include <stdio.h>
#include <math.h>

//6. Verificação da identidade trigonométrica fundamental. Escreva um programa que leia um ângulo em graus, o converta para radianos e verifique se a identidade trigonométrica sin^2(x) + cos^2(x) = 1 é válida para esse ângulo, calculando o seno e cosseno. Exiba o valor da expressão.

int main()
{
    float graus;
    printf("Digite o valor de um angulo em graus: ");
    scanf("%f", &graus);

    float rad = graus * (M_PI / 180);

    float identidade = pow(sin(rad), 2) + pow(cos(rad), 2);

    printf("A expressao da identidade para esse valor resulta em: %.2f\n", identidade);

    return 0;
}
