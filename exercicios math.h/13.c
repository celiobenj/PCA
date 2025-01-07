#include <stdio.h>
#include <math.h>

/*
13. Separação da parte inteira e fracionária de um número em ponto flutuante
Escreva um programa que leia um número em ponto flutuante e o separe em sua parte inteira e parte fracionária usando a função modf(). A função modf() retorna a parte fracionária e armazena a parte inteira em uma variável separada. Exiba as duas partes separadamente.
*/

int main()
{
    double numero, fracao, inteiro;

    printf("Digite um numero de ponto flutuante: ");
    scanf("%lf", &numero);

    fracao = modf(numero, &inteiro);

    printf("Parte inteira: %.lf\n", inteiro);
    printf("Parte fracionaria: %lf\n", fracao);

    return 0;
}