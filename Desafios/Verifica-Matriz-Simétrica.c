//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 2
/*Programa que lê e armazena um conjunto de números inteiros
e imprime a se a matriz é simetrica (1) ou não (0)*/

#include <stdio.h>

#define NMAX 100

int main()
{
    int i, j, n, matriz[NMAX][NMAX], matrizTrans[NMAX][NMAX], resposta;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matrizTrans[j][i] = matriz[i][j];
        }
    }

    resposta = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (matrizTrans[i][j] != matriz[i][j])
            {
                resposta = 0;
            }
    }

    printf("%d", resposta);

    return 0;
}