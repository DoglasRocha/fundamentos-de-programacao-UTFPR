/* Implemente uma função main( ) que leia ou inicialize um vetor de 10 posições contendo o gabarito de respostas que
podem ser a, b, c ou d. Crie aleatoriamente uma matriz 5 x 10 que se refere às respostas de 10 questões de múltipla
escolha, fornecidas por 5 alunos (vc pode utilizar a função criaMatriz(...) adaptada para converter os números em
letras). Crie uma função para comparar as respostas de cada candidato com o gabarito e retornar (por referência) um
vetor denominado resultado, contendo a pontuação correspondente a cada aluno. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define QTD_ALUNOS 5

void le_gabarito(char gabarito[], int tamanho);
void imprime_vetor(char vetor[], int tamanho);
void imprime_matriz(char matriz[][TAM], int lin, int col);
void gera_respostas_alunos(char resp_alunos[][TAM], int lin, int col);
void corrige(char gabarito[], char resp_alunos[][TAM], int lin, int col, int resultados[]);

int main(void)
{
    char gabarito[TAM], resp_alunos[QTD_ALUNOS][TAM];
    int resultados[QTD_ALUNOS];

    le_gabarito(gabarito, TAM);
    gera_respostas_alunos(resp_alunos, QTD_ALUNOS, TAM);

    corrige(gabarito, resp_alunos, QTD_ALUNOS, TAM, resultados);

    printf("Gabarito informado:\n");
    imprime_vetor(gabarito, TAM);

    printf("Respostas alunos:\n");
    imprime_matriz(resp_alunos, QTD_ALUNOS, TAM);

    for (int i = 0; i < 5; i++)
        printf("Pontuação aluno %d: %d\n", i, resultados[i]);

    return 0;
}

void le_gabarito(char gabarito[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite a resposta (a, b, c, d) da questao %d: ", i);
        scanf(" %c", &gabarito[i]);
    }
}

void imprime_vetor(char vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%c ", vetor[i]);

    printf("\n");
}

void imprime_matriz(char matriz[][TAM], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        imprime_vetor(matriz[i], col);
}

void gera_respostas_alunos(char resp_alunos[][TAM], int lin, int col)
{
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++)
            resp_alunos[i][j] = rand() % 5 + 'a';
}

void corrige(char gabarito[], char resp_alunos[][TAM], int lin, int col, int resultados[])
{
    int pont_aluno = 0;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (resp_alunos[i][j] == gabarito[j])
                pont_aluno++;
        }

        resultados[i] = pont_aluno, pont_aluno = 0;
    }
}
