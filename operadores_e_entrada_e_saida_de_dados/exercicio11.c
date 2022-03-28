/* Faça um programa que leia três valores inteiros e apresente o máximo dos três valores lidos seguido da mensagem “eh
o maior”. Utilize a fórmula:
a ` b ` abspa  ́ bq
maxAB “
2
Obs. abs() é uma função da biblioteca stdlib.h! Para isso lembre de incluir stdlib.h de forma similar stdio.h. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1, n2, n3;

	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);

	printf("Digite o segundo valor: ");
        scanf("%d", &n2);

	printf("Digite o terceiro valor: ");
        scanf("%d", &n3);

	int max1 = (n1 + n2 + abs(n1 - n2)) / 2;

	int max2 = (n3 + max1 + abs(n3 - max1)) / 2; 

	printf("%d\n\n", max2);

	return 0;
}
