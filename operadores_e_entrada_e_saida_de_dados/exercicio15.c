/* Faça um algoritmo que dado um número de segundos, converta para dias, horas, minutos e segundos. Por exemplo,
7322 segundos correspondem a 0 dias, 2 horas, 2 minutos e 2 segundos. */

#include <stdio.h>

int main(void)
{
	int segundos_dia = 60 * 60 * 24;
	int segundos_hora = 60 * 60;
	int segundos_minuto = 60;
	int valor_a_ser_convertido, dias, horas, minutos, segundos, resto;

	printf("Digite o valor em segundos a ser convertido: ");
	scanf("%d", &valor_a_ser_convertido);

	dias = valor_a_ser_convertido / segundos_dia;
	resto = valor_a_ser_convertido % segundos_dia;

	horas = resto / segundos_hora;
	resto %= segundos_hora;

	minutos = resto / segundos_minuto;
	resto %= segundos_minuto;

	segundos = resto;

	printf("%d segundos correspondem a: \n", valor_a_ser_convertido);
	printf("%d dias, %d horas, %d minutos, %d segundos\n\n",
			dias,
			horas,
			minutos,
			segundos);

	return 0;
}
