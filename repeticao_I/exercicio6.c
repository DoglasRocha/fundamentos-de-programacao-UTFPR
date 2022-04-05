/* Faça um programa para ler um valor n. Calcular e imprimir seu respectivo fatorial. Fatorial de n “ n  ̊ pn  ́ 1q  ̊ pn  ́
2q  ̊ pn  ́ 3q  ̊ ...  ̊ 1. Até qual valor de n seu programa apresenta resultados consistentes? */

#include <stdio.h>

int main(void)
{
    int numero, fatorial;

    printf("Para saber o fatorial de um numero, digite-o aqui: ");
    scanf("%d", &numero);
    fatorial = numero;

    for (int n = fatorial - 1; n != 0; n--)
    {
        fatorial *= n;
    }

    printf("O fatorial de %d é %d\n", numero, fatorial);

    return 0;
}

// o último resultado consistente é 12!, por conta da limitação de precisão das casas decimais dos int