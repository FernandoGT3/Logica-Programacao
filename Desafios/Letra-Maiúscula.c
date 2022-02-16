#include <stdio.h>
#include <ctype.h>

#define MAX 30

char max_asc(char palavraMaiuscula[MAX], int tam)
{
    char maior, letra;
    int i;
    
    maior = palavraMaiuscula[1];
    for( i = 2 ; i < tam + 1; i++)
    {
        letra = palavraMaiuscula[i];
        if (letra > maior)
            maior = palavraMaiuscula[i];
    }
    return maior;
}

int main()
{
    char palavra[MAX], palavraMaiuscula[MAX], letra;
    int cont = 0;
    int tam, i;
    
    scanf("%s", palavra);
    tam = strlen(palavra);
    
    for( i = 0; i < tam + 1; i++ )
    {
        letra = palavra[i];
        if(isupper(letra) > 0)
        {
            cont = cont + 1;
            palavraMaiuscula[cont] = letra;
        }
    }

    printf("%c", max_asc(palavraMaiuscula, cont));

    return 0;
}