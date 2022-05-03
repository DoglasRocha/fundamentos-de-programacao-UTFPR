/* Construa uma função que, dados dois inteiros positivos a e b verifica se b corresponde aos últimos dígitos de a. A
função deve retornar 1 se a condição for satisfeita ou 0, caso contrário. Exemplo:
a b Retorno
567890 890 1 (sim)
1243 1243 1 (sim)
2457 245 0 (não) */

#include <stdio.h>

int verifica_igualdade_trecho(int n1, int n2);

int main(void)
{
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    printf("%d\n", verifica_igualdade_trecho(n1, n2));
    return 0;
}

int verifica_igualdade_trecho(int n1, int n2)
{
    while (n2 > 0 && n1 % 10 == n2 % 10)
        n1 /= 10, n2 /= 10;

    return n2 == 0 ? 1 : 0;
}
