#include <stdio.h>

int main(void)
{
	char caracter;
	int numero;
	float decimal;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	printf("Digite um caracter: ");
	scanf(" %c", &caracter);

	printf("Digite um decimal: ");
	scanf("%f", &decimal);

	printf("Caracter: %c\nInteiro: %i\nPonto Flutuante: %.2f\n", 
		caracter, 
		numero, 
		decimal);

	return 0;
}
