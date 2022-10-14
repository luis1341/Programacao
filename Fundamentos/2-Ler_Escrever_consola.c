#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int numero;
    printf("Digite um numero.\n");
    scanf("%d", &numero);
    printf("Digite um nome\n");
    scanf("%s", &nome);

    printf("Nome=%s\nNumero=%d\n", nome,numero);
    return 0;

}