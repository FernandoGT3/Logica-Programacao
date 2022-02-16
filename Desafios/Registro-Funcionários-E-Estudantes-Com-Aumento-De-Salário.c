//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 32
/* Escreva um programa que leia os vetores de estudantes e de 
funcionários e, em seguida, conceda um aumento de 10\% a todo 
funcionário que tenha um registro de estudante cujo índice de 
pontos de graduação seja maior que 3,0.*/

#include <stdio.h>
#include <string.h>
#define MAX 50
#define MAXCHAR 31

typedef struct
{
    char ultimoNome[MAXCHAR], primeiroNome[MAXCHAR];
    double pontos;
} regEstudante;

typedef struct
{
    char ultimoNome[MAXCHAR], primeiroNome[MAXCHAR];
    double salario;
} regFuncionario;

int main()
{
    regEstudante Estudante[MAX];
    regFuncionario Funcionario[MAX];
    int m, n, i, j;

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++)
    {
        scanf("%s", Estudante[i].ultimoNome);
        getchar();
        scanf("%s", Estudante[i].primeiroNome);
        getchar();
        scanf("%lf", &Estudante[i].pontos);
        getchar();
    }

    for (i = 0; i < n; i++)
    {
        scanf("%s", Funcionario[i].ultimoNome);
        getchar();
        scanf("%s", Funcionario[i].primeiroNome);
        getchar();
        scanf("%lf", &Funcionario[i].salario);
        getchar();
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (Estudante[i].pontos >= 3.0)
            {
                if (strcmp(Estudante[i].ultimoNome, Funcionario[j].ultimoNome) == 0)
                {
                    if (strcmp(Estudante[i].primeiroNome, Funcionario[j].primeiroNome) == 0)
                    {
                        Funcionario[j].salario = Funcionario[j].salario + (Funcionario[j].salario * 0.10);
                    }
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (strcmp(Funcionario[i].ultimoNome, Funcionario[i].primeiroNome) != 0)
        {
            printf("%s ", Funcionario[i].ultimoNome);
            printf("%s ", Funcionario[i].primeiroNome);
            printf("%lf\n", Funcionario[i].salario);
        }
    }
    return 0;
}