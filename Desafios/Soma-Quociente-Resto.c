//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exerc�cio 3
/*Programa que l� dois n�meros inteiros e retorna a soma
do quociente com o resto da divis�o entre eles*/


#include <stdio.h>

int main ()
{
    int x, y, soma;

    scanf("%d %d", &x, &y);

    soma = (x/y) + (x % y);

    printf("%d", soma);
    return 0;
}
