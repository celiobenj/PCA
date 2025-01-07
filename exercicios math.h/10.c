#include <stdio.h>
#include <math.h>

/*
10. Divisão de uma quantia entre pessoas com cálculo do resto
Escreva um programa que divida uma quantia em dinheiro igualmente entre um número de pessoas, calculando quanto cada pessoa receberá e quanto sobrar em centavos. Utilize as funções floor() para dividir a quantia de forma inteira e fmod() para calcular o restante em centavos.
*/

int main()
{
    float quantia;
    int n_pessoas;

    printf("Digite um valor monetario: ");
    scanf("%f", &quantia);
    printf("Digite o numero de pessoas: ");
    scanf("%d", &n_pessoas);

    int valor_inteiro = floor(quantia/n_pessoas);
    int centavos = fmod(quantia, n_pessoas) * 100;
    
    printf("Cada pessoa recebera R$%d, em valores inteiros\n", valor_inteiro);
    printf("E sobrara um total de %d centavos.\n", centavos);

    return 0;
}
