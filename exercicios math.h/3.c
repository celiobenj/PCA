#include <stdio.h>
#include <math.h>

//3. Cálculo da diferença entre números elevados a potências diferentes. Escreva um programa que leia três números: base, expoente1 e expoente2, e calcule a diferença entre base^expoente1 e base^expoente2 usando a função pow().

int main()
{
    float base, expo1, expo2;

    printf("Digite uma base: ");
    scanf("%f", &base);
    printf("Digite um expoente: ");
    scanf("%f", &expo1);
    printf("Digite um outro expoente: ");
    scanf("%f", &expo2);

    float diferenca = pow(base, expo1) - pow(base, expo2);

    printf("A diferenca %.2f^%.2f - %.2f^%.2f e: %.2f\n", base, expo1, base, expo2, diferenca);

    return 0;
}
