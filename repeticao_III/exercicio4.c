/* Dado n inteiro e maior que zero (fornecido pelo usuário), fazer um programa para imprimir uma tabela com os valores
de i*j para i= 1, 2, . . . , n e j=1, 2, . . . , n, da seguinte forma (supondo n=5): */

#include <stdio.h>

int main(void)
{
    int n, mult;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Entrada invalida!!\n\n");
        return 1;
    }

    printf("    ");
    for (int i = 1; i <= n; i ++)
    {
        printf("%d", i);
        
        if (i < 10)
            printf("   ");
        
        else
            printf("  ");
    }

    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);

        if (i < 10)
            printf("   ");

        else
            printf("  ");

        for (int j = 1; j <= i; j++)
        {
            mult = i * j;
            printf("%d", mult);

            if (mult < 10)
                printf("   ");

            else if (mult < 100)
                printf("  ");

            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}