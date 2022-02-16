//Luiz Fernando -- Matricula: 159325
//Lista 009 - Exercício 7
/*Programa que possui um procedimento que recebe dois números reais 
correspondentes a uma coordenada cartesiana x e y como parâmetros de entrada 
e retorna (passagem por referência) os seus valores convertidos em coordenadas 
polares ρ e θ.*/

#include <stdio.h>
#include <math.h>

void ConvertePolares(double *a, double *b)
{
    double p, teta;
    p = sqrt(pow(*a, 2) + pow(*b, 2));
    teta = atan2(*b, *a);
    *a = p;
    *b = teta;
}

int main()
{
    double x, y, teta;

    scanf("%lf %lf", &x, &y);

    ConvertePolares(&x, &y);

    printf("%lf %lf ", x, y);

    return 0;
}