/* Um número é dito regular se sua decomposição em fatores primos apresenta apenas potências de 2, 3 e 5. Faça uma
função que retorne 1 se um número é regular ou 0, caso contrário. */

#include <stdio.h>

int eh_regular(int num);

int main(void)
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (eh_regular(num))
        printf("%d eh um numero regular.");
    
    else
        printf("%d não eh um numero regular.");

    printf("\n");

    return 0;
}

int eh_regular(int num)
{
    for (int i = 2; i <= num; i++)
        while (num % i == 0)
        {
            if (i > 5) 
                return 0;

            num /= i;
        }
    

    return 1;
}