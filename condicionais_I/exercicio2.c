/* Faça um programa que tendo como entradas (via teclado) a base e altura de um retângulo, calcule o perímetro (2*base
+ 2*altura) e a área (base*altura) e imprima se o perímetro é maior que a área. */

#include <stdio.h>

int main(void)
{
    int base, altura, perimetro, area;

    printf("Digite a medida da base do retangulo: ");
    scanf("%d", &base);

    printf("Digite a medida da altura do retangulo: ");
    scanf("%d", &altura);

    perimetro = altura * 2 + base * 2;
    area = base * altura;

    printf("Perimetro: %d\n", perimetro);
    printf("Area: %d\n", area);

    if (perimetro > area)
    {
        printf("O perimetro eh maior que a area\n\n");
    }
    
    return 0;
}