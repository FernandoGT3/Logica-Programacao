//Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 4
/* Programa que lê e armazena um conjunto de números inteiros
e um número X a ser procurado, retornando quantas vezes este se repete
e as posições*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, y, contador, VETOR[MAX], A[MAX], x;

    contador = 0;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &VETOR[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x == VETOR[i])
        {

            A[contador] = i;
            contador = contador + 1;
        }
    }
    printf("%d\n", contador);
    for (i = 0; i < contador; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}