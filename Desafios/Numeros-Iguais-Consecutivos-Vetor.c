//Luiz Fernando -- Matricula: 159325
//Lista 005 - Exercício 24
/*Programa que determina quantos segmentos 
de números iguais consecutivos compõem essa sequência.*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, sequencias, VETOR[MAX], a;

    scanf("%d", &n);

    sequencias = 1;

    for (i = 0; i < n; i++)
        scanf("%d", &VETOR[i]);

    a = VETOR[0];
    for (i = 1; i < n; i++)
    {
        if (a != VETOR[i])
            sequencias++;
        a = VETOR[i];
    }
    printf("%d\n", sequencias);

    return 0;
}