/* Modifique o programa anterior para que imprima qual dos dois é maior (perímetro ou área). Assuma que nunca podem
ser iguais */

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

    if (area > perimetro)
    {
        printf("A area eh maior que o perimetro");
    }
    else
    {
        printf("O perimetro eh maior do que a area");
    }
    
    printf("\n\n");
    return 0;
}