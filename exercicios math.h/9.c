#include <stdio.h>
#include <math.h>

/*
9. Trajetória de um projétil com resistência do ar
Escreva um programa que calcule a trajetória de um projétil lançado com velocidade inicial v0 em um ângulo θ em relação ao solo, considerando a resistência do ar (aproximada por um fator de arrasto k). Use as seguintes equações para calcular as coordenadas x(t) e y(t) em função do tempo t:
(ver formulas em imagem em anexo, arquivo Trajetória de um projétil.png)
Onde:
v0 é a velocidade inicial (entrada do usuário).
θ é o ângulo de lançamento (entrada em graus e convertida para radianos).
k é o coeficiente de resistência do ar (entrada do usuário).
g é a aceleração da gravidade (use 9.81 m/s²).
t é o tempo (calculado ou fornecido pelo usuário)
*/

#define g 9.81

int main()
{
    float v0, theta, k, tempo;

    printf("Digite a velocidade inicial do projetil: ");
    scanf("%f", &v0);
    printf("Digite o angulo em relacao ao solo: ");
    scanf("%f", &theta);
    printf("Digite o coeficiente de resistencia do ar: ");
    scanf("%f", &k);
    printf("Digite o tempo da trajetoria: ");
    scanf("%f", &tempo);

    // convertendo para rad
    theta = theta * (M_PI / 180);

    float posicao_x = ((v0 * cos(theta)) / k) * (1 - pow(M_E, -k * tempo));
    float posicao_y = (1.0 / k) * (v0 * sin(theta) + g * (1 - pow(M_E, -k * tempo)) - g * tempo);

    printf("A posicao x da trajetoria e: %.2fm\n", posicao_x);
    printf("A posicao y da trajetoria e: %.2fm\n", posicao_y);

    return 0;
}
