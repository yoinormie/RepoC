#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Este no me salió xdd :p
    float cantidad;

    printf( "\n   Introduzca cantidad: " );
    scanf( "%f", &cantidad );

    printf( "\n   %.2f kilos de az%ccar", cantidad / 2 / .6, 163 );
    printf( "\n\n   %.2f kilos de caf%c", cantidad / 3 / .72, 130 );
    printf( "\n\n   Quedan %.2f euros", cantidad / 6 );
    return 0;
}
