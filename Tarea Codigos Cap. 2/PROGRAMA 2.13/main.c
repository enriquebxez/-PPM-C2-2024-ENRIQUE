#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*FUNCION.
El programa, al recibir como dato un valor entero, calcula el resultado
de una funcion*/

void main(void)

{
    float X;
    int Y;
    printf("INGRESA EL VALOR DE Y:");
    scanf("%d", &Y);
    if (Y < 0 || Y > 50)
        X = 0;
    else
        if (Y <= 10)
        X = 4 / Y - Y;
}
