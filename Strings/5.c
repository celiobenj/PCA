/*
5. O código de Cesar é  uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante.
Implemente um programa que faça uso desse Código de Cesar (3 posições), entre com uma string e retorne a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/
#include <stdio.h>

void codCesar(char str[], char res[], int pos, int tam);

int main()
{
    char mensagem[] = "a ligeira raposa marrom saltou sobre o cachorro cansado";
    int tam = sizeof(mensagem)/sizeof(char);

    char criptografada[tam];
    const int posicoes = 3;

    codCesar(mensagem, criptografada, posicoes, tam);
    
    for (int i = 0; i < tam - 1; i++) 
        printf("%c", criptografada[i]);
        
    return 0;
}

void codCesar(char str[], char res[], int pos, int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        if (str[i] != ' ')
            res[i] = str[i] + pos;
        else
            res[i] = ' ';
    }
}
