//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <stdio.h>

#define PI 3.14159

int main(){
    double raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A area o circulo eh: %.2lf", area);

    return 0;
}
