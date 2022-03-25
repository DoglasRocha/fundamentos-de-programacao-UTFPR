#include <stdio.h>

int main(void)
{
	int i1, i2, divis, resto;

	printf("Digite o primeiro valor: ");
	scanf("%d", &i1);

	printf("Digite o segundo valor: ");
	scanf("%d", &i2);

	divis = i1 / i2;
	resto = i1 % i2;

	printf("Resultado da divisão: %d\n", divis);
	printf("Resto da divisão: %d\n", resto);

	/* Ao dividir um inteiro por um inteiro e armazenar o valor
	 * em uma variável do tipo inteiro, ele irá truncar os valores
	 * e não irá exibir o valor decimal  */
	return 0;	
}
