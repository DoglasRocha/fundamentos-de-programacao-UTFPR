/* Refaça o exercício anterior para imprimir mensagem raízes imaginárias caso as raízes sejam imaginárias. Caso a
equação possua uma única raíz o programa também deve indicar isso (ou seja que a raiz é única). */

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
        printf("Resultado: x' = %.3f e x'' = %.3f", x1, x2);
    }
    else if (delta < 0)
    {
        printf("A equação possui raizes imaginarias");
    }
    else
    {
        x1 = (-b) / (2.0 * a);

        printf("A equiação possui apenas uma raiz: \n");
        printf("Resultado: x = %.3f", x1);
    }

    printf("\n\n");
    return 0;
}