#include <stdio.h>
#include <math.h>

/*
8. A partir de um número inteiro positivo n. Determinar os inteiros entre 1 e n
que são comprimento da hipotenusa de um triângulo retângulo com catetos
inteiros.
*/

int main()
{
    unsigned int n = 0;

    printf("Digite um numero inteiro positivo n: ");
    scanf("%u", &n);

    printf("Os numeros inteiros entre 1 e %d que sao comprimento da hipotenusa de um triangulo retangulo com catetos inteiros, sao:\n", n);

    for (int a = 1; a < n; a++)
        for (int b = a; b < n; b++)
        {
            double c = sqrt(pow(a, 2) + pow(b, 2));
            if (c == (int) c && c <= n) printf("%d\n", (int) c);
        }

    return 0;
}
