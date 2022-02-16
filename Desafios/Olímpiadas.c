//Luiz Fernando -- Matricula: 159325
//Tarefa 011 - Exercício 5
/*Programa que ordena os países de acordo com o número de medalhas de ouro,prata e bronze*/


#include <stdio.h>
#define MAX 100

typedef struct
{
    int ouro, prata, bronze, total;
    int nome;
} regPaises;

void Inicializa(regPaises MedalhasPaises[MAX], int numPaises)
{
    int i;
    for (i = 0; i < numPaises; i++)
    {
        MedalhasPaises[i].ouro = 0;
        MedalhasPaises[i].prata = 0;
        MedalhasPaises[i].bronze = 0;
    }
}

void DaNomePaises(regPaises MedalhasPaises[MAX], int numPaises)
{
    int i;
    for (i = numPaises; i > 0; i--)
        MedalhasPaises[i].nome = i;
}

void MedalhasOuroPaises(int Informacoes[MAX][MAX], regPaises MedalhasPaises[MAX], int numPaises, int modalidades)
{
    int i, j, cont;

    for (i = numPaises; i > 0; i--)
    {
        cont = 0;
        for (j = 0; j < modalidades; j++)
        {
            if (MedalhasPaises[i].nome == Informacoes[j][0])
                cont++;
        }
        MedalhasPaises[i].ouro = cont;
    }

    //printf("%d ", Informacoes[0][0]);
}

void MedalhasPrataPaises(int Informacoes[MAX][MAX], regPaises MedalhasPaises[MAX], int numPaises, int modalidades)
{
    int i, j, cont;

    for (i = numPaises; i > 0; i--)
    {
        cont = 0;
        for (j = 0; j < modalidades; j++)
        {
            if (MedalhasPaises[i].nome == Informacoes[j][1])
                cont++;
        }
        MedalhasPaises[i].prata = cont;
    }
}

void MedalhasBronzePaises(int Informacoes[MAX][MAX], regPaises MedalhasPaises[MAX], int numPaises, int modalidades)
{
    int i, j, cont;

    for (i = numPaises; i > 0; i--)
    {
        cont = 0;
        for (j = 0; j < modalidades; j++)
        {
            if (MedalhasPaises[i].nome == Informacoes[j][2])
                cont++;
        }
        MedalhasPaises[i].bronze = cont;
    }
}

void OrdenaPaisesNome(regPaises MedalhasPaises[MAX], int numPaises)
{
    int i, j;
    regPaises aux_medalhas;

    for (i = 0; i < numPaises - 1; i++)
    {
        for (j = i; j < numPaises - 1; j++)
        {

            if (MedalhasPaises[i].nome < MedalhasPaises[j].nome)
            {
                aux_medalhas = MedalhasPaises[i];
                MedalhasPaises[i] = MedalhasPaises[j];
                MedalhasPaises[j] = aux_medalhas;
            }
        }
    }
}

void TotalMedalhasPaises(int Informacoes[MAX][MAX], regPaises MedalhasPaises[MAX], int numPaises, int modalidades)
{
    int i, j, cont;

    for (i = numPaises; i > 0; i--)
    {
        cont = 0;
        for (j = 0; j < modalidades; j++)
        {
            if (MedalhasPaises[i].nome == Informacoes[j][0])
                cont = cont + 5;
            if (MedalhasPaises[i].nome == Informacoes[j][1])
                cont = cont + 3;
            if (MedalhasPaises[i].nome == Informacoes[j][2])
                cont = cont + 2;
        }
        MedalhasPaises[i].total = cont;
    }
}

int quickSort_particaoPaises(regPaises MedalhasPaises[MAX], int p, int r, int numPaises)
{
    int i, j;
    regPaises aux_medalhas, x;

    x = MedalhasPaises[r];
    i = p - 1;
    for (j = p; j <= r - 1; j++)
        if (MedalhasPaises[i].total < x.total)
        {
            i = i + 1;
            aux_medalhas = MedalhasPaises[i];
            MedalhasPaises[i] = MedalhasPaises[j];
            MedalhasPaises[j] = aux_medalhas;
        }
    if (MedalhasPaises[i].total == x.total)
        OrdenaPaisesNome(MedalhasPaises, numPaises);
    aux_medalhas = MedalhasPaises[i + 1];
    MedalhasPaises[i + 1] = MedalhasPaises[r];
    MedalhasPaises[r] = aux_medalhas;

    return i + 1;
}

void quickSort_ordenaPaises(regPaises MedalhasPaises[MAX], int p, int r, int numPaises)
{
    int q;
    if (p < r)
    {
        q = quickSort_particaoPaises(MedalhasPaises, p, r, numPaises);
        quickSort_ordenaPaises(MedalhasPaises, p, q - 1, numPaises);
        quickSort_ordenaPaises(MedalhasPaises, q + 1, r, numPaises);
    }
}

void OrdenaPaises(regPaises MedalhasPaises[MAX], int numPaises)
{
    quickSort_ordenaPaises(MedalhasPaises, 0, numPaises - 1, numPaises);
}

int main()
{
    int numPaises, modalidades, i, j, Informacoes[MAX][MAX];
    regPaises MedalhasPaises[MAX];

    scanf("%d %d", &numPaises, &modalidades);

    for (i = 0; i < modalidades; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &Informacoes[i][j]);

    Inicializa(MedalhasPaises, numPaises);
    DaNomePaises(MedalhasPaises, numPaises);

    /*for (i = 0; i < numPaises; i++)
        printf("%d ", MedalhasPaises[i].nome);*/

    /*for (i = 0; i < modalidades; i++)
        for (j = 0; j < 3; j++)
            printf("%d ", Informacoes[i][j]);*/

    MedalhasOuroPaises(Informacoes, MedalhasPaises, numPaises, modalidades);
    MedalhasPrataPaises(Informacoes, MedalhasPaises, numPaises, modalidades);
    MedalhasBronzePaises(Informacoes, MedalhasPaises, numPaises, modalidades);

    /*for (i = numPaises; i > 0; i--)
    {
        printf("%d ", MedalhasPaises[i].ouro);
        printf("%d ", MedalhasPaises[i].prata);
        printf("%d \n", MedalhasPaises[i].bronze);
    }*/

    OrdenaPaises(MedalhasPaises, numPaises);
    TotalMedalhasPaises(Informacoes, MedalhasPaises, numPaises, modalidades);
    OrdenaPaises(MedalhasPaises, numPaises);
    /*for (i = numPaises; i > 0; i--)
        printf("%d \n", MedalhasPaises[i].total);*/

    for (i = numPaises; i > 0; i--)
        printf("%d ", MedalhasPaises[i].nome);

    return 0;
}
