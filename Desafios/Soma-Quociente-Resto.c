//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 3
/*Programa que lê dois números inteiros e retorna a soma
do quociente com o resto da divisão entre eles*/


#include <stdio.h>

int main ()
{
    int x, y, soma;

    scanf("%d %d", &x, &y);

    soma = (x/y) + (x % y);

    printf("%d", soma);
    return 0;
}
