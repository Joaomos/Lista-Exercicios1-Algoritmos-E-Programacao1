#include <stdio.h>
#include <stdlib.h>

int main()
{

    float precoGasolina, valorPagamento, litrosColocados;

    printf("Digite o preco do litro da gasolina: ");
    scanf("%f", &precoGasolina);

    printf("Digite o valor do pagamento: ");
    scanf("%f", &valorPagamento);

    litrosColocados = valorPagamento / precoGasolina;

    printf("A quantidade de litros que deu pra colocar no tanque foi de: %.2f litros", litrosColocados);

    return 0;
}