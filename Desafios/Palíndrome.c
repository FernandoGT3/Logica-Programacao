//Luiz Fernando -- Matricula: 159325
//Tarefa 011 - Exercício 4
/*Programa que possui uma função recursiva que recebe como parâmetro uma cadeia de caracteres
e verifica se uma palavra é palíndrome, retornando 1, ou não, retornando 0. Se a função retornar
1, pelo programa principal é impresso "sim", caso contrario, é impresso "nao".
Uma cadeia de caracteres é palíndrome se a sequência de caracteres da esquerda 
para direita é igual à sequência de caracteres da direita para esquerda */

#include <stdio.h>
#include <string.h>
#define MAX 2010

int EPalindrome(char Palavra_Verificada[MAX], int comparador)
{
    int tam = strlen(Palavra_Verificada);
    tam = tam - comparador;

    if (tam < 1)
        return 1;
    else
    {
        if (Palavra_Verificada[comparador] != Palavra_Verificada[tam - 1])
            return 0;
        return EPalindrome(Palavra_Verificada, comparador + 1);
    }
}

int main()
{
    char palavra[MAX];

    scanf("%s", palavra);

    if (EPalindrome(palavra, 0) != 1)
        printf("nao");
    else
        printf("sim");

    return 0;
}