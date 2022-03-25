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
