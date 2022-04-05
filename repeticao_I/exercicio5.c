/* Construa um programa que leia um número inteiro positivo n, verifique e informe se o mesmo é perfeito ou não. Dizemos
que n é perfeito se a soma de todos os divisores positivos próprios - excluindo ele mesmo - é igual a n. Exemplo: 28 é
perfeito, pois 1 + 2 + 4 + 7 + 14 = 28. */

#include <stdio.h>

int main(void)
{
    int numero, soma = 0;

    printf("Para saber se um numero é perfeito, digite-o aqui: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            soma += i;
        }
    }
    
    printf("%d é um numero ", numero);

    if (soma == numero)
        printf("perfeito\n");

    else
        printf("imperfeito\n");

    return 0;
}