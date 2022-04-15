/* Faça um programa que verifica se os dígitos de um valor n fornecido pelo usuário são todos iguais entre si. */

#include <stdio.h>

int main(void)
{
    char anterior, presente;
    int sao_iguais = 1;

    printf("Digite um numero: ");
                                    // verificando se caracter digitado foi enter
                                    // utilizei um loop "for" por nessa estrutura ser mais facil fazer contador
    for (int i = 0; scanf("%c", &presente) && (int)presente != 10; i++)
    {
        if (i == 0)
            anterior = presente;

        if (anterior != presente)
        {
            sao_iguais = 0;
            break;
        }
    }

    if (sao_iguais)
        printf("Os digitos do numero sao iguais\n");

    else
        printf("Os digitos do numero nao sao iguais\n");

    return 0;
}