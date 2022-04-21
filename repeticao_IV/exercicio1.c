/* Dados n e uma sequência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento
máximo. */

#include <stdio.h>

int main(void)
{
    int n, presente, anterior, tam_maior_sequencia = 1, tam_sequencia_cres = 1;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero da sequencia: ");
        scanf("%d", &presente);

        if (i == 0)
            presente = anterior;

        if (presente <= anterior)
            tam_sequencia_cres = 1;
        
        else if (presente > anterior)
        {
            tam_sequencia_cres++;

            if (tam_sequencia_cres > tam_maior_sequencia)
                tam_maior_sequencia = tam_sequencia_cres;
        }

        anterior = presente;
    } 

    printf("Tamanho maior sequencia crescente: %d\n", tam_maior_sequencia);

    return 0;
}