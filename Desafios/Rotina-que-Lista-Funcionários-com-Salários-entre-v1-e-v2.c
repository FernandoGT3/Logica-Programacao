//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 41
/* Uma rotina chamada SalarioIntervalo, que tem como parâmetros: 
um parâmetro do tipo TipoCadastro e dois valores reais v1 e v2. 
A rotina lista os funcionários com salário entre v1 e v2. 
Depois de imprimir os funcionários, imprime a média dos salários dos 
funcionários listados.*/

#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAXCHAR 31

int n;

typedef struct
{
    int Dia, Mes, Ano;
} regDataNascimento;

typedef struct
{
    char Nome[MAXCHAR];
    double Salario;
    int Idade, RG;
    char Sexo;
    regDataNascimento DataNascimento;
} TipoReg;

typedef struct
{
    TipoReg Funcionario[MAX];
    int Quant;
} TipoCadastro;

TipoCadastro IniciaCadastro(TipoCadastro Registro)
{
    Registro.Quant = 0;
    return Registro;
}

TipoCadastro LeFuncionarios(TipoCadastro Registro)
{
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%s", Registro.Funcionario[i].Nome);
        scanf("%d", &Registro.Funcionario[i].RG);
        getchar();
        scanf("%lf", &Registro.Funcionario[i].Salario);
        scanf("%d", &Registro.Funcionario[i].Idade);
        getchar();
        scanf("%c", &Registro.Funcionario[i].Sexo);
        scanf("%d %d %d", &Registro.Funcionario[i].DataNascimento.Dia,
              &Registro.Funcionario[i].DataNascimento.Mes,
              &Registro.Funcionario[i].DataNascimento.Ano);
        Registro.Quant++;
    }
    return Registro;
}

void SalarioIntervalo(TipoCadastro Registro, double v1, double v2)
{
    int i, cont;
    double Salario[MAX], SalTotal;

    cont = 0;
    SalTotal = 0;

    for (i = 0; i < n; i++)
    {
        if (Registro.Funcionario[i].Salario >= v1 && Registro.Funcionario[i].Salario <= v2)
        {
            printf("Nome: %s\n", Registro.Funcionario[i].Nome);
            printf("RG: %d\n", Registro.Funcionario[i].RG);
            printf("Salário: %lf\n", Registro.Funcionario[i].Salario);
            printf("Idade: %d\n", Registro.Funcionario[i].Idade);
            printf("Sexo: %c\n", Registro.Funcionario[i].Sexo);
            printf("Data de nascimento: %d/%d/%d\n", Registro.Funcionario[i].DataNascimento.Dia,
                   Registro.Funcionario[i].DataNascimento.Mes, Registro.Funcionario[i].DataNascimento.Ano);
            Salario[cont] = Registro.Funcionario[i].Salario;
            cont = cont + 1;
        }
    }

    for (i = 0; i < cont; i++)
        SalTotal = SalTotal + Salario[i];

    printf("Média dos salários: %lf ", (SalTotal / cont));
}

int main()
{
    int i;
    double v1, v2;
    TipoCadastro Registro;

    scanf("%d", &n);

    Registro = IniciaCadastro(Registro);
    Registro = LeFuncionarios(Registro);

    scanf("%lf %lf", &v1, &v2);

    SalarioIntervalo(Registro, v1, v2);

    return 0;
}
