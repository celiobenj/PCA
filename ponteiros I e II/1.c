/*
1 Escreva uma função que imprime os elementos de um vetor de float a partir de um endereço inicial (ponteiro) até um endereço final;
 A função recebe como parâmetros dois ponteiros para float (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada com três vetores de tamanhos e conteúdos diferentes;
- A função main deve imprimir duas partes distintas de cada um dos três vetores, utilizando a função criada.
*/
#include <stdio.h>

void imprimir(float *inicial, float *final)
{
    while (inicial <= final)
    {
        printf("%.2f ", *inicial);
        inicial++;
    }
}

int main()
{
    float v1[] = {1, 2, 3, 4, 5};
    imprimir(v1, v1 + 3);
    printf("\n");

    float v2[] = {1, 1, 2, 3, 5, 8, 13};
    imprimir(v2 + 1, v2 + 3);
    printf("\n");

    float v3[] = {1, 2, 4, 8, 16, 32, 64};
    imprimir(v3 + 3, v3 + 3);
    printf("\n");

    return 0;
}
