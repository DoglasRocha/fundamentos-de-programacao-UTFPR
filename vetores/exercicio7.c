/* Faça uma função que, dados como entrada um vetor e a sua dimensão, retorne a média dos elementos pares. */
// nao entendi se sao elementos de posicao par ou elementos pares

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);
float media_pares_posicao(int vetor[], int tamanho);
float media_elementos_pares(int vetor[], int tamanho);

int main(void)
{
    int vetor[TAMANHO];
    float media_posicao, media_elementos;

    srand(time(NULL));

    preenche_vetor(vetor, TAMANHO, 1, 10);

    printf("Vetor trabalhado: ");
    imprime_vetor(vetor, TAMANHO);

    media_posicao = media_pares_posicao(vetor, TAMANHO);
    printf("Media elementos com posicao par: %f\n", media_posicao);
        
    media_elementos = media_elementos_pares(vetor, TAMANHO);
    printf("Media elementos pares: %f\n", media_elementos);

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

float media_pares_posicao(int vetor[], int tamanho)
{
    float soma = 0, qtd = 0;

    for (int i = 0; i < tamanho; i++)
        if (i % 2 == 0)    
            soma += vetor[i], qtd++;

    return soma / qtd;
}

float media_elementos_pares(int vetor[], int tamanho)
{
    float soma = 0, qtd = 0;

    for (int i = 0; i < tamanho; i++)
        if (vetor[i] % 2 == 0)    
            soma += vetor[i], qtd++;

    return soma / qtd;
}