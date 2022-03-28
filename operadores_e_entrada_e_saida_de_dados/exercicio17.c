/* Construa um programa que receba o valor de uma temperatura em graus Celsius (C) e calcule a sua temperatura
correspondente em graus Farenheit (F ):
pF  ́ 32q ˆ 5
C “
9 */

#include <stdio.h>

int main(void)
{
    float celsius, fahreinheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahreinheit = (celsius * 9 / 5) + 32;

    printf("%.2f °C = %.2f °F\n\n", celsius, fahreinheit);

    return 0;
}