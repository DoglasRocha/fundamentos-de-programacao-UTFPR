/* a) Escreva uma função que recebe como parâmetro dois valores inteiros tam e lim, aloca dinamicamente um vetor de
tamanho tam, preenche esse vetor com valores aleatórios de 0 a lim e retorna esse vetor alocado e preenchido.
Protótipo: int * criaVetor(int tam, int lim);
b) Escreva uma função que inclua n novos elementos num vetor previamente alocado e preenchido como no item a).
Protótipo: int * expandeVetor(int *v, int tam, int n, int lim);
Desafio: Modifique a função do item a) para que seja do tipo void. Para isso vc deverá considerar que a função recebe
o endereço de um ponteiro (**) (que estava apontando para lugar desconhecido e que agora deverá apontar para o
bloco alocado). A função deve preencher o vetor com valores aleatórios de -lim a lim.
Protótipo: void criaVetorPorReferencia(int **v, int tam, int lim); */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *cria_vetor(int tam, int lim);
void imprime_vetor(int vetor[], int tamanho);
int *expande_vetor(int *v, int tam, int n, int lim);
int preenche_vetor(int vetor[], int tam, int lim_inf, int lim_sup, int inicio);
void cria_vetor_por_referencia(int **v, int tam, int lim);

int main(void)
{
    int tamanho, *vetor, *vetor_ref, limite, n;
    srand(time(NULL));

    printf("Digite o tamanho do vetor que você deseja criar: ");
    scanf("%d", &tamanho);

    printf("Digite o limite maximo para preenchimento do vetor: ");
    scanf("%d", &limite);

    vetor = cria_vetor(tamanho, limite);
    if (vetor == NULL)
        return 1;

    printf("Vetor criado: ");
    imprime_vetor(vetor, tamanho);

    printf("Você quer aumentar o vetor em quantas posicoes? ");
    scanf("%d", &n);

    expande_vetor(vetor, tamanho, n, limite);
    printf("Vetor expandido: ");
    imprime_vetor(vetor, tamanho + n);

    printf("Vetor criado p/ referencia: ");
    cria_vetor_por_referencia(&vetor_ref, tamanho, limite);
    imprime_vetor(vetor_ref, tamanho);

    free(vetor);
    free(vetor_ref);

    return 0;
}

int *cria_vetor(int tam, int lim)
{
    int *v;

    v = (int *) malloc(tam * sizeof(int));

    if (v == NULL)
        printf("Erro na alocacao!\n");
    
    else
        preenche_vetor(v, tam, 0, lim, 0);

    return v;
}

void imprime_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    printf("\n");
}

int *expande_vetor(int *v, int tam, int n, int lim)
{
    v = realloc(v, (tam + n) * sizeof(int));

    if (v == NULL)
        printf("Erro na alocacao!\n");
    
    else
        preenche_vetor(v, tam + n, 0, lim, tam);

    return v;
}

int preenche_vetor(int vetor[], int tam, int lim_inf, int lim_sup, int inicio)
{
    for (int i = inicio; i < tam; i++)
        vetor[i] = lim_inf + rand() % (lim_sup - lim_inf + 1);
}

void cria_vetor_por_referencia(int **v, int tam, int lim)
{
    *v = (int *) malloc(tam * sizeof(int));

    if (*v == NULL)
        printf("Erro na alocacao!\n");
    
    else
        preenche_vetor(*v, tam, -lim, lim, 0);
}
