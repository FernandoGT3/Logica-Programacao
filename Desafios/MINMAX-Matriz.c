//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 5
/* Programa que lê e armazena um conjunto de números inteiros
e imprime o MINMAX( o maior elemento da linha onde se encontra o menor
elemento do vetor */

#include <stdio.h>

#define NMAX 100
#define MMAX 100

int main()
{
    int i, j, m, n, matriz[MMAX][NMAX], MINMAX, menor, linha, coluna, x, y;

    scanf("%d %d", &m, &n);

    menor = 99;
    MINMAX = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    for (i = linha; i <= linha; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] > MINMAX)
            {
                MINMAX = matriz[i][j];
                x = i;
                y = j;
            }
        }
    }

    printf("%d %d", x, y);

    return 0;
}