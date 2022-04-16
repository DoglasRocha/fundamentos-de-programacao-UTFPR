/* Apresentar os n primeiros números primos a partir de um valor inicial k. Os valores de n e k são fornecidos pelo usuário
- você deverá verificar se eles são positivos. */

#include <stdio.h>

int main(void)
{
    int n, k, eh_primo, primos_achados = 0;

    printf("Digite um numero: ");
    scanf("%d", &k);

    printf("Digite quantos numeros primos voce quer a partir de %d: ", k);
    scanf("%d", &n);

    if (k <= 0 || n <= 0)
    {
        printf("Entrada invalida, ambos os numeros devem ser positivos\n");
        return 0;
    }

    // utilizando for para tornar mais facil o incremento da variavel
    for (int i = k; primos_achados < n; i++)
    {
        eh_primo = 1;

        for (int j = i - 1; j > 1; j--)
        {
            if (i % j == 0)
            {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo && i != 1)
        {
            primos_achados++;

            printf("%d - %d\n", primos_achados, i);
        }
    }

    return 0;
}