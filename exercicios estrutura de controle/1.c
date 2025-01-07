#include <stdio.h>

/*
1. Calculadora com Quatro Operações
Escreva um programa que recebe dois números e um operador (adicionar, subtrair, multiplicar, dividir) e realiza a operação correspondente. Use if-else ou switch para lidar com as diferentes operações. Incluir o tratamento de divisão por zero.
*/

int main()
{
    float num1, num2;
    char operador;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    printf("Digite uma operacao: \n");
    printf("[+ | soma] [- | subtracao] [* | multiplicacao] [/ | divisao] ");
    scanf("%s", &operador);

    switch (operador)
    {
    case '+':
        printf("O resultado da operacao e: %.2f", num1 + num2);
        break;
    case '-':
        printf("O resultado da operacao e: %.2f", num1 - num2);
        break;
    case '*':
        printf("O resultado da operacao e: %.2f", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Voce esta tentando dividir por 0\n");
            break;
        }
        printf("O resultado da operacao e: %.2f", num1 / num2);
        break;

    default:
        printf("Operacao invalida\n");
        break;
    }

    return 0;
}
