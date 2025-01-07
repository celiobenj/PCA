/*
6 Tentando descobrir se um dado era viciado, um dono de cassino o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
*/
#include <stdio.h>

void contagemDado(int vetor[], int n);

int main()
{
    int n;
    printf("Digite o numero de vezes que o dado foi lancado: ");
    scanf("%d", &n);

    int dados[n];
    for (int i = 0; i < n; i++)
        scanf(" %d", &dados[i]);

    contagemDado(dados, n);
    return 0;
}

void contagemDado(int vetor[], int n)
{
    int soma[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        int num_jogado = vetor[i];
        switch (num_jogado)
        {
        case 1:
            soma[0]++;
            break;
        case 2:
            soma[1]++;
            break;
        case 3:
            soma[2]++;
            break;
        case 4:
            soma[3]++;
            break;
        case 5:
            soma[4]++;
            break;
        case 6:
            soma[5]++;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < 6; i++) 
        printf("Ocorrencias da face %d: %d\n", i+1, soma[i]);
    
}
