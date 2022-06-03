/* Um sistema de administração de pessoal mantém as informações referentes aos funcionários de uma empresa de duas
formas: em um vetor de ponteiros para dados estruturados do tipo Funcionario ou em um vetor contendo dados
estruturados do tipo Funcionario.

(a) Escreva uma função em C que recebe como parâmetros um vetor contendo structs do tipo Funcionario,
através do ponteiro vet, para seu primeiro elemento, e do inteiro n, indicando seu número de elementos, e um
inteiro mat, representando a matrícula de um funcionário. A função retorna o índice no vetor do funcionário
correspondente, ou -1, se este não for encontrado. Protótipo:
int Indice_funcionario(Funcionario* vet, int n, int mat);
(b) DESAFIO: Escreva uma função em C que recebe como parâmetros a variável vetEnd que é um um vetor de
endereços para Funcionario (ou seja um ponteiro de ponteiro de struct que equivale a um vetor de ponteiros
de struct). Além disso a função também recebe um inteiro n, indicando o número de elementos desse vetor de
endereços, um inteiro mat, representando a matrícula de um funcionário e um ponteiro para inteiro pTam. A função
deve retornar um novo vetor de structs Funcionario alocado dinamicamente contendo os funcionários que são
subordinados diretos do funcionário cuja matrícula foi recebida por parâmetro. A função também deve retornar
por referência (através da variável pTam) o tamanho desse vetor de subordinados. Um funcionário no topo da
hierarquia, isto é, que não tem um superior imediato, tem o valor -1 no campo sup. Por exemplo, suponha que o
vetor aponta para as funcionárias Luiza (mat = 123 e sup = 125), Diana(D) (mat = 124 e sup = 129), Gina(G)
(mat = 125 e sup = 126), Celia(C) (mat = 126 e sup = -1), Beatriz(B) (mat = 128 e sup = 126) e Ana(A) (mat
= 129 e sup = 128). Neste cenário, se a matrícula 126 for recebida por parâmetro, a função deve retornar um
vetor de structs contendo os dados das funcionárias Gina(G) e Beatriz(B) e o tamanho do vetor de subordinados
como sendo 2. Protótipo:
Funcionario* determinaSubordinado(Funcionario** vet, int n, int mat, int *pTam); */

#include <stdio.h>
#include <stdlib.h>

struct funcionario {
    int mat; // matricula do funcionario
    char nome; // inicial do nome do funcionario
    int sup; // matricula do superior imediato
};
typedef struct funcionario Funcionario;

Funcionario* registra_funcionarios(int qtd_funcionarios);
void imprime_funcionarios(Funcionario* funcionarios_vet, int qtd_funcionarios);
int Indice_funcionario(Funcionario* vet, int n, int mat);
Funcionario** transforma_vet_pont(Funcionario vet_func[], int qtd_func);
Funcionario* determinaSubordinado(Funcionario** vet, int n, int mat, int *pTam);
void libera_funcionarios(Funcionario *vet_func, int tam);

int main(void)
{
    Funcionario *funcionarios, **funcionarios_pont, *subordinados;
    int qtd_func, func_procurado, pos_func_proc, sup_procurado, qtd_subord;

    printf("Quantos funcionarios você deseja cadastrar? ");
    scanf("%d", &qtd_func);

    funcionarios = registra_funcionarios(qtd_func);

    printf("Funcionarios cadastrados:\n");
    imprime_funcionarios(funcionarios, qtd_func);

    printf("Qual funcionario você deseja achar? ");
    scanf("%d", &func_procurado);

    pos_func_proc = Indice_funcionario(funcionarios, qtd_func, func_procurado);
    printf("%d\n", pos_func_proc);

    funcionarios_pont = transforma_vet_pont(funcionarios, qtd_func);

    printf("De qual superior vocẽ deseja saber quem são os subordinados? ");
    scanf("%d", &sup_procurado);

    subordinados = determinaSubordinado(funcionarios_pont, qtd_func, sup_procurado, &qtd_subord);

    printf("Subordinados de %d:\n", sup_procurado);
    imprime_funcionarios(subordinados, qtd_subord);

    libera_funcionarios(funcionarios, qtd_func);
    free(funcionarios_pont);
    free(subordinados);
}

Funcionario* registra_funcionarios(int qtd_funcionarios)
{
    Funcionario *funcionarios = (Funcionario *) malloc(qtd_funcionarios * sizeof(Funcionario));

    for (int i = 0; i < qtd_funcionarios; i++)
    {
        printf("Digite a matricula do funcionario %d, sua inicial do nome e a matricula de seu superior (111 c 222): ", i);
        scanf("%d %c %d", &funcionarios[i].mat, &funcionarios[i].nome, &funcionarios[i].sup);
    }

    return funcionarios;
}

void imprime_funcionarios(Funcionario* funcionarios_vet, int qtd_funcionarios)
{
    for (int i = 0; i < qtd_funcionarios; i++)
        printf("Funcionario %d:\n\tNome: %c\n\tSuperior: %d\n\n", 
               funcionarios_vet[i].mat, funcionarios_vet[i].nome, funcionarios_vet[i].sup);
}

int Indice_funcionario(Funcionario* vet, int n, int mat)
{
    for (int i = 0; i < n; i++)
        if (vet[i].mat == mat)
            return i;

    return -1;
}

void libera_funcionarios(Funcionario *vet_func, int tam)
{
    /* for (int i = 0; i < tam; i++)
    {

    } */

    free(vet_func);
}

Funcionario** transforma_vet_pont(Funcionario vet_func[], int qtd_func)
{
    Funcionario **vet_pont_func = (Funcionario **) malloc(qtd_func * sizeof(Funcionario *));

    for (int i = 0; i < qtd_func; i++)
        vet_pont_func[i] = &vet_func[i];

    return vet_pont_func;
}

Funcionario* determinaSubordinado(Funcionario** vet, int n, int mat, int *pTam)
{
    Funcionario *subordinados = (Funcionario *) malloc(n * sizeof(Funcionario));
    *pTam = 0;

    for (int i = 0; i < n; i++)
        if (vet[i]->sup == mat)
            subordinados[*pTam] = *vet[i],
            (*pTam)++;
    
    subordinados = (Funcionario *) realloc(subordinados, *pTam * sizeof(Funcionario));

    if (*pTam == 0)
        *pTam = -1;
    
    return subordinados;
}
