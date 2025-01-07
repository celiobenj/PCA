#include <stdio.h>

/*
2. Classificação de Triângulos
Receba três lados de um triângulo e determine se ele é equilátero, isósceles ou escaleno. Use if-else para validar as condições que formam um triângulo válido e para classificar o tipo de triângulo. Adicionar verificação de triângulo inválido (soma de dois lados maior que o terceiro).
*/

int main()
{
    float lado1, lado2, lado3;

    printf("Entre com 3 lados de um triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado1 + lado2 < lado3)
    {
        printf("Essas medidas nao sao lados de um triangulo\n");
    }
    else
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Triangulo equilatero\n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Triangulo isosceles\n");
        }
        else
        {
            printf("Triangulo escaleno");
        }
        
    }

    return 0;
}
