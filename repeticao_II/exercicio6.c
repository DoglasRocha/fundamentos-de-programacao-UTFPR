/* Faça um programa que sorteie um número aleatório entre 1 e 500 e então peça ao usuário para adivinhar este valor. O
programa deverá indicar a cada tentativa do usuário se ela é maior ou menor que o número mágico e contar o número
de tentativas. Quando o usuário conseguir acertar o número, o programa deverá classificar o usuário como: (a) de 1 a
3 tentativas: \o/; (b) d 4 a 6 tentativas: :-D; (c) de 7 a 10 tentativas: :-) e (d) Mais que 10 tentativas: :-\ */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int n_tentativas = 0, n_aleatorio = rand() % 500 + 1, n_escolhido = 800;

    while (n_escolhido != n_aleatorio)
    {
        n_tentativas++;

        printf("Digite um numero inteiro: ");
        scanf("%d", &n_escolhido);

        if (n_escolhido > n_aleatorio)
        {
            printf("O numero que voce digitou eh maior que o numero sorteado\n");
        }
        else if (n_escolhido < n_aleatorio)
        {
            printf("O numero que voce digitou eh menor que o numero sorteado\n");
        }
    }

    printf("Voce acertou! Seu numero de tentativas foi de: %d ", n_tentativas);

    if (n_tentativas <= 3)
        printf("\\o/");

    else if (n_tentativas <= 6)
        printf(":-D");

    else if (n_tentativas <= 10)
        printf(":-)");

    else
        printf(":-\\");

    printf("\n\n");

    return 0;
}