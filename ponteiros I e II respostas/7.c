/*
7 Escreva uma função que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, digamos min e max, e deposite nessas variáveis o valor do elemento mínimo e o valor do elemento máximo do vetor. Escreva também uma função main que use a função.
*/
#include <stdio.h>

void encontrarMinMax(int *v, int n, int *min, int *max) {
    *min = *v;
    *max = *v;

    for (int i = 1; i < n; i++) {
        if (*(v + i) < *min) {
            *min = *(v + i);
        }
        if (*(v + i) > *max) {
            *max = *(v + i);
        }
    }
}

int main() {
    int vetor[] = {5, 3, 8, 1, 9, 2};
    int tamanho = 6;
    int min, max;

    encontrarMinMax(vetor, tamanho, &min, &max);

    printf("Valor mínimo: %d\n", min);
    printf("Valor máximo: %d\n", max);

    return 0;
}
