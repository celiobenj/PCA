#include <stdio.h>

/*
9. Verificação de Paridade e Positividade de Números
Receba um número e determine se ele é positivo ou negativo e se é par ou ímpar. Use if-else para lidar com as duas verificações.
Tratar o número zero como caso especial.
*/

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
        printf("O numero 0 nao tem sinal nem paridade");
    }
    else if (numero > 0)
    {
        if (numero % 2 == 0)
        {
            printf("Este numero e positivo e par");
        }
        else
        {
            printf("Este numero e positivo e impar");
        }
    }
    else
    {
        if (numero % 2 == 0)
        {
            printf("Este numero e negativo e par");
        }
        else
        {
            printf("Este numero e negativo e impar");
        }
    }

    return 0;
}
