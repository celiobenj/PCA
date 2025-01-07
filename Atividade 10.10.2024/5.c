#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5. Jogo de Adivinhação com Probabilidade Adaptativa
Crie um programa em C que simule um jogo de adivinhação entre o usuário e o computador, onde o computador tenta adivinhar um número que o usuário escolheu. No entanto, o comportamento do computador é adaptativo, ou seja, ele ajusta suas suposições com base no feedback do usuário sobre se o palpite foi muito alto ou muito baixo.
Regras e funcionamento:
1.    O usuário escolhe um número secreto entre 1 e 100, sem informar o computador.
2.    O computador tenta adivinhar o número fazendo suposições.
3.    Para cada suposição, o usuário deve informar se o palpite foi "muito alto", "muito baixo" ou "correto".
4.    Com base no feedback, o computador ajusta seu próximo palpite:
            Se o palpite foi "muito alto", o próximo palpite deve ser menor.
            Se o palpite foi "muito baixo", o próximo palpite deve ser maior.
            O programa termina quando o computador adivinhar o número corretamente.
5.    O computador deve usar um sistema adaptativo de suposições (sem utilizar arrays, strings, ponteiros ou funções). Uma maneira de fazer isso seria reduzir o intervalo de possíveis valores de acordo com o feedback do usuário.
Exemplo de execução:
•    O usuário escolhe o número 42.
•    O computador adivinha 50.
•    O usuário informa que o palpite é "muito alto".
•    O computador então ajusta seu intervalo para 1 a 49 e faz um novo palpite, por exemplo, 25.
•    O usuário diz "muito baixo".
•    O computador ajusta o intervalo para 26 a 49, e assim por diante até adivinhar 42 corretamente.
*/

int main()
{
    srand((unsigned) time(NULL));

    int palpite, lim_inf = 1, lim_sup = 100;
    char res;

    while (1)
    {
        palpite = lim_inf + (rand() % (lim_sup - lim_inf + 1));
        printf("Palpite: %d\n", palpite);
        printf("O palpite foi: (A) Muito alto | (B) Muito baixo | (C) Correto \n");
        scanf(" %c", &res);
        
        if (res == 'A') lim_sup = palpite;
        else if (res == 'B') lim_inf = palpite;
        else if (res == 'C') break;
        else printf("Entrada invalida, tente novamente\n");
    }

    printf("Jogo finalizado. Obrigado por jogar!\n");
    
    return 0;
}
