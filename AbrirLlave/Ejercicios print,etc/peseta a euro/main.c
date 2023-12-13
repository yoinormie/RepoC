#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peseta;
    float euro;
    printf("Cuantas pesetas tienes\n");
    scanf ("%d",&peseta);
    euro=peseta/166.386;
    printf("%d pesetas son %.2f euros",peseta,euro);
    return 0;
}
