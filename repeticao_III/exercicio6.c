/* Modifique o programa anterior para verificar se a sequência está (a) ordenada de forma crescente, (b) ordenada de
forma decrescente ou (c) desordenada. */

#include <stdio.h>

int main(void)
{
    int n, anterior, presente, eh_crescente = 1, eh_decrescente = 1;

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
            eh_crescente = 0;
        
        else if (anterior < presente)
            eh_decrescente = 0;

        anterior = presente;
    }

    if (!eh_crescente && !eh_decrescente)
        printf("eh desordenada\n");

    else if(eh_crescente)
        printf("eh crescente\n");

    else
        printf("eh decrescente\n");

    return 0;
}