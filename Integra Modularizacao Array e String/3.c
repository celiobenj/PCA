/*
3. Sistema de Votação Eletrônica
Desenvolva um programa para simular um sistema de votação. Ele deve:
Permitir cadastrar até 10 candidatos (nome e número).
Receber votos por número do candidato.
Contar os votos de forma dinâmica.
Declarar o vencedor e imprimir os resultados.
Funções a implementar:
int cadastrarCandidatos(char nomes[][50], int numeros[]); //a função deve retornar à quantidade de produtos que foram cadastrados
void votar(int numeros[], int votos[], int totalCandidatos);
void exibirResultados(char nomes[][50], int numeros[], int votos[], int totalCandidatos);
*/
#include <stdio.h>

int cadastrarCandidatos(char nomes[][50], int numeros[]);
void votar(int numeros[], int votos[], int totalCandidatos);
void exibirResultados(char nomes[][50], int numeros[], int votos[], int totalCandidatos);

int main()
{
    char nomes[10][50];
    int numeros[10];

    int totalCandidatos = cadastrarCandidatos(nomes, numeros);
    int votos[totalCandidatos];

    votar(numeros, votos, totalCandidatos);
    
    exibirResultados(nomes, numeros, votos, totalCandidatos);
    return 0;
}

int cadastrarCandidatos(char nomes[][50], int numeros[])
{
    int i = 0;
    char res;
    printf("Cadastro de candidatos\n");
    do
    {
        printf("Nome do canditato %d: ", i+1);
        scanf(" %50[^\n]s", nomes[i]);
        printf("Numero do canditato %d: ", i+1);
        scanf(" %d", &numeros[i]);
        i++;

        if (i == 10) 
        {
            printf("Limite de candidatos atingido");
            break;
        }

        printf("Deseja adicionar outro candidato? (S/N) ");
        scanf(" %c", &res);
        printf("\n");
    } while (res == 's' || res == 'S');

    return i;
}

void votar(int numeros[], int votos[], int totalCandidatos)
{

    int voto;
    char res;

    for (int i = 0; i < totalCandidatos; i++) votos[i] = 0;

    printf("Votacao\n");
    do
    {
        printf("Digite o numero do seu candidato: ");
        scanf(" %d", &voto);

        for (int i = 0; i < totalCandidatos; i++)
        {
            if (numeros[i] == voto)
            {
                votos[i]++;
            }
        }

        printf("Outro voto? (S/N) ");
        scanf(" %c", &res);
        printf("\n");
    } while (res == 's' || res == 'S');
}

void exibirResultados(char nomes[][50], int numeros[], int votos[], int totalCandidatos)
{
    int maiorVoto = 0, pos_maiorVoto;
    for (int i = 0; i < totalCandidatos; i++)
    {
        if (votos[i] > maiorVoto)
        {
            maiorVoto = votos[i];
            pos_maiorVoto = i;
        }
    }

    printf("O vencedor da eleicao foi o candidato %s, numero %d, com %d votos.", 
            nomes[pos_maiorVoto], 
            numeros[pos_maiorVoto],
            votos[pos_maiorVoto]);
}
