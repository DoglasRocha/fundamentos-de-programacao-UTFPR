/* Dados 3 valores A, B, C (lados do triângulo) fornecidos pelo usuário via teclado, implemente um programa para verificar
se estes valores formam um triângulo, e em caso afirmativo, classificá-lo como equilátero, isósceles ou escaleno (imprimir
mensagem informando o tipo ou uma mensagem específica caso não formem um triângulo) */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Entre com tres valores separados por espaço: ");
    scanf("%d %d %d", &a, &b, &c);

    if (!(a + b > c
        && a + c > b
        && b + c > a))
    {
        printf("Nao eh triangulo!\n\n");
        return 0;
    }
    
    if (a == b == c)
    {
        printf("%d %d %d formam um triangulo equilatero", a, b, c);
    }
    else if ((a == b) 
             || (a == c)
             || (b == c))
    {
        printf("%d %d %d formam um triangulo isosceles", a, b, c);
    }
    else
    {
        printf("%d %d %d formam um triangulo escaleno", a, b, c);
    }

    printf("\n\n");

    return 0;
}