/* Leia 2 valores inteiros x e y (suponha que xąy). A seguir, calcule e mostre quantos números ímpares existem entre
eles.
Exemplo de Entrada Exemplo de Saída
12 5
1 */

#include <stdio.h>

int main(void)
{
    int x, y, qtd_impares = 0;

    printf("Digite dois numeros, separados por espaços, sendo o primeiro numero maior que o primeiro: ");
    scanf("%d %d", &x, &y);

    if (x <= y)
        printf("Entrada invalida\n\n");
    else
    {
        for (int i = y + 1; i < x; i++)
        {
            if (i % 2 == 1)
            {
                qtd_impares++;
            }
        }
    }

    printf("Quantidade de impares: %d\n\n", qtd_impares);

    return 0;
}