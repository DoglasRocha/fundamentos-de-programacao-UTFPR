/* Faça uma função tipo void que, dado um inteiro positivo n como entrada, mostra todos os valores a, b e c tal que
a+b+c = n. Protótipo:
void determinaValores(int n);
Exemplo
n: 4
1 + 1 + 2
1 + 2 + 1
2 + 1 + 1 */

#include <stdio.h>

void determina_valores(int n);

int main(void)
{
    int num;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    determina_valores(num);

    return 0;
}

void determina_valores(int n)
{
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            for (int k = 1; k < n; k++)
                if (i + j + k == n)
                {
                    printf("%d + %d + %d = %d\n", i, j, k, n);
                    break;
                }
}