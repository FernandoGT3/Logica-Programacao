//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exerc�cio 3
/*Programa que l� tr�s n�meros inteiros e imprime o maior*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d\n", num1);
    }
    else
    {
        if (num2 >= num1 && num2 >= num3)
        {
            printf("%d\n", num2);
        }
        else
        {
            if (num3 >= num1 && num3 >= num1)
            {
                printf("%d\n", num3);
            }
        }
    }

    return 0;
}
