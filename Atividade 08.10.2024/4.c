#include <stdio.h>

/*
4. Escreva um programa que imprima um padrão de um quadrado oco de lado n. O valor de n é fornecido pelo usuário. Por exemplo, para n=5, o programa deve imprimir o seguinte padrão:
***** 
*     * 
*     * 
*     * 
*****  
*/

int main()
{
    int n;
    printf("Qual e o lado o quadrado? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) if (i == 0 || j == 0 || i == n-1 || j == n-1) printf("*"); else printf(" ");
        printf("\n");
    }
    return 0;
}
