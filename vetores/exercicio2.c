/* Implemente um programa em C que preenche com valores aleatórios um vetor de N posições, onde N é uma constante
pré-definida. Dada uma posição do vetor (informada pelo usuário), o programa deve remover o elemento desta posição,
“puxando” todos os elementos das posições posteriores uma posição para “trás”. Por exemplo, se o vetor contém os
números 1, 3, 6, 2 e 10 e o usuário digita 2, o programa deve remover o elemento na posição número 2 do vetor - o
6 (lembre-se que a contagem inicia em 0) - ficando com os números 1, 3, 2 e 10. Após a remoção, o programa deve
mostrar o “novo” vetor na tela. Atenção, a solução deve declarar apenas o vetor original (não utilize mais de um vetor
para resolver o problema). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void preenche_vetor(int vetor[], int tamanho);
void imprime_vetor(int vetor[], int tamanho);
void remove_e_puxa(int vetor[], int posicao, int tamanho);

int main(void)
{
    int vetor[TAMANHO], posicao_a_remover;

    preenche_vetor(vetor, TAMANHO);

    printf("Vetor: ");
    imprime_vetor(vetor, TAMANHO);

    printf("Digite a posicao do elemento que você quer remover: ");
    scanf("%d", &posicao_a_remover);

    remove_e_puxa(vetor, posicao_a_remover, TAMANHO);

    printf("Vetor resultante: ");
    imprime_vetor(vetor, TAMANHO - 1);

    return 0;
}

void imprime_vetor(int vetor[], int tamanho)
{
    printf("[");

    for (int i = 0; i < tamanho; i++)
        printf("%d,", vetor[i]);

    printf("]\n");
}

void preenche_vetor(int vetor[], int tamanho)
{
    srand(time(NULL));

    for (int i = 0; i < tamanho; i++)
        vetor[i] = rand() % 20;
}

void remove_e_puxa(int vetor[], int posicao, int tamanho)
{   
    printf("Elemento removido: %d\n", vetor[posicao]);

    for (int i = posicao; i < tamanho - 1; i++)
        vetor[i] = vetor[i + 1];   
}