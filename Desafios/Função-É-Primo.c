//Luiz Fernando -- Matricula: 159325
//Tarefa 009 - Exercício 1
/* Progama que contém uma função que recebe como parâmetro um número inteiro
e retorna 1 se esse numero for primo, ou 0 caso contrário. Ao final,
esecre "sim" se o número for primo ou "não".*/

#include <stdio.h>

int primo(numero)
{
    int x, divisores;

    x = 1;
    divisores = 0;
    if (numero > 0)
    {
        while (x <= numero)
        {
            if ((numero % x) == 0)
            {
                divisores++;
            }
            x++;
        }
    }
    else
        return 0;

    if (divisores == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    if (primo(n) == 1)
    {
        printf("sim");
    }
    else
        printf("nao");

    return 0;
}