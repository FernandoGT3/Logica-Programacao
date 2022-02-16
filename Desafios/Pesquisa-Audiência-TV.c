//Luiz Fernando -- Matricula: 159325
//Tarefa 003 - Exercício 6
/*Programa que retorna uma pesquisa de audiência de TV de um cidade, 
os canais são: 17-Globo, 18-SBT, 19-Record, 20-Band, 22-Cultura*/

#include <stdio.h>
#include <math.h>

int main()
{
    int canal, numPessoas;
    double audienciaGlobo, audienciaSbt, audienciaRecord, audienciaBand,
        audienciaCult, audienciaTotal, porcentagemGlobo, porcentagemSbt,
        porcentagemRecord, porcentagemBand, porcentagemCult;

    scanf("%d", &canal);

    audienciaGlobo = 0;
    audienciaSbt = 0;
    audienciaRecord = 0;
    audienciaBand = 0;
    audienciaCult = 0;
    audienciaTotal = 0;

    while (canal != 0)
    {
        scanf("%d", &numPessoas);
        audienciaTotal = audienciaTotal + numPessoas;
        if (canal == 17)
            audienciaGlobo = audienciaGlobo + numPessoas;
        if (canal == 18)
            audienciaSbt = audienciaSbt + numPessoas;
        if (canal == 19)
            audienciaRecord = audienciaRecord + numPessoas;
        if (canal == 20)
            audienciaBand = audienciaBand + numPessoas;
        if (canal == 22)
            audienciaCult = audienciaCult + numPessoas;
        scanf("%d", &canal);
    }

    porcentagemGlobo = (audienciaGlobo / audienciaTotal) * 100;
    porcentagemSbt = (audienciaSbt / audienciaTotal) * 100;
    porcentagemRecord = (audienciaRecord / audienciaTotal) * 100;
    porcentagemBand = (audienciaBand / audienciaTotal) * 100;
    porcentagemCult = (audienciaCult / audienciaTotal) * 100;

    if (audienciaGlobo != 0)
        printf("17 %lf\n", porcentagemGlobo);
    if (audienciaSbt != 0)
        printf("18 %lf\n", porcentagemSbt);
    if (audienciaRecord != 0)
        printf("19 %lf\n", porcentagemRecord);
    if (audienciaBand != 0)
        printf("20 %lf\n", porcentagemBand);
    if (audienciaCult != 0)
        printf("22 %lf\n", porcentagemCult);

    return 0;
}