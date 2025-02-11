#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dias, meses, anos;

    printf("Digite sua idade em dias: ");
    scanf("%d", &dias);

    meses = dias / 30;
    anos = dias / 365;

    printf("Idade em dias: %d\n", dias);
    printf("Idade em meses: %d\n", meses);
    printf("Idade em anos: %d\n", anos);

    return 0;
}