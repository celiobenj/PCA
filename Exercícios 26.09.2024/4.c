#include <stdio.h>

/*
4. Dado um número identificar se é um número primo. (Um número primo é
aquele que é dividido apenas por um e por ele mesmo.)
*/

int main()
{
    int divisores = 0, num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) if (num % i == 0) divisores++;

    (divisores <= 2) ? printf("E primo") : printf("Nao e primo");

    return 0;
}
