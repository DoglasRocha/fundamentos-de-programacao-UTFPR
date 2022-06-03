/* Ao serem fornecidas duas strings, gerar e exibir a intercalação das palavras contidas nas cadeias em uma terceira cadeia.
Exemplo:
Frase1: Em de espeto de
Frase2: casa ferreiro é pau
Frase3: Em casa de ferreiro espeto é de pau */

#include <stdio.h>
#include <stdlib.h>
#include "meu_header.h"

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