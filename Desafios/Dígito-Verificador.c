//Luiz Fernando -- Matricula: 159325
//Tarefa 001 - Exerc�cio 9
/* Programa que l� um n�mero inteiro de 3 d�gitos e retorna o d�gito verificador
   que � obtido pela soma deste com o seu inverso, e desta multiplicar cada d�gito
   pela sua ordem posicional e assim somando. O �ltimo digito deste resultado � o
   verificador */

#include <stdio.h>
#include <math.h>

int main()
{
    int numConta, c, d, u, numContaI, digito, soma, x, y, z, somaMult;

    scanf("%d", &numConta);

    if (numConta > 99 && numConta < 1000)
    {
        u = numConta % 10;
        d = (numConta % 100) / 10;
        c = (numConta % 1000) / 100;
        numContaI = (u * 100) + (d * 10) + c;
        soma = numConta + numContaI;
        if (soma < 1000)
        {
            x = (soma % 10);
            y = (soma % 100) / 10;
            z = (soma % 1000) / 100;
            somaMult = (z * 1) + (y * 2) + (x * 3);
            digito = somaMult % 10;
            printf("%d", digito);
        }
    }
    return 0;
}
