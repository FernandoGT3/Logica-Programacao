//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 44
/* Uma rotina chamada AtualizaSalario, que tem como parâmetro o cadastro de funcionários. 
A rotina lê do teclado o RG do funcionário a atualiza. Em seguida, a rotina lê o novo salário do funcionário. 
Por fim, a rotina atualiza no cadastro o salário do funcionário com o RG especificado.*/

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

TipoCadastro AtualizaSalario(TipoCadastro Registro)
{
    int i, buscadoRG;
    double novoSalario;

    scanf("%d", &buscadoRG);
    scanf("%lf", &novoSalario);

    for (i = 0; i < n; i++)
    {
        if (Registro.Funcionario[i].RG == buscadoRG)
            Registro.Funcionario[i].Salario = novoSalario;
    }

    return Registro;
}

void ImprimeFuncionario(TipoCadastro Registro)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Nome: %s\n", Registro.Funcionario[i].Nome);
        printf("RG: %d\n", Registro.Funcionario[i].RG);
        printf("Salário: %lf\n", Registro.Funcionario[i].Salario);
        printf("Idade: %d\n", Registro.Funcionario[i].Idade);
        printf("Sexo: %c\n", Registro.Funcionario[i].Sexo);
        printf("Data de nascimento: %d/%d/%d\n", Registro.Funcionario[i].DataNascimento.Dia,
               Registro.Funcionario[i].DataNascimento.Mes, Registro.Funcionario[i].DataNascimento.Ano);
    }
}

int main()
{
    int i;
    TipoCadastro Registro;

    scanf("%d", &n);

    Registro = IniciaCadastro(Registro);
    Registro = LeFuncionarios(Registro);
    Registro = AtualizaSalario(Registro);

    ImprimeFuncionario(Registro);

    return 0;
}