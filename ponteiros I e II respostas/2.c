/*
2 Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.
*/
#include <stdio.h>

int *encontraValor(int *inicio, int *fim, int valor) {
    while (inicio <= fim) {
        if (*inicio == valor) {
            return inicio;
        }
        inicio++;
    }
    return NULL;
}

int main() {
    int vetor[10] = {1, 2, 3, 2, 4, 5, 6, 2, 7, 8};
    int *inicio = vetor;
    int *fim = vetor + 9;
    int *resultado;

    while ((resultado = encontraValor(inicio, fim, 2)) != NULL) {
        printf("Valor 2 encontrado no endereco: %p\n", resultado);
        inicio = resultado + 1;
    }

    return 0;
}
