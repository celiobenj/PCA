/*
4. Faça uma função que retorne se um número inteiro positivo x e segmento de outro número inteiro positivo y, onde x < y (pode usar a função desenvolvida em 3) 
Ex.  x= 678, y= 567890 R/ é um segmento; 
       x= 1243, y= 2212435 R/ é um segmento;
*/

#include <stdio.h>

int digito(int n, int i)
{
    return (n/i%10);
}

int corresponde(int x, int y)
{
    for (int i = 1; i <= y; i*=10)
        if (digito(x, i) != digito(y, i)) return 0;
    
    return 1;
}

int segmento(int x, int y)
{
    for (int i = 1; i <= y; i*=10)
        if (corresponde(y/i, x)) return 1;

    return 0;
}

int main()
{
    int x, y;

    while (1)
    {
        printf("Digite dois numeros inteiros: ");
        scanf(" %d %d", &x, &y);

        if (x < y) break;

        printf("O primeiro deve ser menor que o segundo");
    }
    
    if (segmento(x, y)) printf("E segmento");
    else printf("Nao e segmento");

    return 0;
}
