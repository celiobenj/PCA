/*
3. Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um escalar k e imprima o resultado na tela. O usuário deve fornecer os valores da matriz e de k.
*/
#include <stdio.h>

int main()
{
    int matriz[3][3], k;

    printf("Entre com os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    printf("Entre com o valor de k: ");
    scanf("%d", &k);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", k*matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}