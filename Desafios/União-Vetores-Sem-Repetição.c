//Luiz Fernando -- Matricula: 159325
//Tarefa 010 - Exercício 3
/* Programa que possui uma rotina que recebe como parâmetros um número inteiro M,
um conjunto A de M números inteiros, um número inteiro N, um conjunto B
de N números inteiros, o endereço de uma variável P (inteira) e C do tipo
conjunto de P números inteiros. E deposita na variável C o resultado da união dos 
conjuntos A e B, sem números repetidos, e na variável P o número de elementos do conjunto C.
Imprimindo a soma de todos os elementos do conjunto C*/

#include <stdio.h>

#define MMAX 100
#define NMAX 100
#define PMAX 200

int Uniao(int ordemM, int vetorA[MMAX], int ordemN, int vetorB[NMAX],
          int *ordemP, int vetorC[PMAX])
{
    int i, j, soma, cont;

    soma = 0;

    for (i = 0; i < ordemM; i++)
    {
        vetorC[i] = vetorA[i];
        *ordemP = *ordemP + 1;
    }

    for (i = 0; i < ordemN; i++)
    {
        vetorC[i + ordemM] = vetorB[i];
        *ordemP = *ordemP + 1;
    }

    cont = 0;
    for (i = 0; i < *ordemP; i++)
    {
        for (j = 0; j < *ordemP; j++)
        {
            if (vetorC[i] == vetorC[j])
            {
                cont++;
                if (cont > 1)
                {
                    vetorC[i] = " ";
                }
            }
        }
        cont = 0;
    }

    for (i = 0; i < *ordemP; i++)
    {
        if (vetorC[i] != " ")
            soma += vetorC[i];
    }

    return soma;
}

int main()
{
    int m, n, p, i, A[MMAX], B[NMAX], C[PMAX], soma;

    p = 0;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        scanf("%d", &A[i]);

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &B[i]);

    printf("%d", Uniao(m, A, n, B, &p, C));

    return 0;
}