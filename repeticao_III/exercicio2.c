/* Sabe-se que um número da forma n 3 é igual à soma de n ímpares consecutivos, faça um programa que o usuário forneça
o valor de m, e o programa determine os ímpares consecutivos cuja soma é igual a n 3 para para n assumindo valores de
1 a m. No exemplo abaixo m=4.
Exemplo: 1 3 “ 1, 2 3 “ 3 ` 5, 3 3 “ 7 ` 9 ` 11, 4 3 “ 13 ` 15 ` 17 ` 19 */

#include <stdio.h>

int main(void)
{
    int m, resultado, numero_inicial_sequencia, aux, resultado_soma = 0, achou = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &m);

    resultado = m * m * m;

    for (int i = 1; i < resultado && !achou; i += 2)
    {
        aux = i;
        resultado_soma = 0;

        for (int j = 0; j < m; j++)
        {
            resultado_soma += aux;
            aux += 2;
        }

        if (resultado == resultado_soma)
            achou = 1;
            numero_inicial_sequencia = i;
            aux = numero_inicial_sequencia;
    }

    for (int i = 0; i < m; i++, aux += 2)
    {
        printf("%d ", aux);
    }

    printf("\n");

    return 0;
}
