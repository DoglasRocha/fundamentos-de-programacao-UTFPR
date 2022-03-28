//  Complete o programa abaixo de forma a ler do teclado dois valores em ponto flutuante, armazenando-os nas variáveis
// n1 e n2. Efetue a soma de n1 e n2, atribuindo o resultado na variável aux. Imprima o valor de aux com apenas duas
// casas decimais - dica: a função printf possui opções de formatação para esta finalidade!

#include <stdio.h>

int main(void)
{
	float n1, n2, aux;

	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);

	printf("Digite o segundo valor: ");
	scanf("%f", &n2);

	aux = n1 + n2;

	printf("A soma dos valores é: %.2f\n", aux);
	return 0;
}
