/* O número 3025 possui a seguinte característica: 30 ` 25 “ 55 ́ ą 55  ̊ 55 “ 3025. Fazer um programa para obter todos
os números de 4 algarismos com a mesma característica do número 3025 */

#include <stdio.h>

int main(void)
{
    int centenas, dezena, resultado;

    for (int n_analisado = 1000; n_analisado <= 9999; n_analisado++)
    {
        centenas = n_analisado / 100;
        dezena = n_analisado % 100;

        resultado = centenas + dezena;

        if (resultado * resultado == n_analisado)
        {
            printf("%d: ", n_analisado,  resultado, resultado);
            printf("%d + %d = %d -> ", centenas, dezena, resultado);
            printf("%d * %d = %d\n\n", resultado, resultado, n_analisado);
        }
    }

    return 0;
}