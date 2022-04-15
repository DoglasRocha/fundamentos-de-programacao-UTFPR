/* Construa um programa que leia um número n natural e verifica se ele é triangular ou não. Dizemos que um número
natural é triangular se ele é produto de três números naturais consecutivos. Exemplo: 120 é triangular, pois 4ˆ5ˆ6 “
120. */

#include <stdio.h>

int main(void)
{
    int n, i, eh_triangular = 0;

    printf("Forneca um numero natural: ");
    scanf("%d", &n);

    for (i = 1; i < n / 3; i++)
    {
        if (i * (i + 1) * (i + 2) == n)
        {
            eh_triangular = 1;
            break;
        }
    }

    if (eh_triangular)
        printf("%d eh triangular. %d * %d * %d = %d\n", n, i, i + 1, i + 2, n);

    else
        printf("%d nao eh triangular\n");

    return 0;
}