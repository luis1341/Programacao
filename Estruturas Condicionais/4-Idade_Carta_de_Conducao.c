#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Insira a idade:\n");
    scanf("%d", &idade);
    if(idade >= 18)
    {
        printf("Pode tirar a carta de condução.\n");
    }
    else
    {
        printf("Faltam %d anos para tirar a carta.", (18-idade));
    }
    return 0;

}