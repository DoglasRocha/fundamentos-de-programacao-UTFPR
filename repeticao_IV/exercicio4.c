/* Fazer um programa para receber dois números inteiros com três dígitos e determinar se um número é permutação do
outro ou não. O programa deve parar quando for digitado um número negativo. Ex: 431 é permutação de 143, 420 é
permutação de 204. O programa só deve aceitar números positivos. */

#include <stdio.h>

int main(void)
{
    int n1, n2, aux1, aux2, d1, d2, eh_diferente = 0;

    printf("Forneça dois numeros de 3 digitos separados por espacos: ");
    scanf("%d %d", &n1, &n2);

    if ((n1 < 100 || n2 < 100) 
        || (n1 > 999 || n2 > 999))
    {
        printf("Entrada invalida!\n");
        return 1;
    }

    for (int i = 0, k = 0, aux1 = n1; i < 3; i++)
    {
        d1 = aux1 % 10;

        for (int j = 0, aux2 = n2; j < 3; j++)
        {
            d2 = aux2 % 10;

            if (d1 == d2)
                k++;

            aux2 /= 10;
        }

        aux1 /= 10;

        if (k == 0)
        {
            eh_diferente = 1;
            break;
        }

        k = 0;
    }

    if (eh_diferente)
        printf("%d e %d não são permutas um do outro!\n", n1, n2);

    else
        printf("%d e %d são permutas um do outro!\n", n1, n2);

    return 0;
}