/*
6. Faça uma função que transforme um numero decimal em binário. (procura em internet como é feita essa transformação)
*/

#include <stdio.h>

int deciParaBin(int n)
{
    int res = 0;

    for (int i = 1; n > 0; n /= 2, i *= 10)
        res += (n%2) * i;

    return res;
}

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Este numero convertido para binario e: %d", deciParaBin(num));
}
