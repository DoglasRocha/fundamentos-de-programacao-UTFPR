/* Escreva uma função que arredonda um valor dado. O número deve ser arredondado para o inteiro mais próximo. Se
o número for equidistante de dois inteiros, deve ser arredondado para o valor de maior magnitude. Ou seja, 1.5 é
arredondado para 2, e -1.5 é arredondado para -2. O protótipo da função deve ser:
int arredonda (float x); */

#include <stdio.h>
#include <stdlib.h>

int arredonda(float n);

int main(void)
{
    float n;

    printf("Digite um numero decimal para ser arredondado: ");
    scanf("%f", &n);

    printf("O arredondamento de %f eh %d\n", n, arredonda(n));

    return 0;
}

int arredonda(float n)
{
    int n_truncado = n;

    if (n < 0 && n - n_truncado <= -0.5)
        return n_truncado - 1;   
    
    if (n - n_truncado >= 0.5)
        return n_truncado + 1;

    return n_truncado;
}