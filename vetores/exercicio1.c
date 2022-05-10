/* Implemente um programa em C que preenche os elementos de um vetor de forma a permitir apenas a inserção de
valores distintos. Caso o usuário tente inserir um valor já existente, o programa deve alertar a duplicidade e solicitar
um novo valor. */

#include <stdio.h>
#define TAMANHO 5

int insere_valor(int vetor[], int valor, int posicao);
void imprime_vetor(int vetor[]);

int main(void)
{
    int valor, sucesso, vetor[TAMANHO], posicao = 0;

    do
    {
        printf("Por favor, digite o elemento da posicao %d do vetor de tamanho %d: ", posicao, TAMANHO);
        scanf("%d", &valor);

        sucesso = insere_valor(vetor, valor, posicao);

        if (sucesso)
            posicao++;
        
        else
            printf("Elemento repetido!!\n");
        
    } while (posicao < TAMANHO);

    imprime_vetor(vetor);

    return 0;
}

int insere_valor(int vetor[], int valor, int posicao)
{
    int esta_dentro = 0;

    for (int i = 0; i < TAMANHO; i++)
    {
        if (vetor[i] == valor)
        {
                esta_dentro = 1;
                break;
        }
    }

    if (!esta_dentro)
    {
        vetor[posicao] = valor;
        return 1;
    }

    return 0;
}

void imprime_vetor(int vetor[])
{
    printf("[");

    for (int i = 0; i < TAMANHO; i++)
        printf("%d,", vetor[i]);

    printf("]\n");
}
