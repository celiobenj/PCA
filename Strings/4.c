/*
4. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres); ´
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring
*/
#include <stdio.h>
#include <string.h>

#define MAX 21

int main()
{
    //! a)
    char s1[MAX];
    printf("Digite um texto de ate 20 caracteres: ");
    gets(s1);

    //! b)
    int tamanho_s1 = 0;
    while (s1[tamanho_s1] != '\0')
        tamanho_s1++;
    printf("Comprimento de s1: %d\n", tamanho_s1);

    //! c)
    char s2[MAX];
    printf("Digite um outro texto de ate 20 caracteres: ");
    gets(s2);
    if (strcmp(s1, s2) == 0)
        printf("S1 e igual a S2\n");
    else
        printf("S1 e diferente a S2\n");

    //! d)
    char concat[2 * MAX];
    for (int i = 0; i < 2 * MAX; i++)
        concat[i] = 0;
    strncat(concat, s1, MAX);
    strncat(concat, s2, MAX);
    printf("Concatenados: %s\n", concat);

    //! e)
    printf("S1 de tras pra frente: ");
    for (int i = tamanho_s1 - 1; i >= 0; i--)
        printf("%c", s1[i]);
    printf("\n");

    //! f)
    printf("Digite um caractere para ser pesquisado em S1: ");
    char target;
    scanf(" %c", &target);
    int vezes = 0;
    for (int i = 0; i < tamanho_s1; i++)
        if (s1[i] == target)
            vezes++;
    printf("Caractere '%c' encontrado %d vezes na palavra '%s'\n", target, vezes, s1);

    //! g)
    printf("Informe dois caracteres: ");
    char c1, c2;
    scanf(" %c %c", &c1, &c2);
    int i;
    for (i = 0; i < tamanho_s1; i++)
        if (s1[i] == c1)
            break;
    s1[i] = c2;
    printf("A substituicao da primeira instacia de '%c' por '%c' na string s1 resulta em: '%s'\n", c1, c2, s1);

    //! h)
    char s3[MAX];
    printf("Digite um texto de ate 20 caracteres: ");
    scanf("%s", s3);

    if (strstr(s1, s3) != NULL)
        printf("S2 e substring de S1\n");
    else
        printf("S2 nao e substring de S1\n");

    //! i)
    int pos, tam;
    printf("Digite a posicao inicial da substring: ");
    scanf("%d", &pos);
    pos -= 1;
    printf("Digite o tamanho da substring: ");
    scanf("%d", &tam);

    char substring[tam + 1];
    if (pos + tam <= tamanho_s1)
    {
        strncpy(substring, s1 + pos, tam);
        substring[tam] = '\0';
        printf("Substring: %s\n", substring);
    }

    return 0;
}
