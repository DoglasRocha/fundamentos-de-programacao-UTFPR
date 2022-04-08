/* Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta
informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a
mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. */

#include <stdio.h>

int main(void)
{
    int senha = 2002, senha_fornecida = 0, senha_fornecida_corretamente = 0;

    while (!senha_fornecida_corretamente)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha_fornecida);

        if (senha_fornecida == senha)
            senha_fornecida_corretamente = 1;
        else
            printf("Senha invalida!\n");
    }

    printf("Acesso permitido.\n\n");

    return 0;
}