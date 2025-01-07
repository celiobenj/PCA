/*
2 Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.
*/
#include <stdio.h>

int *encontraValor(int *inicio, int *fim, int valor)
{
    while (inicio <= fim)
    {
        if (*inicio == valor)
            return inicio;
        inicio++;
    }

    return NULL;
}

int main()
{
    int v[10] = {1, 3, 2, 5, 2, 7, 8, 9, 2};
    int *inicio = v, *fim = v + 9;
    int valor = 2;

    while (inicio <= fim)
    {
        int *res = encontraValor(inicio, fim, valor);
        if (res != NULL)
            printf("Valor %d encontrado no endereco %d\n", valor, res);
        inicio = res + 1;
    }

    return 0;
}
