/* Faça um programa que receba uma opção fornecida pela usuário indicando se este deseja converter um número de
binário para decimal (opção 1) ou o contrário (opção 2). Depois o usuário deve fornece o número e o programa deve
imprimir o resultado da conversão. Esse processo deve ser repetido até que o usuário forneça a opção 0 (finaliza o
programa). Protótipos:
int bin2dec(int num);
int dec2bin(int num);
Exemplo:
Entrada Saída
2 15 111
1 10010 18
0 */

#include <stdio.h>
#include <math.h>

int dec2bin(int dec);
int bin2dec(int bin);

int main(void)
{
    int opcao, num, resultado = 0;

    do 
    {
        printf("Digite o numero a ser convertido: ");
        scanf("%d", &num);

        printf("Digite a opcão desejada:\n");
        printf("(1) Converter de binário para decimal\n");
        printf("(2) Converter de decimal para binário\n");
        printf("(0) Sair do programa\n");
        scanf("%d", &opcao);
    

        if (opcao == 1)
            resultado = bin2dec(num);

        else if (opcao == 2)
            resultado = dec2bin(num);

        printf("Resultado da conversão: %d\n\n", resultado);

    } while (opcao != 0);

    return 0;
}

int bin2dec(int bin)
{
    int resultado = 0;

    // le cada numero do binario e o multiplica pela potencia de base 2
    // correspondente
    for (int i = 0; bin > 0; bin /= 10, i++)
        resultado += (bin % 10 * pow(2, i));

    return resultado;
    
}

int dec2bin(int dec)
{
    int resultado = 0, aux = dec, n_repeticoes;

    // primeiro, acha a potencia de base dois menor e mais proxima do numero
    // desejado
    for (n_repeticoes = 0; aux > 0; n_repeticoes++, aux /=2);

    // depois, subtrai as potencias de base 2 do numero fornecido, se elas forem menores
    // que o n fornecido e depois constroi o binario, adicionando a potencia de base 10 ao
    // resultado
    for (int n = n_repeticoes; dec > 0; n--)
        if (dec >= pow(2, n))
            resultado += pow(10, n), 
            dec -= pow(2, n);

    return resultado;
}