/*
6. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplo: ovo, arara, Anotaram a data da maratona.
*/
#include <stdio.h>

int isPalindromo(char str[], int tam);

int main()
{
    char str[] = "Socorram me subi no onibus em Marrocos";
    int tam = sizeof(str)/sizeof(char) - 1;


    if (isPalindromo(str, tam)) printf("E sim");
    else printf("Nao e");

    return 0;
}

int isPalindromo(char str[], int tam)
{
    for (int i = 0; i < tam; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')    
            str[i] -= ('A' - 'a');
        
    char aux[tam];
    int pos = 0;
    for (int i = 0; i < tam; i++)
    {
        if (str[i] != ' ')
        {
            aux[pos] = str[i];
            pos++;
        }
    }
    aux[pos] = '\0';

    for (int i = 0; i < pos/2; i++)
        if (aux[i] != aux[pos-i-1]) 
            return 0;

    return 1;
}
