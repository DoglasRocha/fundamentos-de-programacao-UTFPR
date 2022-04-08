/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
Construa um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>

int main(void)
{
    float altura_chico = 1.5, taxa_crescimento_chico = 0.02,
          altura_ze = 1.1, taxa_crescimento_ze = 0.03;
    int qtd_anos = 0;

    while (altura_ze < altura_chico)
    {
        altura_ze += taxa_crescimento_ze;
        altura_chico += taxa_crescimento_chico;
        qtd_anos++;
    }

    printf("Serao necessarios %d anos para Ze alcancar Chico\n\n", qtd_anos);

    return 0;
}