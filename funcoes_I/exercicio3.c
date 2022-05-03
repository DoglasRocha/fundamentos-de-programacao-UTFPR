/* Escreva uma função que recebe um caractere e retorna 1 se o caractere for uma letra maiúscula, 2 se for uma letra
minúscula, 3 se for um dígito e 0 do contrário. Protótipo: int testaTipoChar (char c); */

#include <stdio.h>

int testa_tipo_char(char c);

int main(void)
{
    char caractere;
    int tipo_caractere;

    printf("Digite um caractere qualquer: ");
    scanf("%c", &caractere);

    tipo_caractere = testa_tipo_char(caractere);

    printf("O caractere %c é: ", caractere);
    switch (tipo_caractere)
    {
        case 1:
            printf("uma letra maiúscula");
            break;

        case 2:
            printf("uma letra minúscula");
            break;

        case 3:
            printf("um número");
            break;
        
        default:
            printf("de um tipo desconhecido");
    }   

    printf("\n");
    return 0;
}

int testa_tipo_char(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;

    if (c >= 'a' && c <= 'z')
        return 2;

    if (c >= '0' && c <= '9')
        return 3;

    return 0;
}