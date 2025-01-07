//Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int main(){

    float metros, centimetros;

    printf("Digite a distancia em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%.2f metro(s) equivale a %.2f centimetro(s).", metros, centimetros);

    return 0;
}