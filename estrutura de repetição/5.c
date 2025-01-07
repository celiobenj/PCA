// 5. Altere o programa anterior para que ele não permita a entrada de valores negativos.

#include <stdio.h>

int main()
{
    int maior = -32.768, menor = 32.767, num;

    int cont = 0;
    while (cont < 20)
    {
        printf("Escreva um numero: \n");
        scanf("%d", &num);

        if (num < 0) 
        {
            printf("Numero invalido. Tente novamente\n"); 
            continue;
        }
        
        if (num > maior) maior = num;

        if (num < menor) menor = num;

        cont++;
    }

    printf("O maior e o menor valor fornecidos foram: %d e %d", maior, menor);

    return 0;
}
