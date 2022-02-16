//Luiz Fernando -- Matricula: 159325
//Tarefa 011 - Exercício 3
/*Programa que possui um procedimento recursivo que recebe como parâmetro
um numero inteiro N e uma sequencia de N números inteiros e imprime a 
sequencia em ordem inversa */

#include <stdio.h>
#define MAX 100

void InverteSequencia(int tam, int B[MAX])
{
    if (tam != 1)
    {
        printf("%d ", B[tam - 1]);
        InverteSequencia((tam - 1), B);
    }
    else
        printf("%d ", B[0]);
}

int main()
{
    int i, n, A[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    InverteSequencia(n, A);

    return 0;
}