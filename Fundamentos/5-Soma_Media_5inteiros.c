#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,n5;
    int soma;
    float media;
    printf("indique 5 valores inteiros:\n");
    scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);
    soma=n1+n2+n3+n4+n5;
    media=soma/5;
    printf(" Soma=%d\n media=%.2f\n", soma,media);
    return 0;
}