/* Leia um valor inteiro n, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3
valores reais. Faça um programa que leia os 3 valores de cada caso de teste e apresente a média ponderada para cada
caso, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.
Exemplo de Entrada Exemplo de Saída
3
6.5 4.3 6.2 5.7
5.1 4.2 8.1 6.3
8.0 9.0 10.0 9.3 */

#define PESO1 2
#define PESO2 3
#define PESO3 5

#include <stdio.h>

int main(void)
{
    int casos_de_teste;
    float n1, n2, n3, media;

    printf("Entre com o numero de casos de teste: ");
    scanf("%d", &casos_de_teste);

    for (int i = 0; i < casos_de_teste; i++)
    {
        printf("Para saber a media ponderada entre 3 numeros, digite eles separados por espacos (Ex.: 2 5 9): ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 * PESO1 + n2 * PESO2 + n3 * PESO3) / (PESO1 + PESO2 + PESO3);

        printf("Resultado = %.3f\n", media);
    }

    return 0;
}