/* Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km, representada como
um inteiro) e o total de combustível gasto (em litros, representado por um valor real). Apresente o valor que representa
o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
Exemplo de Entrada
500
35.0
Exemplo de Saída
14.286 km/l */

#include <stdio.h>

int main(void)
{
	float distancia, litros, km_l;

	printf("Digite a distância percorrida em Km: ");
	scanf("%f", &distancia);

	printf("Digite o consumo em litros (l): ");
	scanf("%f", &litros);

	km_l = distancia / litros;

	printf("Média de consumo: %.3f Km/l\n", km_l);

	return 0;	
}
