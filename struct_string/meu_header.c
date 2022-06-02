#include "meu_header.h"
#include <stdio.h>
#include <stdlib.h>

String le_string(int *tam_str_ptr, String mensagem)
{
    int tam = 1;
    String texto = (String) malloc((tam + 1) * sizeof(char));
    char c;

    printf("%s ", mensagem);
    scanf("%c", &c);

    for (int i = 0; c != '\n'; i++, tam++)
    {
        texto[i] = c;
        texto = (String) realloc(texto, (tam + 1) * sizeof(char));

        scanf("%c", &c);
    }

    texto[tam] = '\0';

    *tam_str_ptr = tam;
    return texto;
}