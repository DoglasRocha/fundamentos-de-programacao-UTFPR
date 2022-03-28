/* Considere o programa abaixo. Ele lê um caractere e o imprime como se fosse um número inteiro. Que número é esse
exibido pelo programa? É um erro de execução ou ele tem algum significado? */

#include <stdio.h>

int  main(void)
{
	char aux;
	printf("Digite um caracter: ");
	scanf("%c", &aux);
	printf("%d\n", aux);

	// O programa exibirá o código ASCII da letra digitada

	return  0;
}
