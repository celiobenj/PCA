#include <stdio.h>
#include <math.h>

/*
16. Cálculo do intervalo de valores
Escreva um programa que leia uma série de dois números representando um intervalo [a, b] e verifique se um terceiro número x está dentro desse intervalo. Use fmin() e fmax() para garantir que a seja sempre o menor valor e b o maior. O programa deve exibir se x está dentro do intervalo e calcular a diferença absoluta entre x e o valor mais próximo da borda do intervalo (usando fabs()).
*/

int main()
{
    double a, b, x;

    printf("Escreva dois numeros de um intervalo [a, b]: ");
    scanf("%lf %lf", &a, &b);
    printf("Escreva um numero x: ");
    scanf("%lf", &x);

    double menor = fmin(a, b);
    double maior = fmax(a, b);

    (menor <= x && x <= maior) ? 
        printf("x esta dentro do intervalo\n") : 
        printf("x nao esta dentro do intervalo\n");
    
    double diferenca = fmin(fabs(x-a),fabs(x-b));

    printf("A diferenca absoluta entre x e o valor mais proximo da borda do intervalo e %lf\n", diferenca);

    return 0;
}
