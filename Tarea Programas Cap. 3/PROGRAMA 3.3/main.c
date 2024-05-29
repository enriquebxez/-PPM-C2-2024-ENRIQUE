#include <stdio.h>
#include <stdlib.h>
/* Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el último
mes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */
int main()
{
    float PAG, SPA;
    SPA= 0;
    printf("Ingresa el primer pago:\t");
    scanf("%f", &PAG);
    while (PAG)
{
        SPA= SPA + PAG;
        printf("Ingresa el siguiente pago:\t ");
        scanf("%f", &PAG);
        /* Observa que la proposición que modifica la condición es una lectura. */
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
}
