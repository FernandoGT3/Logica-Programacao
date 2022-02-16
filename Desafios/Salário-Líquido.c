//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 6
/*Programa que lê o valor da hora aula, número de horas de aula dadas no
mês e o percentual de desconto, e retorna o salário líquido */

#include <stdio.h>

int main()
{
    int horasMes;
    double descontoSal, valorHora, sal, salLiquido;


    scanf("%lf %d %lf", &valorHora, &horasMes, &descontoSal);

    sal = valorHora * horasMes;

    salLiquido = sal - (sal * (descontoSal/100));

    printf("%lf", salLiquido);

    return 0;
}
