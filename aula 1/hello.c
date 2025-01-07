#include <stdio.h>

int main(){

    short int num = 0;
    long int cubo = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    cubo = num * num * num;

    printf("\nO cubo de %d = %d\n", num, cubo);

    return 0;
}
