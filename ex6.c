#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, comprimento, areaRetangulo;

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    printf("Digite o comprimento do retangulo: ");
    scanf("%f", &comprimento);

    areaRetangulo = altura * comprimento;

    printf("A area do retangulo e: %.2f", areaRetangulo);

    return 0;
}