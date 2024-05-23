#include <stdio.h>
#include <stdlib.h>

/* PROMEDIO CURSOS APROBADOS. */
void main(void)
{
    float PRO;
printf ("INGRESE EL PROMEDIO DEL ESTUDIANTE: ");
scanf ("%f", &PRO);
if (PRO >= 6)
    printf("\nAPROBADO");
else
    printf("\nREPROBADO");
}
