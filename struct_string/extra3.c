/* Preencha com dados aleatórios um conjunto de 15 structs contendo código, telefone da loja e preço de um eletrodo-
méstico. Desenvolva um programa que permita exibir qual foi a média dos preços cadastrados e uma relação contendo
o telefone das lojas cujo preço estava abaixo da média. Obs: os códigos e o telefone devem ser numéricos e devem ser
armazenados como int (defina para eles valores que caibam num inteiro). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "meu_header.h"

#define PRECO_MAX 1000

typedef struct
{
    float preco;
    String telefone;
    int codigo;
} Eletrodomestico;

void preenche_vetor_eletrodomest(Eletrodomestico *eletro_arr, int tam);
float calcula_media_eletro(Eletrodomestico *eletro_arr, int tam);
void imprime_abaixo_media(Eletrodomestico *eletro_arr, int tam, float media);

int main(void)
{
    Eletrodomestico *eletros;
    int tam = 15;
    float media;
    srand(time(NULL));

    eletros = (Eletrodomestico *) malloc(tam * sizeof(Eletrodomestico));

    preenche_vetor_eletrodomest(eletros, tam);

    media = calcula_media_eletro(eletros, tam);
    printf("Media dos precos: %.2f\n", media);

    imprime_abaixo_media(eletros, tam, media);

    for (int i = 0; i < tam; i++)
        free(eletros[i].telefone);

    free(eletros);
    return 0;
}

void preenche_vetor_eletrodomest(Eletrodomestico *eletro_arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        eletro_arr[i].preco = (rand() / (float) RAND_MAX) * PRECO_MAX;
        eletro_arr[i].codigo = rand() % 1000000;
        eletro_arr[i].telefone = (String) malloc(14 * sizeof(char));
        sprintf(eletro_arr[i].telefone, "(41)%05d-%04d", rand() % 100000, rand() % 10000);
    }
}

float calcula_media_eletro(Eletrodomestico *eletro_arr, int tam)
{
    float media = 0;

    for (int i = 0; i < tam; i++)
        media += eletro_arr[i].preco;
    
    return media / tam;
}

void imprime_abaixo_media(Eletrodomestico *eletro_arr, int tam, float media)
{
    printf("Telefone das lojas com preco abaixo da media:\n");

    for (int i = 0; i < tam; i++)
        if (eletro_arr[i].preco < media)
            printf("\tTelefone: %s, preco: R$%.2f\n", eletro_arr[i].telefone, eletro_arr[i].preco);
}
