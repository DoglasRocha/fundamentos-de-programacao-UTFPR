/* Faça um programa que leia do teclado um ano e imprima na tela se ele é ou não bissexto. Obs.: um ano será bissexto
se: (a) for divisível por 400 OU (b) se for divisível por 4 e não o for por 100. Você deve fazer este exercício usando
apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores lógicos! */

#include <stdio.h>

int main(void)
{
    int ano;
    printf("Para saber se um ano é bissexto, digite ele aqui: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("%d é um ano bissexto!");
    }
    else
    {
        printf("%d não é um ano bissexto!");
    }

    printf("\n\n");

    return 0;
}