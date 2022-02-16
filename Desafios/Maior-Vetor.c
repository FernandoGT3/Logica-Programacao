//Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 1
/* Programa que lê e armazena um conjunto de números inteiros
e retorna o maior deles */

#include <stdio.h>
#define MAX 100

int main()
{
    int n, VETOR[MAX], i, maior;

    scanf("%d", &n);

    maior = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &VETOR[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (VETOR[i] >= maior)
            maior = VETOR[i];
    }

    printf("%d", maior);

    return 0;
}