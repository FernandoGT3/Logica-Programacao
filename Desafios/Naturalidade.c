//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exercício 5
/*Programa que lê a sigla do estado e imprime sua naturalidade*/

#include <stdio.h>

int main()
{
    char sigla[2];

    scanf("%s", sigla);

    switch (sigla[2])
    {
    case 'AC':
        printf("acriano\n");
        break;
    case 'AL':
        printf("alagoano\n");
        break;
    case 'AP':
        printf("amapaense\n");
        break;
    case 'AM':
        printf("amazonense\n");
        break;
    case 'BA':
        printf("baiano\n");
        break;
    case 'CE':
        printf("cearense\n");
        break;
    case 'DF':
        printf("brasiliense\n");
        break;
    case 'ES':
        printf("capixaba\n");
        break;
    case 'GO':
        printf("goiano\n");
        break;
    case 'MA':
        printf("maranhense\n");
        break;
    case 'MT':
        printf("mato-grossense\n");
        break;
    case 'MS':
        printf("sul-mato-grossense\n");
        break;
    case 'MG':
        printf("mineiro\n");
        break;
    case 'PA':
        printf("paraense\n");
        break;
    case 'PB':
        printf("paraibano\n");
        break;
    case 'PR':
        printf("paranaense\n");
        break;
    case 'PE':
        printf("pernambucano\n");
        break;
    case 'PI':
        printf("piauiense\n");
        break;
    case 'RJ':
        printf("fluminense\n");
        break;
    case 'RN':
        printf("potiguara\n");
        break;
    case 'RS':
        printf("gaucho\n");
        break;
    case 'RO':
        printf("rondoniano\n");
        break;
    case 'RR':
        printf("roraimense\n");
        break;
    case 'SC':
        printf("catarinense\n");
        break;
    case 'SP':
        printf("paulista\n");
        break;
    case 'SE':
        printf("sergipano\n");
        break;
    case 'TO':
        printf("tocantinense\n");
        break;
    default:
        printf("invalida\n");
    }
    return 0;
}