/*
5 Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
*/
#include <stdio.h>

int ordenarValores(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    return (*a == *b && *b == *c) ? 1 : 0;
}

int main() {
    int x, y, z, iguais;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &z);

    iguais = ordenarValores(&x, &y, &z);

    printf("\nValores ordenados: %d, %d, %d\n", x, y, z);
    if (iguais) {
        printf("Os três valores são iguais.\n");
    } else {
        printf("Existem valores diferentes.\n");
    }

    return 0;
}
