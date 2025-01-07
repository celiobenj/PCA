#include <stdio.h>
#include <math.h>

/*
8. Cálculo de distância entre dois pontos em uma esfera (fórmula de Haversine)
Escreva um programa que calcule a distância entre duas coordenadas geográficas (latitude e longitude) na superfície da Terra, utilizando a fórmula de Haversine:
(ver formula em imagem em anexo, arquivo Formula de Haversine.png)
Onde:
R é o raio da Terra (aproximadamente 6371 km).
Δφ é a diferença entre as latitudes (em radianos).
Δλ é a diferença entre as longitudes (em radianos).
φ1 e φ2 são as latitudes dos pontos 1 e 2.
*/

#define RAIO_TERRA 6371

int main()
{
    float lat1, lon1, lat2, lon2;

    printf("Digite as coordenadas, latitude e longitude, do ponto 1: ");
    scanf("%f %f", &lat1, &lon1);
    printf("Digite as coordenadas, latitude e longitude, do ponto 2: ");
    scanf("%f %f", &lat2, &lon2);

    // convertendo para rad
    lat1 = lat1 * (M_PI / 180);
    lon1 = lon1 * (M_PI / 180);
    lat2 = lat2 * (M_PI / 180);
    lon2 = lon2 * (M_PI / 180);

    float delta_phi = lat2 - lat1;
    float delta_lambda = lon2 - lon1;

    float distancia = 2 * RAIO_TERRA * asin( sqrt( pow( sin( delta_phi/2 ), 2 ) + cos(lat1) * cos(lat2) * pow( sin( delta_phi/2 ), 2 ) ) );

    printf("A distancia entre essas coordenadas e: %.2fkm\n", distancia);

    return 0;
}
