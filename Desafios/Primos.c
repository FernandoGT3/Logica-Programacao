//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 2
/*Programa que lê um numero inteiro e retorna se é primo ou não*/

#include <stdio.h>

int main()
{
    int numero, x, divisores;

    scanf("%d", &numero);

    x = 1;
    divisores = 0;
    if (numero > 0)
    {
        while (x <= numero)
        {
            if ((numero % x) == 0)
            {
                divisores = divisores + 1;
            }
            x = x + 1;
        }
    }
    else
    {
        printf("nao");
    }

    if (divisores == 2)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}
