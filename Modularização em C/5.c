/*
5. Na matemática, a sequência de Fibonacci é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual, cada termo subsequente (número de Fibonacci) corresponde a soma dos dois anteriores.
A sequência recebeu o nome do matemático italiano Leonardo de Pisa, mais conhecido por Fibonacci, que descreveu, no ano de 1202, o crescimento de uma população de coelhos, a partir desta.
Tal sequência já era, no entanto, conhecida na antiguidade.
Os números de Fibonacci são, portanto, os números que compõem a seguinte sequência:
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377...
Assim, o número de Fibonacci Fn para n>0 é definido da seguinte maneira:
F1 = 1
F2 = 1
Fn = Fn-1 + Fn-2 para n>2.
Escreva uma função que retorne o número relativo a ao valor na sequência de Fibonacci na posição n:
int fib(int n)  //Recebe n como parâmetro e retorna Fn
*/

#include <stdio.h>

int fib(int n)
{
    if (n == 1 || n == 2) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}
