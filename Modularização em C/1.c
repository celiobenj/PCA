/*
1. Faça um programa que leia dois valores inteiros x e y entre 0 e 1000. Encontre o maior entre eles e imprima:
O percentual do menor em relação ao maior
O módulo da diferença entre o maior e o menor
O programa deve utilizar três funções:
a) scanIntIntervalo: Função para ler inteiros do teclado garantido que eles estejam dentro de um intervalo pré-determinado;
b) percentual: Função para calcular o percentual:  100*valor/total
c) absdif: Função que retorna o valor absoluto da diferença entre dois números reais.
*/

#include <stdio.h>
#include <math.h>

int x, y;

void scanIntIntervalo();
int percentual(int, int);
float absdif(float, float);

int main()
{
    scanIntIntervalo();

    int maior, menor;

    if (x > y)
    {
        maior = x;
        menor = y;
    }
    else
    {
        maior = y;
        menor = x;
    }

    float percent = percentual(menor, maior);

    int dif = absdif(maior, menor);

    printf("O percentual do menor em relacao ao maior: %.2f%c\n", percent, 37);
    printf("O modulo da diferenca entre o maior e o menor: %d\n", dif);

    return 0;
}

void scanIntIntervalo()
{
    while (1)
    {
        printf("Digite com dois numeros inteiros: ");
        scanf(" %d %d", &x, &y);
        if ((0 <= x && x <= 1000) && (0 <= y && y <= 1000)) return;
        printf("Os numeros devem estar no intervalo [0, 1000]\n");
    }
}

int percentual(int valor, int total) 
{
    return 100*valor/total;
}

float absdif(float n1, float n2)
{
    return fabs(n1 - n2);
}
