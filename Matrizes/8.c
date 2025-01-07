/*
8. Faça uma função para multiplicar duas matrizes. A função recebe como parâmetro as três matrizes e as dimensões das duas primeiras matrizes e verificar se as matrizes podem ser multiplicadas e apresentar uma mensagem de erro, caso não seja possível. O resultado da multiplicação das duas primeiras matrizes deve ser armazenado na terceira matriz. A função deve retornar falso se não for possível multiplicar as matrizes, e verdadeiro caso contrário.
A função não deve ler as matrizes, imprimir o resultado, nem a mensagem de erro. Isto deve ser feito na função principal.
*/
#include <stdio.h>
int i_A, j_A,
    i_B, j_B; 

int verificaMult(int A[][j_A], int i_A, int j_A, 
                 int B[][j_B], int i_B, int j_B,
                 int res[][j_B])
{
    if (j_A != i_B) return 0;

    for (int i = 0; i < i_A; i++)
        for (int j = 0; j < j_B; j++)
            for (int k = 0; k < j_A; k++)
                res[i][j] += A[i][k] * B[k][j];

    return 1;
}

int main()
{
    printf("Entre com as dimensoes da matriz A: ");
    scanf("%d %d", &i_A, &j_A);
    int A[i_A][j_A];
    printf("Entre os valores da matriz A: \n");
    for (int i = 0; i < i_A; i++)   
        for (int j = 0; j < j_A; j++)
            scanf(" %d", &A[i][j]);  

    printf("Entre com as dimensoes da matriz B: ");
    scanf("%d %d", &i_B, &j_B);
    int B[i_B][j_B];
    printf("Entre os valores da matriz B: \n");
    for (int i = 0; i < i_B; i++)   
        for (int j = 0; j < j_B; j++)       
            scanf(" %d", &B[i][j]);

    int res[i_A][j_B];
    for (int i = 0; i < i_A; i++)
        for (int j = 0; j < j_B; j++)
            res[i][j] = 0;

    if(verificaMult(A, i_A, j_A, B, i_B, j_B, res))
    {
        printf("O resultado da multiplicao e: \n");
        for (int i = 0; i < i_A; i++)
        {
            for (int j = 0; j < j_B; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Nao e possivel multiplicar");
    }

    return 0;
}
