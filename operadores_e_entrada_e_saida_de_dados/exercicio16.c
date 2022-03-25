#include <stdio.h>

int main(void)
{
	int numero, ultimo_digito;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	ultimo_digito = numero % 10;

	printf("O último número de %d é %d\n\n", numero, ultimo_digito);

	return 0;
}
