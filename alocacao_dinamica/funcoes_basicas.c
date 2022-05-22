#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_basicas.h"

void preenche_vetor(int vetor[], int tam, int lim_inf, int lim_sup)
{
    for (int i = 0; i < tam; i++)
        vetor[i] = lim_inf + rand() % (lim_sup - lim_inf) + 1;
}

int *cria_vetor(int tam)
{
    int *v;

    v = (int *) malloc(tam * sizeof(int));

    return v;
}

int imprime_vetor(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);

    printf("\n");
}

int **cria_matriz(int lin, int col)
{
    int **m;

    m = (int **) malloc(lin * sizeof(int *));

    for (int i = 0; i < lin; i++)
        m[i] = cria_vetor(col);

    return m;
}

void imprime_matriz(int **matriz, int lin, int col)
{
    for (int i = 0; i < lin; i++)
        imprime_vetor(matriz[i], col);
}

void preenche_matriz(int **matriz, int lin, int col, int lim_inf, int lim_sup)
{
    for (int i = 0; i < lin; i++)
        preenche_vetor(matriz[i], col, lim_inf, lim_sup);
}

void libera_matriz(int **matriz, int lin)
{
    for (int i = 0; i < lin; i++)
        free(matriz[i]);

    free(matriz);
}