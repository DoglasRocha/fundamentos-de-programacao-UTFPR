/* Modifique a função anterior para que preencha um vetor de N posições com valores aleatórios (agora esses valores estão
limitados a um intervalo [min,max], onde min e max são parâmetros recebidos por valor pela função).
Protótipo: void preencheVetor(int v[], int n, int min, int max); */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void preenche_vetor(int vetor[], int tamanho, int lim_min, int lim_max);
void imprime_vetor(int vetor[], int tamanho);

int main(void)
{
    int min, max, vetor[TAMANHO];
    srand(time(NULL));

    printf("Digite um numero limite maximo e minimo, separados por espacos, para preenchimento do vetor: ");
    scanf("%d %d", &min, &max);

    preenche_vetor(vetor, TAMANHO, min, max);
    imprime_vetor(vetor, TAMANHO);

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