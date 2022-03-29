/* Leia 2 valores reais (x e y), os quais representam as coordenadas de um ponto em um plano. A seguir, determine a
qual quadrante pertence o ponto. Analise também se está sobre um dos eixos cartesianos ou na origem (x = y = 0).
Para auaxiliar a resoluação do exercícico, a figura abaixo ilustra os quatro quadrantes no plano cartesiano X ˆ Y , como
primeiro quadrante iniciando no canto superior direito, o segundo no canto superior esquerdo e assim por diante */

#include <stdio.h>

int main(void)
{
    float x, y;

    printf("Digite uma abscissa e uma ordenada: ");
    scanf("%f %f", &x, &y);

    // primeiro, verifica-se se os pontos estão na origem
    if (x == 0 && y == 0)
    {
        printf("Origem");
    }
    // depois, se a abscissa está encima do eixo x
    else if (x == 0)
    {
        printf("Eixo X");
    }
    // depois, se a ordenada está encima do eixo y
    else if (y == 0)
    {
        printf("Eixo Y");
    }
    // depois, se a coordenada está no primeiro quadrante
    else if (x > 0 && y > 0)
    {
        printf("Q1");
    }
    /* se ela não está no Q1, mas tem o x positivo, ela está, logicamente,
    no quarto quadrante */
    else if (x > 0)
    {
        printf("Q4");
    }
    // depois, se ela está no quadrante 2
    else if (x < 0 && y > 0)
    {
        printf("Q2");
    }
    // caso nenhuma das condições anteriores seja satisfeita, a unica possibilidade
    // é a coordenada estar no Q3
    else
    {
        printf("Q3");
    }

    printf("\n\n");

    return 0;
}