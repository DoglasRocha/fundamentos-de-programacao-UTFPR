/* 1. Leia um valor inteiro n e mostre na tela a sua tabuada (n x 1 até n x 10). */

#include <stdio.h>

int main(void)
{
    int numero;

    printf("Por favor, digite um numero para saber sua tabuada até o 10: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }

    return 0;
}