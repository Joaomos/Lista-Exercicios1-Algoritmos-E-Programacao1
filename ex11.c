#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valorPequena = 10, valorMedia = 12, valorGrande = 15, valorTotal;
    int qtdePequena, qtdeMedia, qtdeGrande;

    printf("Digite a quantidade de camisetas pequenas vendidas: ");
    scanf("%d", &qtdePequena);
    printf("Digite a quantidade de camisetas medias vendidas: ");
    scanf("%d", &qtdeMedia);
    printf("Digite a quantidade de camisetas grandes vendidas: ");
    scanf("%d", &qtdeGrande);

    valorTotal = (qtdePequena * valorPequena) + (qtdeMedia * valorMedia) + (qtdeGrande * valorGrande);

    printf("O valor arrecadado com a venda foi de: %.2f", valorTotal);

    return 0;
}