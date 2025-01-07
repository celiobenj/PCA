#include <stdio.h>
#include <math.h>

/*
7. Cálculo do movimento harmônico simples
Escreva um programa que simule o movimento harmônico simples de um objeto em uma mola. O programa deve calcular a posição do objeto em um dado instante t usando a fórmula:
x(t)=A⋅cos(ω⋅t+ϕ)
Onde:
A é a amplitude do movimento (entrada do usuário)
ω é a frequência angular (calculada como ω = 2⋅π⋅f, onde f é a frequência)
φ é a fase inicial (entrada do usuário em radianos)
t é o tempo (entrada do usuário)
*/

int main()
{
    float amplitude, fase_inicial, tempo;
    printf("Digite a amplitude do movimento: ");
    scanf("%f", &amplitude);
    printf("Digite a fase inicial (em rad): ");
    scanf("%f", &fase_inicial);
    printf("Digite o instante de tempo: ");
    scanf("%f", &tempo);

    float frequencia = 1.0/tempo; 
    
    float freq_angular = 2 * M_PI * frequencia;

    float posicao = amplitude * cos((freq_angular * tempo) + fase_inicial);

    printf("A posicao do objeto neste instante e: %.2fm\n", posicao);

    return 0;
}
