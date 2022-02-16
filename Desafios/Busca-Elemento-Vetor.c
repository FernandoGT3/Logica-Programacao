//Luiz Fernando -- Matricula: 159325
//Lista 005 - Exercício 11
/*Programa que verifica se existe um elemento igual a K (chave)
no vetor. Se existir, imprime a posição onde foi encontrada a chave;
se não, imprime uma mensagem avisando o usuário que a chave não foi 
encontrada.*/

#include <stdio.h>
#define MAX 120

int main()
{
    int n, i, igual;
    double VETOR[n], chave;

    scanf("%d", &n);
    igual = 0;
    if (n < MAX)
    {
        for (i = 0; i < n; i++)
            scanf("%lf", &VETOR[i]);

        scanf("%lf", &chave);

        for (i = 0; i < n; i++)
        {
            if (chave == VETOR[i])
            {
                igual++;
                printf("%d\n", i);
            }
        }
        if (igual == 0)
            printf("a chave não foi encontrada\n");
    }
    return 0;
}