#include <stdio.h>
/*
7. Sistema de Pontuação de Notas
Receba uma nota de 0 a 100 e atribua um conceito de A a F (como em sistemas educacionais). Por exemplo: 90-100 é A, 80-89 é B, etc. Use if-else ou switch para realizar a classificação. Adicionar verificação para notas inválidas (fora do intervalo de 0 a 100).
*/

int main()
{
    int nota;
    char conceito;

    printf("Digite uma nota: ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100)
    {
        printf("Nota invalida");
    }
    else if (nota >= 90)
    {
        conceito = 'A';
        printf("Seu conceito com essa nota e: %c", conceito);
    }
    else if (nota >= 80)
    {
        conceito = 'B';
        printf("Seu conceito com essa nota e: %c", conceito);
    }
    else if (nota >= 70)
    {
        conceito = 'C';
        printf("Seu conceito com essa nota e: %c", conceito);
    }
    else if (nota >= 60)
    {
        conceito = 'D';
        printf("Seu conceito com essa nota e: %c", conceito);
    }
    else if (nota >= 50)
    {
        conceito = 'E';
        printf("Seu conceito com essa nota e: %c", conceito);
    }
    else
    {
        conceito = 'F';
        printf("Seu conceito com essa nota e: %c", conceito);
    }

    return 0;
}