/* A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência,
cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro n e
mostre os n primeiros números dessa série.
Exemplo de Entrada Exemplo de Saída
6 0 1 1 2 3 5 */

#include <stdio.h>

int main(void)
{
    int passos, soma;
    int n1 = 0,
        n2 = 1;

    printf("Digite quantos numeros da serie de Fibonnaci você quer saber: ");
    scanf("%d", &passos);
    passos -= 2;

    printf("%d %d ", n1, n2);

    for (int i = 0; i < passos; i++)
    {
        soma = n1 + n2;
        printf("%d ", soma);

        n1 = n2, n2 = soma;
    }

    printf("\n\n");

    return 0;
}