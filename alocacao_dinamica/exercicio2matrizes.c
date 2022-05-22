/* Implemente um programa em C para gerar um triângulo de Pascal de N linhas em uma matriz de tamanho N ˆ N.
Figura 1: Exemplo de Triângulo de Pascal */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_basicas.h"

void constroi_triangulo(int **triangulo, int tamanho);
void imprime_triangulo(int **triangulo, int tamanho);

int main(void)
{
    int **triangulo_pascal, dimensao;

    printf("Digite o tamanho desejado do triangulo de Pascal: ");
    scanf("%d", &dimensao);

    if (dimensao < 1)
    {
        printf("Tamanho invalido!\n");
        return 1;
    }

    triangulo_pascal = cria_matriz(dimensao, dimensao);

    if (triangulo_pascal == NULL)
        return 1;

    constroi_triangulo(triangulo_pascal, dimensao);

    imprime_triangulo(triangulo_pascal, dimensao);

    libera_matriz(triangulo_pascal, dimensao);

    return 0;
}

void constroi_triangulo(int **triangulo, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
                triangulo[i][j] = 1;

            else
                triangulo[i][j] = triangulo[i - 1][j] + triangulo[i - 1][j - 1];
            
        }
}

void imprime_triangulo(int **triangulo, int tamanho)
{
    printf("Triangulo de Pascal de tamanho %d:\n", tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%3d ", triangulo[i][j]);

        printf("\n");
    }
}