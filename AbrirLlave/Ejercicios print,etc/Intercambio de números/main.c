#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,aux;
    printf("Primer valor: ");
    scanf("%d",&n1);
    printf("Segundo valor: ");
    scanf("%d",&n2);
    printf("Tercer valor: ");
    scanf("%d",&n3);
    aux=n1;
    n1=n2;
    n2=n3;
    n3=aux;
    printf("Primer valor: %d\n",n1);
    printf("Segundo valor: %d\n",n2);
    printf("Tercer valor: %d\n",n3);
    return 0;
}
