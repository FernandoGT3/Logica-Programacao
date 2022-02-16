//Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 3
/* Programa que lê e armazena dois conjunto de números inteiros
e retorna a multiplicação entre os elementos de mesmo indice, 
gerando um novo vetor*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, A[MAX], B[MAX], i, C[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < n; i++)
    {
        C[i] = (A[i] * B[i]);
        printf("%d ", C[i]);
    }

    return 0;
}