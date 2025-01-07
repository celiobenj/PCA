/*
3. Um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo-o) é igual ao próprio número. Por exemplo, o número 6 é um número perfeito, pois: 6 = 1 + 2 + 3. O próximo número perfeito é o 28, pois: 28 = 1 + 2 + 4 + 7 + 14.
Escreva um programa em C com as seguintes funções:
- Função para ler um número inteiro e verifique se ele é par, caso seja impar obrigue o usuário a digitar outro número até que um número par seja digitado;
- Função para verificar se o número digitado é perfeito e imprima uma mensagem na tela indicando se o número digitado é perfeito ou não.
*/

#include <stdio.h>

int entrada();
int isPerfect(int);

int main()
{
    int num = entrada();

    if (isPerfect(num)) printf("E perfeito\n") ;
    else printf("Nao e perfeito\n");

    return 0;
}

int entrada()
{
    int num;
    while (1)
    {
        printf("Digite um numero inteiro: ");
        scanf(" %d", &num);

        if (!(num % 2)) return num;

        printf("Este numero tem que ser par!\n");
    }
}

int isPerfect(int n)
{
    int soma = 0;
    for (int i = 1; i < n; i++) if (n % i == 0) soma += i;

    if (soma == n) return 1;
    
    return 0;
}
