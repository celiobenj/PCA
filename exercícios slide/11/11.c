/* Faça um Programa que pergunte quanto você ganha por hora e o
número de horas trabalhadas no mês. Calcule e mostre o total do
seu salário no referido mês, sabendo-se que são descontados 11%
para o Imposto de Renda, 8% para o INSS e 5% para o sindicato,
faça um programa que nos dê:
• salário bruto.
• Quanto pagou ao INSS.
• quanto pagou ao sindicato.
• o salário líquido (Salário Líquido = Salário Bruto - Descontos)
*/

#include <stdio.h>

int main(){
    double por_hora, sal_bruto, sal_liq;
    int horas;

    double IR, INSS, sind;

    printf("Informe quanto voce recebe por hora: ");
    scanf("%lf", &por_hora);

    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    sal_bruto = horas * por_hora;

    //descontos
    IR = sal_bruto * 0.11;
    INSS = sal_bruto * 0.08;
    sind = sal_bruto * 0.05;

    sal_liq = sal_bruto - (IR + INSS + sind);

    printf("\nSeu salario bruto eh de R$%.2lf\n", sal_bruto);
    printf("Voce pagou ao INSS R$%.2lf\n", INSS);
    printf("Voce pagou ao sindicato R$%.2lf\n", sind);
    printf("Seu salario liquido eh de R$%.2lf\n", sal_liq);

    return 0;
}


