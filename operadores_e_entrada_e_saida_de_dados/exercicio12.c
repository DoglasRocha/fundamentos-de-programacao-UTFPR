/* Modifique o programa anterior para imprimir também o menor (NÃO use o condicional if - veja se consegue abstrair
como deve ser a fórmula do menor a partir do entendimento de como funciona a fórmula do maior). */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1, n2, n3;

	printf("Digite o primeiro valor: "); 
	scanf("%d", &n1);

	printf("Digite o segundo valor: "); 
        scanf("%d", &n2);

	printf("Digite o terceiro valor: "); 
        scanf("%d", &n3);

	int min1 = (n1 + n2 - abs(n1 - n2)) / 2;

	int min2 = (n3 + min1 - abs(n3 - min1)) / 2; 

	printf("%d\n\n", min2);

	return 0;
}
