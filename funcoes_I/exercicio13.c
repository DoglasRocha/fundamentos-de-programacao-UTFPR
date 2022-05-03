/* Faça uma função que, dados dois inteiros positivos a e b verifica se o menor deles é segmento do outro. A função deve
retornar 1 se a for segmento de b, 2 se b for segmento de a ou 0, caso contrário. Você deve usar a função do item
anterior nessa solução. Exemplo:
a b Retorno
1243 2212435 1 (a é segmento de b)
567890 678 2 (b é segmento de a)
235 236 0 (um não é segmento do outro) */

#include <stdio.h>

int trecho_eh_igual(int n1, int n2);
int tem_trecho(int n1, int n2);
int faz_verificacao_trecho(int maior, int menor, int valor_retorno);

int main(void)
{
    int n1, n2, eh_segmento;

    printf("Digite dois numeros separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    eh_segmento = tem_trecho(n1, n2);

    switch (eh_segmento)
    {
        case 1:
            printf("%d é segmento de %d", n1, n2);
            break;

        case 2:
            printf("%d é segmento de %d", n2, n1);
            break;

        default:
            printf("Um numero nao eh segmento do outro");
    }

    printf("\n");

    return 0;
}

int trecho_eh_igual(int n1, int n2)
{
    while (n2 > 0 && n1 % 10 == n2 % 10)
        n1 /= 10, n2 /= 10;

    return n2 == 0 ? 1 : 0;
}

int tem_trecho(int n1, int n2)
{
    if (n1 > n2)
    {
        return faz_verificacao_trecho(n1, n2, 2);
    }
    else
    {
        return faz_verificacao_trecho(n2, n1, 1);
    }
}

int faz_verificacao_trecho(int maior, int menor, int valor_retorno)
{
    int tem_trecho = 0;

    while(maior > 0)
    {
        if (trecho_eh_igual(maior, menor))
        {
            tem_trecho = 1;
            break;
        }

        maior /= 10;
    }

    return tem_trecho ? valor_retorno : 0;
}
