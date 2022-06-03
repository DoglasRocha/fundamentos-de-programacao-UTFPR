#include "meu_header.h"
#include <stdio.h>
#include <stdlib.h>

String le_string(int *tam_str_ptr, String mensagem)
{
    int tam;
    String texto = (String) malloc(sizeof(char));
    char c;

    printf("%s ", mensagem);
    scanf("%c", &c);

    for (tam = 0; c != '\n'; tam++)
    {
        texto[tam] = c;
        texto = (String) realloc(texto, (tam + 2) * sizeof(char));

        scanf("%c", &c);
    }

    texto[tam + 1] = '\0';

    *tam_str_ptr = tam;
    return texto;
}
