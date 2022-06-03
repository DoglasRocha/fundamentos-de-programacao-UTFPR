/* Um programa para o registro de usuários de um site da internet gera automaticamente a primeira senha de acesso.
Ela é criada a partir de duas cadeias fornecidas pelo próprio usuário, uma representando o seu nome e outra o bairro
onde vive, retirando-se todas as consoantes e espaços dessas cadeias e concatenando-se as duas. Por exemplo, para
um usuário que se chama MARIA LUIZA e que mora no bairro REBOUÇAS, seria criada a senha AIAUIAEOUA. Faça um
programa que, dadas duas strings representando o nome e o bairro, crie uma senha. */

#include <stdio.h>
#include <stdlib.h>
#include "meu_header.h"

String cria_senha(String palavra1, String palavra2, int tam_pal1, int tam_pal2);

int main(void)
{
    int tam_nome, tam_bairro;
    String nome = le_string(&tam_nome, "Digite seu nome:"),
    bairro = le_string(&tam_bairro, "Digite o bairro que você mora:"),
    senha;

    senha = cria_senha(nome, bairro, tam_nome, tam_bairro);

    printf("Senha criada: %s\n", senha);

    return 0;
}

String cria_senha(String palavra1, String palavra2, int tam_pal1, int tam_pal2)
{
    String senha = (String) malloc((tam_pal1 + tam_pal2) * sizeof(char));
    String palavras[] = {palavra1, palavra2};
    int tam_senha = 0, tamanhos[] = {tam_pal1, tam_pal2};
    char letras_min[] = {'a','e','i','o','u'},
    letras_mai[] = {'A','E','I','O','U'};

    for (int k = 0; k < 2; k++)
        for (int i = 0; i < tamanhos[k]; i++)
            for (int j = 0; j < 5; j++)
                if (palavras[k][i] == letras_min[j] 
                    || palavras[k][i] == letras_mai[j])
                {
                    senha[tam_senha] = palavras[k][i];
                    tam_senha++;
                }

    senha[tam_senha] = '\0';
    tam_senha++; 

    return senha;
}
