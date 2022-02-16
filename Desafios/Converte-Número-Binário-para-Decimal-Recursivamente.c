//Luiz Fernando -- Matricula: 159325
//Lista 010 - Exercício 3
/*Um programa que possui uma função recursiva que recebe um número natural na base binária 
como parâmetro de entrada e retorna esse número na base decimal.*/

#include <stdio.h>
#include <string.h>

int ConverteDecimal(int numero)
{
    if (numero <= 0)
        return numero * pow(2, 0);
    else
        return numero % 10 + 2 * ConverteDecimal(numero / 10);
}

int main()
{
    int binario;

    scanf("%d", &binario);

    printf("%d", ConverteDecimal(binario));

    return 0;
}