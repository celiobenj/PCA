/*
Leia uma matriz 3 x 3. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/
#include <stdio.h>

int main()
{
    int matriz[3][3], X;

    printf("Entre com os valores da matriz 3x3: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);

    printf("Entre com o valor de X: ");
    scanf("%d", &X);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if(matriz[i][j] == X)
                printf("Encontrado na linha %d e coluna %d\n", i+1, j+1); 
                 
            
    return 0;
}