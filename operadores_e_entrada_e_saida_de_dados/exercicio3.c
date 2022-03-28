// Implemente um programa que leia três variáveis do teclado, uma de cada tipo: char, int e float (o programa deve
// ler nesta ordem, ou seja, primeiro variável tipo char, depois int e depois float). Lembre-se de que uma variável
// tipo char armazena um único caractere (letra, símbolo ou dígito), então ao fornecer o seu valor via teclado evite uma
// sequência de caracteres (forneça apenas um caractere). Ao final, imprima o conteúdo de cada variável. Lembre-se de
// usar nomes significativos e de imprimir mensagens adequadas!

#include <stdio.h>

int main(void)
{
	char caracter;
	int numero;
	float decimal;

	printf("Digite um caracter: ");
	scanf("%c", &caracter);

	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);

	printf("Digite um decimal: ");
	scanf("%f", &decimal);

	printf("Caracter: %c\nInteiro: %i\nPonto Flutuante: %.2f\n", 
		caracter, 
		numero, 
		decimal);

	return 0;
}
