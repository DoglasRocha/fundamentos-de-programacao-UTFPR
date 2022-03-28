// Faça um programa que mostre na tela uma constante com pelo menos três dígitos. Exemplo:
// • valor da constante:7 - valor exibido: 007
// • valor da constante:17 - valor exibido: 017
// • valor da constante:1024 - valor exibido: 1024
// Dica: a função printf possui opções de formatação para esta finalidade!

#include <stdio.h>

int main(void)
{
    printf("%d - %03d\n", 7, 7);
    printf("%d - %03d\n", 17, 17);
    printf("%d - %03d\n", 1024, 1024);

    return 0;
}