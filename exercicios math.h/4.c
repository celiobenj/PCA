#include <stdio.h>
#include <math.h>

//4. Cálculo da distância entre dois pontos no plano. Escreva um programa que leia as coordenadas (x1, y1) e (x2, y2) de dois pontos e calcule a distância entre eles usando a fórmula da distância euclidiana: distância = sqrt((x2 - x1)^2 + (y2 - y1)^2)

int main()
{
    float x1, y1, x2, y2;

    printf("Coloque as coordenadas x e y do ponto 1: ");
    scanf("%f %f", &x1, &y1);
    printf("Coloque as coordenadas x e y do ponto 2: ");
    scanf("%f %f", &x2, &y2);

    float distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("A distancia entre P1 e P2 e: %.2f\n", distancia);

    return 0;
}
