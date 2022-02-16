//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 5
/*Programa que lê um numero inteiro e retorna o seu valor do n-ésimo
termo da serie de Fibonacci*/

#include <stdio.h>

int main()
{
    int numero, fibonacci, i, x, y;

    scanf("%d", &numero);

    i = 2;
    x = 0;
    y = 1;
    if (numero <= 2)
    {
        if (numero == 1 || numero == 2)
        {
            fibonacci = 1;
        }
        else
        {
            fibonacci = 0;
        }
    }
    else
    {
        while (i <= numero)
        {
            fibonacci = x + y;
            x = y;
            y = fibonacci;
            i = i + 1;
        }
    }

    printf("%d", fibonacci);

    return 0;
}