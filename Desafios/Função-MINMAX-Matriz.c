//Luiz Fernando -- Matricula: 159325
//Tarefa 009 - Exercício 5
/*Programa que lê e armazena um conjunto de números inteiros
e imprime o MINMAX( o maior elemento da linha onde se encontra o menor
elemento do vetor */

#include <stdio.h>
#define NMAX 100
#define MMAX 100

int MINMAX(int MATRIZ[MMAX][NMAX], int linha, int coluna)
{
    int i, j, menor, maior, linhaMenor;

    menor = 99;
    maior = 0;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (MATRIZ[i][j] < menor)
            {
                menor = MATRIZ[i][j];
                linhaMenor = i;
            }
        }
    }

    for (i = linhaMenor; i <= linhaMenor; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (MATRIZ[i][j] > maior)
                maior = MATRIZ[i][j];
        }
    }
    return maior;
}

int main()
{
    int i, j, m, n, A[MMAX][NMAX];

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("%d", MINMAX(A, m, n));

    return 0;
}