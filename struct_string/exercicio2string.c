/* Dadas duas cadeias (uma contendo uma frase e outra contendo uma palavra), crie uma função que retorne o número de
vezes que a palavra ocorre na frase. Para exemplificar considere a palavra ANA e a frase: ANA e MARIANA GOSTAM DE
BANANA. A palavra ANA ocorre 4 vezes. Dica: tente se embasar em funções de busca de sequência em vetores numéricos
já implementadas anteriormente. */

#include <stdio.h>
#include <stdlib.h>
#include "meu_header.h"

int busca_ocorrencias(String palavra, int tam_palavra, String frase, int tam_frase);

int main(void)
{
    String frases[2];
    int tam_frases[2], ocorrencias;

    frases[0] = le_string(&tam_frases[0], "Digite uma palavra:");
    frases[1] = le_string(&tam_frases[1], "Digite uma frase:");

    ocorrencias = busca_ocorrencias(frases[0], tam_frases[0], frases[1], tam_frases[1]);

    printf("A palavra %s ocorreu %d vezes na frase %s.\n", frases[0], ocorrencias, frases[1]);

    free(frases[0]);
    free(frases[1]);

    return 0;
}

int busca_ocorrencias(String palavra, int tam_palavra, String frase, int tam_frase)
{
    int ocorrencias = 0, ocorreu;

    for (int i = 0; i < tam_frase; i++){
        ocorreu = 0;

        if (frase[i] == palavra[0])
        {
            ocorreu = 1;

            for (int j = 1; j < tam_palavra; j++)
            {
                if (frase[i + j] != palavra[j])
                {
                    ocorreu = 0;
                    break;
                }
            }
        }
        if (ocorreu) 
            ocorrencias++;
    }

    return ocorrencias;
}