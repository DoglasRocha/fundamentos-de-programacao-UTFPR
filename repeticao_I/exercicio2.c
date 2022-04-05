/* Leia um valor inteiro n. Apresente todos os números de 1 a 100 que divididos por n dão resto igual a 2.
Exemplo de Entrada Exemplo de Saída
13 2
15
28
41
... */

#include <stdio.h>

int main(void)
{
    int numero;

    printf("Digite um numero até 100: ");
    scanf("%d", &numero);

    printf("Os números que dividos por %d, até 100, que têm resto 2, são:\n", numero);

    for (int i = 1; i <= 100; i++)
    {
        if (i % numero == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}