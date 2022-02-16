//Luiz Fernando -- Matricula: 159325
//Lista 006 - Exercício 36
/*Programa que verifica se A∈ℤn×n é de permutação
(Uma matriz inteira A de ordem n é uma matriz de permutação 
se em cada linha e em cada coluna houver n-1 elementos nulos 
e um único elemento igual a 1.) */

#include <stdio.h>

#define NMAX 50

int main()
{
    int i, j, n, MATRIZ[NMAX][NMAX], elemento, nulo, cont;

    scanf("%d", &n);

    cont = 0;
    elemento = 0;
    nulo = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &MATRIZ[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (MATRIZ[i][j] > 0)
            {
                if ((MATRIZ[i][j] - 1) != 0)
                    nulo = 1;
            }
            if (MATRIZ[i][j] == 1)
            {
                cont++;
                if (cont > 1)
                    elemento = 1;
            }
        }
        cont = 0;
    }

    elemento = 0;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (MATRIZ[i][j] > 0)
            {
                if ((MATRIZ[i][j] - 1) != 0)
                    nulo = 1;
            }
            if (MATRIZ[j][i] == 1)
            {
                cont++;
                if (cont > 1)
                    elemento = 1;
            }
        }
        cont = 0;
    }

    if ((nulo == 0) && (elemento == 0))
        printf("A é uma matriz de permutação");
    else
        printf("A não é uma matriz de permutação");

    return 0;
}