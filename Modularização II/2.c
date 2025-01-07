/*
2. Usando a função programada em 1 crie outra função que recebe dois números inteiros positivos e verifica se o primeiro é uma permutação de b (para a ser uma permutação tem que ter de cada número entre 0 e 9 a mesma quantidade)
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

int permutacao(int a, int b)
{
    int res = 0;
    for (int i = 0; i <= 9; i++)
        if (digitos(a, i) == digitos(b, i)) 
            res++;

    if (res == 10) return 1;
    
    return 0;
}

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (permutacao(a, b))
        printf("Eles sao uma permutacao um do outro");
    else
        printf("Eles nao sao uma permutacao");

    return 0;
}
