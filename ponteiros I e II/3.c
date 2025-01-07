/*
3 Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/
#include <stdio.h>

int main()
{
    int i = 7;
    float f = 10.2;
    char c = 'a';

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    printf("Antes da modificacao: \n");
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%c\n", c);

    *pi = -4;
    *pf = 93.88;
    *pc = 'c';

    printf("\nDepois da modificacao: \n");
    printf("%d\n", i);
    printf("%f\n", f);
    printf("%c\n", c);

    return 0;
}
