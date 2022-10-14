#include <stdio.h>
#include <stdlib.h>

int main()
{
    int teste1,teste2, tp1,tp2,tp3,tp4,somateste, somatp;
    int mediateste, mediatp, nota_final;

    printf("Digite a nota dos teste:\n");
    scanf("%d%d", &teste1,&teste2);
    printf("Digite as notas dos tps:\n");
    scanf("%d%d%d%d", &tp1,&tp2,&tp3,&tp4);

    somateste=teste1+teste2;
    somatp=tp1+tp2+tp3+tp4;
    mediateste=somateste/2;
    mediatp=somatp/4;
    nota_final= mediateste*0.7 + mediatp*0.3;
    printf("Nota final= %d\n", nota_final);
    return 0;

}