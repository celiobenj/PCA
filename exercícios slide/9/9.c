// Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <stdio.h>

int main(){
    int n1, n2;
    float n3;

    printf("Digite tres numeros, dois inteiros e um real: ");
    scanf("%d %d %f", &n1, &n2, &n3);

    float op1 = (2*n1) * (n2/2);
    printf("O produto do dobro do primeiro com metade do segundo = %.2f\n", op1);

    float op2 = (3*n1) + n3;
    printf("A soma do triplo do primeiro com o terceiro = %.2f\n", op2);

    float op3 = n3 * n3 * n3;
    printf("O terceiro elevado ao cubo = %.2f\n", op3);

    return 0;
}
