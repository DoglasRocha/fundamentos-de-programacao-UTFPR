/* (a) Construa uma função, denominada custo_cidades que, dado um vetor de inteiros com o código das cidades na
ordem que deverão ser visitadas, o número de cidades visitadas no percurso e a matriz de custos, retorne o custo
total do itinerário. A função deve ter o seguinte protótipo:
int custo_cidades (int* cidades, int n_cidades, int** m);
(b) a função main, que deve
• solicitar ao usuário a dimensão da matriz de custo,
• alocar memória para esta matriz utilizando uma função denominada alocaMatriz,
• preencher a matriz com dados digitados pelo usuário,
• solicitar ao usuário o tamanho do itinerário,
• alocar memória para o vetor que irá armazenar o itinerário usando uma função denominada alocaVetor,
• preencher o vetor de itinerários
• chamar a função custo_cidades e imprimir na tela o custo.
Dica: Vale a pena observar que a matriz m sempre será quadrada (n ˆ n); e o custo de transporte entre as cidades i e
j é dado pelo elemento mij da matriz. Exemplo: Considerando a seguinte matriz de custos
m4ˆ4 “
¨
˚˚˝
0 31 25 1
23 0 1 8
75 1 0 400
1 15 20 0
˛
‹
‹‚
A matriz mostrada traz na primeira linha os elementos { 0 , 31 , 25 , 1}
na segunda linha os elementos { 23 , 0 , 1 , 8 }
na terceira linha os elementos { 75 , 1 , 0 , 400 }
na quarta linha os elementos { 1 , 15 , 20 , 0 }
Isso indica que o custo de ir da cidade i para a cidade j é igual ao elmento posicionado na linha i e coluna i.
Assim, o custo do itinerário t0, 3, 1, 2, 1, 0u é calculado da seguinte forma: m03 ` m31 ` m12 ` m21 ` m10 “ 1 ` 15 `
1 ` 1 ` 23 “ 41 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes_basicas.h"

int custo_cidades(int* cidades, int n_cidades, int** m);
void entra_dados_matriz(int **matriz, int lin, int col);
void entra_dados_itinerario(int vetor[], int tam);

int main(void)
{
    int dim_m_custo, tam_itinerario, **m_custo, *itinerario, custo;

    // • solicitar ao usuário a dimensão da matriz de custo
    printf("Digite a dimensão da matriz de custo: ");
    scanf("%d", &dim_m_custo);

    // • alocar memória para esta matriz utilizando uma função denominada alocaMatriz
    m_custo = cria_matriz(dim_m_custo, dim_m_custo);

    // • preencher a matriz com dados digitados pelo usuário
    entra_dados_matriz(m_custo, dim_m_custo, dim_m_custo);

    // • solicitar ao usuário o tamanho do itinerário
    printf("Digite o tamanho do itinerario: ");
    scanf("%d", &tam_itinerario);

    // • alocar memória para o vetor que irá armazenar o itinerário usando uma função denominada alocaVetor
    itinerario = cria_vetor(tam_itinerario);

    // • preencher o vetor de itinerários
    entra_dados_itinerario(itinerario, tam_itinerario);

    // • chamar a função custo_cidades e imprimir na tela o custo
    custo = custo_cidades(itinerario, tam_itinerario, m_custo);
    printf("O custo do trajeto entre as cidades será de: R$%d\n", custo);

    free(itinerario);
    libera_matriz(m_custo, dim_m_custo);

    return 0;
}

int custo_cidades(int *cidades, int n_cidades, int** m)
{
    int custo = 0;
    
    for (int i = 0; i < n_cidades - 1; i++)
        custo += m[cidades[i]][cidades[i + 1]];

    return custo;
}

void entra_dados_matriz(int **matriz, int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
        {
            printf("Digite o custo de viagem da cidade %d até a cidade %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
}

void entra_dados_itinerario(int vetor[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Digite o codigo da %da cidade que você visitará: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

