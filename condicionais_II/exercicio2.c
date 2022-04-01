// Faça um programa que
// a) recebe como entrada via teclado uma opção e três valores.  O programa deve calcular e imprimir uma média
// correspondente a uma das seguintes opções:
// •A = média aritmética.
// •P = média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.
// •G = média geométrica.
// •H = média harmônica

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n1, n2, n3;
    float media;
    char operacao;

    printf("Digite três valores separados por espaços (ex.: 14 50 63): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Digite a operacao desejada:\n");
    printf("(A) Media aritmetica\n");
    printf("(B) Media ponderada\n");
    printf("(C) Media geometrica\n");
    printf("(D) Media harmonica\n");
    scanf(" %c", &operacao);

    if (operacao == 'A' || operacao == 'a')
    {
        media = (n1 + n2 + n3) / 3.0;
        printf("Media aritmetica: %.3f", media);
    }
    else if (operacao == 'B' || operacao == 'b')
    {
        media = (n1 * 1 + n2 * 2 + n3 * 3) / (1.0 + 2.0 + 3.0);
        printf("Media ponderada: %.3f", media);   
    }
    else if (operacao == 'C' || operacao == 'c')
    {
        media = cbrt(n1 * n2 * n3);
        printf("Media geometrica: %.3f", media);
    }
    else if (operacao == 'D' || operacao == 'd')
    {
        float media = 3 / (1.0/n1 + 1.0/n2 + 1.0/n3);
        printf("Media harmonica: %.3f", media);
    }
    else
        printf("Opcao invalida!!");

    printf("\n\n");
    return 0;
}
