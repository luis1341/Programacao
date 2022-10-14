#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,n5;
    float soma,media;

    printf("Digite 5 valores reais:\n");
    scanf("%f%f%f%f%f", &n1,&n2,&n3,&n4,&n5);

    soma=n1+n2+n3+n4+n5;
    media=soma/5;

    printf(" Soma= %.2f\n Media= %.2f\n", soma,media);
    getchar();
}
