//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 11
/* Programa que le o nome de uma pessoa e imprima esse nome invertido.
Exemplo: Nome = PROGRAMA - Invertido = AMARGORP.*/

#include <stdio.h>
#include <string.h>
#define MAX 30

int main()
{
    int i, n;
    char nome[MAX], aux;

    gets(nome);
    n = strlen(nome);

    for (i = 0; i < (n / 2); i++)
    {
        aux = nome[i];
        nome[i] = nome[n - 1 - i];
        nome[n - 1 - i] = aux;
    }

    printf("%s\n", nome);

    return 0;
}