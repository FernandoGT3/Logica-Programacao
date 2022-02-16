//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 1
//Programa que converte Celsius para Fahrenheits

#include <stdio.h>

int main ()
{
    double tempC, tempF;

    scanf("%lf", &tempC);

    tempF = (9 * tempC + 160)/5;

    printf("%lf", tempF);

    return 0;
}

