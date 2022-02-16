//Luiz Fernando -- Matricula: 159325
//Tarefa 008 - Exercício 7
/* Programa que dadas as configurações do tabuleiro e uma sequência de 
disparos feitos por um jogador, determina o número de navios do outro
jogador que foram destruidos.*/

#include <stdio.h>

#define NMAX 100
#define MMAX 100

int main()
{
    int i, j, m, n, k, destruidos, disparos, tiroX, tiroY;
    char tabuleiro[MMAX][NMAX];

    scanf("%d %d", &m, &n);

    destruidos = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf(" %c", &tabuleiro[i][j]);

    scanf("%d", &disparos);

    for (k = 0; k < disparos; k++)
    {
        scanf("%d %d", &tiroX, &tiroY);
        if (tabuleiro[tiroX - 1][tiroY - 1] != '.')
        {
            destruidos++;
        }
    }

    printf("%d", destruidos);

    return 0;
}