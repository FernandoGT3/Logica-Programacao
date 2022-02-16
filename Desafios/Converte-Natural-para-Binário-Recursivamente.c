//Luiz Fernando -- Matricula: 159325
//Tarefa 011 - Exercício 1
/*Programa que possui um procedimento recursivo que recebe como
parâmetro um número natural e imprime em representação binaria */

#include <stdio.h>

void ConverteBinario(int numero)
{
    if (numero > 1)
    {
        ConverteBinario(numero / 2);
        numero = (numero % 2);
        printf("%d", numero);
    }
    else
        printf("%d", numero);
}

int main()
{
    int n;

    scanf("%d", &n);

    ConverteBinario(n);

    return 0;
}