#include<stdio.h>
#include<stdlib.h>

typedef struct coordenada
{
    int x;
    int y;
} Coordenada;

int** alocaMatriz(int nl, int nc);
void imprimeMatriz(int **m, int tam);
void imprimeCriativ(int **m, int tam, Coordenada *caminho, int n_passos);
void inicializaLabirinto(int **m, int tam);
void preencheMatrizCusto(int **m, int tam, int xQueijo, int yQueijo);
Coordenada* calculaCaminho (int **m, int tam, int xRato, int yRato, int *nroPassos);
int testaCoordenadas(Coordenada *coord, int tam, char alvo);
void coleta_coordenada(char alvo, Coordenada *coord, int tam);

int main()
{
    int **lab,
        tam, //tamanho fixo para fase de testes
        nPassos; //vai armazenar o tamanho do caminho c
        
    Coordenada *c, //armazena as coordenadas do caminho
    cRato,//coordenadas do Rato
    cQueijo; //coordenadas do Queijo

    printf("Qual o tamanho do labirinto?\n");
    scanf("%d", &tam);

    coleta_coordenada('Q', &cQueijo, tam);
    coleta_coordenada('R', &cRato, tam);

    lab = alocaMatriz(tam, tam); //aloca labirinto
    inicializaLabirinto(lab, tam); //inicializa com configura��o padr�o
    imprimeMatriz(lab, tam); //imprime
    preencheMatrizCusto(lab, tam, cQueijo.x, cQueijo.y); //preenche a matriz de custo, considerando a
                                        //(5,2) como localiza��o do queijo - configura��o fixa
                                        // para facilitar os testes

    imprimeMatriz(lab, tam);

    c = calculaCaminho(lab, tam, cRato.x, cRato.y, &nPassos); // preenche c com coordenadas do caminho entre as coordenadas
                                        // do rato (8,8). Depois, alterar de tal forma
                                            // a ler do teclado.

    imprimeCriativ(lab, tam, c, nPassos);
    //desalocar todos vetores e matrizes alocados dinamicamente
    return 0;
}

int** alocaMatriz(int nl, int nc)
{
    int **m, i;

    m = (int**)malloc((unsigned int) nl * sizeof(int*));

    for(i=0; i<nl; i++)
        m[i] = (int*) malloc(nc * sizeof(int));


    return m;

}

void imprimeMatriz(int **m, int tam)
{
    int i,j;

    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

void inicializaLabirinto(int **m, int tam)
{
    int i,j;

    for(i=0; i<tam; i++)
        for(j=0; j<tam; j++)
            m[i][j] = -1;
        
    while (i != -1 && j != -1)
    {
        printf("Digite a coordenada onde voce deseja que haja uma parede (x y) (-1 -1 para sair): ");
        scanf("%d %d", &j, &i);

        if ((i < 0 || i >= tam) || (j < 0 || j >= tam))
            printf("Coordenada inválida.\n");

        else
        {
            m[i][j] = -2;
            imprimeMatriz(m, tam);
        }

    }
}

void preencheMatrizCusto(int **m, int tam, int xQueijo, int yQueijo)
{
    int count_livre, k = 0, x_sup, x_inf, y_sup, y_inf;

    m[yQueijo][xQueijo] = k; k++;

    do
    {
        count_livre = 0;

        for (int i = 0; i < tam; i++)
            for (int j = 0; j < tam; j++)
                if (m[i][j] == -1)
                {
                    x_sup = j+1 < tam ? j+1 : j, x_inf = j-1 >= 0 ? j-1 : j;
                    y_sup = i+1 < tam ? i+1 : i, y_inf = i-1 >= 0 ? i-1 : i;

                    if (m[i][x_sup] == k-1 || m[i][x_inf] == k-1 || m[y_sup][j] == k-1 || m[y_inf][j] == k-1) 
                        m[i][j] = k;

                    else
                        count_livre++;
                }
        
        k++;
    } while (count_livre != 0);   
}

Coordenada* calculaCaminho (int **m, int tam, int xRato, int yRato, int *nroPassos)
{
    int i = 0, x_sup, x_inf, y_sup, y_inf, passo_atual;
    *nroPassos = passo_atual = m[yRato][xRato];
    Coordenada *caminho = (Coordenada *) malloc((*nroPassos) * sizeof(Coordenada));

    do
    {
        caminho[i].x = xRato, caminho[i].y = yRato; 
        i++;

        x_sup = xRato+1 < tam ? xRato+1 : xRato, x_inf = xRato-1 >= 0 ? xRato-1 : xRato;
        y_sup = yRato+1 < tam ? yRato+1 : yRato, y_inf = yRato-1 >= 0 ? yRato-1 : yRato;

        if (m[y_sup][xRato] == passo_atual - 1) {yRato = y_sup, passo_atual--; continue;}
        if (m[y_inf][xRato] == passo_atual - 1) {yRato = y_inf, passo_atual--; continue;}
        if (m[yRato][x_sup] == passo_atual - 1) {xRato = x_sup, passo_atual--; continue;}
        if (m[yRato][x_inf] == passo_atual - 1) {xRato = x_inf, passo_atual--; continue;}

    } while (passo_atual != 0);

    return caminho;
}

void imprimeCriativ(int **m, int tam, Coordenada *caminho, int n_passos)
{
    int i,j,k=0;
    printf("Caminho do ratinho:\n");

    for (i=0; i<n_passos; i++)
        if (i==0)
            m[caminho[i].y][caminho[i].x] = -4;

        else
            m[caminho[i].y][caminho[i].x] = -3;

    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
            switch (m[i][j])
            {
                case 0:
                    printf("%4c", 'Q');
                    break;

                case -4:
                    printf("%4c", 'R');
                    break;

                case -3:
                    printf("%4c", '.');
                    break;

                case -2:
                    printf("%4c", '#');
                    break;

                default:
                    printf("%4c", '_');
            }
        
        printf("\n");
    }
    printf("\n");
}

int testaCoordenadas(Coordenada *coord, int tam, char alvo)
{
    if ((coord->x >= 0 && coord->x < tam) && (coord->y >= 0 && coord->y < tam))
        return 1;        

    if (coord->x < 0 || coord->x > tam)
        printf("A coordenada fornecida, para o alvo %c, no eixo x, está fora dos limites.\n", alvo);

    if (coord->y < 0 || coord->y > tam)
        printf("A coordenada fornecida, para o alvo %c, no eixo y, está fora dos limites.\n", alvo);

    return -1;
}

void coleta_coordenada(char alvo, Coordenada *coord, int tam)
{
    printf("Em qual posição você quer colocar o ");
    switch (alvo)
    {
        case 'R':
            printf("Rato?");
            break;

        case 'Q':
            printf("Queijo?");
            break;
    }
    printf(" (x y)\n");
    scanf("%d %d", &coord->x, &coord->y);

    if (testaCoordenadas(coord, tam, alvo) == 1)
        return;

    coleta_coordenada(alvo, coord, tam);
}