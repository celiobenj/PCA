#include <stdio.h>
#include <math.h>

/*
1. Fazer um programa para calcular a raiz quadrada de um número positivo
usando o roteiro abaixo (baseado no método de aproximações sucessivas de
Newton-Raphson). Seja Y o número para o qual se quer computar a raiz
quadrada:
● A primeira aproximação para a raiz quadrada de Y é dada por:

● As demais aproximações são calculadas pela seguinte fórmula de
recorrência:

● A aproximação deve continuar até que o valor obtido mude pouco
com o passar das iterações (menos de e = 0.1), Ou seja:

● Compare o resultado obtido com o resultado produzido pela função
sqrt() disponível na biblioteca <math.h>:
Obs.: O valor absoluto | . | pode ser calculado através da função fabs(),
disponível na biblioteca <math.h>.
*/

#define e 0.1

int main()
{
    double Y, X, X_ant;

    printf("Digite um numero: ");
    scanf("%lf", &Y);

    X = Y/2;
    
    while (1)
    {
        X_ant = X;

        X = X_ant - (pow(X_ant, 2) - Y)/(2 * X_ant);

        if (fabs(X-X_ant) < e) break;
    }

    printf("Por Newton-Raphson: %lf\n", X);
    printf("Pela funcao sqrt: %lf\n", sqrt(Y));

    return 0;
}
