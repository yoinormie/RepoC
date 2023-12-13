#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,suma,multiplicacion;
    printf("Escoge el 1ºer número entero\n");
    scanf("%d",&num1);
    printf("Escoge el 2ºdo número entero\n");
    scanf("%d",&num2);
    suma=num1+num2;
    multiplicacion=num1*num2;
    printf("La suma da: %d\n",suma);
    printf("La multiplicación da: %d\n",multiplicacion);
    return 0;
}
