#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdePaesFranceses, qtdeBroas;
    float precoPaesFranceses, precoBroas, valorArrecadado, poupanca;

    precoPaesFranceses = 0.12;
    precoBroas = 1.5;

    printf("Digite a quantidade de paes franceses vendidos: ");
    scanf("%d", &qtdePaesFranceses);

    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &qtdeBroas);

    valorArrecadado = (qtdePaesFranceses * precoPaesFranceses) + (qtdeBroas * precoBroas);
    poupanca = valorArrecadado * 0.10;

    printf("O valor arrecadado com a venda dos paes e broas foi de: R$ %.2f\n", valorArrecadado);
    printf("O valor que deve ser guardado na poupanca e de: R$ %.2f", poupanca);
    return 0;
}