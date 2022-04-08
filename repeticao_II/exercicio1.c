/* Escreva um programa que leia números digitados pelo usuário até que este digite um valor negativo. Neste momento,
o programa deverá encerrar a entrada de dados e apresentar o maior valor entre todos os digitados. */

#include <stdio.h>

int main(void)
{
    float numero_fornecido = 0, maior_numero = 0;


    while (numero_fornecido >= 0)
    {
        printf("Por favor digite um numero positivo: ");
        scanf("%f", &numero_fornecido);

        if (numero_fornecido > maior_numero)
            maior_numero = numero_fornecido;

        printf("Caso queira sair do programa, digite um numero negativo.\n\n");
    }

    printf("O maior numero fornecido foi: %.2f\n\n", maior_numero);

    return 0;
}