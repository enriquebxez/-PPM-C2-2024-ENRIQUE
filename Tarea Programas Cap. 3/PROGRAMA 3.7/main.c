#include <stdio.h>
#include <stdlib.h>

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.
I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */
int main()
{
    int I, N;
    float LAN, SLA = 0;
    do
    {
        printf("Ingresa el numero de lanzamientos:\t");
        scanf("%d", &N);
    }
    while (N < 1 || N > 11);
    for (I=1; I<=N; I++)
    {
        printf("\nIngresa el lanzamiento %d: ", I);
        scanf("%f", &LAN);
        SLA = SLA + LAN;
    }
    SLA = SLA / N;
    printf("\nEl promedio de lanzamientos es: %.2f", SLA);
}
