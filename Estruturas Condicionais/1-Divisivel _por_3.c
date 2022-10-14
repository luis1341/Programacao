#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num;
    printf("Ecrever um numero:");
    scanf("%d", &num);

    if(num % 3 == 0)
    {printf("O numero %d é divisivel por 3.\n", num);}
    
    else
    {
        printf("O numero %d não é divisivel por 3.\n", num);
    }

    return 0;

}