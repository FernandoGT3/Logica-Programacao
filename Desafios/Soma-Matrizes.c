//Luiz Fernando -- Matricula: 159325
//Lista 006 - Exercício 13
/*Programa que lê duas matrizes reais de dimensão m×n, 
calcula e imprime a soma destas matrizes.*/

#include <stdio.h>

#define NMAX 50
#define MMAX 50

int main()
{
    int i, j, m, n;
    double A[MMAX][NMAX], B[MMAX][NMAX], C[MMAX][NMAX];

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%lf ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}