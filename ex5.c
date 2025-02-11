#include <stdio.h>
#include <stdlib.h>

int main() 
{

    float custoAoConsumidor, custoDeFabrica, percentagemDistribuidor, impostos;
    percentagemDistribuidor = 0.28;
    impostos = 0.45;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoDeFabrica);

    custoAoConsumidor = custoDeFabrica + (custoDeFabrica * percentagemDistribuidor) + (custoDeFabrica * impostos);

    printf("O custo ao consumidor e de: %.2f", custoAoConsumidor);

    return 0;
}