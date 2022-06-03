/* Faça um programa que receba um nome completo na forma de uma string e mostre a abreviatura deste nome. Não se
devem abreviar as palavras com 2 ou menos letras. A abreviatura deve vir separada por pontos. Ex: Paulo Jose de
Almeida Prado. Abreviatura: P. J. de A. P. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meu_header.h"

void abrevia_nome(String *palavras, int qtd_palavras);

int main(void)
{
    int tam_nome, qtd_palavras;
    String nome = le_string(&tam_nome, "Qual seu nome?");

    String *nome_separado = separa_por_espacos(nome, tam_nome, &qtd_palavras);

    abrevia_nome(nome_separado, qtd_palavras);

    free(nome);
    for (int i = 0; i < qtd_palavras; i++)
        free(nome_separado[i]);

    free(nome_separado);
    return 0;
}

void abrevia_nome(String *nome_separado, int qtd_palavras)
{
    for (int i = 0; i < qtd_palavras; i++)
        if (strlen(nome_separado[i]) > 2)
            printf("%c. ", nome_separado[i][0]);
        
        else
            printf("%s ", nome_separado[i]);

        
    printf("\n");
}