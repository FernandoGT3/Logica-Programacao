//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exerc�cio 4
/*Programa que l� tr�s n�meros inteiros e imprime se o tri�nuglo �
equil�tero, escaleno, is�sceles ou inv�lido*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b + c || b >= a + c || c >= a + b)
    {
        printf("invalido");
    }
    else if (a == b && b == c)
    {
        printf("equilatero");
    }
    else if (a == b || b == c || a == c)
    {
        printf("isoceles");
    }
    else
    {
        printf("escaleno");
    }
    return 0;
}
