/* Dizemos que uma sequência de inteiros positivos é k-alternante se for composta alternadamente por segmentos de
números pares de tamanho k e segmentos de números ímpares de tamanho k. Exemplos:
A sequência 1 3 6 8 9 11 2 4 1 7 6 8 é 2-alternante.
A sequência 2 1 4 7 8 9 12 é 1-alternante.
A sequência 4 2 3 1 6 4 2 9 3 não é alternante.
A sequência 1 3 5 é 3-alternante.
Dado n ą 1 e uma sequência com n inteiros, verificar se existe um inteiro k ą“ 1 tal que a sequência é k-alternante.
Dê como saída também o valor de k caso a sequência seja alternante. */

#include <stdio.h>

int main(void) {
    
    int n, anterior, presente, count = 1, 
        count_anterior = 1, primeira_seq = 1, eh_alternante = 1;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Entrada invalida!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Digite o numero da sequencia: ");
        scanf("%d", &presente);

        if (i == 0)
        {
            anterior = presente;
            continue;
        }

        // vendo se os dois sao pares ou impares
        if (presente % 2 == anterior % 2)
        {
            // aumenta a contagem da sequencia e se é a primeira seq,
            // iguala o valor da seq anterior a sequencia atual
            count++;

            if (primeira_seq)
                count_anterior = count;
        }
        else
        {
            // se for a primeira seq, simplesmente remove a flag e reseta o contador
            if (primeira_seq)
                primeira_seq = 0;

            // se nao, caso o valor da sequencia anterior seja diferente do valor 
            // da seq atual, retira a flag de alternancia
            else if (count_anterior != count)
                eh_alternante = 0;

            count = 1;
        }

        anterior = presente;
    }

    if (eh_alternante)
        printf("A sequencia eh %d-alternante\n", count);
    
    else
        printf("A sequencia nao eh alternante\n");

    return 0;
}
