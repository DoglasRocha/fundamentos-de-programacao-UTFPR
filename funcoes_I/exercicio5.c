/* Escreva uma função que recebe dois inteiros n1 e n2 e retorna o maior de dois números. Desafio: na função principal,
determine o maior de três números usando apenas duas chamadas à função definida.
int retornaMaior(int n1, int n2) */

#include <stdio.h>

int retorna_maior(int n1, int n2);

int main(void)
{
    int n1, n2, n3;

    printf("Digite uma sequencia de tres numeros separados por espacos: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("O maior numero fornecido foi: %d\n", retorna_maior(n1, retorna_maior(n2, n3)));
}

int retorna_maior(int n1, int n2)
{
    return n1 > n2 ? n1 : n2;
}