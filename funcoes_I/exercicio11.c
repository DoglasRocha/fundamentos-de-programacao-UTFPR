/* Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b. Exemplo:
5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455. Você deverá:
(a) Fazer uma função que, dado um valor inteiro n e um dígito d, 0 ď d ď 9, devolve quantas vezes o dígito d aparece
em n. Protótipo:
int contadigitos(int n, int d)
(b) Usando a função do item anterior, criar uma função que, dados dois inteiros positivos n1 e n2, retorne 1 se n1 é
permutação de n2 ou 0 caso contrário. Protótipo:
int ehPermutacao(int n1, int n2) */

#include <stdio.h>

int conta_digitos(int n, int d);
int eh_permutacao(int n1, int n2);

int main(void)
{
    int n1, n2;

    printf("Digite dois numeros naturais separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    printf("%d e %d ", n1, n2);
    if (eh_permutacao(n1, n2))
        printf("são ");

    else
        printf("não são ");

    printf("permutações um do outro\n");

    return 0;
}

int conta_digitos(int n, int d)
{
    int count = 0;

    for (int i = n; i > 0; i /= 10)
        if (i % 10 == d)
            count++;

    return count;
}

int eh_permutacao(int n1, int n2)
{
    int permutacao = 1;

    for (int aux = n1; aux > 0; aux /= 10)
        // se a qtd de digitos em um numero for diferente da qtd do outro
        // numero, eles nao sao permutacoes um do outro
        if (conta_digitos(n1, aux % 10) != conta_digitos(n2, aux % 10))
        {
            permutacao = 0;
            break;
        }

    return permutacao;
}