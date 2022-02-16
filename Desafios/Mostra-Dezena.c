//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exercício 4
/* Programa que lê um número inteiro de 3 dígitos
e mostra o algarismo da dezena */

#include <stdio.h>

int main()
{
    int num, x, dezena;

    scanf("%d", &num);

    x = num % 100;
    dezena = x/10;

    printf("%d", dezena);
    return 0;
}
