#include <stdio.h>
#include <math.h>
/*
4. Verificação de Raízes de Equação do Segundo Grau
Receba os coeficientes a, b e c de uma equação quadrática (ax^2 + bx + c = 0) e determine se ela tem raízes reais, imaginárias ou se tem uma única raiz. Utilize o discriminante e if-else para as verificações. Exibir as raízes quando forem reais.
*/

int main()
{
    float a, b, c;

    printf("Digite os coeficiente a, b e c de uma equacao do segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);

    float delta = pow(b, 2) - 4 * a * c;

    if (a != 0)
    {
        if (delta > 0)
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Ela tem mais de uma solucao\n");
            printf("x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
        else if (delta == 0)
        {
            float x = (-b + sqrt(delta)) / (2 * a);
            printf("Ela tem apenas uma solucao\n");
            printf("x = %.2f\n", x);
        }
        else
        {
            printf("Ela nao tem solucao real\n");
        }
    }
    else
    {
        printf("Isso nao e uma equacao do 2 grau\n");
    }

    return 0;
}
