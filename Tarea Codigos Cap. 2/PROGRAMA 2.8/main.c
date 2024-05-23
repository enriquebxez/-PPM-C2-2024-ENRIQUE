#include <stdio.h>
#include <stdlib.h>

/*Asistente de Carreras*/

void main (void)
{
    int MAT, CAR, SEM;
    float PRO;
    printf ("Ingresa Matricula: ");
    scanf("%d", &MAT);
    printf ("Ingresa tu carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");
    scanf("%d", &CAR);
    printf("Ingresa el semestre: ");
    scanf("%f", &SEM);
    printf("Ingresa promedio: ");
    scanf("%f", &PRO);
switch (CAR)
{
    case 1: if (SEM >= 6 && PRO >= 8.5)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
    break;
    case 2: if (SEM >= 5 && PRO >= 9.0)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
    break;
    case 3: if (SEM >= 6 && PRO >= 8.8)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
    break;
    case 4: if (SEM >= 7 && PRO >= 9.0)
    printf("\n%d %d %5.2f", MAT, CAR, PRO);
    break;
default: printf("\n Error en la carerra");
break;
}
}
