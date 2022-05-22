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
#include "funcoes_basicas.h"

void remove_e_puxa(int *vetor, int posicao, int *tamanho);

int main(void)
{
    srand(time(NULL));
    int *vetor, tam_vetor, posicao_a_remover;

    printf("Qual o tamanho do vetor que você deseja criar? ");
    scanf("%d", &tam_vetor);

    vetor = cria_vetor(tam_vetor);

    preenche_vetor(vetor, tam_vetor, 0, 50);

    printf("Vetor: ");
    imprime_vetor(vetor, tam_vetor);

    printf("Digite a posicao do elemento que você quer remover: ");
    scanf("%d", &posicao_a_remover);

    remove_e_puxa(vetor, posicao_a_remover, &tam_vetor);

    printf("Vetor resultante: ");
    imprime_vetor(vetor, tam_vetor);

    return 0;
}

void remove_e_puxa(int *vetor, int posicao, int *tamanho)
{   
    printf("Elemento removido: %d\n", vetor[posicao]);

    *tamanho -= 1;

    for (int i = posicao; i < *tamanho; i++)
        vetor[i] = vetor[i + 1];

    vetor = (int *) realloc(vetor, *tamanho * sizeof(int));   
}