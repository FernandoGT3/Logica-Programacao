//Luiz Fernando -- Matricula: 159325
//Lista 005 - Exercício 9
/*Programa que soma dois vetores de mesma dimensão.*/

#include <stdio.h>
#define MAX 100
int main()
{
    int n, i;
    double A[MAX], B[MAX], SOMA[MAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &B[i]);
    }

    for (i = 0; i < n; i++)
    {
        SOMA[i] = A[i] + B[i];
        printf("%lf\n", SOMA[i]);
    }

    return 0;
}