/* Faça um programa que dados os coeficientes (a,b e c) de uma equação do 2o grau, calcule e imprima suas raízes (caso
a equação possua raízes imaginárias, o programa não deve imprimir nada). */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, delta;
    float x1, x2;

    printf("Entre com os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("A equação possui duas raizes reais: \n");
        printf("Resultado: x' = %.3f e x'' = %.3f\n\n", x1, x2);
    }

    return 0;
}