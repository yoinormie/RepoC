#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{    float arista,volumen;
    printf("Valor de la arista\n");
    scanf("%f",&arista);
    volumen=pow(arista,3.0);
    printf("Si la arista vale %.2f, el volumen vale %.2f",arista,volumen);
    return 0;
}
