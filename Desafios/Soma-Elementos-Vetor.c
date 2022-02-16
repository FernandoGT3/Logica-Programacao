//Luiz Fernando -- Matricula: 159325
//Lista 005 - Exercício 5
/*Programa que retorna a soma dos elementos de um vetor*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, soma, VETOR[MAX];

    scanf("%d", &n); //numero inteiro que identifica o tamanho do vetor

    soma = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &VETOR[i]);
        soma = soma + VETOR[i];
    }

    printf("%d", soma);

    return 0;
}