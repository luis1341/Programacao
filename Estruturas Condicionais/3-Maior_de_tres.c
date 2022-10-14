#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,maior;

    printf("Insira 3 valores!\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3)
    {
        printf("Maior=%d\n", n1);
    }
    else if(n2 > n1 && n2 > n3)
    {
        printf("Maior= %d\n", n2);
    }
    else if(n3>n1 && n3 >n2)
    {
        printf("Maior=%d\n", n3);
    }
    else
    {
        printf("Os valores são iguais.\n");
    }

    return 0;
}