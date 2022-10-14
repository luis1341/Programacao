#include <stdio.h>
#include <stdlib.h>

int main()

{

    int nfilhos, anos, bonus;
    printf("Introduza o número de fillhos:\n");
    scanf("%d", &nfilhos);
    printf("Introduza o número de anos de serviço:\n");
    scanf("%d", &anos);

    bonus= nfilhos*20 + anos*10;

    printf("Bonus Natal=%d\n", bonus);

    return 0;
}