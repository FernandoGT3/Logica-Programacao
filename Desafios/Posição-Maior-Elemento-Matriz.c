//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 3
/* Programa que lê e armazena um conjunto de números inteiros
e imprime a posição do maior elemento*/

#include <stdio.h>

#define NMAX 100
#define MMAX 100

int main()
{
    int i, j, m, n, matriz[MMAX][NMAX], maior, linha, coluna;

    scanf("%d %d", &m, &n);

    maior = 0;
    linha = 0;
    coluna = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("%d %d", linha, coluna);

    return 0;
}
