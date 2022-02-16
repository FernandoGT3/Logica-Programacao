//Luiz Fernando -- Matricula: 159325
//Tarefa 010 - Exercício 5
/*Programa que tem possui algumas rotinas capaz de realizar 
criptografia assimétrica. Realiza apenas a tarefa de embaralhar 
a mensagem original */

#include <stdio.h>

//Leitura dos números a, b, c, digitados pelo autor da mensagem
void LeABC(int *a, int *b, int *c)
{
    scanf("%d %d %d", &*a, &*b, &*c);
    //printf("%d %d %d", *a, *b, *c);
}

/*Procedimento em que ocorre o cálculo dos números x e y, onde x = b + 1 e o y é 
o menor número maior que c, que é primo entre si com x, depositando os valores nelas. */
void Calcula_XY(int b, int c, int *x, int *y)
{
    int primo, i;

    *x = b + 1;

    primo = 0;
    i = 0;

    while (primo != 1)
    {
        i++;
        *y = c + i;
        if (MDC(*x, *y) == 1)
            primo = 1;
    }

    //printf("%d ", *x);
    //printf("%d\n", *y);
}

//Procedimento em que ocorre o cálculo de q e r, depositando os valores nelas.
void Calcula_QR(int a, int b, int *q, int *r)
{
    if (a > b)
    {
        *q = a / b;
        *r = 1 + (a % b);
    }
    else
    {
        if (b > a)
        {
            *q = b / a;
            *r = 1 + (b % a);
        }
        else
        {
            *q = 20 * a;
            *r = 5;
        }
    }

    //printf("%d %d\n", *q, *r);
}

/*Função que retorna o valor de Z, que é o primeiro número primo menor ou
igual ao mínimo entre q e r, para calcular o mínimo entre q e r, criei uma 
outra função chamda de MIN, e para verificar se o número é primo também foi 
criada uma outa função, chamada primo*/
int Calcula_Z(int q, int r)
{
    int z, minimo;

    minimo = MIN(q, r);

    z = minimo;
    while (primo(z) != 1)
    {
        z = z - 1;
    }

    return z;
}

/*Função que retorna o valor de P que é o n-ésimo elemento da 
progressão aritmética cujo primeiro elemento é x e a razão é y*/
int Calcula_P(int x, int y, int z)
{
    int i, p;

    p = x;
    p = p + (z - 1) * y;

    return p;
}

/*Função que retorna o valor de S, para calcular o máximo entre x e y
foi criado uma função MAX, e para calcular o minimo entre q e r usei a 
função já criada MIN */
int Calcula_S(int m, int p, int q, int r, int x, int y)
{

    int s;

    s = ((m * p) / MAX(x, y)) + MIN(q, r);

    return s;
}

//Função que verifica se um número é primo(retorna 1) ou não(retorna 0)
int primo(numero)
{
    int divisor, divisores;

    divisor = 1;
    divisores = 0;
    if (numero > 0 && numero != 1)
    {
        while (divisor <= numero)
        {
            if ((numero % divisor) == 0)
            {
                divisores++;
            }
            divisor++;
        }
    }
    else if (numero == 1)
        return 1;
    else if (numero <= 0)
        return 0;

    if (divisores == 2)
        return 1;
    else
        return 0;
}

//Função que calcula e retorna o MDC entre dois números
int MDC(int numUm, int numDois)
{
    int resto, divisor, dividendo;

    if (numUm > numDois)
    {
        dividendo = numUm;
        divisor = numDois;
    }
    else
    {
        dividendo = numDois;
        divisor = numUm;
    }

    resto = dividendo % divisor;
    while (resto != 0)
    {
        dividendo = divisor;
        divisor = resto;
        resto = dividendo % divisor;
    }

    return (divisor);
}

//Função que retorna o máximo (maior) entre dois números
int MAX(int num1, int num2)
{
    int MAX;

    if (num1 >= num2)
        MAX = num1;
    else
        MAX = num2;

    return MAX;
}

//Função que retorna o mínimo (menor) entre dois números
int MIN(int num1, int num2)
{
    int MIN;

    if (num1 <= num2)
        MIN = num1;
    else
        MIN = num2;

    return MIN;
}

int main()
{
    int m, a, b, c, x, y, p, q, r, z, s;

    scanf("%d", &m); //Leitura do número secreto
    //printf("%d\n", m);

    LeABC(&a, &b, &c);
    //printf("%d %d %d\n", a, b, c);

    Calcula_XY(b, c, &x, &y);
    Calcula_QR(a, b, &q, &r);

    z = Calcula_Z(q, r);
    //printf("%d\n", z);

    p = Calcula_P(x, y, z);
    //printf("%d\n", p);

    printf("%d", Calcula_S(m, p, q, r, x, y));

    return 0;
}
