//Luiz Fernando -- Matricula: 159325
//Lista 009 - Exercício 14
/* Programa que possui um procedimento que lê uma matriz de inteiros positivos 
de dimensões desconhecidas. O programa irá ler os números e salvá-los, exceto
quando ele for menor que 0. Se o número lido for -1, é considerado como um delimitador 
que diz o final da linha. Se for -2, a matriz completa foi lida. Além de ler a matriz,
o procedimento retorna a quantidade de colunas e a quantidade de linhas. 
As variáveis da matriz, do número de colunas e do número de linhas são
passadas por referência. Declare sua matriz utilizando um valor de tamanho máximo.*/

#include <stdio.h>
#define MAX 100

void LeMatriz(int MATRIZ[MAX][MAX], int *linha, int *coluna)
{
    int numero;
    int i = 0;
    int j = 0;
    int maior = 0;

    scanf("%d", &numero);
    while (numero != -2)
    {
        if (numero >= 0)
        {
            MATRIZ[i][j] = numero;
            j = j + 1;
            if (j >= maior)
                maior = j;
        }
        else
        {
            if (numero == -1)
            {
                if (j >= maior)
                    maior = j;
                j = 0;
                i = i + 1;
            }
        }
        scanf("%d", &numero);
    }

    *linha = i + 1;
    *coluna = maior;
    //printf("%d %d\n", *linha, *coluna);

    for (i = 0; i < *linha; i++)
    {
        for (j = 0; j < *coluna; j++)
        {
            printf("%d ", MATRIZ[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[MAX][MAX], i, j;

    for (i = 0; i < MAX; i++)
        for (j = 0; j < MAX; j++)
            A[i][j] = 0;

    LeMatriz(&A, &i, &j);

    printf("%d %d", i, j);

    return 0;
}