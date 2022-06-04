/* Escreva uma função que recebe como parâmetro um vetor de int. A função deve criar outro vetor, e colocar nele os
elementos do vetor passado como parâmetro, mas sem repetições. Por exemplo, se os elementos do vetor original são
[0, 1, 2, 3, 4, 3, 2, 4, 5, 3, 2, 6, 1, 0], o novo vetor deve conter apenas [0, 1, 2, 3, 4, 5, 6]. O novo
vetor deve ter apenas o tamanho necessário para manter os valores. Os dados do vetor original devem ser mantidos
intactos. No final, a função deve retornar o número de itens do vetor criado - o vetor em si é retornado como um
parâmetro passado por referência. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_basicas.h"

int remove_valores_duplicados(int vetor_original[], int **v_destino, int tam);

int main(void)
{
    int *vetor, *vetor_sem_duplicatas, tamanho, lim_inf, lim_sup, tam_s_duplicatas;
    srand(time(NULL));

    printf("Digite o tamanho do vetor que você deseja criar: ");
    scanf("%d", &tamanho);

    printf("Digite os valores limites inferior e superior para preenchimento do vetor, separados por espacos: ");
    scanf("%d %d", &lim_inf, &lim_sup);

    vetor = cria_vetor(tamanho);
    preenche_vetor(vetor, tamanho, lim_inf, lim_sup);

    printf("Vetor criado: ");
    imprime_vetor(vetor, tamanho);

    tam_s_duplicatas = remove_valores_duplicados(vetor, &vetor_sem_duplicatas, tamanho);
    printf("Vetor sem duplicatas: ");
    imprime_vetor(vetor_sem_duplicatas, tam_s_duplicatas);

    free(vetor);
    free(vetor_sem_duplicatas);

    return 0;
}

int remove_valores_duplicados(int vetor_original[], int **v_destino, int tam)
{
    int tam_v_destino = 1, esta_no_vetor = 0;
    int *v_aux = (int *) malloc(sizeof(int));
    v_aux[0] = vetor_original[0];

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam_v_destino; j++)
            if (v_aux[j] == vetor_original[i])
            {
                esta_no_vetor = 1;
                break;
            }

        if (!esta_no_vetor)
        {
            v_aux = (int *) realloc(v_aux, (tam_v_destino + 1) * sizeof(int));
            v_aux[tam_v_destino] = vetor_original[i];
            tam_v_destino++;
        }

        esta_no_vetor = 0;
    }

    *v_destino = v_aux;
    return tam_v_destino;
}