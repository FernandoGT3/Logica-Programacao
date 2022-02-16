//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 3
/* Escreva uma função que receba um número inteiro x como parâmetro 
de entrada e retorne x3 (não use a função pow).*/

#include <stdio.h>

int potenciacao(int base, int expoente)
{
    int potencia, i;
    potencia = 1;
    for (i = 0; i < expoente; i++)
    {
        potencia = potencia * base;
    }
    return potencia;
}

int main()
{
    int a, b;

    b = 3;

    scanf("%d", &a);

    printf("%d ", potenciacao(a, b));

    return 0;
}