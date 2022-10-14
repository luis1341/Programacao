#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, maior;
    scanf("%d%d%d", &a, &b, &c);

    if(a>b)
    {
        if(a>c)
            maior=a;
        else
            maior=c;          
    }
    else
    {
        if(b>c)
            maior=b;
        else
            maior=c;

    }

    if((a==c) && (c==b))
    {   
        printf("Iguais\n");

    }
    else
    {
        printf("Maior=%d\n",maior);
    }

    return 0;

        
}