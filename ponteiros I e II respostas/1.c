/*
1 Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.
*/
#include <stdio.h>

void imprimeElementos(float *inicio, float *fim) {
    while (inicio <= fim) {
        printf("%.2f ", *inicio);
        inicio++;
    }
    printf("\n");
}

int main() {
    float vetor1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float vetor2[] = {10.5, 20.5, 30.5, 40.5, 50.5, 60.5};
    float vetor3[] = {100.1, 200.2, 300.3};

    printf("Parte 1 do vetor1: ");
    imprimeElementos(vetor1, vetor1 + 2);
    printf("Parte 2 do vetor1: ");
    imprimeElementos(vetor1 + 3, vetor1 + 4);

    printf("Parte 1 do vetor2: ");
    imprimeElementos(vetor2, vetor2 + 3);
    printf("Parte 2 do vetor2: ");
    imprimeElementos(vetor2 + 4, vetor2 + 5);

    printf("Parte 1 do vetor3: ");
    imprimeElementos(vetor3, vetor3 + 1);
    printf("Parte 2 do vetor3: ");
    imprimeElementos(vetor3 + 2, vetor3 + 2);

    return 0;
}
