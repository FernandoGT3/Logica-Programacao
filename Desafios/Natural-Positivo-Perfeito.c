//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 4
/*Programa que lê um numero inteiro e retorna se é um número inteiro natural
positivo perfeito*/

#include <stdio.h>

int main()
{
    int numero, i, contador, soma, x;

    scanf("%d", &numero);

    i = 1;
    while (i < numero)
    {
        if ((numero % i) == 0)
        {
            soma = soma + i;
        }
        i = i + 1;
    }

    if (soma == numero)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}