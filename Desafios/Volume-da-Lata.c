//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 7
/*Programa que lê dois números reais (altura e raio)
de uma lata e retorna o seu volume*/

#include <stdio.h>
#include <math.h>

int main()
{
    double lataH, lataR, lataV;

    scanf("%lf %lf", &lataH, &lataR);

    lataV = 3.14 * lataH * pow(lataR, 2);

    printf("%lf", lataV);

    return 0;
}
