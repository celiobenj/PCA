#include <stdio.h>

/*
9. Calcular os valore de x e y onde a seguinte expressão
xy - x^2 + y tem valor máximo, a partir dos números naturais n e m tais que
x <= m e y <= n.
*/

#define e 0.01

int main()
{
    int n, m;
    double valor = 0, maior_valor = __DBL_MIN__, maior_x, maior_y;

    printf("Digite 2 numeros naturais: ");
    scanf("%d %d", &n, &m);

    for (double x = -m; x <= m; x += e)
        for (double y = -n; y <= n; y += e){
            valor = x*y - x*x + y; 
            if (valor > maior_valor){
                maior_valor = valor;
                maior_x = x;
                maior_y = y;
            }
        }
    
    printf("Maior valor da expressao: %lf\n", maior_valor);
    printf("Para x = %lf e y = %lf\n", maior_x, maior_y);

    return 0;
}
