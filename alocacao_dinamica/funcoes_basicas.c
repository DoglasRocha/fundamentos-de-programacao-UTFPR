#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_basicas.h"

void preenche_vetor(int vetor[], int tam, int lim_inf, int lim_sup)
{
    for (int i = 0; i < tam; i++)
        vetor[i] = lim_inf + rand() % (lim_sup - lim_inf) + 1;
}

int *cria_vetor(int tam, int lim_inf, int lim_sup)
{
    int *v;

    v = (int *) malloc(tam * sizeof(int));

    if (v == NULL)
        printf("Erro na alocacao!\n");

    else
        preenche_vetor(v, tam, lim_inf, lim_sup);

    return v;
}

int imprime_vetor(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
        printf("%d ", vetor[i]);

    printf("\n");
}