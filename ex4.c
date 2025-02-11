#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos, horas, minutos;

    printf("Digite o tempo de duracao do evento em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;

    printf("Tempo em horas: %d\n", horas);
    printf("Tempo em minutos: %d\n", minutos);
    printf("Tempo em segundos: %d\n", segundos);

    return 0;
}