#include <stdio.h>

/*
2. Somatório de Fatoriais
Escreva um programa em C que calcule a soma dos fatoriais dos números inteiros entre dois valores fornecidos pelo usuário, inclusive. Por exemplo, se o usuário informar 3 e 5, o programa deve calcular 3! + 4! + 5!.
*/

int fatorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main()
{
    int a, b, soma = 0;

    printf("Informe dois valores a e b, com a < b: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        soma += fatorial(i);
    }

    printf("Soma: %d", soma);

    return 0;
}
