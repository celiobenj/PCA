//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main(){
    float lado, area, dobro;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;

    dobro = 2*area;

    printf("O dobro da area do quadrado eh: %.2f", dobro);

    return 0;
}
