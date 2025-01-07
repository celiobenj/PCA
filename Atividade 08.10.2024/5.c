#include <stdio.h>

/*
5. Escreva um programa que verifique se dois números fornecidos pelo usuário são primos entre si (coprimos). Dois números são coprimos se o maior divisor comum (MDC) entre eles é 1. Testando todos os possíveis divisores. Dica: Você pode usar o algoritmo de Euclides para calcular o MDC, mas para praticar os laços aninhados, vamos implementar uma versão que testa todos os possíveis divisores.
*/

int main()
{
    int a, b;
    printf("Digite dois numeros? ");
    scanf("%d %d", &a, &b);

    int maior, menor, MDC;
    if (a > b)
    {
        maior = a;
        menor = b;
    } 
    else
    {
        maior = b;
        menor = a;
    }

    for (int i = 1; i <= menor; i++)
        if (maior % i == 0 && menor % i == 0)
            MDC = i;

    (MDC == 1) ? 
        printf("Esses numeros sao primos entre si") :
        printf("Esses numeros nao sao primos entre si"); 
    
    return 0;
}
