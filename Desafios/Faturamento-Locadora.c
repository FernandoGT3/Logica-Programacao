//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 10
/* Programa que lê a quantidade de fitas e o valor cobrado por aluguel e retorna
o faturamento, o valor ganho com multas e a quantidade de fitas que a locatora
terá no final do ano */

#include <stdio.h>

int main()
{
    int quantFita, alugadas, totalFita, estragadas;
    double valorFita, faturamento, valorMulta;

    scanf("%d %lf", &quantFita, &valorFita);

    alugadas = (quantFita/3);
    faturamento = alugadas * valorFita;
    valorMulta = (alugadas/10)*(valorFita*0.1);
    estragadas = (quantFita * 0.02);
    totalFita = quantFita - estragadas + (estragadas/10);

    printf("%lf\n%lf\n%d\n", faturamento, valorMulta, totalFita);


    return 0;
}
