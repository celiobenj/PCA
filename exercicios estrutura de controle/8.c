#include <stdio.h>

/*
8. Verificação de Anos Bissextos
Escreva um programa que receba um ano e determine se é um ano bissexto. O cálculo deve ser feito utilizando regras de múltiplos de 4, 100 e 400. Implementar a verificação com várias condições aninhadas usando if-else.
*/

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
    {
        if (ano % 100 != 0 || ano % 400 == 0)
        {
            printf("E bissexto\n");
        }
        else
        {
            printf("Nao e bissexto\n");
        }
    }
    else
    {
        printf("Nao e bissexto\n");
    }

    return 0;
}