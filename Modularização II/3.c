/*
3. Faça uma função que dados dois inteiros positivos x e y verifica se y corresponde aos últimos dígitos de x. 
Ex. x= 567890, y=890 R/corresponde; 
      x= 2457, y= 245 R/não corresponde; 
      x= 457, y= 2457 R/não corresponde
*/

#include <stdio.h>

int digito(int n, int i)
{
    return (n/i%10);
}

int corresponde(int x, int y)
{
    for (int i = 1; i <= y; i*=10)
        if (digito(x, i) != digito(y, i)) return 0;
    
    return 1;
}

int main()
{
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    if (corresponde(x, y)) printf("Corresponde");
    else printf("Nao corresponde");

    return 0;
}
