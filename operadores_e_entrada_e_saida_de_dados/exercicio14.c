/* Faça um programa que leia um número inteiro e informe com quais cédulas podemos representá-lo. Suponha que
estejam disponíveis apenas notas de R$ 50, R$5 e R$1. Exemplo de resposta: R$ 218 = 4 cédulas de 50, 3 cédulas de
5 e 3 cédulas de 1. */

#include <stdio.h>

int main(void)
{
	int valor_a_ser_trocado, resto;

	printf("Digite o valor a ser trocado: ");
	scanf("%d", &valor_a_ser_trocado);

	int cedulas_50 = valor_a_ser_trocado / 50;
	resto = valor_a_ser_trocado % 50;

	int cedulas_5 = resto / 5;
	resto %= 5;

	int cedulas_1 = resto;

	printf("R$ %d = %d cédulas de R$50, %d cédulas de R$5, %d cédulas de R$1\n\n",
			valor_a_ser_trocado,
			cedulas_50,
			cedulas_5,
			cedulas_1);

	return 0;
}
