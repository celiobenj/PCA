#include <stdio.h>
/*
6. Cálculo de Tarifas de Energia Elétrica
Desenvolva um programa que receba o consumo de energia elétrica (em kWh) e calcule a tarifa a ser paga com base em diferentes faixas de consumo. Por exemplo, até 100 kWh, um valor fixo; entre 101 e 300 kWh, outro valor; e acima de 300 kWh, outro valor ainda. Incluir taxas extras com base em faixas adicionais e condições (uso doméstico, comercial).
*/

int main()
{
    float consumo, tarifa, taxa;
    char tipo;

    printf("Digite seu consumo de energia eletrica (em kWh): ");
    scanf("%f", &consumo);
    printf("Digite seu uso tipico [I - idustria | D - domestico]: ");
    scanf("%s", &tipo);

    if (consumo < 0)
    {
        printf("Valor invalido");
    }
    else
    {
        switch (tipo)
        {
        case 'I':
            if (consumo < 300)
                taxa = 15;
            else
                taxa = 25;
            tarifa = consumo * (taxa / 100) * 9.5;
            printf("Sua tarifa a ser paga e de: %.2f", tarifa);
            break;

        case 'D':
            if (consumo < 100)
                taxa = 5;
            else
                taxa = 10;
            tarifa = consumo * (taxa / 100) * 5.3;
            printf("Sua tarifa a ser paga e de: %.2f", tarifa);
            break;

        default:
            printf("Tipo invalido");
            break;
        }
    }
    return 0;
}