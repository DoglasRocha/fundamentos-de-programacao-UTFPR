/* Dados t números inteiros positivos (t fornecido pelo usuário), calcular a soma dos que são primos. */

#include <stdio.h>

int main(void)
{
    int t, num_fornecido, eh_primo, soma = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        eh_primo = 1;
        printf("Digite o numero: ");
        scanf("%d", &num_fornecido);

        for (int j = num_fornecido - 1; j > 1; j--)
        {
            if (num_fornecido % j == 0)
            {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo)
        {
            soma += num_fornecido;
        }
    }

    printf("Soma dos primos fornecidos: %d\n", soma);

    return 0;
}