//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exerc�cio 8
/*Programa que l� dois n�meros inteiros (hora e minutos)
e retorna quantos minutos se passaram*/

#include <stdio.h>

int main()
{
    int horas, minutos, tempo;

    scanf("%d %d", &horas, &minutos);

    tempo = (horas * 60) + minutos;

    printf("%d", tempo);

    return 0;
}
