#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("insira dois valores;\n");
    scanf("%d %d", &n1,&n2);
    if(n1 > n2)
    {
        printf("Maior= %d\n", n1);
    }
    else if (n2>n1)
    {
        printf("Maior= %d\n", n2);
    }
    else
    printf("Os valores são iguais.\n");

    return 0;
    
}