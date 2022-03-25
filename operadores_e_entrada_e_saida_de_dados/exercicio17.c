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