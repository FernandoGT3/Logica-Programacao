//Luiz Fernando -- Matricula: 159325
//Tarefa 011 - Exercício 2
/*Programa que possui uma função recursiva que recebe como parâmetro
um numero inteiro N e um conjunto de N números inteiros e retorna o 
valor do maior elemento */

#include <stdio.h>
#define MAX 100

int BuscaMaior(int tam, int B[MAX])
{
    int maior;

    if (tam == 1)
        return B[0];
    else
    {
        maior = BuscaMaior((tam - 1), B);
        if (maior > B[tam - 1])
            return maior;
        else
            return B[tam - 1];
    }
}

int main()
{
    int i, n, A[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("%d\n", BuscaMaior(n, A));

    return 0;
}