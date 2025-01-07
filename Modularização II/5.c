/*
5. Faça uma função que transforme um número binário (expressado como um inteiro) num número decimal. A transformação entre essas bases pode ser feita com a forma polinomial a seguir:
Número binário: 1101   ==>  1×2³ + 1×2² + 0x2¹ + 1×2^0 = 8 + 4 + 0 + 1 = 13
*/

#include <stdio.h>
#include <math.h>

int binParaDeci(int n)
{
    int res = 0;
    for (int i = 1, j=0; i <= n; i *= 10, j++)
        res += (n/i)%10 * pow(2, j);
    
    return res;
}

int main()
{
    int num;
    printf("Digite um numero binario: ");
    scanf("%d", &num);

    printf("Este numero convertido para decimal e: %d", binParaDeci(num));
    return 0;
}
