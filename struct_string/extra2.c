/* Crie um tipo struct com os campos nome (somente um char indicando a inicial), dia de aniversário e mês de aniversário.
Desenvolva um programa que leia do teclado 5 structs e os armazene em um vetor com alocação estática. Depois,
mostre para cada um dos meses do ano a inicial do nome dos aniversariantes.
b) Refaça o exercício de forma que o programa leia o número de aniversariantes e faça alocação dinâmica do vetor de
structs. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meu_header.h"

typedef struct 
{
    String nome;
    int dia;
    int mes;
} Pessoa;

void le_pessoas(Pessoa *pessoas_arr, int qtd_pessoas);
void imprime_pessoas(Pessoa *pessoas_arr, int qtd_pessoas);

int main(void)
{
    int qtd_pessoas;
    Pessoa *pessoas;

    printf("De quantas pessoas você quer ler informacoes? ");
    scanf("%d", &qtd_pessoas);

    pessoas = (Pessoa *) malloc(qtd_pessoas * sizeof(Pessoa));

    le_pessoas(pessoas, qtd_pessoas);

    imprime_pessoas(pessoas, qtd_pessoas);

    for (int i = 0; i < qtd_pessoas; i++)
        free(pessoas[i].nome);
        
    free(pessoas);
}

void le_pessoas(Pessoa *pessoas_arr, int qtd_pessoas)
{
    int lixo;
    for (int i = 0; i < qtd_pessoas; i++)
    {
        pessoas_arr[i].nome = le_string(&lixo, "Qual seu nome?");
        printf("Qual seu dia e mes de nasc (inicial dd mm)? ");
        scanf("%d %d", &pessoas_arr[i].dia, &pessoas_arr[i].mes);
    }
}

void imprime_pessoas(Pessoa *pessoas_arr, int qtd_pessoas)
{
    for (int i = 1; i <= 12; i++)
    {
        printf("Aniversariantes do mes %d:\n", i);
        for (int j = 0; j < qtd_pessoas; j++)
        {
            if (i == pessoas_arr[j].mes)
            {
                printf("\tNome: %s Data de Nasc.: %02d/%02d\n", 
                        pessoas_arr[j].nome, pessoas_arr[j].dia, pessoas_arr[j].mes);
            }
        }
    }
    
}
