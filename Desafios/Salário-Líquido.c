//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exerc�cio 6
/*Programa que l� o valor da hora aula, n�mero de horas de aula dadas no
m�s e o percentual de desconto, e retorna o sal�rio l�quido */

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
