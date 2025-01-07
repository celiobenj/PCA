/*
6 Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
*/
#include <stdio.h>

int soma(int *a, int tam_a, int *b, int tam_b, int *res)
{
    if(tam_a != tam_b) return 0;

    for (int i = 0; i < tam_a; i++)
        *(res+i) = *(a+i) + *(b+i);
    
    return 1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int tam_a = 6;
    int b[] = {1, 2, 3, 4, 5, 6};
    int tam_b = 6;

    int res[tam_a];

    if (soma(a, tam_a, b, tam_b, res))
    {
        printf("Array soma: \n");
        for (int i = 0; i < tam_a; i++)
            printf("%d ", *(res+i));
    }
    else printf("Nao e possivel somar os arrays");

    return 0;
}
