//Luiz Fernando -- Matricula: 159325
//Tarefa 010 - Exercício 2
/* Programa que possui uma função que recebe como parâmetros dois 
números inteiros M e N, uma matriz de MxN números inteiros e os endereços 
de duas variáveis ( linha e coluna ) e deposita nessas variáveis a posição 
do elemento MINMAX(maior elemento da linha onde se encontra o menor elemento
elemento da matriz) */

#include <stdio.h>

#define MMAX 100
#define NMAX 100

int MINMAX(int m, int n, int MATRIZ[MMAX][NMAX], int *linhaM, int *colunaM)
{
    int i, j, valorMinMax, menor;

    menor = 99;
    valorMinMax = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (MATRIZ[i][j] < menor)
            {
                menor = MATRIZ[i][j];
                *linhaM = i;
            }
        }
    }

    for (i = *linhaM; i <= *linhaM; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (MATRIZ[i][j] > valorMinMax)
            {
                valorMinMax = MATRIZ[i][j];
                *colunaM = j;
            }
        }
    }

    return valorMinMax;
}

int main()
{
    int m, n, i, j, A[MMAX][NMAX], linha, coluna, valor;

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    valor = MINMAX(m, n, A, &linha, &coluna);

    printf("%d %d %d", linha, coluna, valor);

    return 0;
}