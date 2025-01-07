// 7.  Em uma disciplina com três exercícios, um professor deseja saber qual a maior e a menor nota de cada exercício e qual a maior e a menor média final. Faça um programa para auxiliá-lo nesta tarefa.

#include <stdio.h>

int main()
{
    float A, B, C;
    float media, maior_media = 3.4E-38, menor_media = 3.4E+38;
    float maior_A = 3.4E-38, maior_B = 3.4E-38, maior_C = 3.4E-38;
    float menor_A = 3.4E+38, menor_B = 3.4E+38, menor_C = 3.4E+38;

    while (1)
    {
        printf("Digite as notas das 3 atividades (para parar, entre com uma nota negativa): ");
        scanf("%f %f %f", &A, &B, &C);
        if (A < 0 || B < 0 || C < 0) break;

        if (A > maior_A) maior_A = A;
        if (B > maior_B) maior_B = B;
        if (C > maior_C) maior_C = C;

        if (A < menor_A) menor_A = A;
        if (B < menor_B) menor_B = B;
        if (C < menor_C) menor_C = C;

        media = ((float) (A + B + C))/ 3;

        if (media > maior_media) maior_media = media;
        if (media < menor_media) menor_media = media;
    };

    printf("Maior nota do exercicio A: %.1f\n", maior_A);
    printf("Maior nota do exercicio B: %.1f\n", maior_B);
    printf("Maior nota do exercicio C: %.1f\n", maior_C);

    printf("Menor nota do exercicio A: %.1f\n", menor_A);
    printf("Menor nota do exercicio B: %.1f\n", menor_B);
    printf("Menor nota do exercicio C: %.1f\n", menor_C);
    
    printf("Maior media: %.1f\n", maior_media);
    printf("Menor media: %.1f\n", menor_media);

    return 0;
}
