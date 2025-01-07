#include <stdio.h>

int main(){
    char caractere;
    int maiusculo;

    scanf("%c", &caractere);

    maiusculo = caractere - 32;

    printf("%c\n", maiusculo);
    
    return 0;
}
