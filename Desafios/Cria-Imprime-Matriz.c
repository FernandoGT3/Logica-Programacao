//Luiz Fernando -- Matricula: 159325
//Lista 006 - Exercício 15
/*Programa que gera e imprime a seguinte matriz de ordem 6
                1  1  1  1  1  1
                1  2  2  2  2  1
                1  2  3  3  2  1
                1  2  3  3  2  1
                1  2  2  2  2  1
                1  1  1  1  1  1 */

#include <stdio.h>

#define NMAX 6
#define MMAX 6

int main()
{
    int i, j, MATRIZ[MMAX][NMAX];

    for (i = 0; i < MMAX; i++)
    {
        for (j = 0; j < NMAX; j++)
        {
            MATRIZ[i][j] = 1;
            if ((i >= 1 && j >= 1) && (i != NMAX - 1) && (j != MMAX - 1))
            {
                MATRIZ[i][j] = 2;
            }
            if ((i >= 2 && j >= 2) && (i <= (NMAX - 3) && j <= (MMAX - 3)))
                MATRIZ[i][j] = 3;
            printf("%d ", MATRIZ[i][j]);
        }
        printf("\n");
    }

    return 0;
}