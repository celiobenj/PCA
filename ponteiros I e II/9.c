/*
9  Escreva uma função que recebe uma string de caracteres e uma letra e devolve um vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o tamanho do vetor.
*/
#include <stdio.h>
#include <stdlib.h>

int *pos_letra(char *s, char c, int *tam_v)
{
    int tam = 0;
    while (*(s+tam) != '\0')
        tam++;

    int *v = (int *)malloc(tam*sizeof(int));
    if (v == NULL)
    {
        printf("Espaco insuficiente");
        return NULL;
    } 

    *tam_v = 0;
    for (int i = 0; i < tam; i++)
    {
        if (*(s+i) == c)
        {
           *(v+(*tam_v)) = i;
           (*tam_v)++;
        }
    }
    return v;
}

int main()
{
    char s[] = "O rato roeu a roupa do rei de roma";
    char c = 'a';
    
    int tam_v;
    int *v = (int *)pos_letra(s, c, &tam_v);

    printf("Posicoes da letra '%c' na frase '%s':\n", c, s);
    for (int i = 0; i < tam_v; i++)
        printf("%d ", v[i]);
    
    return 0;
}
