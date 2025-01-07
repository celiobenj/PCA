/*
1. Gerenciador de Estoque de Loja
Crie um programa que simule o gerenciamento de um estoque de loja. O programa deve:
Permitir cadastrar até 50 produtos, cada um com nome (string), código (inteiro) e quantidade em estoque (inteiro).
Implementar as seguintes funções:
int cadastrarProduto(char produtos[][50], int codigos[], int quantidades[]); // a função deve retornar à quantidade de produtos que foram cadastrados
void buscarProduto(char produtos[][50], int codigos[], int totalProdutos);
void atualizarEstoque(int codigos[], int quantidades[], int totalProdutos);
Exibir relatórios de estoque.
*/
#include <stdio.h>

int cadastrarProduto(char produtos[][50], int codigos[], int quantidades[])
{
    int i;
    for (i = 0; i < 50; i++)
    {
        printf("Adicione o nome do produto %d: ", i+1);
        scanf(" %s", &produtos[i]);

        if (produtos[i][0] == '/') break;

        printf("Adicione o codigo do produto %d: ", i+1);
        scanf("%d", &codigos[i]);
        printf("Adicione quantidade de produto %d: ", i+1);
        scanf("%d", &quantidades[i]);
        printf("\n");

    }
    return i++;
}

int buscarProduto(char produtos[][50], int codigos[], int totalProdutos)
{
    int busca;
    printf("\nDigite o codigo que deseja buscar: ");
    scanf("%d", &busca);

    int i;
    for (i = 0; i < totalProdutos; i++)
        if (codigos[i] == busca) 
            return i;

    return -1;    
}

void atualizarEstoque(char produtos[][50], int codigos[], int quantidades[], int totalProdutos)
{
    printf("\nAtualizando o estoque");
    int pos_att = buscarProduto(produtos, codigos, totalProdutos);

    if (pos_att == -1)
    {
        printf("Produto nao encontrado\n");
        return;
    }

    printf("Digite o nome do novo produto: ");
    scanf("%s", produtos[pos_att]);
    printf("Adicione quantidade do novo produto: ");
    scanf("%d", &quantidades[pos_att]);

    printf("Produto atualiado com sucesso\n");
}

int main()
{
    char produtos[50][50];
    int codigos[50], quantidades[50];

    int totalProdutos = cadastrarProduto(produtos, codigos, quantidades);
    printf("Foram cadastrados %d produtos", totalProdutos);

    int pos_enc = buscarProduto(produtos, codigos, totalProdutos);
    if (pos_enc != -1) printf("Produto encontrado -> Nome: %s", produtos[pos_enc]);
    else printf("Produto nao encontrado");

    atualizarEstoque(produtos, codigos, quantidades, totalProdutos);

    printf("Relatorio de estoque");
    for (int i = 0; i < totalProdutos; i++)
    {
        printf("Produto %d: {%s, %d, %d}", i+1, produtos[i], codigos[i], quantidades[i]);
        printf("\n");
    }

    return 0;
}
