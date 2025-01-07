#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_num, contador = 0;
    float *numeros;
    float soma = 0.0;
    do
    {
        printf("Quantidade de numeros: ");
        scanf("%d", &n_num);
    } while (n_num <= 0);

    numeros = (float *)malloc(n_num * sizeof(float));

    if (numeros != NULL)
    {
        while (contador < n_num)
        {
            scanf("%f", numeros+contador);
            soma += *(numeros+contador);
            contador++;
        }
        printf("Media: %.2f\n", soma/contador);
        free(numeros);
    }
    return 0;
}
