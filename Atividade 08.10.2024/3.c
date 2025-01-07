#include <stdio.h>

/*
3. Retângulo de Símbolos
Escreva um programa que imprime um retângulo de símbolos "X" e "O" alternados, de largura m e altura n.

Exemplo:
m = 7  
n = 5  
X O X O X O X
O X O X O X O
X O X O X O X
O X O X O X O
X O X O X O X
*/

int main()
{
    int m, n;
    printf("Qual e o numero de colunas e de linhas? ");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i%2)
                if (j%2) printf("X "); else printf("O ");
            else
                if (j%2) printf("O "); else printf("X ");
        }
        printf("\n");
    }
    return 0;
}
