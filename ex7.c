#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdeDeCavalos, qtdeFerraduras;

    printf("Digite a quantidade de cabalos comprados: ");
    scanf("%d", &qtdeDeCavalos);

    qtdeFerraduras = qtdeDeCavalos * 4;

    printf("A quantidade de ferraduras necessarias e de: %d", qtdeFerraduras);

    return 0;
}