//Luiz Fernando -- Matricula: 159325
//Tarefa 002 - Exercício 7
/*Programa que determina qual animal foi escolhido */

#include <stdio.h>

int main()
{

    unsigned int entrada;

    scanf("%d", &entrada);
    printf("mamifero?\n");
    if (entrada == 1)
    {
        printf("quadrupede?\n");
        scanf("%d", &entrada);
        if (entrada == 1)
        {
            printf("carnivoro?\n");
            scanf("%d", &entrada);
            if (entrada == 1)
            {
                printf("leao\n");
            }
            else
            {
                printf("herbivoro?\n");
                scanf("%d", &entrada);
                if (entrada == 1)
                {
                    printf("cavalo\n");
                }
                else
                {
                    printf("nao sei\n");
                }
            }
        }
        else
        {
            printf("bipede?\n");
            scanf("%d", &entrada);
            if (entrada == 1)
            {
                printf("onivoro?\n");
                scanf("%d", &entrada);
                if (entrada == 1)
                {
                    printf("homem\n");
                }
                else
                {
                    printf("frutifero?\n");
                    scanf("%d", &entrada);
                    if (entrada == 1)
                    {
                        printf("macaco\n");
                    }
                    else
                    {
                        printf("nao sei\n");
                    }
                }
            }
            else
            {
                printf("voador?\n");
                scanf("%d", &entrada);
                if (entrada == 1)
                {
                    printf("morcego\n");
                }
                else
                {
                    printf("aquatico?\n");
                    scanf("%d", &entrada);
                    if (entrada == 1)
                    {
                        printf("baleia\n");
                    }
                    else
                    {
                        printf("nao sei\n");
                    }
                }
            }
        }
    }
    else
    {
        printf("ave?\n");
        scanf("%d", &entrada);
        if (entrada == 1)
        {
            printf("nao-voador?\n");
            scanf("%d", &entrada);
            if (entrada == 1)
            {
                printf("tropical?\n");
                scanf("%d", &entrada);
                if (entrada == 1)
                {
                    printf("avestruz\n");
                }
                else
                {
                    printf("polar?\n");
                    scanf("%d", &entrada);
                    if (entrada == 1)
                    {
                        printf("pinguim\n");
                    }
                    else
                    {
                        printf("nao sei\n");
                    }
                }
            }
            else
            {
                printf("nadador?\n");
                scanf("%d", &entrada);
                if (entrada == 1)
                {
                    printf("pato\n");
                }
                else
                {
                    printf("rapina?\n");
                    scanf("%d", &entrada);
                    if (entrada == 1)
                    {
                        printf("aguia\n");
                    }
                    else
                    {
                        printf("nao sei\n");
                    }
                }
            }
        }
        else
        {
            printf("reptil?\n");
            scanf("%d", &entrada);
            if (entrada == 1)
            {
                printf("com-casco?\n");
                scanf("%d", &entrada);
                if (entrada == 1)
                {
                    printf("tartaruga\n");
                }
                else
                {
                    printf("carnivoro?\n");
                    scanf("%d", &entrada);
                    if (entrada == 1)
                    {
                        printf("crocodilo\n");
                    }
                    else
                    {
                        printf("sem-patas?\n");
                        scanf("%d", &entrada);
                        if (entrada == 1)
                        {
                            printf("cobra\n");
                        }
                        else
                        {
                            printf("nao sei\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}