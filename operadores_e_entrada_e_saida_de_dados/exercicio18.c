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