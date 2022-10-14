#include <stdio.h>
#include <stdlib.h>

main()
{
    int idade, antiguidade, nfilhos, bonus=0;

     printf("Introduzir idade:\n");
    scanf("%d",&idade);
   
    printf("Introduzir anos de serviço:\n");
    scanf("%d",&antiguidade);

    printf("Intoduzir o numero de filhos;\n");
    scanf("%d",&nfilhos);
    

    if(idade > 45)
    {
        bonus = bonus + (idade - 45) * 5;
    }
    if(antiguidade <= 10)
    {
        bonus += antiguidade * 10; 
    }
    else
    {
         bonus += 10*10 + (antiguidade-10) * 20;
    }

    if(nfilhos <=3)
    {
        bonus += nfilhos * 25;
    }
    else
    {
        bonus = bonus + 75;
    }

    printf("%d\n",bonus);
    
    return 0;


}