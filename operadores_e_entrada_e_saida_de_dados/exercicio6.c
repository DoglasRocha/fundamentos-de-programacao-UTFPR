#include <stdio.h>

int main(void)
{
	int n1, n2;
	float media;

	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);

	printf("Digite o segundo valor: ");
	scanf("%d", &n2);

	media = ((float)n1 + n2) / 2;

	printf("Resultado da media: %.2f\n", media);

	/* Ao dividir um inteiro por um inteiro e armazenar o valor
	 * em uma variável do tipo inteiro, ele irá truncar os valores
	 * e não irá exibir o valor decimal. Por isso, é necessário declarar
	 * n1, n2 e media como floats ou declarar somente media como float
	 * e efetuar type casting em alguns dos valores inteiros  */
	return 0;	
}
