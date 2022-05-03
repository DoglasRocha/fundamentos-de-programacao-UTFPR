/* Escreva uma função que recebe como parâmetro um inteiro positivo e retorna 1 se ele representar um ano bissexto ou
0 caso contrário. Um ano é bissexto se ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0). Protótipo:
int ehBissexto(int ano); */

#include <stdio.h>

int eh_bissexto(int ano);

int main(void)
{
    int ano;

    printf("Para saber se um ano eh bissexto, digite-o aqui: ");
    scanf("%d", &ano);

    printf("%d ", ano);
    if (eh_bissexto(ano))
        printf("eh ");

    else
        printf("não eh ");

    printf("ano bissexto\n");

    return 0;
}   

int eh_bissexto(int ano)
{
    return (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 1 : 0;
}