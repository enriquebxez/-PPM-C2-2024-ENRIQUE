#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*IGUALDAD DE EXPRESIONES*/

void main (void)
{
    int T, P, N;
    printf("INGRESA LOS VALORES DE T, P y N:");
    scanf("%d %d %d", &T, &P, &N);
    if (P !=0)
    {
        if (pow(T / P, N) == (pow(T, N)) / pow(P, N))
            printf("\nSE COMPRUEBA LA IGUALDAD");
        else
        printf("\nNO SE COMPRUEBA LA IGUALDAD");
    }
    else
        printf("\nP TIENE QUE SER DIFERENTE DE CERO");
    }

