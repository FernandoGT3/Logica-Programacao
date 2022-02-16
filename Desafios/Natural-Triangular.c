//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 3
/*Programa que lê um numero inteiro e retorna se é um número natural 
triangular*/

#include <stdio.h>

int main()
{
    int numero, i;

    scanf("%d", &numero);

    i = 1;
    while ((i * (i + 1) * (i + 2)) <= numero)
    {
        i = i + 1;
    }
    if (((i - 1) * i * (i + 1)) == numero)
    {
        printf("sim");
    }
    else
    {
        printf("nao");
    }

    return 0;
}