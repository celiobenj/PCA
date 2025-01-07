/*
4 Crie um programa que contenha um array de inteiros contendo 8 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
a)Imprimir o endereço das posições contendo valores pares
*/
#include <stdio.h>

int main() {
    int array[8];
    int *p = array;

    for (int i = 0; i < 8; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", p + i);
    }

    printf("\nO dobro de cada valor:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", *(p + i) * 2);
    }

    printf("\n\nEnderecos das posicoes com valores pares:\n");
    for (int i = 0; i < 8; i++) {
        if (*(p + i) % 2 == 0) {
            printf("Endereco da posicao %d: %p\n", i, (p + i));
        }
    }

    return 0;
}
