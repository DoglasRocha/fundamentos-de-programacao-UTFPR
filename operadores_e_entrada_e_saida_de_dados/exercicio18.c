/* Construa um programa que calcule o gasto de uma viagem de carro de uma cidade a outra, sabendo:
• O carro utilizado roda 15 Km com 1 litro de gasolina.
• O preço da gasolina é de R$2,60.
• O valor de cada pedágio é de R$8,00.
Seu programa deve receber a distância e a quantidade de pedágios entre as cidades. */

#include <stdio.h>

int main(void)
{
    float km_l = 15.0, preco_gasolina = 2.6, preco_pedagio = 8.0;
    float distancia, pedagios, gasto;

    printf("Digite a distancia a ser percorrida em Km: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de pedagios no percurso: ");
    scanf("%f", &pedagios);

    gasto = (distancia / km_l) * preco_gasolina + pedagios * preco_pedagio;
    printf("O gasto na viagem é de: R$%.2f\n\n", gasto);

    return 0;
}