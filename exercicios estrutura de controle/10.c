#include <stdio.h>

/*
10. Simulação de Semáforo
Simule o comportamento de um semáforo com três cores: vermelho, amarelo e verde. O programa deve receber um caractere representando a cor atual do semáforo e indicar a próxima cor que será exibida (usando switch). Adicionar um modo de erro para casos onde o caractere fornecido não seja válido.
*/

int main()
{
    char cor;

    printf("Digite uma das cores do semaforo (G/Y/R): ");
    scanf("%c", &cor);

    switch (cor)
    {
    case 'G':
        printf("Proxima cor e amarela");
        break;
    case 'Y':
        printf("Proxima cor e vermelha");
        break;
    case 'R':
        printf("Proxima cor e verde");
        break;

    default:
        printf("Cor invalida");
        break;
    }

    return 0;
}