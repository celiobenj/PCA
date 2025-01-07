#include <stdio.h>
#include <math.h>

// 1. Cálculo da hipotenusa de um triângulo retângulo. Escreva um programa que leia os comprimentos dos dois catetos de um triângulo retângulo e calcule a hipotenusa usando o Teorema de Pitágoras: hipotenusa = sqrt(cateto1^2 + cateto2^2).

int main()
{
    float cateto1, cateto2;

    printf("Digite o valor de um cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do outro cateto: ");
    scanf("%f", &cateto2);

    float hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("A hipotenusa vale: %.2f\n", hipotenusa);

    return 0;
}
