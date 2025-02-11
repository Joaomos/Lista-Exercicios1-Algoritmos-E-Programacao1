#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precoQuilo, pesoPrato, valorAPagar;

    precoQuilo = 12;

    printf("Digite o peso do prato montado: ");
    scanf("%f", &pesoPrato);

    valorAPagar = pesoPrato * precoQuilo;

    printf("O valor que o cliente deve pagar e de: R$ %.2f", valorAPagar);

    return 0;
}