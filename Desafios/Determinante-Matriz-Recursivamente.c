//Luiz Fernando -- Matricula: 159325
//Lista 010 - Exercício 25
/* Um programa que possui uma rotina recursiva para calcular o determinante de uma matriz de ordem n
usando o método descrito abaixo.

Seja A uma matriz quadrada de ordem n. O menor complementar Mij, de um elemento aij da matriz A 
é definido como o determinante da matriz quadrada de ordem n-1 obtida a partir da matriz A, 
excluindo os elementos da linha i e da coluna j. Assim, o determinante de uma matriz quadrada A 
de ordem n pode ser calculado da seguinte maneira:

Det(A) = a11 · M11 - a12 · M12 + a13 · M13 - ... */

#include <stdio.h>

#define MAX 100

int Determinante(int ordem, int A[MAX][MAX])
{
    int i, linha, coluna, iNovaM, jNovaM;
    int s = 1;
    int determinante = 0;
    int matAux[MAX][MAX];

    if (ordem == 1)
        return A[0][0];

    if (ordem == 2)
        return (A[0][0] * A[1][1] - A[1][0] * A[0][1]);
    else
    {
        determinante = 0;
        for (i = 0; i <= ordem - 1; i++)
        {
            iNovaM = 0;
            jNovaM = 0;

            for (linha = 0; linha < ordem; linha++)
            {
                for (coluna = 0; coluna < ordem; coluna++)
                {
                    matAux[linha][coluna] = 0;
                    if (linha != 0 && coluna != i)
                    {
                        matAux[iNovaM][jNovaM] = A[linha][coluna];
                        if (jNovaM < ordem - 2)
                            jNovaM++;
                        else
                        {
                            jNovaM = 0;
                            iNovaM++;
                        }
                    }
                }
            }
            determinante = determinante + s * (A[0][i] * Determinante(ordem - 1, matAux));
            s = -1 * s;
        }
    }
    return determinante;
}

int main()
{
    int i, j, n, MATRIZ[MAX][MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &MATRIZ[i][j]);

    printf("%d", Determinante(n, MATRIZ));

    return 0;
}