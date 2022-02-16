//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exercício 1
/*Programa que lê dois números e efetue adição entre eles.
  Se soma maior que 20 adicona 5 e se for menor ou igual a 20
  subtrai 5*/

#include <stdio.h>

int main()
{
    int num1, num2, soma, somaMais, somaMenos;

    scanf("%d %d", &num1, &num2);
    soma = num1 + num2;

    if (soma > 20)
    {
        somaMais = soma + 8;
        printf("%d", somaMais);
    }
    else
    {
        somaMenos = soma - 5;
        printf("%d", somaMenos);
    }

    return 0;
}
