/* Ao serem fornecidas duas strings, gerar e exibir a intercalação das palavras contidas nas cadeias em uma terceira cadeia.
Exemplo:
Frase1: Em de espeto de
Frase2: casa ferreiro é pau
Frase3: Em casa de ferreiro espeto é de pau */

#include <stdio.h>
#include <stdlib.h>
#include "meu_header.h"

String *separa_por_espacos(String frase, int tamanho, int *qtd_palavas);
void intercala_frases(String **palavras_separadas, int qtd_palavras[]);

int main(void)
{
    String frases[2];
    int tam_frases[2];
    String *palavras[2];
    int qtd_palavras[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Digite a frase %d: ", i);
        frases[i] = le_string(&tam_frases[i], "");
        palavras[i] = separa_por_espacos(frases[i], tam_frases[i], &qtd_palavras[i]);
    }

    intercala_frases(palavras, qtd_palavras);
    return 0;
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
            palavras[*qtd_palavas] = (String) malloc((i - pos_palavra_anterior) * sizeof(char));

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
    palavras[*qtd_palavas] = (String) malloc((tamanho-pos_palavra_anterior) * sizeof(char));

    for (int j = 0, k = pos_palavra_anterior; j < (tamanho-pos_palavra_anterior); j++, k++)
        palavras[*qtd_palavas][j] = frase[k];
    
    palavras[*qtd_palavas][tamanho-pos_palavra_anterior] = '\0';
    (*qtd_palavas)++;

    return palavras;
}

void intercala_frases(String **palavras_separadas, int qtd_palavras[])
{
    int qtd_palavras_total = qtd_palavras[0] + qtd_palavras[1];
    String *frase_resultante = (String *) malloc((qtd_palavras_total) * sizeof(String));

    for (int i = 0, j = 0; i < qtd_palavras[0]; i++)
    {
        frase_resultante[j] = palavras_separadas[0][i]; j++;
        frase_resultante[j] = palavras_separadas[1][i]; j++;
    }

    for (int i = 0; i < qtd_palavras_total; i++)
        printf("%s ", frase_resultante[i]);

    printf("\n");
}