#include <stdio.h>

/*
3. Primo Gêmeo
Crie um programa em C que encontre o primeiro par de números primos gêmeos (dois números primos cuja diferença é 2) maiores que um número fornecido pelo usuário. Exemplo de primos gêmeos: (11, 13), (17, 19).
*/

int ePrimo(int n)
{
    int div = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) div++;
    }

    if (div == 2) return 1; else return 0;
}

int main()
{
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    int n1 = n, n2 = n + 2;

    while (1)
    {
        if (ePrimo(n1) && ePrimo(n2)) break;
        else
        {
            n1++; n2++;
        }
    }
    
    printf("O proximo par de numeros gemeos sao: (%d, %d)", n1, n2);
    
    return 0;
}
