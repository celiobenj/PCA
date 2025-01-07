//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main(){
    float por_hora, salario;
    int horas;

    printf("Digite o quanto voce ganha por hora: ");
    scanf("%f", &por_hora);

    printf("Digite o numero total de horas trabalhadas no mes: ");
    scanf("%d", &horas);

    salario = horas*por_hora;

    printf("O salario neste mes foi de %.2f", salario);

    return 0;
}
