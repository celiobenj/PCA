// 3. Altere o algoritmo anterior para que ele considere apenas a soma dos ímpares que estejam entre 100 e 200.

#include <stdio.h>

int main()
{
    int num = 0, soma = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Escreva um numero: \n");
        scanf("%d", &num);
        if (num%2 == 1 && (num > 100 && num < 200)) soma += num;
    }

    printf("A soma dos impares lidos e: %d", soma);

    return 0;
}
