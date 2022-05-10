/* Implemente uma função em C que receba dois números inteiros a e b, em seguida, decremente o primeiro e incremente
o segundo. No exercício, a e b devem ser passados por referência. Depois teste, invocando a função criada.
Protótipo:
void questao01(int *a, int *b); */

#include <stdio.h>

void decrementa_e_incrementa(int *a, int *b);

int main(void)
{
    int a, b;

    printf("Digite dois valores inteiros separados por espacos: ");
    scanf("%d %d", &a, &b);

    decrementa_e_incrementa(&a, &b);

    printf("Valores de A e B depois do decremento e incremento: %d e %d\n\n", a, b);

    return 0;
}

void decrementa_e_incrementa(int *a, int *b)
{
    *a -= 1, *b += 1;
}
