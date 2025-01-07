/*
4. Validador de Palíndromos
Crie um programa que leia até 10 strings e determine quais delas são palíndromos. O programa deve:
Ler as strings e armazená-las em um array bidimensional.
Implementar a função:
int verificarPalindromo(char palavra[]);
Exibir quais palavras são palíndromos.
*/
#include <stdio.h>

int verificarPalindromo(char palavra[]);

int main()
{
    char palavras[10][50];

    int qtd_palavras = 0;
    char res;
    do
    {
        printf("Digite uma palavra: ");
        scanf(" %50[^\n]s", palavras[qtd_palavras]);
        qtd_palavras++;

        if (qtd_palavras == 10) 
        {
            printf("Limite de palavras atingido");
            break;
        }

        printf("Deseja adicionar outra palavra? (S/N) ");
        scanf(" %c", &res);
        printf("\n");
    } while (res == 's' || res == 'S');
    

    for (int j = 0; j < qtd_palavras; j++)
        if (verificarPalindromo(palavras[j])) 
            printf("A palavra '%s' e palindromo\n", palavras[j]);
    
    return 0;
}

int verificarPalindromo(char palavra[])
{
    int tam = 0;
    while (palavra[tam] != '\0') tam++;

    for (int i = 0; i < tam; i++)
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')    
            palavra[i] -= ('A' - 'a');
        
    char aux[tam];
    int pos = 0;
    for (int i = 0; i < tam; i++)
    {
        if (palavra[i] != ' ')
        {
            aux[pos] = palavra[i];
            pos++;
        }
    }
    aux[pos] = '\0';

    for (int i = 0; i < pos/2; i++)
        if (aux[i] != aux[pos-i-1]) 
            return 0;

    return 1;
}
