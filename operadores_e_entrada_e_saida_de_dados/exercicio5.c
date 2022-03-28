// Implemente um programa que leia 2 valores inteiros e armazene-os nas variáveis i1 e i2. Calcule a divisão de i1 por i2
// atribuindo o seu resultado na variável divis e o resto da divisão entre i1 e i2, atribuindo o seu resultado na variável
// rest. Verifique os resultados para os seguintes valores fornecidos pelo teclado: i1=10 e i2=5 e depois i1=12 e i2=5.
// Você consegue explicar a diferença?

#include <stdio.h>

int main(void)
{
	int i1, i2, divis, resto;

	printf("Digite o primeiro valor: ");
	scanf("%d", &i1);

	printf("Digite o segundo valor: ");
	scanf("%d", &i2);

	divis = i1 / i2;
	resto = i1 % i2;

	printf("Resultado da divisão: %d\n", divis);
	printf("Resto da divisão: %d\n", resto);

	/* Ao dividir um inteiro por um inteiro e armazenar o valor
	 * em uma variável do tipo inteiro, ele irá truncar os valores
	 * e não irá exibir o valor decimal  */
	
	return 0;	
}
