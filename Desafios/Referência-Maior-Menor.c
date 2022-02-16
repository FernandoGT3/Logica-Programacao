//Luiz Fernando -- Matricula: 159325
//Tarefa 010 - Exercício 1
/* Programa que possui um procedimento que recebe como parâmetros um número inteiro N,
um conjunto de N números inteiros e os endereços de duas variàveis inteiras,
min e max, e deposita nessas variáveis o valor do menor e do maior elemento
desse conjunto.*/

#include <stdio.h>

#define MAX 100

void MaiorMenor(int n, int conjunto[MAX], int *menor, int *maior)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (conjunto[i] >= *maior)
            *maior = conjunto[i];
        if (conjunto[i] <= *menor)
            *menor = conjunto[i];
    }
}

int main()
{
    int n, i, conjunto[MAX], min, max;

    scanf("%d", &n);

    min = 9999;
    max = 0;

    for (i = 0; i < n; i++)
        scanf("%d", &conjunto[i]);

    MaiorMenor(n, conjunto, &min, &max);

    printf("%d %d", min, max);

    return 0;
}