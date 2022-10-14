#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base, altura, perimetro;

    printf("Indique a base!\n");
    scanf("%d", &base);
    printf("Indique a altura!\n");
    scanf("%d", &altura);    
    perimetro=2*base + 2*altura;
    printf("\n Base= %d\n Altura=%d\n Perimetro=%d\n", base, altura, perimetro);
    return 0;

}