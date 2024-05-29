#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*PAR, IMPAR O NULO>*/
void main (void)
{
    int NUM;
    printf("INGRESA EL NUMERO: ");
    scanf("%d", &NUM);
    if (NUM == 0)
        printf("\nNulo");
    else
        if (pow (-1, NUM) > 0)
        printf("\nPar");
    else
        printf("\nImpar");
}
