//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exercício 6
/*Programa que lê dois números inteiros e o sinal de operação. Imprime 
o resultado da operação, e se for uma divisão ele imprime o resultado seguido
de uma vírgula e o resto da divisão*/

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, soma, subtracao, multiplicacao, divisao, resto;
    char operador;

    scanf("%c %d %d", &operador, &a, &b);

    if (operador == '+' || operador == '-' || operador == '*' || operador == '/')
    {
        if (operador == '+')
        {
            soma = a + b;
            printf("%d\n", soma);
        }
        else if (operador == '-')
        {
            subtracao = a - b;
            printf("%d\n", subtracao);
        }
        else if (operador == '*')
        {
            multiplicacao = a * b;
            printf("%d\n", multiplicacao);
        }
        else if (operador == '/' && b != 0)
        {
            divisao = a / b;
            resto = a % b;
            printf("%d,%d\n", divisao, resto);
        }
        else
        {
            printf("Divisao por zero.\n");
        }
    }
    else
    {
        printf("Operacao invalida.\n");
    }
    return 0;
}