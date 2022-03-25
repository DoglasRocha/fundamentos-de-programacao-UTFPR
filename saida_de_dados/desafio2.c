#include <stdio.h>

int main(void)
{
    /* convertendo letras maiúsculas em minúsculas na tabela ASCII. 
    a diferença entre o valor da letra "a" e a letra "A" é de 32,
    logo, para converter de maiúsculo para minúsculo, é necessário
    adicionar 32 */
    printf("%c - %c\n", 'A', 'A' + 32);
    printf("%c - %c\n", 'B', 'B' + 32);
    printf("%c - %c\n", 'C', 'C' + 32);
    printf("%c - %c\n", 'D', 'D' + 32); 
}