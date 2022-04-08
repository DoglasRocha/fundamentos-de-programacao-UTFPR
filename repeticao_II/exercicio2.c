/* Leia um conjunto de valores inteiros (até que o -1000 seja digitado). Em seguida, mostre quantos destes valores
digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um
dígito após o ponto decimal.
Exemplo de Entrada Exemplo de Saída
7 4 valores positivos
-5 Media: 7.4
6
-3.4
4.6
12
-1000 */

#include <stdio.h>

int main(void)
{
    int qtd_positivos = 0;
    float somatorio_positivos = 0, numero_fornecido = 0;

    while (numero_fornecido != -1000)
    {
        printf("Digite um valor inteiro: ");
        scanf("%f", &numero_fornecido);

        if (numero_fornecido > 0)
        {
            qtd_positivos++;
            somatorio_positivos += numero_fornecido;
        }
    }

    float media = (float)somatorio_positivos / qtd_positivos;

    printf("%d valores positivos fornecidos\n", qtd_positivos);
    printf("Media: %.1f\n\n", media);

    return 0;
}