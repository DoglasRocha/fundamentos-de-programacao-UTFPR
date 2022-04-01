/* Frota de Táxi (OBI2005): A Companhia de Táxi Tabajara (CTT) é uma das maiores empresas de transporte
do país. Possui uma vasta frota de carros e opera em todas as grandes cidades. Recentemente a CTT modernizou
a sua frota, adquirindo um lote de 500 carros bi-combustíveis (carros que podem utilizar como combustível tanto
álcool quanto gasolina). Além do maior conforto para os passageiros e o menor gasto com manutenção, com os novos
carros é possível uma redução adicional de custo: como o preço da gasolina está sujeito a variações muito bruscas e
pode ser vantagem, em certos momentos, utilizar álcool como combustível. Entretanto, os carros possuem um melhor
desempenho utilizando gasolina, ou seja, em geral, um carro percorre mais quilômetros por litro de gasolina do que por
litro de álcool.
• Tarefa: Você deve escrever um programa que, dados o preço do litro de álcool, o preço do litro de gasolina e os
quilômetros por litro que um carro bi-combustível realiza com cada um desses combustíveis, determine se é mais
econômico abastecer os carros da CTT com álcool ou com gasolina. No caso de não haver diferença de custo entre
abastecer com álcool ou gasolina a CTT prefere utilizar gasolina.
• Entrada: A entrada é composta por quatro números reais, A, G, Ra e Rg, representando respectivamente o preço
por litro do álcool, o preço por litro da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento
(km/l) do carro utilizando gasolina.
• Saída: Escrever o caractere ’A’ se é mais econômico abastecer a frota com álcool ou o caractere ’G’ se é mais
econômico ou indiferente abastecer a frota com gasolina. */

#include <stdio.h>

int main(void)
{
    float preco_gasolina, preco_alcool, rend_gasolina, rend_alcool;

    printf("Digite o preco da gasolina: ");
    scanf("%f", &preco_gasolina);

    printf("Digite o preco do alcool: ");
    scanf("%f", &preco_alcool);

    printf("Digite o rendimento do carro com gasolina (em km/l): ");
    scanf("%f", &rend_gasolina);

    printf("Digite o rendimento do carro com alcool (em km/l): ");
    scanf("%f", &rend_alcool);

    if (preco_gasolina == preco_alcool)
    {
        printf("G");
    }
    else
    {
        float reais_p_km_gasolina = rend_gasolina / preco_gasolina,
              reais_p_km_alcool = rend_alcool / preco_alcool;

        if (reais_p_km_gasolina > reais_p_km_alcool)
        {
            printf("A");
        }
        else if (reais_p_km_gasolina < reais_p_km_alcool)
        {
            printf("G");
        }
        else
            printf("Indiferente");
    }

    printf("\n\n");

    return 0;
}