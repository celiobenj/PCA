#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_num = 5, contador = 0;
    char res;
    float media = 0.0;
    float * num, * numsR;

    num = (float *)malloc(n_num * sizeof(float));

    if (num == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    printf("Deseja mais que 5 nums? ");
    scanf("%c", &res);
    if (res == 's')
    {
        printf("Quandidade de nums: ");
        scanf("%d", &n_num);
        numsR = (float*) realloc (num, n_num*sizeof(float));
        if (numsR != NULL){
            num = numsR;
        }
    }
    while (contador < n_num)
    {
        scanf("%f", num+contador);
        media += *(num+contador);
        contador++;
    }
    media /= contador;
    printf("Media: %.2f\n", media);
    free(num);
    return 0;
}
