/* Dado n inteiro e maior que zero (fornecido pelo usuário), fazer um programa para imprimir o gráfico da função
x 2 + x + 1 para x=-n até n. O programa deve imprimir o gráfico rotacionado de 90 o usando como ordenadas o eixo
horizontal e como abscissas o eixo vertical, da seguinte forma: */

#include <stdio.h>

int main(void)
{
	int n, resultado;
	
	printf("Forneca um numero natural: ");
	scanf("%d", &n);
	
	for (int i = -n; i <= n; i++)
	{
		/* if (i < 0)
			printf("%d  ", i);
		else
			printf(" %d  ", i); */ // ERRADO

		printf("%5d ", i);
			
		resultado = i * i + i + 1;
		
		for (int j = 0; j < resultado; j++)
		{
			printf(".");	
		}
		
		printf("*\n");
	}
	
	return 0;
}
