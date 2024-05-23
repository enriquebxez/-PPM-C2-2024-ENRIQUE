#include <stdio.h>
#include <stdlib.h>

/*INCREMENTO DE SALARIO PROFESOR POR NIVEL ACADEMICO*/
void main(void)
{
float SAL;
int NIV;
printf ("INGRESA EL NIVEL ACADEMICO DEL PROFESOR: ");
scanf ("%d" , &NIV);
printf("INGRESA EL SALARIO: ");
scanf ("%f", &SAL);
switch(NIV)
{
    case 1: SAL = SAL * 1.035; break;
    case 2: SAL = SAL * 1.041; break;
    case 3: SAL = SAL * 1.048; break;
    case 4: SAL = SAL * 1.053; break;
}
printf("\n\nNivel: %d \ tNUEVO SALARIO: %8.2f" ,NIV, SAL);
}
