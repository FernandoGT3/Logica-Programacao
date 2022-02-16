//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 1
/*Programa que lê dois números inteiros e efetua a multiplicação
entre eles usando apenas soma e subtração*/

#include <stdio.h>

int main()
{
    int num1, num2, x, multiplicacao, y;

    scanf("%d %d", &num1, &num2);
    x = 1;
    y = -1;
    multiplicacao = 0;

    if (num1 > 0 && num2 > 0)
    {
        while (x <= num1)
        {
            multiplicacao = multiplicacao + num2;
            x = x + 1;
        }
        printf("%d", multiplicacao);
    }
    else
    {
        if (num1 < 0 && num2 < 0)
        {
            while (y >= num1)
            {
                multiplicacao = multiplicacao - num2;
                y = y - 1;
            }
            printf("%d", multiplicacao);
        }
        else
        {
            if (num1 > 0 && num2 < 0)
            {
                while (y >= num2)
                {
                    multiplicacao = multiplicacao - num1;
                    y = y - 1;
                }
                printf("%d", multiplicacao);
            }
            else
            {
                while (y >= num1)
                {
                    multiplicacao = multiplicacao - num2;
                    y = y - 1;
                }
                printf("%d", multiplicacao);
            }
        }
    }
    return 0;
}