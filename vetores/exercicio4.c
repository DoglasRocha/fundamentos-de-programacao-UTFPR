/* Faça uma função que receba como parâmetro um valor inteiro representando um limite superior e preencha um vetor
de N posições com valores aleatórios de 0 até esse limite. Atenção: use essa função para preencher vetores nos exercícios
seguintes.
Protótipo: void preencheVetor(int v[], int n, int lim); */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void preenche_vetor(int vetor[], int tamanho, int limite);
void imprime_vetor(int vetor[], int tamanho);

int main(void)
{
    int limite, vetor[TAMANHO];
    srand(time(NULL));

    printf("Digite um numero limite para preenchimento do vetor: ");
    scanf("%d", &limite);

    preenche_vetor(vetor, TAMANHO, limite);
    imprime_vetor(vetor, TAMANHO);

    return 0;
}

void preenche_vetor(int vetor[], int tamanho, int limite)
{
    for (int i = 0; i < tamanho; i++)
        vetor[i] = rand() % limite;
}

void imprime_vetor(int vetor[], int tamanho)
{
    printf("[");

    for (int i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

    printf("]\n");
}