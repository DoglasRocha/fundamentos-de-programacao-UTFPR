/* Faça um programa que receba uma frase e conte as vogais, apresentando uma saída tal como a ilustrada abaixo.
Exemplo: para a frase Na proxima quarta-feira eh feriado. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "meu_header.h"

void conta_vogais(String texto, int tamanho);

int main(void)
{
    int tam;
    String texto;

    texto = le_string(&tam, "Digite uma frase:");

    conta_vogais(texto, tam);

    free(texto);

    return 0;
}

void conta_vogais(String texto, int tamanho)
{
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    int count;

    printf("Contagem de vogais:\n");

    for (int l = 0; l < 5; l++)
    {
        count = 0;

        printf("%c : ", vogais[l]);

        for (int i = 0; i < tamanho; i++)
            if (vogais[l] == texto[i])
            {
                printf("*");
                count++;
            }

        printf(" (%d)\n", count);
    }
}