//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 3
/* Programa que retorna o número de palavras em uma frase.*/

#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    int i, n, cont;
    char frase[MAX];

    gets(frase);
    n = strlen(frase);

    cont = 1;
    for (i = 0; i < n; i++)
    {
        if (frase[i] == ' ')
            cont++;
    }

    printf("%d", cont);

    return 0;
}