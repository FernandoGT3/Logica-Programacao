//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exerc�cio 2
/*Programa que l� um n�mero real e retorna sua raiz quadrada se for positivo,
mas se for um n�mero negativo retorna o seu quadrado*/

#include <stdio.h>
#include <math.h>

int main()
{
    double num, raiz, quadrado;

    scanf("%lf", &num);
    if (num >= 0)
    {
        raiz = sqrt(num);
        printf("%lf", raiz);
    }
    else
    {
        quadrado = pow(num, 2);
        printf("%lf", quadrado);
    }

    return 0;
}
