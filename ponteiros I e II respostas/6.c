/*
6 Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
*/
#include <stdio.h>
 
int somarArrays(int *arr1, int tamanho1, int *arr2, int tamanho2, int *resultado)
{
    if (tamanho1 != tamanho2)
    {
        return 0;
    }

    for (int i = 0; i < tamanho1; i++)
    {
        *(resultado + i) = *(arr1 + i) + *(arr2 + i);
    }
    return 1;
}

int main()
{
    int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 6, 7, 8};
    int resultado[4];
    int tamanho1 = 4, tamanho2 = 4;
    int status;

    status = somarArrays(array1, tamanho1, array2, tamanho2, resultado);

    if (status == 0)
    {
        printf("Os tamanhos dos arrays são diferentes.\n");
    }
    else
    {
        printf("Soma dos arrays:\n");
        for (int i = 0; i < tamanho1; i++)
        {
            printf("%d ", *(resultado + i));
        }
        printf("\n");
    }

    return 0;
}
