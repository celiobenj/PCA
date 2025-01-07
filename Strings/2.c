/*
2. Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto e, quantos quilômetros cada um deles faz com um litro de combustível. Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.
*/
#include <stdio.h>

int main()
{
    char modelos[5][100] = {
        "Fusca",
        "Gol",
        "Vectra",
        "Cayenne",
        "320i",
    };

    float kmPorL[5] = {8, 10, 7.4, 3.2, 1.9};

    int pos_maior = 0;
    for (int i = 0; i < 5; i++)    
        if (kmPorL[i] > kmPorL[pos_maior])        
            pos_maior = i;  

    printf("O modelo de carro mais economico e: %s\n", modelos[pos_maior]);

    for (int i = 0; i < 5; i++)    
        printf("O carro %s consome %.2fL de gasolina para percorrer 1000km\n", modelos[i], 1000.0/kmPorL[i]);

    return 0;
}
