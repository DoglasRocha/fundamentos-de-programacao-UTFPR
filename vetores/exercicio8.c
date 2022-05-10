/* Modifique a função do item anterior de forma que ela também retorne, por referência, o maior e o menor elemento
do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
int soma_pares(int vetor[], int tamanho, int *max, int *min);

int main(void)
{
    int vetor[TAMANHO], soma, max = 0, min = 0;

    preenche_vetor(vetor, TAMANHO, 1, 10);

    printf("Vetor trabalhado: ");
    imprime_vetor(vetor, TAMANHO);

    soma = soma_pares(vetor, TAMANHO, &max, &min);
    printf("Soma elementos com posicao par: %d, maior numero: %d e menor numero: %d\n", soma, max, min);
        

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

int soma_pares(int vetor[], int tamanho, int *max, int *min)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (i % 2 == 0)    
            soma += vetor[i];

        if (*max < vetor[i])
            *max = vetor[i];

        if (*min > vetor[i] || i == 0)
            *min = vetor[i];
    }

    return soma;
}

