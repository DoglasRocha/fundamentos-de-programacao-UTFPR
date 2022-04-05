/* Desafio: Faça um programa que:
• Gere dois números aleatórios, n1 e n2, inteiros positivos e no intervalo r1, 100s
• Escolha aleatoriamente uma das operações aritméticas a seguir:
soma, subtração, multiplicação, quociente da divisão (parte inteira da divisão), resto da divisão.
• Peça ao usuário que forneça o resultado da operação aritmética escolhida considerando os valores de n1 e n2.
• Monitore o tempo de resposta do usuário (dica: use uma função da biblioteca time.h).
• Exiba uma mensagem dizendo se o usuário acertou ou errou a resposta, acompanhada do tempo calculado.
Dica: use a função rand(). Não se esqueça da inicialização da semente: srand(time(NULL)). */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int n1 = rand() % 100 + 1, n2 = rand() % 100 + 1, operacao = rand() % 6, 
        resultado;
    char operador;

    if (operacao == 0)
    {
        resultado = n1 + n2;
        operador = '+';
    }
    else if (operacao == 1)
    {
        resultado = n1 - n2;
        operador = '-';
    }
    else if (operacao == 2)
    {
        resultado = n1 * n2;
        operador = '*';
    }
    else if (operacao == 3)
    {
        resultado = n1 / n2;
        operador = '/';
    }
    else
    {
        resultado = n1 % n2;
        operador = '%';
    }

    int resultado_fornecido;

    time_t tempo_inicial = time(NULL), tempo_final;

    printf("Digite o resultado da operação %d %c %d: ", n1, operador, n2);
    scanf("%d", &resultado_fornecido);

    tempo_final = time(NULL);

    int tempo_decorrido = difftime(tempo_final, tempo_inicial);

    if (resultado == resultado_fornecido)
    {
        printf("Você acertou!\n");
    }
    else
    {
        printf("Você errou!\n");
    }

    printf("O resultado era: %d %c %d = %d\n", n1, operador, n2, resultado);
    printf("Tempo decorrido: %ds\n\n", tempo_decorrido);
    return 0;
}
