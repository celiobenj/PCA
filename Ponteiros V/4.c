/*
4.
Implemente um programa para ordenar uma lista de strings em ordem alfabética usando ponteiros para ponteiros. O programa deve:
Receber n, o número de strings, e alocar memória para armazenar os ponteiros para as strings.
Permitir que o usuário insira até n strings.
Implementar uma função ordenarStrings(char** lista, int n) que organiza as strings em ordem alfabética, trocando apenas os ponteiros.
Exibir a lista de strings antes e depois da ordenação.
Liberar toda a memória alocada ao final.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 50

void ordenarStrings(char** lista, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (**(lista+i) > **(lista+j))
            {
                char *aux = *(lista+j);
                *(lista+j) = *(lista+i);
                *(lista+i) = aux;
            }
        }
    }
}

int main()
{    
    int n;
    printf("Digite o numero de strings: ");
    scanf("%d", &n);

    char *lista[n];
    for (int i = 0; i < n; i++)
        *(lista+i) = (char *)malloc(TAM_MAX*sizeof(char));
    
    printf("\nDigite as %d strings: \n", n);
    for (int i = 0; i < n; i++)
        scanf("%s", *(lista+i));

    printf("\nLista antes da ordenacao: \n");
    for (int i = 0; i < n; i++)
        printf("%s ", *(lista+i));

    ordenarStrings(lista, n);

    printf("\n\nLista depois da ordenacao: \n");
    for (int i = 0; i < n; i++)
        printf("%s ", *(lista+i));

    for (int i = 0; i < n; i++)
        free(*(lista+i));
    free(lista);
    return 0;
}
