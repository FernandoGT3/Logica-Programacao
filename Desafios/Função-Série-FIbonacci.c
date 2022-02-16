//Luiz Fernando -- Matricula: 159325
//Tarefa 009 - Exercício 2
/*Programa que lê um numero inteiro e retorna o seu valor do n-ésimo
termo da serie de Fibonacci*/

#include <stdio.h>

int fibonacci(numero)
{
    int i, x, y, fib;
    x = 0;
    y = 1;
    i = 2;
    if (numero <= 2)
    {
        if (numero == 1 || numero == 2)
        {
            fib = 1;
        }
        else
        {
            fib = 0;
        }
    }
    else
    {
        while (i <= numero)
        {
            fib = x + y;
            x = y;
            y = fib;
            i++;
        }
    }
    return fib;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fibonacci(n));

    return 0;
}