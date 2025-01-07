#include <stdio.h>
#include <math.h>

/*
11.Cálculo do troco mínimo em uma máquina de vendas
Escreva um programa que simule o cálculo do troco mínimo a ser dado por uma máquina de vendas. O programa deve calcular o troco a partir de um valor pago e um preço de item, e dividir o troco nas moedas mais próximas (considerando valores de 1 real, 50 centavos, 25 centavos, 10 centavos, e 5 centavos). Utilizar funções da biblioteca math.h
*/

int main()
{
    float valor_pago, preco;

    printf("Digite o valor pago: ");
    scanf("%f", &valor_pago);
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    int troco = (valor_pago - preco) * 100;

    int troco1 = floor(troco/100);
    troco %= 100;

    int troco50 = floor(troco/50);
    troco %= 50;

    int troco25 = floor(troco/25);
    troco %= 25;

    int troco10 = floor(troco/10);
    troco %= 10;

    int troco5 = floor(troco/5);
    
    printf("O troco devera ser em: \n");
    printf("%d moedas de 1 real\n", troco1);
    printf("%d moedas de 50 centavos\n", troco50);
    printf("%d moedas de 25 centavos\n", troco25);
    printf("%d moedas de 10 centavos\n", troco10);
    printf("%d moedas de 5 centavos\n", troco5);

    return 0;
}
