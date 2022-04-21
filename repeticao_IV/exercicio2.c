/* Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois números de 3 dígitos. Ex:
O maior palíndromo feito a partir do produto de números de dois dígitos é 9009 (que é resultado de 91*99). */

#include <stdio.h>

int main(void)
{
    int resultado, cm, dm, um, c, d, u, maior_palindromo = 0;

    for (int i = 999; i > 99; i--)
    {
        for (int j = 999; j > 99; j--)
        {
            resultado = i * j;

            cm = resultado / 100000;
            dm = (resultado / 10000) % 10;
            um = (resultado / 1000) % 10;
            c = (resultado / 100) % 10;
            d = (resultado / 10) % 10;
            u = resultado % 10;

            if ((cm == u && dm == d && um == c) && (resultado > maior_palindromo))
            {
                maior_palindromo = resultado;
            }
        }
    }

    printf("%d\n", maior_palindromo);
}
