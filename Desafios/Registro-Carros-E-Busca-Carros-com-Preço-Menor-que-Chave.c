//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 23
/* Programa que leia um vetor com os dados de até 50 carros: 
marca (carácter), ano (inteiro) e preço (real). Leia um valor P 
e mostre as informações de todos os carros com preço menor que P. 
Repita este processo até que seja lido um valor P=0.*/

#include <stdio.h>
#include <string.h>
#define MAXCHAR 30
#define MAXREG 50

typedef struct
{
    char Marca[MAXCHAR];
    int Ano;
    double Preco;
} regCarros;

int main()
{
    regCarros Carros[MAXREG];
    int n, i, parou;
    double precoPesquisa;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", Carros[i].Marca);
        scanf("%d", &Carros[i].Ano);
        scanf("%lf", &Carros[i].Preco);
    }

    parou = 0;

    scanf("%lf", &precoPesquisa);
    while (parou == 0)
    {
        for (i = 0; i < n; i++)
        {
            if (precoPesquisa > Carros[i].Preco)
            {
                printf("%s ", Carros[i].Marca);
                printf("%d ", Carros[i].Ano);
                printf("%lf\n", Carros[i].Preco);
            }
        }
        printf("\n");
        scanf("%lf", &precoPesquisa);
        if (precoPesquisa == 0.0)
            parou = 1;
    }

    return 0;
}