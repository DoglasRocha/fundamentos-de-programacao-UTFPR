/* Implemente um programa em C que gere dois vetores contendo N números inteiros aleatórios cada um. Após a geração
dos vetores, o programa deve imprimir a soma dos elementos dos vetores da seguinte forma: o primeiro elemento do
primeiro vetor + o último elemento do segundo vetor, o segundo elemento do primeiro vetor + o penúltimo elemento
do segundo vetor, e assim por diante, até o último elemento do primeiro vetor + o primeiro elemento do segundo vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void preenche_vetor(int vetor[], int tamanho);
void imprime_vetor(int vetor[], int tamanho);
void soma_e_imprime(int vetor1[], int vetor2[], int tamanho);

int main(void)
{
    int vetor1[TAMANHO], vetor2[TAMANHO];
    srand(time(NULL));

    preenche_vetor(vetor1, TAMANHO);
    preenche_vetor(vetor2, TAMANHO);

    printf("Vetor 1: ");
    imprime_vetor(vetor1, TAMANHO);

    printf("Vetor 2: ");
    imprime_vetor(vetor2, TAMANHO);

    soma_e_imprime(vetor1, vetor2, TAMANHO);

    return 0;
}

void preenche_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 10;
}

void imprime_vetor(int vetor[], int tamanho)
{
    printf("[");

    for (int i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

    printf("]\n");
}

void soma_e_imprime(int vetor1[], int vetor2[], int tamanho)
{
    for (int i = 0, j = tamanho - 1; i < tamanho && j >= 0; i++, j--)
        printf("%d + %d = %d\n", vetor1[i], vetor2[j], vetor1[i] + vetor2[j]);
}