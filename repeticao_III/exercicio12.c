/* Faça um programa que leia dois valores do teclado, n1 e n2, e usando o método da fatoração, calcule o Mínimo
Múltiplo Comun (MMC) de n1 e n2. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1, n2, mmc = 1;

    printf("Por favor, digite dois numeros separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == n2)
        mmc = n1;

    else
    {
		// define uma constante, que eh o numero de iteracoes maximo
		// o maior e o menor numero fornecido
        int const_max = (n1 + n2 + abs(n1 - n2)) / 2,
            max = const_max, 
            min = (n1 + n2 - abs(n1 - n2)) / 2;

		// itera sobre a constante do maior numero, a fim de encontrar divisores
        for (int divisor = 2; divisor <= const_max && (max > 1 || min > 1); divisor++)
        {
			// caso algum dos numeros seja divisivel, seu divisor entrará na conta do mmc
			// e irá dividir o(s) numero(s) divisivel(eis)
            while (max % divisor == 0 || min % divisor == 0)
            {
				printf("%d, %d | %d\n", max, min, divisor);
                if (max % divisor == 0)
                    max /= divisor;

                if (min % divisor == 0)
                    min /= divisor;

                mmc *= divisor;
            }
        }
    }
	
	printf("1, 1 | 1\n");
    printf("MMC de %d e %d é %d\n\n", n1, n2, mmc);

    return 0;
}