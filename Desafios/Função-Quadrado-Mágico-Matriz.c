//Luiz Fernando -- Matricula: 159325
//Tarefa 009 - Exercício 6
/*Programa que lê e armazena um conjunto de números inteiros
e verifica se a matriz forma um quadrado mágico, imprimindo o valor
do quadrado se for verdadeira, ou zero se for falsa*/

#include <stdio.h>
#define NMAX 100

int somaLinha(int A[NMAX][NMAX], int ordem)
{
    int i, j, soma;
    for (i = 0; i < ordem; i++)
    {
        soma = 0;
        for (j = 0; j < ordem; j++)
        {
            soma = soma + A[i][j];
        }
    }
    return soma;
}

int somaColuna(int A[NMAX][NMAX], int ordem)
{
    int i, j, soma;
    for (j = 0; j < ordem; j++)
    {
        soma = 0;
        for (i = 0; i < ordem; i++)
        {
            soma = soma + A[i][j];
        }
    }
    return soma;
}

int somaDiagPrim(int A[NMAX][NMAX], int ordem)
{
    int i, soma;
    soma = 0;
    for (i = 0; i < ordem; i++)
        soma = soma + A[i][i];
    return soma;
}

int somaDiagSec(int A[NMAX][NMAX], int ordem)
{
    int i, soma;
    soma = 0;
    for (i = 0; i < ordem; i++)
        soma = soma + A[i][(ordem - i) - 1];
    return soma;
}

int magico(int soma, int somaComparativa)
{
    if ((soma == somaComparativa))
        return 1;
    else
        return 0;
}

int main()
{
    int n, i, j, MATRIZ[NMAX][NMAX], somaL, somaC,
        somaD1, somaD2;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &MATRIZ[i][j]);

    somaL = somaLinha(MATRIZ, n);
    somaC = somaColuna(MATRIZ, n);
    somaD1 = somaDiagPrim(MATRIZ, n);
    somaD2 = somaDiagSec(MATRIZ, n);

    if (magico(somaL, somaC) == 1)
        if (magico(somaD1, somaD2) == 1)
            printf("%d", somaL);
        else
            printf("0");

    return 0;
}