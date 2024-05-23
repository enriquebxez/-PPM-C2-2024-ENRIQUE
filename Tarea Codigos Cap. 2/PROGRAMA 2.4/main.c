#include <stdio.h>
#include <stdlib.h>

/*INCREMENTO DE PRECIO SI EL VALOR ES INFERIOR A 1,500. */
void main(void)
{
float PRE, NPR;
printf ("INGRESA EL PRECIO DEL PRODUCTO: ");
scanf ("%f" , &PRE);
if (PRE < 1500)
NPR = PRE * 1.11;

else
    NPR = PRE * 1.08;
    printf ("\nNUEVO PRECIO: %8.2f" , NPR);
}
