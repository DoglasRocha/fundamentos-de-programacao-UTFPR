/* adas a data atual e a data de nascimento de uma pessoa,
• (a) calcular a sua idade.
Complete o programa do item anterior, informando também
• (b) o dia da semana em que a pessoa nasceu
Dica: uma possibilidade é https://pt.wikipedia.org/wiki/Congruência_de_Zeller */

#include <stdio.h>

int main(void)
{
    int dia_hoje, mes_hoje, ano_hoje, dia_nasc, mes_nasc, ano_nasc;

    printf("Digite sua data de nascimento (formato dd mm aaaa): ");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Digite a data de hoje (formato dd mm aaaa): ");
    scanf(" %d %d %d", &dia_hoje, &mes_hoje, &ano_hoje);

    int anos = ano_hoje - ano_nasc;
    int meses = mes_hoje - mes_nasc;
    int dias = dia_hoje - dia_nasc;

    printf("Você tem %d anos, %d meses e %d dias\n", anos, meses, dias);

    if (mes_nasc < 3)
    {
        mes_nasc += 12;
    }

    int seculo = ano_nasc / 100, 
        ano_seculo = ano_nasc % 100, 
        primeiro_trunc = ((mes_nasc + 1) * 26) / 10,
        segundo_trunc = (ano_seculo / 4),
        terceiro_trunc = (seculo / 4);

    int dia_da_semana = (dia_nasc + primeiro_trunc + ano_seculo +
        segundo_trunc + terceiro_trunc + 5 * seculo) % 7;

    if (dia_da_semana == 0)
    {
        printf("Você nasceu num sábado");
    }
    else if (dia_da_semana == 1)
    {
        printf("Você nasceu num domingo");
    }
    if (dia_da_semana == 2)
    {
        printf("Você nasceu numa segunda");
    }
    if (dia_da_semana == 3)
    {
        printf("Você nasceu numa terça");
    }
    if (dia_da_semana == 4)
    {
        printf("Você nasceu numa quarta");
    }
    if (dia_da_semana == 5)
    {
        printf("Você nasceu numa quinta");
    }
    if (dia_da_semana == 6)
    {
        printf("Você nasceu numa sexta");
    }

    printf("\n\n");
    return 0;
}