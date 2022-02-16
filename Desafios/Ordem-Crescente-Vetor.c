//Luiz Fernando 159325
/*Exercício 12
Escreva um programa que classifique um vetor numérico de no máximo
 de 20 elementos em ordem crescente.
.*/

#include <stdio.h>

#define MAX 20

int main()
{
    int i, j, n;
    double VETOR[MAX];
    double aux;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%lf", &VETOR[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (VETOR[i] > VETOR[j])
            {
                aux = VETOR[i];
                VETOR[i] = VETOR[j];
                VETOR[j] = aux;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%lf \n", VETOR[i]);

    return 0;
}