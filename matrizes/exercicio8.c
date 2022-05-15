/* Implemente um programa em C que leia/crie duas matrizes A e B de tamanho 3 x 3 e
• calcule C “ A ˚ B
• calcule C “ A2
• calcule C “ An (n fornecido pelo usuário)
Modifique o programa para que funcione para matrizes A e B de tamanho M ˆ M, M como uma macro. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 3

void gera_matriz(int matriz[M][M], int lin, int col);
void imprime_matriz(int matriz[M][M], int linhas, int colunas);
void imprime_mult_matrizes(int matriz1[M][M], int matriz2[M][M], int lin, int col);
void multiplicacao_matrizes(int matriz1[M][M], int matriz2[M][M], int lin, int col, int matriz_res[M][M]);
void potencia_matriz(int matriz[M][M], int potencia, int lin, int col);
void copia_matriz(int matriz_o[M][M], int matriz_c[M][M], int lin, int col);

int main(void)
{
    int matrizA[M][M], matrizB[M][M], potencia;
    srand(time(NULL));

    gera_matriz(matrizA, M, M);
    printf("Matriz A:\n");
    imprime_matriz(matrizA, M, M);

    gera_matriz(matrizB, M, M);
    printf("Matriz B:\n");
    imprime_matriz(matrizB, M, M);

    imprime_mult_matrizes(matrizA, matrizB, M, M);

    potencia_matriz(matrizA, 2, M, M);

    printf("A qual potência você deseja elevar A? ");
    scanf("%d", &potencia);
    potencia_matriz(matrizA, potencia, M, M);

    return 0;

}

void gera_matriz(int matriz[M][M], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            matriz[i][j] = rand() % 10;
}

void imprime_matriz(int matriz[M][M], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);

        printf("\n");
    }
}

void imprime_mult_matrizes(int matriz1[M][M], int matriz2[M][M], int lin, int col)
{
    int matriz_aux[M][M];

    multiplicacao_matrizes(matriz1, matriz2, lin, col, matriz_aux);

    printf("Multiplicacao A * B:\n");
    imprime_matriz(matriz_aux, lin, col);
}

void multiplicacao_matrizes(int matriz1[M][M], int matriz2[M][M], int lin, int col, int matriz_res[M][M])
{
    int soma = 0;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col; k++)
                soma += matriz1[i][k] * matriz2[k][j];

            matriz_res[i][j] = soma;
            soma = 0;
        }
    } 
}

void potencia_matriz(int matriz[M][M], int potencia, int lin, int col)
{
    int matriz_aux[M][M], matriz_res[M][M];
    copia_matriz(matriz, matriz_aux, lin, col);

    for (int i = 1; i < potencia; i++)
    {
        multiplicacao_matrizes(matriz, matriz_aux, lin, col, matriz_res);

        copia_matriz(matriz_res, matriz_aux, lin, col);
    }

    printf("Matriz A^%d:\n", potencia);
    imprime_matriz(matriz_res, lin, col);
}

void copia_matriz(int matriz_o[M][M], int matriz_c[M][M], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            matriz_c[i][j] = matriz_o[i][j];
}
