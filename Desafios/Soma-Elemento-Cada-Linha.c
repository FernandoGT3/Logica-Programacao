//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 4
/* Programa que lê e armazena um conjunto de números inteiros
e imprime a soma dos elementos de cada linha*/

#include <stdio.h>

#define NMAX 100
#define MMAX 100

int main()
{
    int i, j, m, n, matriz[MMAX][NMAX], soma;

    scanf("%d %d", &m, &n);

    soma = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
        printf("%d ", soma);
        soma = 0;
    }

    return 0;
}
