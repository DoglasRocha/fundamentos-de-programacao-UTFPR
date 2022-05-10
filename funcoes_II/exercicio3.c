/* Implemente um programa em C que leia a quantidade total de segundos e converta para Horas, Minutos e Segundos.
Imprima o resultado da conversão no formato HH:MM:SS. Para isso, utilize a função com protótipo
void converteHora(int total segundos, int *hora, int *min, int *seg) */

#include <stdio.h>

void converte_hora(int total_segundos, int *hora, int *min, int *seg);

int main(void)
{
    int total_segundos, hora, min, seg;

    printf("Digite a quantidade de segundos que voce quer converter: ");
    scanf("%d", &total_segundos);

    converte_hora(total_segundos, &hora, &min, &seg);

    printf("Formato convertido: %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}

void converte_hora(int total_segundos, int *hora, int *min, int *seg)
{
    int seg_hora = 60 * 60,  seg_min = 60;

    *hora = total_segundos / seg_hora;
    total_segundos %= seg_hora;

    *min = total_segundos / seg_min;
    *seg = total_segundos % seg_min;
}
