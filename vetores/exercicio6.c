/* Faça duas funções: uma que imprima o conteúdo de um vetor em ordem direta (do primeiro ao último elemento) e
outra que imprima em ordem inversa (do último elemento até o primeiro). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 5

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
void imprime_vetor_inverso(int vetor[], int tamanho);

int main(void)
{
    int vetor[TAMANHO];

    preenche_vetor(vetor, TAMANHO, 1, 20);

    printf("Order normal: ");
    imprime_vetor(vetor, TAMANHO);

    printf("Ordem inversa: ");
    imprime_vetor_inverso(vetor, TAMANHO);

    return 0;
}

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max)
{
    srand(time(NULL));

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

void imprime_vetor_inverso(int vetor[], int tamanho)
{
    printf("[");

    for (int i = tamanho - 1; i >= 0; i--)
        printf("%d,", vetor[i]);

    printf("]\n");
}