/* Dados dois números inteiros positivos, faça uma função com protótipo
Protótipo: int retornaMDC(int num1, int num2);
que retorne o máximo divisor comum entre eles usando o algoritmo de Euclides. Ele é baseado em subtrações sucessivas
e consiste no seguinte: a cada ciclo o maior valor é substituído pelo valor da diferença entre o maior valor e o menor
valor até que os dois valores passam a ser iguais; quando passam a ser iguais, o máximo divisor comum procurado é
um deles (tanto faz qual já que são iguais). Exemplo:
a b
195 150
45 150
45 105

45 60
45 15
30 15
15 15 */

#include <stdio.h>

int retorna_MDC(int num1, int num2);

int main(void)
{
    int n1, n2, mdc;

    printf("Insira dois numeros separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    mdc = retorna_MDC(n1, n2);
    printf("O MDC de %d e %d é %d\n", n1, n2, mdc);

    return 0;
}

int retorna_MDC(int num1, int num2)
{
    // utilizando recursao, acha o MDC. subtrai do maior numero o menor numero,
    // ate que os dois sejam iguais
    
    if (num1 == num2)
        return num1;

    if (num1 > num2)
        num1 -= num2;

    else
        num2 -= num1;
        
    return retorna_MDC(num1, num2);
}