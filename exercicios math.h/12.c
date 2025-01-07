#include <stdio.h>
#include <math.h>

/*
12. Separação de mantissa e expoente de um número em ponto flutuante
Escreva um programa que leia um número em ponto flutuante e o separe em sua mantissa e expoente usando a função frexp(). A função frexp() retorna a mantissa e o expoente, de modo que:
x=mantissa⋅2^expoente
2^expoente: significa 2 elevado ao valor "expoente"
Após a separação, exiba a mantissa e o expoente do número lido.
*/

int main()
{
    double numero, mantissa;
    int expoente;

    printf("Digite um numero de ponto flutuante: ");
    scanf("%lf", &numero);

    mantissa = frexp(numero, &expoente);

    printf("Mantissa: %lf\n", mantissa);
    printf("Expoente: %d\n", expoente);
}
