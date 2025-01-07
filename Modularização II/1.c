/*
1. Faça uma função que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n. (dica: utilizar o operador % na solução )
*/

#include <stdio.h>

int digitos(int n, int d)
{
    int res = 0;
    for (int i = 1; i <= n; i*=10)
        if ((n/i)%10 == d) 
            res++;
    
    return res;
}

int main()
{
    int n, d;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);
    
    while (1)
    {
        printf("Digite um numero inteiro d entre 0 e 9 (nao incuso): ");
        scanf(" %d", &d);
        if (0 < d && d < 9) break;
        printf("Tente novamente\n");
    }

    printf("O digito %d, aparece %d vezes em %d", d, digitos(n, d), n);

    return 0;
}
