/* Construa um programa que leia um número n e, em seguida, leia uma sequência de n números inteiros e verifique se
ela está ordenada de forma crescente.
Exemplo de Entrada Exemplo de Saída
5 sim
1 2 5 6 7
4 não
1 20 5 7 */

#include <stdio.h>

int main(void)
{
    int n, anterior, presente, eh_crescente = 1;

    printf("Digite a quantidade de numeros da sua sequencia: ");
    scanf("%d", &n);

    printf("Digite sua sequencia: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &presente);
        
        if (i == 0)
        {
            anterior = presente;
            continue;
        }

        if (anterior > presente)
        {
            eh_crescente = 0;
            break;
        }

        anterior = presente;
    }

    if (eh_crescente)
        printf("eh crescente\n");

    else
        printf("nao eh crescente\n");

    return 0;
}