
//Luiz Fernando
/*Descrição
Os elementos aij de uma matriz inteira A representam os custos de transporte da cidade i para a cidade j. 
Dados n itinerários, cada um com k cidades, escreva um programa que determine o custo total para cada itinerário.

Exemplo:

4 & 1 & 2 & 3
5 & 2 & 1 & 400
2 & 1 & 3 & 8
7 & 1 & 2 & 5
O custo do itinerário 1 4 2 4 4 3 2 1 é a14 + a42 + a24 + a44 + a43 + a32 + a21 = 417

Entrada
A entrada deve conter um número inteiro m<=50, seguidos de m×m números inteiros da matriz A. 
Em seguida, deve ser lido um inteiro n indicando a quantidade de itinerários. Para cada itinerário, 
deve ser lido um inteiro k com a quantidade de cidades contidas no itinerário, seguido de k inteiros 
representando as cidades visitadas.*/

#include <stdio.h>

#define MAX 50

int main()
{
    int m, i, j, A[MAX][MAX], n, k, iti[MAX], y, p, h;
    int linha = 0;
    int coluna = 0;
    int cont = 0;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &k);
        for (j = 0; j < k; j++)
        {
            scanf("%d", &iti[j]);
        }
        p = 0;
        linha = iti[p];
        while (p < k - 1)
        {
            coluna = iti[p + 1];
            cont = cont + A[linha - 1][coluna - 1];
            linha = coluna;
            p++;
        }
        printf("%d \n", cont);
        cont = 0;
    }

    return 0;
}