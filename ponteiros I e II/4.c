/*
4 Crie um programa que contenha um array de inteiros contendo 8 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
a)Imprimir o endereço das posições contendo valores pares
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam = 8;

    int *arr;
    arr = (int *)malloc(tam * sizeof(int));

    printf("Digite 8 numeros inteiros: ");
    for (int i = 0; i < tam; i++)
        scanf("%d", arr + i);

    printf("Imprimindo o dobro de cada numero: \n");
    for (int i = 0; i < tam; i++)
        printf("%d ", *(arr + i) * 2);

    printf("\nEndereco das posicoes de numeros pares: \n");
    for (int i = 0; i < tam; i++)
        if (*(arr + i) % 2 == 0)
            printf("0x%p\n", arr + i);

    free(arr);
    return 0;
}
