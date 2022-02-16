//Luiz Fernando -- Matricula: 159325
//Lista 007 - Exercício 43
/*Uma rotina chamada BuscaNome, que tem como entrada o cadastro e mais um parâmetro 
que é um nome de um funcionário. A rotina deve retornar um registro (tipo TipoReg) 
contendo todas as informações do funcionário que tem o mesmo nome. 
Caso a rotina não encontre um elemento no vetor contendo o mesmo nome que o dado como parâmetro, 
o registro deve retornar com nome igual a vazio.
*/

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

TipoReg BuscaNome(TipoCadastro Registro, char nomeFuncBuscado[MAXCHAR])
{

    int i, encontrou;
    TipoReg BuscarFuncionario;

    encontrou = 0;

    for (i = 0; i < n; i++)
    {
        if (strcmp(Registro.Funcionario[i].Nome, nomeFuncBuscado) == 0)
        {
            encontrou++;
            strcpy(BuscarFuncionario.Nome, Registro.Funcionario[i].Nome);
            BuscarFuncionario.RG = Registro.Funcionario[i].RG;
            BuscarFuncionario.Salario = Registro.Funcionario[i].Salario;
            BuscarFuncionario.Idade = Registro.Funcionario[i].Idade;
            BuscarFuncionario.Sexo = Registro.Funcionario[i].Sexo;
            BuscarFuncionario.DataNascimento.Dia = Registro.Funcionario[i].DataNascimento.Dia;
            BuscarFuncionario.DataNascimento.Mes = Registro.Funcionario[i].DataNascimento.Mes;
            BuscarFuncionario.DataNascimento.Ano = Registro.Funcionario[i].DataNascimento.Ano;
        }
    }

    if (encontrou == 0)
        strcpy(BuscarFuncionario.Nome, " ");

    return BuscarFuncionario;
}

int main()
{

    int i;
    char nomeFunc[MAXCHAR];
    TipoCadastro Registro;
    TipoReg FuncionarioBuscado;

    scanf("%d", &n);

    Registro = IniciaCadastro(Registro);
    Registro = LeFuncionarios(Registro);

    scanf("%s", nomeFunc);

    FuncionarioBuscado = BuscaNome(Registro, nomeFunc);

    if (strcmp(FuncionarioBuscado.Nome, nomeFunc) == 0)
    {
        printf("Nome: %s\n", FuncionarioBuscado.Nome);
        printf("RG: %d\n", FuncionarioBuscado.RG);
        printf("Salário: %lf\n", FuncionarioBuscado.Salario);
        printf("Idade: %d\n", FuncionarioBuscado.Idade);
        printf("Sexo: %c\n", FuncionarioBuscado.Sexo);
        printf("Data de nascimento: %d/%d/%d\n", FuncionarioBuscado.DataNascimento.Dia,
               FuncionarioBuscado.DataNascimento.Mes, FuncionarioBuscado.DataNascimento.Ano);
    }
    else
        printf(" ");

    return 0;
}