//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exerc�cio 5
/*Programa que l� o pre�o � prazo de um produto e retorna
o seu pre�o � vista com desconto de 9%*/

#include <stdio.h>

int main()
{
    double precoPrazo, precoVista;

    scanf("%lf", &precoPrazo);

    precoVista = precoPrazo - (precoPrazo * 0.09);

    printf("%lf", precoVista);

    return 0;
}
