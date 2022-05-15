/* Dizemos que uma matriz inteira A pn ˆ nq é uma matriz de permutação se em cada linha e em cada coluna houver n-1
elementos nulos e um único elemento igual a 1. Dada uma matriz inteira A pn ˆ nq verificar se A é de permutação.
Dica: você deve pensar em uma estratégia para contar o número de valores nulos e não nulos! */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void preenche_matriz(int matriz[MAX][MAX], int lin, int col);
void imprime_matriz(int matriz[MAX][MAX], int linhas, int colunas);
int checa_matriz(int matriz[MAX][MAX], int lin, int col);

int main(void)
{
    int tamanho, matriz[MAX][MAX], eh_permutacao;

    printf("Digite o tamanho da matriz que você quer analizar: ");
    scanf("%d", &tamanho);

    preenche_matriz(matriz, tamanho, tamanho);
    printf("Matriz informada:\n");
    imprime_matriz(matriz, tamanho, tamanho);

    eh_permutacao = checa_matriz(matriz, tamanho, tamanho);

    printf("A matriz informada%s eh de permutacao\n", eh_permutacao ? "" : " nao");
    return 0;
}

void preenche_matriz(int matriz[MAX][MAX], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
        {
            printf("Digite o valor (0 ou 1) da posicao %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
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

int checa_matriz(int matriz[MAX][MAX], int lin, int col)
{
    int count = 0;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
            if (matriz[i][j] == 1)
                count++; 
        
        if (count != 1)
            return 0;
        
        count = 0;
    }

    return 1;
}
