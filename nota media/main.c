#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3,notaMedia;
    printf("Nota del primer examen: ");
    scanf("%f",&nota1);
    printf("Nota del segundo examen: ");
    scanf("%f",&nota2);
    printf("Nota del tercer examen: ");
    scanf("%f",&nota3);
    notaMedia=(nota1+nota2+nota3)/3;
    printf("La media entre los 3 examenes es: %.2f",notaMedia);
    return 0;
}
