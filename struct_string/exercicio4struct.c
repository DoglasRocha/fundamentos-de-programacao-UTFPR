/* Complete o esqueleto acima. O programa deve ler um número inteiro n que indicará a quantidade de alunos na turma.
Após isso, deve ler as notas das provas de cada aluno, calcular e mostrar na tela as notas e a média de cada aluno,
a média geral de cada prova de todos os alunos e o desvio padrão de cada prova de todos os alunos. Note que não é
necessaria a declaração de mais nenhuma variável. Exemplo: */

#include <stdio.h>
#include <math.h>

#define MAX_ALUNOS 100
typedef struct 
{
    float p[3];
    float M;
} Provas;

typedef struct
{
    int ra;
    int frequencia;
    Provas Ps;
} Aluno;

void le_alunos(int qtd_alunos, Aluno vet_alunos[]);
void imprime_estatisticas_alunos(int qtd_alunos, Aluno vet_alunos[]);
void calcula_estatisticas(int qtd_alunos, Aluno vet_alunos[], float vet_desvios[], float vet_medias[]);
void imprime_estatisticas(float vet_desvios[], float vet_medias[]);

int main(void) {
    int n, i, j;
    float desvios_Ps[3] = {0.0, 0.0, 0.0}, medias_Ps[3] = {0.0, 0.0, 0.0};
    Aluno vetAlunos[MAX_ALUNOS];

    printf("Digite a quantidade de alunos (max 100): ");
    scanf("%d", &n);
    
    le_alunos(n, vetAlunos);
    imprime_estatisticas_alunos(n, vetAlunos);
    calcula_estatisticas(n, vetAlunos, desvios_Ps, medias_Ps);
    imprime_estatisticas(desvios_Ps, medias_Ps);
}

void le_alunos(int qtd_alunos, Aluno vet_alunos[])
{
    for (int i = 0; i < qtd_alunos; i++)
    {
        printf("Digite o RA do aluno e a frequencia dele, separados por espacos (RA, f): ");
        scanf("%d %d", &vet_alunos[i].ra, &vet_alunos[i].frequencia);

        vet_alunos[i].Ps.M = 0;

        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota do aluno na prova %d: ", j);
            scanf("%f", &vet_alunos[i].Ps.p[j]);
            vet_alunos[i].Ps.M += vet_alunos[i].Ps.p[j];
        }

        vet_alunos[i].Ps.M /= 3.0; 
    }
}

void imprime_estatisticas_alunos(int qtd_alunos, Aluno vet_alunos[])
{
    for (int i = 0; i < qtd_alunos; i++)
        printf("RA: %d\nProva 1: %.2f\nProva 2: %.2f\nProva 3: %.2f\nMedia: %.2f\n\n",
               vet_alunos[i].ra, vet_alunos[i].Ps.p[0], vet_alunos[i].Ps.p[1], 
               vet_alunos[i].Ps.p[2], vet_alunos[i].Ps.M);
    
}

void calcula_estatisticas(int qtd_alunos, Aluno vet_alunos[], float vet_desvios[], float vet_medias[])
{
    // calculando media
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < qtd_alunos; j++)
            vet_medias[i] += vet_alunos[j].Ps.p[i];

        vet_medias[i] /= qtd_alunos;
    }

    // calculando desvio padrao
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < qtd_alunos; j++)
            vet_desvios[i] += pow((vet_alunos[j].Ps.p[i] - vet_medias[i]), 2);

        vet_desvios[i] /= qtd_alunos,
        vet_desvios[i] = sqrt(vet_desvios[i]);
    }
}

void imprime_estatisticas(float vet_desvios[], float vet_medias[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Media geral P%d: %.2f\nDesvio Padrao P%d: %.4f\n", i, vet_medias[i], i, vet_desvios[i]);
    }
}
