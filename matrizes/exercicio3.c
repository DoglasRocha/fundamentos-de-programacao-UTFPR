/* Na teoria de sistemas define-se elemento minimax de uma matriz, o menor elemento da linha em que se encontra o
maior elemento da matriz. Implemente um programa em C que leia ou gere aleatoriamente uma matriz A de dimensão
10ˆ10 e determine o elemento minimax desta matriz, imprima a linha e coluna que o elemento se encontra, o elemento
e o maior elemento da matriz. No exemplo abaixo, o maior elemento da matriz é 6 e o menor elemento da linha é 4,
que se encontra na linha 1 e coluna 0.
1 2 3
4 5 6
1 1 1 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define C 10

void preenche_matriz(int matriz[L][C], int linhas, int colunas);
int acha_maior(int matriz[L][C], int linhas, int colunas, int *linha_maior);
int acha_minimax(int vetor[], int colunas, int *col_minimax);
void imprime_matriz(int matriz[L][C], int linhas, int colunas);

int main(void)
{
    int maior, minimax, lin_minimax, col_minimax, matriz[L][C], col = C, lin = L;
    srand(time(NULL));

    preenche_matriz(matriz, lin, col);

    maior = acha_maior(matriz, lin, col, &lin_minimax);
    minimax = acha_minimax(matriz[lin_minimax], col, &col_minimax);

    imprime_matriz(matriz, lin, col);

    printf("O maior elemento é: %d, o elemento minimax é: %d e ele se encontra na posicao: %d %d\n", 
           maior, minimax, lin_minimax, col_minimax);

    return 0;
}


void preenche_matriz(int matriz[L][C], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz[i][j] = rand() % 101;
}

int acha_maior(int matriz[L][C], int linhas, int colunas, int *linha_maior)
{
    int maior = 0;

    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j],
                *linha_maior = i;

    return maior;
}

int acha_minimax(int vetor[], int colunas, int *col_minimax)
{
    int minimax;

    for (int i = 0; i < colunas; i++)
    {
        if (i == 0 || minimax > vetor[i])
            minimax = vetor[i],
            *col_minimax = i;
    }

    return minimax;
}

void imprime_matriz(int matriz[L][C], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);

        printf("\n");
    }
}