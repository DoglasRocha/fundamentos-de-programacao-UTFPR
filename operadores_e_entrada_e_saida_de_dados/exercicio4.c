// Modifique o programa anterior para que leia primeiro o tipo int e depois os outros. Veja que a nova ordem vai dar
// problema na leitura do tipo char. Você consegue corrigir o erro de forma que a ordem int, char e float possa ser
// respeitada?

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
