#include <stdio.h>

/*
10. Um número na forma n3 é igual à soma de n ímpares consecutivos. Por
exemplo.

3^3=27, 3^3=7+9+11

Dado um número p, determine os ímpares consecutivos cuja soma é igual a
n3 para n assumindo valores de 1 a p.
*/

int main()
{
    int p, n;

    printf("Digite um numero: ");
    scanf("%d", &p);

    for (n = 1; n <= p; n++){

        printf("%d^3 = ", n, n);
        for (int i = -n + 1; i <= n - 1; i += 2){
            printf("%d ", n*n + i);
            if (i != n - 1) printf("+ ");
        }
        printf("\n");
    }
    
    return 0;
}
