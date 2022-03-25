#include <stdio.h>

int main(void)
{
	double pi = 3.14159;
	double raio;

	printf("Digite o valor do raio do circulo: ");
	scanf("%lf", &raio);

	double volume = pi * (raio * raio * raio) * (4.0 / 3.0);
	printf("VOLUME = %.3f\n", volume);

	return 0;
}
