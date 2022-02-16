//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 10
/* Programa que le 3 nomes de alunos quaisquer (aluno1, aluno2 e aluno3) 
e imprime esses nomes em ordem alfabética*/

#include <stdio.h>
#include <string.h>
#define MAX 30
#define N 3

int main()
{
    int i, j;
    char aluno[N][MAX], trocador[MAX];

    for (i = 0; i < N; i++)
        scanf("%s", aluno[i]);

    for (i = 0; i < N; i++)
    {
        for (j = 1; j < N; j++)
        {
            if (strcmp(aluno[j - 1], aluno[j]) > 0)
            {
                strcpy(trocador, aluno[j - 1]);
                strcpy(aluno[j - 1], aluno[j]);
                strcpy(aluno[j], trocador);
            }
        }
    }

    for (i = 0; i < N; i++)
        printf("%s\n", aluno[i]);

    return 0;
}