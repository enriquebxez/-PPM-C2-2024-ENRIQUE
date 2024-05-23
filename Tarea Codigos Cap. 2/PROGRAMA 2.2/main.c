#include <stdio.h>
#include <stdlib.h>

int main()
{
float PRE, NPR;
printf ("INGRESE EL PRECIO DEL PRODUCTO: ");
scanf ("%f", &PRE);
if (PRE < 1500)
{
    NPR = PRE * 1.11;
    printf ("\nNUEVO PRECIO: %7.2f",NPR);
}
}
