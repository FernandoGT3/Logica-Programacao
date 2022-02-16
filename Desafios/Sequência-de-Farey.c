//Luiz Fernando -- Matricula: 159325
////Luiz Fernando -- Matricula: 159325
//Tarefa 007 - Exercício 7
/* Programa que lê e armazena um conjunto de números inteiros
e determina os termos alfa, 0 <= alfa <= 1, da sequência de Farey
relativa a N*/

#include <stdio.h>
#define MAX 65536

int main()
{
    int n, i, NUMERADOR[MAX], DENOMINADOR[MAX], termos,
        tamanho_vetor, pode_novos_termos, j;

    scanf("%d", &n);

    termos = 2; //Porque já tenho 0/1 e 1/1
    pode_novos_termos = 1;
    tamanho_vetor = (termos - 1);

    NUMERADOR[0] = 0;
    DENOMINADOR[0] = 1;
    NUMERADOR[1] = 1;
    DENOMINADOR[1] = 1;

    while (pode_novos_termos == 1)
    {
        pode_novos_termos = 0;
        for (i = 0; i < tamanho_vetor; i++)
        {
            if (DENOMINADOR[i] + DENOMINADOR[i + 1] <= n)
            {
                for (j = termos; j > i; j--)
                {
                    NUMERADOR[j] = NUMERADOR[j - 1];     //deixou um espaço para
                    DENOMINADOR[j] = DENOMINADOR[j - 1]; //adicionar os outros elementos
                }
                pode_novos_termos = 1;
                NUMERADOR[i + 1] = NUMERADOR[i] + NUMERADOR[i + 2];
                DENOMINADOR[i + 1] = DENOMINADOR[i] + DENOMINADOR[i + 2];
                termos++;
            }
        }
        tamanho_vetor = (termos - 1);
    }

    for (i = 0; i < termos; i++)
        printf("%d/%d\n", NUMERADOR[i], DENOMINADOR[i]);

    return 0;
}