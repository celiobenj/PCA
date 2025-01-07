#include <stdio.h>

/*
2. Tabuleiro de Xadrez
Escreva um programa que imprime um tabuleiro de xadrez de tamanho 8x8, onde as casas pretas são representadas por "#" e as casas brancas por " ".
*/

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i%2)
                if (j%2) printf(" "); else printf("#");
            else
                if (j%2) printf("#"); else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
