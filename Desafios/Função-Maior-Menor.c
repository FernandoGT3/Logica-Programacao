//Luiz Fernando -- Matricula: 159325
//Lista 009 - Exercício 6
/* Uma programa que possui uma função que recebe três números inteiros, a, b e c 
como parâmetros de entrada e retorna (passagem por referência) o Maior e o Menor 
valor desses três. Imprimindo estes valores que foram retornados pela função.*/

#include <stdio.h>

typedef struct
{
    int maior;
    int menor;
} maiorMenor;

maiorMenor BuscarMaiorMenor(int *A, int *B, int *C)
{
    maiorMenor EncontradosMaiorMenor;

    if ((*A >= *B) && (*A >= *C))
    {
        EncontradosMaiorMenor.maior = *A;
    }
    else
    {
        if (*B >= *C)
        {
            EncontradosMaiorMenor.maior = *B;
        }
        else
            EncontradosMaiorMenor.maior = *C;
    }

    if ((*A <= *B) && (*A <= *C))
    {
        EncontradosMaiorMenor.menor = *A;
    }
    else
    {
        if (*B <= *C)
        {
            EncontradosMaiorMenor.menor = *B;
        }
        else
            EncontradosMaiorMenor.menor = *C;
    }

    return EncontradosMaiorMenor;
}
int main()
{
    int a, b, c;
    maiorMenor EncontradosMaiorMenor;

    scanf("%d %d %d", &a, &b, &c);

    EncontradosMaiorMenor = BuscarMaiorMenor(&a, &b, &c);

    printf("%d %d", EncontradosMaiorMenor.menor, EncontradosMaiorMenor.maior);

    return 0;
}