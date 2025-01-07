#include <stdio.h>
/*
5. Conversor de Moedas
Crie um programa que converta uma quantia em dólares para diferentes moedas (euro, iene, libra, etc.) com base em uma tabela fixa de conversão. O programa deve usar switch para escolher a moeda. Adicionar tratamento para moedas não suportadas e valores negativos.
*/

int main()
{
    float dolares, convertido;
    char moeda;

    printf("Digite um valor monetario em dolares: ");
    scanf("%f", &dolares);
    printf("Digite para qual moeda voce quer converter: ");
    scanf("%s", &moeda);

    if (dolares < 0)
    {
        printf("Valor invalido");
    }
    else
    {
        switch (moeda)
        {
        case 'B':
            convertido = dolares * 5.49;
            break;

        case 'E':
            convertido = dolares * 0.90;
            break;

        case 'J':
            convertido = dolares * 141.94;
            break;

        case 'G':
            convertido = dolares * 0.76;
            break;

        default:
            printf("Moeda nao suportada\n");
            break;
        }
        printf("O valor convertido e: $%.2f\n", convertido);
    }

    return 0;
}