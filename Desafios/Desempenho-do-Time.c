//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 6
/*Programa que lê o numero total de jogos de um time de futebol
e mede o desempenho deste time*/

#include <stdio.h>
#include <math.h>

int main()
{
    double porcentagemPartidas, porcentagemVitorias, porcentagemEmpates,
        porcentagemDerrotas, partidasAnalisadas, partidasGanhas,
        partidasPerdidas, partidasEmpate;
    int numTotalJogos, golFeitos, golTomado, totalFeitos, totalTomado,
        saldoGols, maiorTomado, maiorFeito;

    scanf("%d", &numTotalJogos);

    partidasEmpate = 0.0;
    partidasPerdidas = 0.0;
    partidasGanhas = 0.0;
    partidasAnalisadas = 0;
    totalFeitos = 0;
    totalTomado = 0;
    maiorTomado = 0;
    maiorFeito = 0;

    while ((partidasAnalisadas <= numTotalJogos) && (golFeitos != -1))
    {
        scanf("%d %d", &golFeitos, &golTomado);
        if (golFeitos != -1)
        {
            if (golFeitos > golTomado)
            {
                partidasGanhas = partidasGanhas + 1;
                if (maiorFeito < golFeitos)
                    maiorFeito = golFeitos;
            }
            if (golFeitos < golTomado)
            {
                partidasPerdidas = partidasPerdidas + 1;
                if (maiorTomado < golTomado)
                    maiorTomado = golTomado;
            }
            if (golFeitos == golTomado)
                partidasEmpate = partidasEmpate + 1;
            totalFeitos = totalFeitos + golFeitos;
            totalTomado = totalTomado + golTomado;
            partidasAnalisadas = partidasAnalisadas + 1;
        }
    }

    porcentagemPartidas = (partidasAnalisadas / numTotalJogos) * 100;
    printf("%lf\n", porcentagemPartidas);

    porcentagemVitorias = (partidasGanhas / partidasAnalisadas) * 100;
    printf("%lf\n", porcentagemVitorias);

    porcentagemEmpates = (partidasEmpate / partidasAnalisadas) * 100;
    printf("%lf\n", porcentagemEmpates);

    porcentagemDerrotas = (partidasPerdidas / partidasAnalisadas) * 100;
    printf("%lf\n", porcentagemDerrotas);

    saldoGols = (totalFeitos - totalTomado);
    printf("%d\n", saldoGols);

    if (maiorTomado != 0)
    {
        printf("%d\n", maiorTomado);
    }
    else
    {
        printf("Nao houve derrotas.\n");
    }

    if (maiorFeito != 0)
    {
        printf("%d\n", maiorFeito);
    }
    else
    {
        printf("Nao houve vitorias.\n");
    }

    return 0;
}
