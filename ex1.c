#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numeroLido, numeroFinal;

    printf("Entre com um numero: ");
    scanf("%i", &numeroLido);

    numeroFinal = numeroLido + 1;

    printf("O numero final eh: ");
    printf("%d", numeroFinal);
}