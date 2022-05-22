#ifndef FUNCOES_BASICAS_H
#define FUNCOES_BASICAS_H

void preenche_vetor(int vetor[], int tam, int lim_inf, int lim_sup);
int *cria_vetor(int tam);
int imprime_vetor(int vetor[], int tam);
int **cria_matriz(int lin, int col);
void imprime_matriz(int **matriz, int lin, int col);
void preenche_matriz(int **matriz, int lin, int col, int lim_inf, int lim_sup);
void libera_matriz(int **matriz, int lin);

#endif