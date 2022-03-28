// Considere o trecho de código abaixo. Ele lê um número inteiro do teclado e o imprime como se fosse um número em
// ponto flutuante. Implemente o programa e observe se ocorre um erro de compilação ou um erro de execução. Qual a
// correção necessária para que o programa execute sem erros?

#include <stdio.h>

int main(void)
{
	int aux;
	printf("Digite um numero inteiro: ");
	scanf("%d", &aux);
	printf("%d\n", aux);
	
	/* Ocorre um erro de compilação. A tipagem na formatação da impressão
	 * está incorreta, é necessário substituir "%f" (de ponto flutuante)
	 * por "%d" de dígito */

	return  0;
}
