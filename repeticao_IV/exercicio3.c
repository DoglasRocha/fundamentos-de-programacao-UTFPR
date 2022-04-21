/* Escreva um programa que imprima losangos formados por caracteres ASCII. O usuário deve especificar o caractere que
será usado, e fornecer um número n. A largura do losango no centro deve ser igual a 2n`1 caracteres. A cada linha
acima ou abaixo do centro, a largura é reduzida em 2 caracteres. Para manter o formato do losango, use espaços antes
dos caracteres visíveis. Por exemplo, se o caractere é ’#’ e n é igual a 2, a saída do programa é:
  #
 ###
#####
 ###
  # */

#include <stdio.h>

int main(void)
{
    char caractere;
    int n, largura, qtd_espacos;

    printf("Forneça um caractere ASCII. ");
    scanf("%c", &caractere);

    printf("Forneça um numero natural: ");
    scanf("%d", &n);

    largura = 2 * n + 1;

    for (int i = 0, j = 1; i < largura; i++)
    {
        qtd_espacos = (largura / 2) - (j / 2);

        for (int k = 0; k < qtd_espacos; k++)
            printf(" ");

        for (int k = 0; k < j; k++)
            printf("%c", caractere);

        printf("\n");

        j = i < (largura / 2) ? j + 2 : j - 2;
    }

}