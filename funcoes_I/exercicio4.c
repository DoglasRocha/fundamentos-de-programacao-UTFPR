/* Escreva uma função com o seguinte protótipo
int calculaDigitoVerificador(int num);
que receba como entrada um número de três dígitos e retorne o dígito verificador calculado da seguinte forma:
x4 “
˜˜ÿ
3
i“1
i ˆ xi
¸
%11¸
%10
em que xi denota o i-ésimo dígito do número.
Exemplo
193 Dígito verificador: 6
542 Dígito verificador: 8
702 Dígito verificador: 2
900 Dígito verificador: 9 */

#include <stdio.h>

int calcula_digito_verificador(int num);

int main(void)
{
    int numero, digito_verificador;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    digito_verificador = calcula_digito_verificador(numero);

    printf("O digito verificador de %d é %d\n", numero, digito_verificador);

    return 0;
}

int calcula_digito_verificador(int num)
{
    int centena = num / 100, dezena = (num / 10) % 10, unidade = num % 10, 
        digito_verificador = ((centena * 1 + dezena * 2 + unidade * 3) % 11) % 10;

    return digito_verificador;
}