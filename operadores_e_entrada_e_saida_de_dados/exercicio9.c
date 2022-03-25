#include <stdio.h>

int main(void)
{
	int base, altura, perimetro;

	printf("Digite o valor da base do retangulo: ");
	scanf("%d", &base);

	printf("Digite o valor da altura do retangulo: ");
	scanf("%d", &altura);

	perimetro = 2 * base + 2 * altura;

	printf("O perimetro do retangulo é: %d\n", perimetro);

	return 0;
}
