//Luiz Fernando -- Matricula: 159325
//Tarefa 009 - Exercício 3
/*Programa que lê e armazena um conjunto de números inteiros
e retorna o maior deles usando uma função*/

#include <stdio.h>
#define MAX 100

int maior(int VETOR[MAX], int tam)
{
    int i, maior;

    maior = 0;

    for (i = 0; i < tam; i++)
    {
        if ((VETOR[0 + i]) >= maior)
            maior = VETOR[0 + i];
    }
    return maior;
}

int main()
{
    int i, n, A[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("%d", maior(A, n));

    return 0;
}