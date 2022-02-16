//Luiz Fernando -- Matricula: 159325
//Lista 006 - Exercício 12
/*Programa que lê e armazena um conjunto de números reais
e imprime a soma de todos os elementos de uma matriz de ordem m×n.*/

#include <stdio.h>

#define NMAX 50
#define MMAX 50

int main()
{
    int i, j, m, n;
    double matriz[MMAX][NMAX], soma;

    scanf("%d %d", &m, &n);

    soma = 0.0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("%lf", soma);

    return 0;
}