//Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 5
/* Programa que lê e armazena um conjunto de números inteiros
e imprime a sequência em ordem inversa*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, VETOR[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &VETOR[i]);
    }

    for (i = (n - 1); i >= 0; i--)
    {
        printf("%d ", VETOR[i]);
    }
    return 0;
}