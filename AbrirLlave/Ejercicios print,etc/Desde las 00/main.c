#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas,minutos,segundos;
    printf("Horas que han pasado:");
    scanf("%d",&horas);
    printf("Minutos que han pasado:");
    scanf("%d",&minutos);
    printf("Segundos que han pasado:");
    scanf("%d",&segundos);
    printf("Desde las 00:00:00 han pasado %d segundos",(horas*3600+minutos*60+segundos));
    return 0;
}
