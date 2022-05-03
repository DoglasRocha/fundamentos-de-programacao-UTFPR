/* No “par” ou “ímpar” tradicional cada jogador i escolhe um número ni e um dos possíveis restos da divisão inteira da
soma (n1 + n2) por 2: 0 (par) ou 1 (ímpar). No “par” ou “ímpar” de três jogadores cada jogador i escolhe um número
ni e um dos possíveis restos da divisão inteira de (n1 + n2 + n3) por 3: 0, 1 ou 2. O vencedor é aquele que escolher o
resto que foi efetivamente calculado.
(a) Escreva uma função que, dados como entrada três números inteiros, n1, n2 e n3, que correspondem aos números
escolhidos pelos jogadores Alexandre, Maria e Rafael, respectivamente, retorne o resto encontrado.
Protótipo: int retornaResto(int alexandre, int maria, int rafael)
(b) Faça uma função tipo void (também chamada de procedimento) que, dado um valor de entrada entre 0 e 2,
imprima na tela o vencedor. Considere que Alexandre sempre escolhe o resto 0, Maria escolhe o resto 1 e Rafael
escolhe o resto 2.
Protótipo: void imprimeVencedor(int resto);
(c) Na função main(), leia os dados de entrada adequados e invoque as duas funções criadas acima. */

#include <stdio.h>

int retorna_resto(int alexandre, int maria, int rafael);
void imprime_vencedor(int resto);

int main(void)
{
    int alexandre, maria, rafael;

    printf("Digite os valores que Alexandre, Maria e Rafael jogaram, separados por espaços: ");
    scanf("%d %d %d", &alexandre, &maria, &rafael);

    int resto = retorna_resto(alexandre, maria, rafael);
    imprime_vencedor(resto);

    return 0;
}

int retorna_resto(int alexandre, int maria, int rafael)
{
    return (alexandre + maria + rafael) % 3;
}

void imprime_vencedor(int resto)
{
    printf("O vencedor foi: ");

    switch (resto)
    {
        case 0:
            printf("Alexandre!");
            break;

        case 1:
            printf("Maria!");
            break;
        
        default:
            printf("Rafael!");
    }

    printf("\n");
}