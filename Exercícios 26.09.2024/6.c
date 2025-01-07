#include <stdio.h>

/*
6. Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual
à soma de seus divisores positivos diferentes de n. Construa um programa em
C que verifique se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 =
6.
*/

int main()
{
    unsigned int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%u", &num);

    for (int i = 1; i < num; i++) if (num % i == 0) soma += i;

    (soma == num) ? printf("E perfeito") : printf("Nao e perfeito"); 

    return 0;
}
