/* Implemente um programa em C que preencha com valores aleatórios uma matriz de dimensão 5 ˆ 5 e imprima matriz
e depois sua transposta. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void preenche_matriz(int matriz[MAX][MAX], int linhas, int colunas);
void imprime_matriz(int matriz[MAX][MAX], int linhas, int colunas);
void imprime_transposta(int matriz[MAX][MAX], int linhas, int colunas);

int main(void)
{
    srand(time(NULL));
    int matriz[MAX][MAX], l, c;
    l = c = 5;

    preenche_matriz(matriz, l, c);

    printf("Matriz resultante: \n");
    imprime_matriz(matriz, l, c);

    printf("Matriz transposta: \n");
    imprime_transposta(matriz, l, c);

    return 0;
}

void preenche_matriz(int matriz[MAX][MAX], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz[i][j] = rand() % 101;
}

void imprime_matriz(int matriz[MAX][MAX], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);

        printf("\n");
    }

}

void imprime_transposta(int matriz[MAX][MAX], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
            printf("%3d ", matriz[j][i]);

        printf("\n");
    }
}