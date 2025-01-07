/*
3. Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para 3 variáveis inteiras. Antes disso, verifique se as barras estão no lugar certo, e se DD, MM e AAAA são numéricos.
*/
#include <stdio.h>

int main()
{
    char data[11];

    while (1)
    {
        printf("Digite uma data no formato DD/MM/AAAA: ");
        scanf("%s", data);
        if (data[2] == '/' && data[5] == '/') break;
        for (int i = 0; i < 10; i++)
        {
            if (i != 2 || i != 5)
                if (data[i] >= '0' && data[i] <= '9')
                    break;                
        }
        
        printf("Verifique se voce digitou corretamente\n");
    }

    int 
    dia = (data[0]-48)*10 + (data[1]-48)*1,
    mes = (data[3]-48)*10 + (data[4]-48)*1,
    ano = (data[6]-48)*1000 + (data[7]-48)*100 + (data[8]-48)*10 + (data[9]-48)*1;

    printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d", ano);
    
    return 0;
}
