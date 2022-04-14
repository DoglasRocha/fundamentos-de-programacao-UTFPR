/* Faça um programa que dados n e m inteiros e maiores que zero (fornecidos pelo usuário), imprima uma tabela com os
valores de i*j para i= 1, 2,..., n e j=1, 2,..., m, da seguinte forma (supondo n=3 e m=5): */

#include <stdio.h>

int main(void)
{
	int n, m, resultado, qtd_espacos = 3, qtd_espacos_retirar;
	
	printf("Digite dois numeros naturais separados por espacos: ");
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			resultado = i * j;
			
			if (resultado / 10 >= 10)
				qtd_espacos_retirar = 2;
			else if (resultado / 10 >= 1)
				qtd_espacos_retirar = 1;
			else
				qtd_espacos_retirar = 0;
				
			printf("%d", i * j);
			for (int s = 0; s < qtd_espacos - qtd_espacos_retirar; s++)
				printf(" ");
		}
		
		printf("\n");
	}
	
	return 0;
}

