/* Faça os seguintes itens:
(a) Implemente uma função em C com protótipo:
int divide(int *m, int *n, int d);
que recebe três parâmetros (dois ponteiros para inteiro e um inteiro) e retorna 1 se d divide pelo menos um entre
*m e *n, 0 caso contrário. Fora isso, se d divide *m, a função deve dividir *m por d, e o mesmo para *n.
(b) Implemente uma funcao em C com protótipo:
int mmc (int m, int n);
que recebe como parametros dois inteiros positivos m e n e retorna, usando a função divide (...)
mínimo múltiplo comum entre m e n, ou seja, mmc(m,n).
acima, o
(c) Implemente um programa em C que lê n inteiros positivos e calcula, usando a função mmc(...) acima, o mínimo
múltiplo comum entre todos eles. */

#include <stdio.h>

int divide(int *m, int *n, int d);
int calcula_mmc(int m, int n);

int main(void)
{
    int mmc, n, atual;

    printf("Digite de quantos valores você quer saber o MMC: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite um dos valores: ");
        scanf("%d", &atual);

        if (i == 0)
        {
            mmc = atual;
            continue;
        }

        mmc = calcula_mmc(atual, mmc);
    }

    printf("O MMC é: %d\n", mmc);
}

int divide(int *m, int *n, int d)
{
    if (*m % d != 0 && *n % d != 0)
        return 0;

    if (*m % d == 0)
        *m /= d;

    if (*n % d == 0)
        *n /= d;

    return 1;
}

int calcula_mmc(int m, int n)
{
    int mmc = 1;

    for (int i = 2; (m != 1 || n != 1); i++)
        while(divide(&m, &n, i))
            mmc *= i;        

    return mmc;
}
