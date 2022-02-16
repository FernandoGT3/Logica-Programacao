//Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 6
/* Programa que lê e armazena dois conjuntos de números inteiros
entre 0 e 9 e calcula a sequencia de números que representa
a soma desses dois inteiros*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, A[MAX], B[MAX], SOMA[MAX], diferenca, resto, quociente;

    scanf("%d", &n);

    diferenca = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d ", &B[i]);
    }

    for (i = (n - 1); i >= 0; i--)
    {
        SOMA[i] = A[i] + B[i] + diferenca;

        if (SOMA[i] > 9 && (i != 0))
        {
            diferenca = SOMA[i] / 10;
            SOMA[i] = (SOMA[i] % 10);
        }
        else
            diferenca = 0;
    }

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (SOMA[i] > 9)
            {
                resto = SOMA[i] % 10;
                quociente = SOMA[i] / 10;
                printf("%d %d ", quociente, resto);
            }
            else
                printf("%d ", SOMA[i]);
        }
        else
            printf("%d ", SOMA[i]);
    }
    return 0;
}