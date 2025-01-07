/*
2. Análise de Palavras em Textos
Crie um programa que leia um texto (máximo 500 caracteres) e analise as palavras presentes nele. O programa deve:
Contar quantas palavras o texto possui.
Identificar a palavra mais longa e a mais curta.
Implementar as seguintes funções:
int contarPalavras(char texto[]);
void encontrarExtremos(char texto[], char maisLonga[], char maisCurta[]);
Use arrays de strings para armazenar temporariamente as palavras.
*/
#include <stdio.h>

int tamanho(char texto[])
{
    int tam_texto = 0;
    while (texto[tam_texto] != '\0') tam_texto++;
    return tam_texto;   
}

int contarPalavras(char texto[])
{
    int tam_texto = tamanho(texto);

    int num_palavras = 1;
    for (int i = 0; i < tam_texto; i++)
        if (texto[i] == ' ') num_palavras++;
    
    return num_palavras;
}

void encontrarExtremos(char texto[], char maisLonga[], char maisCurta[])
{
    int tam_palavra = 0, tam_maior = 0, tam_menor = 50;
    int tam_texto = tamanho(texto);

    int i = 0;
    for (int j = i+1; texto[j-1] != '\0'; j++)
    {
        if (texto[j] == ' ' || texto[j] == '\0')
        {
            tam_palavra = j-i;

            if (tam_palavra > tam_maior)
            {
                tam_maior = tam_palavra;
                for (int c = i; c < j; c++)
                    maisLonga[c-i] = texto[c];
                
                maisLonga[tam_palavra] = '\0';
            }

            if (tam_palavra < tam_menor)
            {
                tam_menor = tam_palavra;
                for (int c = i; c < j; c++)
                    maisCurta[c-i] = texto[c];
                
                maisCurta[tam_palavra] = '\0';
            }

            i = j+1;
        }   
    }  
}

int main()
{
    char texto[501];
    printf("Digite um texto de ate 500 caracteres: \n");
    scanf("%500[^\n]s", texto);

    int num_palavras = contarPalavras(texto);
    printf("Numero de palavras: %d\n", num_palavras);

    char maisLonga[51], maisCurta[51];
    encontrarExtremos(texto, maisLonga, maisCurta);
    printf("Palavra mais longa: %s\n", maisLonga);
    printf("Palavra mais curta: %s\n", maisCurta);
    return 0;
}
