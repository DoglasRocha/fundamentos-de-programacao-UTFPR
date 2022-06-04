#include "meu_header.h"
#include <stdio.h>
#include <stdlib.h>

String le_string(int *tam_str_ptr, String mensagem)
{
    int tam;
    String texto = (String) malloc(2 * sizeof(char));
    char c;

    printf("%s ", mensagem);
    scanf(" %c", &c);

    for (tam = 0; c != '\n'; tam++)
    {
        texto[tam] = c;
        texto = (String) realloc(texto, (tam + 3) * sizeof(char));

        scanf("%c", &c);
    }

    texto[tam + 1] = '\0';

    *tam_str_ptr = tam;
    return texto;
}

String *separa_por_espacos(String frase, int tamanho, int *qtd_palavas)
{
    *qtd_palavas = 0;
    int pos_palavra_anterior = 0;
    String *palavras = (String *) malloc((*qtd_palavas+1) * sizeof(String));
    
    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == ' ')
        {
            // aloca espaco para palavra
            palavras[*qtd_palavas] = (String) malloc((i - pos_palavra_anterior+1) * sizeof(char));

            // copia palavra para o vetor de palavras separadas
            for (int j = 0, k = pos_palavra_anterior; j < (i - pos_palavra_anterior); j++, k++)
                palavras[*qtd_palavas][j] = frase[k];
            
            // fim da palavra
            palavras[*qtd_palavas][i-pos_palavra_anterior] = '\0';

            // atualiza qtd de palavras e atualiza posicao da palavra anterior
            (*qtd_palavas)++;
            pos_palavra_anterior = i + 1;

            // aumenta tamanho do vetor de palavras separadas
            palavras = (String *) realloc(palavras, (*qtd_palavas+1) * sizeof(String));
        }
    }

    // ultima palavra
    palavras[*qtd_palavas] = (String) malloc((tamanho-pos_palavra_anterior+1) * sizeof(char));

    for (int j = 0, k = pos_palavra_anterior; j < (tamanho-pos_palavra_anterior); j++, k++)
        palavras[*qtd_palavas][j] = frase[k];
    
    palavras[*qtd_palavas][tamanho-pos_palavra_anterior] = '\0';
    (*qtd_palavas)++;

    return palavras;
}
