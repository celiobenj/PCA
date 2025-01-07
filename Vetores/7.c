/*
7 Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses vetores.
  a)Crie uma função para determinar o produto escalar de dois vetores com n elementos.
O produto escalar de dois vetores A=(a1, a2,..,an) e B=(b1, b2, ..., bn) é ∑aibi  onde 1 ≤ i ≤ n
*/
#include <stdio.h>

int produtoVetorial(int vetorA[], int vetorB[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
        soma += vetorA[i] * vetorB[i];
    
    return soma;
}

int main()
{
    int n;
    printf("Digite o numero elementos dos vetores A e B: ");
    scanf("%d", &n);

    int A[n], B[n];
    printf("Digite os elementos de A: ");
    for (int i = 0; i < n; i++) scanf(" %d", &A[i]);

    printf("Digite os elementos de B: ");
    for (int i = 0; i < n; i++) scanf(" %d", &B[i]);

    printf("O produto vetorial de A e B e: %d", produtoVetorial(A, B, n));

    return 0;
}
