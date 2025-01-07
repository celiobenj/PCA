#include <stdio.h>

/*
7. Um determinado material radioativo perde metade de sua massa a cada 50
segundos. Dada a massa inicial, em gramas, fazer um programa em C que
calcule o tempo necessário para que essa massa se torne menor que 0,5 grama.
O programa em C deve escrever a massa inicial, a massa final e o tempo
calculado em horas, minutos e segundos.
*/

int main()
{
    double massa, massa_incial;
    unsigned int tempo = 0;

    printf("Digite a massa inicial (em gramas): ");
    scanf("%lf", &massa_incial);

    massa = massa_incial;

    while (massa > 0.5)
    {
        massa /= 2;
        tempo += 50;
    }

    unsigned int hora = (int) tempo/(60*60);
    tempo -= hora * 60 * 60;
    unsigned int minuto = (int) (tempo)/(60);
    tempo -= minuto * 60;
    unsigned int segundo = tempo;

    printf("Massa inicial: %.2lfg\n", massa_incial);
    printf("Massa final: %.2lfg\n", massa);
    printf("Tempo total: %uh, %umin e %us\n", hora, minuto, segundo);

    return 0;
}
