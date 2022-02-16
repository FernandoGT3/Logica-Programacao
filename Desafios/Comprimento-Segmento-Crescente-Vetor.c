//Luiz Fernando -- Matricula: 159325
//Lista 005 - Exercício 25
/*Programa que determina o comprimento de um segmento 
crescente de comprimento máximo.*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, sequencias, maior, VETOR[MAX], a;

    scanf("%d", &n);

    sequencias = 1;
    maior = sequencias;
    for (i = 0; i < n; i++)
        scanf("%d", &VETOR[i]);

    a = VETOR[0];
    for (i = 1; i < n; i++)
    {
        if (a < VETOR[i])
        {
            sequencias++;
            if (sequencias > maior)
                maior = sequencias;
        }
        if (a >= VETOR[i])
        {
            sequencias = 1;
        }
        a = VETOR[i];
    }

    printf("%d", maior);
    return 0;
}