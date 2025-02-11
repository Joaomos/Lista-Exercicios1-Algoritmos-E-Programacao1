#include <stdio.h>
#include <stdlib.h>

int main()
{

    int qtdeFrangos;
    float anelChipPreco = 4, anelAlimentoPreco = 3.5, precoTotal;

    printf("Digite a quantidade de frangos da granja: ");
    scanf("%d", &qtdeFrangos);

    precoTotal = (qtdeFrangos * anelChipPreco) + (qtdeFrangos * (anelAlimentoPreco * 2));

    printf("O  gasto total da granja para marcar todos os seus frangos e de: %.2f", precoTotal);

    return 0;
}