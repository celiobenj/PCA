/*
1. Faça funções que:
Receba uma palavra e a imprima de trás-para-frente.
Receba do usuário uma string e imprime a string sem vogais.
Transforma todos os caracteres de uma string em maiúsculos.
Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string
*/
#include <stdio.h>

void 
trasFrente(char*, int), 
semVogal(char*, int), 
maiusculo(char*, int), 
excluirChar(char*, int, char);

int numVezes(char*, int, char);

int main()
{
    char nome[] = "Subi no Onibus";
    int tamanho = sizeof(nome)/sizeof(char);

    trasFrente(nome, tamanho);
    printf("\n");
    semVogal(nome, tamanho);
    printf("\n");
    maiusculo(nome, tamanho);
    printf("\n");
    printf("%d", numVezes(nome, tamanho, 'i'));
    printf("\n");
    excluirChar(nome, tamanho, 'i');

    return 0;
}

void trasFrente(char str[], int tam)
{
    for (int i = tam-1; i >= 0; i--)
        printf("%c", str[i]);
}

void semVogal(char str[], int tam)
{
    for (int i = 0; i < tam; i++)
        if (!(str[i] == 'a' || 
              str[i] == 'e' ||
              str[i] == 'i' ||
              str[i] == 'o' ||
              str[i] == 'u'))
                printf("%c", str[i]);   
}

void maiusculo(char str[], int tam)
{
    for (int i = 0; i < tam; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] - ('a'-'A'));
        else 
            printf("%c", str[i]);
}

int numVezes(char str[], int tam, char c)
{
    int res = 0;
    for (int i = 0; i < tam; i++)
        if (str[i] == c) res++;
    return res;
}

void excluirChar(char str[], int tam, char c)
{
    for (int i = 0; i < tam; i++)  
        if (str[i] != c)        
            printf("%c", str[i]);    
}
