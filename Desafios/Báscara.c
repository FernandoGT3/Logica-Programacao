//Luiz Fernando -- Matricula: 159325
//Lista 009 - Exercício 13
/* Escreva uma função, que receba três coeficientes relativos à uma equação de segundo grau (a×x2 + b×x+c=0) 
e calcule suas raízes através da fórmula de Báscara:

x = -b ± √Δ/2a

Δ=b2-4ac

A função deve levar em conta a possibilidade da existência de nenhuma, uma ou duas raízes. 
A função deve retornar o número de raízes ou -1 em caso de inconsistência. Os valores das raízes devem 
ser retornados (passagem por referência). Faça também um programa para utilizar a função construída.*/

#include <stdio.h>
#include <math.h>
#define MAX 100

typedef struct
{
    double x1, x2;
    double x;
    char invalido;
} regRaizes;

regRaizes CalulaRaizes(double a, double b, double c, regRaizes Raizes)
{
    double delta, x1, x2;

    Raizes.x = 0;
    Raizes.x1 = 0;
    Raizes.x2 = 0;
    Raizes.invalido = 'n';

    delta = (b * b) - 4 * (a * c);

    if (delta == 0)
    {
        Raizes.x = ((-b) - (sqrt(delta))) / (2 * a);
    }
    if (delta > 0)
    {
        Raizes.x1 = ((-b) - (sqrt(delta))) / (2 * a);

        Raizes.x2 = ((-b) + (sqrt(delta))) / (2 * a);
    }
    if (delta < 0)
        Raizes.invalido = '-1';

    return Raizes;
}

int main()
{
    double a, b, c;
    regRaizes Raizes;

    scanf("%lf %lf %lf", &a, &b, &c);
    Raizes = CalulaRaizes(a, b, c, Raizes);

    if (Raizes.invalido != '-1')
    {
        if (Raizes.x != 0)
            printf("%lf %lf", Raizes.x1, Raizes.x2);
        else
            printf("%lf", Raizes.x);
    }
    return 0;
}