#include <stdio.h>

/*
3. Cálculo de Imposto Progressivo
Escreva um programa que calcule o imposto de renda com base em diferentes faixas de renda. As faixas têm diferentes porcentagens de imposto, e o programa deve calcular a quantidade exata de imposto de acordo com a renda do usuário. Implementar alíquotas com várias faixas de renda usando if-else ou switch.
*/

int main()
{
    float renda, aliquota;

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (renda < 2259.20)
    {
        aliquota = 0;
    }
    else if (renda < 2826.65)
    {
        aliquota = 7.5;
    }
    else if (renda < 3751.05)
    {
        aliquota = 15;
    }
    else if (renda < 4664.68)
    {
        aliquota = 22.5;
    }
    else
    {
        aliquota = 27.5;
    }

    printf("Quantidade de imposto de renda que voce deve pagar e: %.2f", aliquota * renda);

    return 0;
}
