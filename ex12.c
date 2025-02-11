#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salarioInicial, salarioAumento, salarioFinal;

    printf("Digite o salario inicial: ");
    scanf("%f", &salarioInicial);

    salarioAumento = salarioInicial + (salarioInicial * 0.15);
    salarioFinal = salarioAumento - (salarioAumento * 0.08);

    printf("Salario inicial: %.2f\n", salarioInicial);
    printf("Salario com o aumento: %.2f\n", salarioAumento);
    printf("Salario final: %.2f", salarioFinal);

    return 0;
}