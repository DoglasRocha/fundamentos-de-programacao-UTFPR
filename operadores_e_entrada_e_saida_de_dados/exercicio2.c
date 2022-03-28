// Modifique o programa anterior para imprimir também os valores de n1 e n2 e rode novamente. Atenção!!! Você deve
// considerar que está correto somente quando não houver nenhum aviso (warning) nem erro (error).
// O que acontece se você eliminar os comandos de leitura (scanf) do programa e tentar imprimir o conteúdo das variáveis
// mesmo assim? Compile, rode e veja as mensagens e resultados.

#include <stdio.h>

int main(void)
{
	float n1, n2, aux;

	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);

	printf("Digite o segundo valor: ");
	scanf("%f", &n2);

	aux = n1 + n2;
	
	printf("O primeiro valor é: %.2f\n", n1);
	printf("O segundo valor é: %.2f\n", n2);
	printf("A soma dos valores é: %.2f\n", aux);
	return 0;
}
