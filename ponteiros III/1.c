/*
1
Faça um programa que calcula a média e o desvio padrão das notas de uma turma;
- O programa deve solicitar no início a quantidade de alunos na turma e alocar dinamicamente um vetor de float onde as notas dos alunos digitadas devem ser armazenadas;
- Você deve criar uma função “mediaDesvio” para calcular a média e o desvio padrão e retornar estes valores através de parâmetros passados por referência (ponteiros). A função recebe como parâmetro o ponteiro para o vetor, a quantidade de elementos no vetor, e dois ponteiros: media e desvio onde deve guardar os resultados;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int num_notas, float *media, float *devio);

int main()
{
    int num_notas;
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &num_notas);

    float *notas = (float *)malloc(num_notas * sizeof(float));
    float soma = 0;

    if (notas == NULL)
    {
        printf("Nao ha espaço o suficiente!\nFechando programa");
        exit(1);
    }

    float media = 0, desvio = 0;

    mediaDesvio(notas, num_notas, &media, &desvio);

    printf("Media da turma: %.2f\n", media);
    printf("Desvio padrao: %.2f\n", desvio);
    free(notas);
    return 0;
}

void mediaDesvio(float *notas, int num_notas, float *media, float *desvio)
{
    for (int i = 0; i < num_notas; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", notas + i);
        *media += *(notas + i);
    }
    *media /= num_notas;

    for (int i = 0; i < num_notas; i++)
    {
        *desvio += pow((*(notas+i) - *media), 2);
    }
    *desvio /= num_notas;
    *desvio = pow(*desvio, 0.5);
}
