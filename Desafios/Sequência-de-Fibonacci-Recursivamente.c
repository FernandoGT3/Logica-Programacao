//Luiz Fernando -- Matricula: 159325
//Lista 010 - Exercício 5
/* Um programa que possui uma função recursiva que recebe um número inteiro n 
como parâmetro de entrada e retorne o n-ésimo número da sequência de Fibonacci. */

int SequenciaFiobanacci(int numero)
{
    if (numero == 0)
        return 0;
    if (numero == 1)
        return 1;
    else
        return SequenciaFiobanacci(numero - 1) + SequenciaFiobanacci(numero - 2);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", SequenciaFiobanacci(n));

    return 0;
}
