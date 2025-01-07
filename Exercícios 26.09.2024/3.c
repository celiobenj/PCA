#include <stdio.h>

/*
3. Faça um programa que leia vários inteiros positivos e mostre, no final, a
soma dos números pares e a soma dos números ímpares. O programa para
quando entrar um número maior que 1000.
*/

int main()
{
    unsigned int num, soma_par = 0, soma_impar = 0;

    while (1)
    {
        printf("Digite um numero: ");
        scanf("%u", &num);
        if (num > 1000) break;
        
        if (num % 2 == 0) soma_par += num;
        else soma_impar += num;
    }
    

    printf("A soma dos numeros pares e: %u\n", soma_par);
    printf("A soma dos numeros impares e: %u\n", soma_impar);

    return 0;
}
