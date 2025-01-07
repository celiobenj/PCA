//Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

int main(){
    double num1, num2, soma;

    printf("Digite um numero: ");
    scanf("%lf", &num1);

    printf("Digite outro numero: ");
    scanf("%lf", &num2);

    soma = num1 + num2;

    printf("\n%.2lf + %.2lf = %.2lf\n",num1, num2, soma);

    return 0;
}
