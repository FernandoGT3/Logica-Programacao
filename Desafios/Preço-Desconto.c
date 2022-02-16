//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 5
/*Programa que lê o preço à prazo de um produto e retorna
o seu preço à vista com desconto de 9%*/

#include <stdio.h>

int main()
{
    double precoPrazo, precoVista;

    scanf("%lf", &precoPrazo);

    precoVista = precoPrazo - (precoPrazo * 0.09);

    printf("%lf", precoVista);

    return 0;
}
