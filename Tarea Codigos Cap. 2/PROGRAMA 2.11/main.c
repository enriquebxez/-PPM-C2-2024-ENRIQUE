#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int DIS, TIE;
    float BIL;
    printf ("INGRESA LA DISTANCIA ENTRE CUIDADES");
    Scanf("%d", &DIS);
    printf ("INGRESA EL TIEMPO DE ESTANCIA");
    Scanf("%d", &TIE);
    if((DIS*2 > 500) && (TIE > 10))
    BIL = DIS * 2 * 0.19 * 0.8;
    else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCOSTO DEL BILLETE: %7.2f", BIL);

}
