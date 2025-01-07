#include <stdio.h>

/*
4. Números de Harshad
Escreva um programa que verifique se um número fornecido pelo usuário é um número de Harshad (ou Niven), ou seja, um número que é divisível pela soma de seus dígitos. Por exemplo, 18 é um número de Harshad porque 18 é divisível por 9 (1 + 8).
*/

int main()
{
    int n, soma = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i *= 10)
        soma += (n/i)%10;

    (n % soma == 0) ? 
        printf("E um numero de Harshad, pois %d e divisivel por %d", n, soma) : 
        printf("Nao e um numero de Harshad");

    return 0;
}
