//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 1
/* Programa que lê e armazena um conjunto de números inteiros
e imprime a matriz transposta*/

#include <stdio.h>

#define NMAX 100
#define MMAX 100

int main()
{
    int i, j, m, n, matriz[MMAX][NMAX], matrizTrans[MMAX][NMAX];

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            matrizTrans[j][i] = matriz[i][j];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", matrizTrans[i][j]);
        printf("\n");
    }

    return 0;
}
