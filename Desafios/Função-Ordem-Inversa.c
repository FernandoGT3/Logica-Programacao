//Luiz Fernando -- Matricula: 159325
//Tarefa 009 - Exercício 4
/*Programa que lê e armazena um conjunto de números inteiros
e imprime a sequência em ordem inversa usando uma função*/

#include <stdio.h>
#define MAX 100

void inverso(int B[MAX], int tam)
{
    int i, aux;

    for (i = 0; i < tam / 2; i++)
    {
        aux = B[i];
        B[i] = B[tam - 1 - i];
        B[tam - 1 - i] = aux;
    }
}

int main()
{
    int i, n, A[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    inverso(A, n);

    for (i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}