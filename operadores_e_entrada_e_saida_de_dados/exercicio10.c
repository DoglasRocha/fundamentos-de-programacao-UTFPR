/* Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (r). A fórmula
para calcular o volume é: p4{3q  ̊ P I  ̊ r 3 . Considere (atribua) para a constante PI o valor 3.14159. Dica: cuidado com
o resultado de 4/3 ;-) */

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
