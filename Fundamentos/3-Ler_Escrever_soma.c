#include <stdio.h>
#include <stdlib.h>
int main()
{
    int val1, val2, soma;

    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &val1,&val2);
    soma=val1 + val2;
    printf("%d + %d = %d\n", val1,val2,soma);
    return 0;
     
}