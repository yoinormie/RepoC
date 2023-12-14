#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio;
    int minutos;
    printf("Precio del servicio: ");
    scanf("%f",&precio);
    printf("Minutos en llamada: ");
    scanf("%d",&minutos);
    printf("El coste de la llamada fue de: %.2f",(precio*minutos));
    return 0;
}
