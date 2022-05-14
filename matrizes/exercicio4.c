/* Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha, a soma dos
elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todos iguais. Exemplo:
8 0 7
4 5 6
3 10 2
é um quadrado mágico pois 8`0`7 “ 4`5`6 “ 3`10`2 “ 8`4`3 “ 0`5`10 “ 7`6`2 “ 8`5`2 “ 3`5`7
Faça uma programa, dada uma matriz quadrada A (lida do teclado), imprima na tela se ela é um quadrado mágico ou
não. Dica: observe que, assim que uma das somas for diferente, você já pode sair do laço! */

#include <stdio.h>

#define DIM 3

void preenche_matriz(int matriz[DIM][DIM], int lin, int col);
int eh_quadrado_magico(int matriz[DIM][DIM], int lin, int col);
void imprime_matriz(int matriz[DIM][DIM], int linhas, int colunas);

int main(void)
{
    int matriz[DIM][DIM], l, c, eh_magico;
    l = c = DIM;

    preenche_matriz(matriz, l, c);

    eh_magico = eh_quadrado_magico(matriz, l, c);
    printf("O quadrado informado%s eh magico\n", eh_magico ? "" : " nao");

    imprime_matriz(matriz, l, c);

    return 0;
}

void preenche_matriz(int matriz[DIM][DIM], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
        {
            printf("Digite o elemento da posicao %d %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

int eh_quadrado_magico(int matriz[DIM][DIM], int lin, int col)
{
    int soma_anterior, soma1 = 0, soma2 = 0;

    // soma de linhas e colunas
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
            soma1 += matriz[i][j],
            soma2 += matriz[j][i];

        if (soma1 != soma2 || (soma_anterior != soma1 && i != 0))
            return 0;
        
        soma_anterior = soma1;
        soma1 = soma2 = 0;
    }

    // soma das diagonais
    for (int i = 0, j = lin - 1; i < lin && j >= 0; i++, j--)
        soma1 += matriz[i][i],
        soma2 += matriz[j][j];
    
    if (soma1 != soma2 || soma_anterior != soma1)
        return 0;

    return 1;
}

void imprime_matriz(int matriz[DIM][DIM], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
            printf("%3d ", matriz[i][j]);

        printf("\n");
    }
}