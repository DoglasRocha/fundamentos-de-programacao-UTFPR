/* Uma sequência de n números inteiros não nulos é dita piramidal m-alternante se é constituída por m segmentos: o
primeiro com um elemento, o segundo com dois elementos e assim por diante até o m-ésimo, com m elementos. Além
disso, os elementos de um mesmo segmento devem ser todos pares ou todos ímpares e para cada segmento, se seus
elementos forem todos pares (ímpares), os elementos do segmento seguinte devem ser todos ímpares (pares).
Exemplos:
12 3 7 2 10 4 5 13 5 11 é piramidal 4-alternante.
7 10 2 é piramidal 2-alternante.
1 12 4 3 13 5 12 6 não é piramidal alternante (devido ao último segmento).
(a) Escreva uma função que recebe como parâmetro um inteiro k e lê k inteiros do teclado, devolvendo um dos
seguintes valores:
• 0, se os k números lidos forem pares;
• 1, se os k números lidos forem ímpares;
• -1, se entre os k números lidos há números com paridades diferentes.
(b) usando a função do item anterior, escreva um programa que, dados um inteiro n ą 1 e uma sequência de n
números inteiros, verifica se ela é piramidal m-alternante. O programa deve imprimir o valor de m ou escrever uma
mensagem indicando que a condição não foi satisfeita. */

#include <stdio.h>

int sequencia_eh_toda_impar(int k);
int eh_piramidal_alternante(int n);

int main(void)
{
    int k, n, n_alternancia;

    printf("Digite quantas sequencias voce quer ler: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    n_alternancia = eh_piramidal_alternante(n);

    if (n_alternancia == 0)
        printf("Sequencia nao eh piramidal alternante");

    else
        printf("Sequencia é piramidal %d-alternante", n_alternancia);

    printf("\n");

    return 0;
}

int sequencia_eh_toda_impar(int k)
{
    int atual, anterior, eh_impar, travado = 0;

    for (int i = 0; i < k; i++)
    {
        printf("Digite um numero da sequencia: ");
        scanf("%d", &atual);

        if (i != 0 && atual % 2 != anterior % 2)
            eh_impar = -1, travado = 1;

        anterior = atual;

        if (!travado)
            eh_impar = atual % 2, travado = 1;
    }

    return eh_impar;
}

int eh_piramidal_alternante(int n)
{   
    int anterior_eh_impar, atual_eh_impar, n_alternancia = 0, travado = 0;

    for (int i = 1; i <= n; i++)
    {
        atual_eh_impar = sequencia_eh_toda_impar(i);

        if (i != 1 
            && !travado
            && (atual_eh_impar == -1 || atual_eh_impar == anterior_eh_impar))
        {
            n_alternancia = 0, 
            travado = 1;
        }

        if (!travado)
            anterior_eh_impar = atual_eh_impar, 
            n_alternancia++;
    }

    return n_alternancia;
}