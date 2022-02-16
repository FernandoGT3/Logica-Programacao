//Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 2
/* Programa que lê e armazena um conjunto de números inteiros
e retorna os valores lidos seguidos com o número de vezes que este 
se repete*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, VETOR[MAX], i, j, cont;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &VETOR[i]);
    }

    cont = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (VETOR[i] == VETOR[j])
            {
                cont++;
                if (cont > 1)
                    VETOR[j] = "";
            }
        }
        if (VETOR[i] != "")
            printf("%d %d\n", VETOR[i], cont);

        cont = 0;
    }

    return 0;
}
