/* 10. Considere o código abaixo: */
#include <stdio.h>

int main()
{
    int n1, n2, n3, aux;

    if (n2 >= n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    if (n1 >= n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;

        if (n2 >= n3)
        {
            aux = n2;
            n2 = n3;
            n3 = aux;
        }
    }
    printf("%d %d %d\n", n1, n2, n3);
    return(0);
}

/* Sem executar o programa, responda:
• Qual será a saída se atribuirmos no início os valores 1, 2 e 3 a n1, n2 e n3, respectivamente?
    R.) 1 2 3
• Qual será a saída se atribuirmos no início os valores 20, 10 e 30 a n1, n2 e n3, respectivamente?
    R.) 10 20 30
• Qual será a saída se atribuirmos no início os valores 5*5, n1/2 e n2+1 a n1, n2 e n3, respectivamente?
    R.) 12 13 25
• O que o programa faz, exatamente? Explique o funcionamento do algoritmo.
    R.) Ele troca os valores das variáveis, utilizando uma variavel auxiliar, 
    de acordo com certas condições.
    Caso o segundo numero seja maior ou igual que o terceiro, suas variáveis terão seus
    valores trocados.
    Depois, caso o primeiro numero seja maior que o segundo (trocado ou não), ocorrerá
    uma troca entre essas variaveis. Depois, o segundo e o terceiro valor serão analisados
    novamente (somente se a n1 >= n2).
    Depois, os valores serão impressos.
*/
