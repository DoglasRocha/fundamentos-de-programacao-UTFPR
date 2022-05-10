/* Faça uma função com protótipo:
void intercalaVetores(int v1[], int v2[], int v3[], int n);
que receba como parâmetros de entrada dois vetores de inteiros (e sua dimensão) e preencha um terceiro vetor de tal
forma que este possua nas posições de índice par os valores do primeiro e nas posições de índice ímpar os valores do
segundo vetor (em outras palavras: intercalar os dois vetores iniciais. Obs - Todos os elementos dos vetores originais
devem estar presentes no vetor intercalado conforme a figura abaixo).
transcrição da figura acima:
exemplo do primeiro vetor com 4 elementos: 1 2 5 4

exemplo do segundo vetor com 4 elementos: 2 3 7 3
resultado do vetor que intercala o primeiro e segundo: 1 2 2 3 5 7 4 3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 5

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
void intercala_valores(int v1[], int v2[], int v3[], int n);

int main(void)
{
    srand(time(NULL));

    int vetor1[TAMANHO], vetor2[TAMANHO], vetor3[TAMANHO * 2]; 

    preenche_vetor(vetor1, TAMANHO, 1, 10);
    preenche_vetor(vetor2, TAMANHO, 1, 10);

    printf("Vetor 1: ");
    imprime_vetor(vetor1, TAMANHO);

    printf("Vetor 2: ");
    imprime_vetor(vetor2, TAMANHO);

    intercala_valores(vetor1, vetor2, vetor3, TAMANHO);

    printf("Vetor resultante: ");
    imprime_vetor(vetor3, TAMANHO * 2);

    return 0;
}

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max)
{
    for (int i = 0; i < tamanho; i++)
        // lim_max - lim_min + 1 / +1 serve para incluir o limite superior nos resultados
        vetor[i] = rand() % (lim_max - lim_min + 1) + lim_min;
}

void imprime_vetor(int vetor[], int tamanho)
{
    printf("[");

    for (int i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

    printf("]\n");
}

void intercala_valores(int v1[], int v2[], int v3[], int n)
{
    for (int i = 0, j = 0; i < n; i++)
        for (int k = 0; k < 2; k++, j++)
            v3[j] = k % 2 == 0 ? v1[i] : v2[i];
}
