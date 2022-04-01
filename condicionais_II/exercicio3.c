/* Um número n no intervalo de 100 a 999 é chamado número de Armstrong (número narcisista) se obedece à seguinte
regra:
n = centena3 + dezena3 + unidade3
Exemplo:
153 “ 13 ` 53 ` 33
Escreva um programa que leia um número inteiro no intervalo [100;999] e verifique se é um número Armstrong. O pro-
grama deve imprimir uma mensagem de erro caso o número fornecido esteja fora do intervalo.  */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int numero;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999)
    {
        printf("Numero fora do intervalo!\n\n");
        return 0;
    }

    int unidade = numero % 10,
        dezena = (numero % 100 - unidade) / 10,
        centena = ((numero - unidade) / 10 - dezena) / 10;

    if (numero == pow(centena, 3) + pow(dezena, 3) + pow(unidade, 3))
    {
        printf("%d é um numero de Armstrong (ou narcisista)!\n\n", numero);
        return 0;
    }

    printf("%d não é um numero de Armstrong (ou narcisista)!\n\n", numero);
    return 0;
}