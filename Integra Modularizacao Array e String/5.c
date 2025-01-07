/*
5. Gerador de Senhas Aleatórias
Crie um programa que gere senhas aleatórias baseadas nas seguintes regras:
A senha deve ter entre 8 e 20 caracteres.
Deve conter letras maiúsculas, minúsculas, números e caracteres especiais.
Implemente funções como:
void gerarSenha(int tamanho, char senha[]);
int validarSenha(char senha[]); (Valide se a senha atende aos critérios acima.)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarSenha(int tamanho, char senha[]);
int validarSenha(char senha[]);

int main()
{
    srand((unsigned) time(NULL));

    int tamanho;
    char senha[21];

    gerarSenha(tamanho, senha);
    printf("Senha gerada aleatoriamente: %s\n", senha);

    (validarSenha(senha)) ? printf("Senha valida") : printf("Senha nao valida");

    return 0;
}

void gerarSenha(int tamanho, char senha[])
{
    tamanho = 8 + rand()%(20-8+1);

    for (int i = 0; i < tamanho; i++)
        senha[i] = 33 + rand()%(126-33+1);
    
    senha[tamanho] = '\0';
}

int validarSenha(char senha[])
{
    int tam = 0, temMaiuscula = 0, temMinuscula = 0, temNumero = 0, temEspecial = 0;
    while (senha[tam] != '\0') 
    {
        char c = senha[tam];
        if ( c >= 'A' && c <= 'Z') temMaiuscula = 1;
        if ( c >= 'a' && c <= 'z') temMinuscula = 1;
        if ( c >= '0' && c <= '9') temNumero = 1;
        if ((c >= '!' && c <= '/') ||
            (c >= ':' && c <= '@') ||
            (c >= '[' && c <= '`') ||
            (c >= '{' && c <= '~')) temEspecial = 1;
        tam++;
    }
    
    if ((tam >= 8 && tam <= 20) && temMaiuscula && temMinuscula && temNumero && temEspecial) return 1;

    return 0;
}
