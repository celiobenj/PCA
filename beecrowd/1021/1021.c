#include <stdio.h>

int main()
{
    float dinheiro = 0;
    int n100, n50, n20, n10, n5, n2, n1, n050, n025, n010, n005, n001;

    scanf("%f", &dinheiro);

    printf("NOTAS:\n");

    n100 = dinheiro/100;
    dinheiro -= n100*100;
    printf("%d nota(s) de R$ 100.00\n", n100);
    
    n50 = dinheiro/50;
    dinheiro -= n50*50;
    printf("%d nota(s) de R$ 50.00\n", n50);

    n20 = dinheiro/20;
    dinheiro -= n20*20;
    printf("%d nota(s) de R$ 20.00\n", n20);

    n10 = dinheiro/10;
    dinheiro -= n10*10;
    printf("%d nota(s) de R$ 10.00\n", n10);

    n5 = dinheiro/5;
    dinheiro -= n5*5;
    printf("%d nota(s) de R$ 5.00\n", n5);

    n2 = dinheiro/2;
    dinheiro -= n2*2;
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");

    n1 = dinheiro/1;
    dinheiro -= n1*1;
    printf("%d moeda(s) de R$ 1.00\n", n1);

    n050 = dinheiro/0.5;
    dinheiro -= n050*0.5;
    printf("%d moeda(s) de R$ 0.50\n", n050);

    n025 = dinheiro/0.25;
    dinheiro -= n025*0.25;
    printf("%d moeda(s) de R$ 0.25\n", n025);

    n010 = dinheiro/0.1;
    dinheiro -= n010*0.1;
    printf("%d moeda(s) de R$ 0.10\n", n010);

    n005 = dinheiro/0.05;
    dinheiro -= n005*0.05;
    printf("%d moeda(s) de R$ 0.05\n", n005);

    n001 = dinheiro/0.01;
    dinheiro -= n001*0.01;
    printf("%d moeda(s) de R$ 0.01\n", n001);

    return 0;
}
