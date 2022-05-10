/* Suponha a seguinte função em C, a qual retorna o primeiro e o último dígito de um número:
void removeExtremos(int *n, int *pri, int *ult)
{
int tn,pot;
*ult = *n % 10;
pot=1;
tn = *n;
while(tn >= 10){
tn = tn/10;
pot *= 10;
}
*pri = *n / pot;
*n = *n % pot;
*n = *n / 10;
}
Implemente um programa em C que utilize esta função para determinar se um determinado inteiro positivo n é
palíndromo. Suponha que n não contém o dígito 0. Atenção: você não deve modificar a função dada no enunciado!
Apenas invocá-la de forma adequada. */

#include <stdio.h>

void removeExtremos(int *n, int *pri, int *ult);

int main(void)
{
    int n1, aux, primeiro, ultimo, eh_palindromo = 1;

    printf("Para saber se um numero é palindromo, digite-o aqui: ");
    scanf("%d", &n1);
    aux = n1;

    while (aux != 0)
    {
        removeExtremos(&aux, &primeiro, &ultimo);

        if (primeiro != ultimo)
        {
            eh_palindromo = 0;
            break;
        }
    }

    printf("%d%s eh palindromo\n", n1, eh_palindromo ? "" : " nao");
    return 0;
}

void removeExtremos(int *n, int *pri, int *ult)
{
    int tn, pot;

    *ult = *n % 10;
    pot=1;
    tn = *n;

    while(tn >= 10)
    {
        tn = tn/10;
        pot *= 10;
    }

    *pri = *n / pot;
    *n = *n % pot;
    *n = *n / 10;
}