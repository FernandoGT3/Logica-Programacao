//Luiz Fernando -- Matricula: 159325
//Lista 009 - Exercício 11
/* Um programa que possui um procedimento que recebe um número inteiro 
correspondente a um dado valor em reais (R\$) como parâmetro de entrada 
e retorna (passagem por referência) o número mínimo de notas possíveis 
de R\$ 100, R\$ 50, R\$ 20, R\$ 10, R\$ 5, R\$ 2 e R\$ 1 para gerar esse valor.*/

#include <stdio.h>

#define MAX 7

void Notas(int valorRS)
{
    int i, notas100, notasGeraValor[MAX];

    for (i = 0; i < MAX; i++)
        notasGeraValor[i] = 0;

    while (valorRS != 0)
    {
        if (valorRS >= 100)
        {
            notasGeraValor[0] = valorRS / 100;
            valorRS = valorRS % 100;
        }
        else
        {
            if (valorRS >= 50)
            {
                notasGeraValor[1] = valorRS / 50;
                valorRS = valorRS % 50;
            }
            else
            {
                if (valorRS >= 20)
                {
                    notasGeraValor[2] = valorRS / 20;
                    valorRS = valorRS % 20;
                }
                else
                {
                    if (valorRS >= 10)
                    {
                        notasGeraValor[3] = valorRS / 10;
                        valorRS = valorRS % 10;
                    }
                    if (valorRS >= 5)
                    {
                        notasGeraValor[4] = valorRS / 5;
                        valorRS = valorRS % 5;
                    }
                    if (valorRS >= 2)
                    {
                        notasGeraValor[5] = valorRS / 2;
                        valorRS = valorRS % 2;
                    }
                    if (valorRS >= 1)
                    {
                        notasGeraValor[6] = valorRS / 1;
                        valorRS = valorRS % 1;
                    }
                }
            }
        }
    }
    for (i = 0; i < MAX; i++)
        printf("%d ", notasGeraValor[i]);
}

int main()
{
    int valor;

    scanf("%d", &valor);

    Notas(valor);

    return 0;
}