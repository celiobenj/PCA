/*
3 Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/
#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char caractere = 'A';

    int *pInteiro = &inteiro;
    float *pReal = &real;
    char *pCaractere = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *pInteiro = 20;
    *pReal = 10.5;
    *pCaractere = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
