#include <stdio.h>

int main(void)
{
	int  aux;
	printf("Digite um numero inteiro: ");
	scanf("%d", &aux);
	printf("%d\n", aux);
	
	/* Ocorre um erro de compilação. A tipagem na formatação da impressão
	 * está incorreta, é necessário substituir "%f" (de ponto flutuante)
	 * por "%d" de dígito */

	return  0;
}
