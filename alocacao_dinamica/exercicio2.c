/* Escreva um programa que aloque memória para dois vetores, com tamanhos diferentes, dados pelo usuário. Os vetores
devem ser preenchidos com valores aleatórios no intervalo [0, 10]. O programa deve então criar um terceiro vetor,
capaz de conter todos os elementos Vi*Vj, onde Vi é um elemento do primeiro vetor e Vj é um elemento do segundo
vetor (veja um exemplo na figura abaixo). A multiplicação elemento-a-elemento dos dois vetores deve ser calculada, e
os valores obtidos devem ser apresentados. Dica: você pode usar uma ou mais funções para organizar o seu código.
A figura acima ilustra dois ponteiros (v1 e v2) cada um apontando para um bloco de elementos inteiros, de tamanhos
diferentes e depois um ponteiro vmult apontando para o resultado da multiplicação de todos os elementos de v1 por
todos os elementos de v2.
Na primeira parte da figura, o exemplo mostra o ponteiro v1 apontando para um bloco de 2 elementos {-1,0}
Na segunda parte, o exemplo mostra o ponteiro v2 apontando para um bloco de 3 elementos {2,3,-1}
Na terceira e última parte, o exemplo mostra o ponteiro vmult apontando para o bloco resultante: um bloco de 2*3=6
elementos {-2,-3,1,0,0,0}. Logo abaixo desse bloco de resultado, há uma indicação de que os 3 primeiros elementos
do bloco de multiplicação trazem o resultado do primeiro elemento de v1 (v1[0]=-1) multiplicado pelos elementos do
bloco v2 e os 3 últimos elementos do bloco de multiplicação trazem o resultado do segundo elemento de v1 (v1[1]=0)
multiplicado pelos elementos do bloco v2. Lembre-se de que esse é apenas um exemplo. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_basicas.h"

int *multiplica_vetores(int vetor1[], int vetor2[], int tam1, int tam2, int *tam3);

int main(void)
{
    int *v1, *v2, *v3, tam1, tam2, tam3, lim_inf, lim_sup;
    srand(time(NULL));

    lim_inf = 0, lim_sup = 10;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);
    v1 = cria_vetor(tam1);
    if (v1 == NULL)
    {
        printf("Erro na alocação!\n");
        return 1;
    }
    preenche_vetor(v1, tam1, lim_inf, lim_sup);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);
    v2 = cria_vetor(tam2);
    if (v2 == NULL)
    {
        printf("Erro na alocação!\n");
        return 1;
    }
    preenche_vetor(v2, tam2, lim_inf, lim_sup);

    printf("Vetor 1:\n");
    imprime_vetor(v1, tam1);

    printf("Vetor 2:\n");
    imprime_vetor(v2, tam2);

    v3 = multiplica_vetores(v1, v2, tam1, tam2, &tam3);
    if (v3 == NULL)
        return 1;

    printf("Vetor resultante:\n");
    imprime_vetor(v3, tam3);


    free(v1);
    free(v2);
    free(v3);
    
    return 0;
}  

int *multiplica_vetores(int vetor1[], int vetor2[], int tam1, int tam2, int *tam3)
{
    int *v, count = 0;
    *tam3 = tam1 * tam2;

    v = (int *) malloc(*tam3 * sizeof(int));

    if (v == NULL)
        printf("Problema na alocacao!\n");

    else
        for (int i = 0; i < tam1; i++)
            for (int j = 0; j < tam2; j++)
                v[count] = vetor1[i] * vetor2[j],
                count++;
    return v;
}
