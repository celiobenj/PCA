/*
4. Na matemática, o fatorial de um número natural n, representado por n!, é o produto de todos os inteiros positivos menores ou iguais a n.
Construa uma função que receba como parâmetro n e retorne o fatorial de n:
int fat(int n)  //Recebe n como parâmetro e retorna n!
*/

#include <stdio.h>

int fat(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * fat(n-1);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fat(num));
    return 0;
}
