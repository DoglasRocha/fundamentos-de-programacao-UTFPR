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
