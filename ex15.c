#include <stdio.h>
#include <stdlib.h>

int main()
{

    int qtde350, qtde600, qtde2000;
    float totalLitros;

    printf("Digite a quantidade de latas de 350 ml compradas: ");
    scanf("%d", &qtde350);
    printf("Digite a quantidade de garrafas de 600 ml compradas: ");
    scanf("%d", &qtde600);
    printf("Digite a quantidade de garrafas de 2 litros compradas: ");
    scanf("%d", &qtde2000);

    totalLitros = ((qtde350 * 350) + (qtde600 * 600) + (qtde2000 * 2000)) / 1000;

    printf("O total de litros de refrigerante que ele comprou foi de: %.2f", totalLitros);

    return 0;
}