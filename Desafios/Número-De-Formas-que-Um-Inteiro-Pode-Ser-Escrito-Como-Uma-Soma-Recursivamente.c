//Luiz Fernando -- Matricula: 159325
//Lista 010 - Exercício 23
/* Um programa que possui uma função recursiva que recebe dois números inteiros M e N 
como parâmetros de entrada e, fazendo uso desta definição, retorna o valor de QN,N.
Se indicarmos por QM,N o número de formas em que um inteiro M pode ser expresso como uma soma, 
cada parcela dessa soma não é maior do que N; então o número de partições de N é dado por QN,N. 
A função QM,N é definida como:

              1	                  para todo N, se M = 1
              1	                  para todo M, se N = 1
QM,N =        QM,M	              se M < N
              1 + QM,M-1	      se M = N
              QM,N-1 + QM-N,N	  se M > N               */

int Particoes(int M, int N)
{
    if (M == 1)
        return 1;
    if (N == 1)
        return 1;
    if (M < N)
        return Particoes(M, M);
    if (M == N)
        return (1 + Particoes(M, M - 1));
    if (M > N)
        return (Particoes(M, N - 1) + Particoes(M - N, N));
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", Particoes(n, n));

    return 0;
}
