//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exerc�cio 4
/* Programa que l� um n�mero inteiro de 3 d�gitos
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
