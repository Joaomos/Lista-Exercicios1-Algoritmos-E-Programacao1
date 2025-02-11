#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fatiaPresunto = 50, fatiaQueijo = 50, Hamburguer = 100, qtdeSanduiches, qtdePresunto, qtdeQueijo, qtdeHamburguer;
    
    printf("Digite a quantidade de sanduiches a serem feitos: ");
    scanf("%d", &qtdeSanduiches);

    qtdeQueijo= (qtdeSanduiches * (fatiaQueijo * 2)) / 1000;
    qtdePresunto = (qtdeSanduiches * fatiaPresunto) / 1000;
    qtdeHamburguer = (qtdeSanduiches *  Hamburguer) / 1000;

    printf("Quantidade de queijo (em quilos): %d\n", qtdeQueijo);
    printf("Quantidade de presunto (em quilos): %d\n", qtdePresunto);
    printf("Quantidade de hamburguer (em quilos): %d", qtdeHamburguer);
    
    return 0;
}