//Luiz Fernando 159325
/* Números palíndromos são aqueles que escritos da direita para
a esquerda tem o mesmo valor. Exemplo: 545, 97379, etc. Escreva 
uma função recursiva que receba um número inteiro como parâmetro de 
entrada e retorne 1 se ele for um número palíndromo e, 0 caso contrário.
A seguir, escreva um programa que determine e imprima, usando a função acima, 
todos os números palíndromos entre 1 e 9999.*/

#include <stdio.h>

int Epalindromo(int num)
{
    int AlgarismoMeioUm, AlgarismoMeioDois, novoNum;

    if (num < 10)
        return 1;
    else
    {
        if (num < 100)
        {
            if (num / 10 == num % 10)
                return 1;
            else
                return 0;
        }
        else
        {
            if (num < 1000)
            {
                if (num / 100 == num % 10)
                    return 1;
                else
                    return 0;
            }
            else
            {
                if (num / 1000 == num % 10)
                {
                    AlgarismoMeioUm = (num % 1000) / 100;
                    AlgarismoMeioDois = ((num % 1000) % 100) / 10;
                    novoNum = AlgarismoMeioUm * 10 + AlgarismoMeioDois;
                    if (AlgarismoMeioUm == 0 && AlgarismoMeioDois != 0)
                        return 0;
                    else
                        return (Epalindromo(novoNum));
                }
                else
                    return 0;
            }
        }
    }
}

int main()
{

    int i;

    for (i = 1; i <= 9999; i++)
    {
        if (Epalindromo(i) == 1)
            printf("%d\n", i);
    }

    return 0;
}