#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Programa Aumento de salário em função do cargo.*/

int main()
{
    int antigo, novo;
    char codigo;
    char cargo[20];

    printf("Insira o salário:\n");
    scanf("%d", &antigo);

    printf("Insirao código: \n");
    scanf(" %*c", codigo);

    printf("Codigo: %c\n", codigo);

    
    switch (codigo)
    {
        case '1':

            cargo[8]="Gerente";
            novo = antigo * 1.1;
            printf("Cargo= %s\n", cargo);
            printf("Salário novo = %d\n", novo);
            printf("Aumento= %d\n", novo-antigo);


        break;
    
        default:
            printf("Olá.\n");
        break;
    }


    return 0;

}