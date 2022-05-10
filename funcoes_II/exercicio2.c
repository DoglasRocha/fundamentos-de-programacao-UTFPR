/* Implemente uma função em C que receba os valores a, b e c passados por valor, e receba também dois valores x1 e
x2 passados por referência. Em seguida, calcule e retorne as duas raízes da equação do segundo grau nas variáveis x1
e x2. Protótipo:
int calcula_raizes(float a, float b, float c, float *x1, float *x2) */

#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2);

int main(void)
{
    float a, b, c, x1, x2;

    printf("Digite os valores de a, b e c da eq. do 2o grau, separados por espacos: ");
    scanf("%f %f %f", &a, &b, &c);

    int qtd_raizes = calcula_raizes(a, b, c, &x1, &x2);

    switch (qtd_raizes)
    {
        case -1:
            printf("A eq. dada é do primeiro grau.");
            break;

        case 0:
            printf("A eq. dada não tem raízes reais.");
            break;

        case 1:
            printf("A eq. dada tem apenas uma raiz real: %f", x1);
            break;

        case 2:
            printf("As raízes da eq. dada são: x': %f e x'': %f", x1, x2);
            break;
    }

    printf("\n");

    return 0;
}

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    if (a == 0)
        return -1;

    float delta = b * b - 4 * a * c;

    if (delta < 0)
        return 0;

    if (delta == 0)
    {
        *x1 = -b / 2 * a, *x2 = *x1;
        return 1;
    }

    *x1 = (-b + sqrt(delta)) / (2 * a), 
    *x2 = (-b - sqrt(delta)) / (2 * a);

    return 2;
}
