//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 6
/* Programa que lê e armazena um conjunto de números inteiros
e verifica se a matriz forma um quadrado mágico, imprimindo o valor
do quadrado se for verdadeira, ou zero se for falsa*/

#include <stdio.h>

#define NMAX 100

int main()
{
    int i, j, ordem, matriz[NMAX][NMAX], somaLinha, magico;
    int somaColuna, somaDiagPrim, somaDiagSec, valor;

    scanf("%d", &ordem);

    magico = 1;
    somaDiagSec = 0;
    somaDiagPrim = 0;
    valor = 0;

    for (i = 0; i < ordem; i++)
    {
        for (j = 0; j < ordem; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < ordem; i++)
    {
        somaLinha = 0;
        for (j = 0; j < ordem; j++)
        {
            somaLinha = somaLinha + matriz[i][j];
        }
        valor = somaLinha;
        if (somaLinha != valor)
            magico = 0;
    }

    for (j = 0; j < ordem; j++)
    {
        somaColuna = 0;
        for (i = 0; i < ordem; i++)
        {
            somaColuna = somaColuna + matriz[i][j];
        }
        if (somaColuna != valor)
            magico = 0;
    }

    for (i = 0; i < ordem; i++)
        somaDiagPrim = somaDiagPrim + matriz[i][i];
    if (somaDiagPrim != valor)
        magico = 0;

    for (i = 0; i < ordem; i++)
    {
        somaDiagSec = somaDiagSec + matriz[i][(ordem - i) - 1];
    }
    if (somaDiagSec != somaDiagPrim)
        magico = 0;

    if (magico == 1)
        printf("%d", valor);
    else
    {
        valor = 0;
        printf("%d", valor);
    }

    return 0;
}