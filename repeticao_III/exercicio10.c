/* Faça um programa que calcule o menor número divisível por cada um dos números de 1 a 20. Ex: 2520 é o menor
número que pode ser dividido por cada um dos números de 1 a 10, sem sobrar resto. */

#include <stdio.h>

int main(void)
{
    int numero, teve_resto, achou_numero = 0;

    // utilizando for para tornar o incremento da variavel mais facil
    for (int i = 20; !achou_numero; i++)
    {
        teve_resto = 0;

        for (int j = 1; j <= 20; j++)
        {
            if (i % j != 0)
            {
                teve_resto = 1;
                break;
            }
        }

        if (!teve_resto)
        {
            achou_numero = 1;
            numero = i;
        }
    }

    printf("O MMC de 1 a 20 é %d\n", numero);

    return 0;
}