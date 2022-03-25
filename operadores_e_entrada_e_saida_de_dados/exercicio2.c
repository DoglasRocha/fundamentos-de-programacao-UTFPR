#include <stdio.h>

int main(void)
{
	float n1, n2, aux;

	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);

	printf("Digite o segundo valor: ");
	scanf("%f", &n2);

	aux = n1 + n2;
	
	printf("O primeiro valor é: %.2f\n", n1);
	printf("O segundo valor é: %.2f\n", n2);
	printf("A soma dos valores é: %.2f\n", aux);
	return 0;
}
