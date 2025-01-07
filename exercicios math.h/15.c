#include <stdio.h>
#include <math.h>

/*
15. Diferença absoluta entre dois números
Escreva um programa que leia dois números em ponto flutuante e calcule a diferença absoluta entre eles usando a função fabs(). Exiba a diferença absoluta dos dois números fornecidos, que deve sempre ser um valor positivo.
*/

int main()
{
    double num1, num2;

    printf("Escreva um numero: ");
    scanf("%lf", &num1);
    printf("Escreva outro numero: ");
    scanf("%lf", &num2);
    
    double dif_abs = fabs(num1 - num2);

    printf("A diferenca absoluta e: %lf\n", dif_abs);

    return 0;
}
