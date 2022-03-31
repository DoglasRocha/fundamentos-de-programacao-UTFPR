/* Dadas a data atual e a data de nascimento de uma pessoa,
• (a) calcular a sua idade.
Complete o programa do item anterior, informando também
• (b) o dia da semana em que a pessoa nasceu
Dica: uma possibilidade é https://pt.wikipedia.org/wiki/Congruência_de_Zeller */

#include <stdio.h>

int main(void)
{
    int dia_hoje, mes_hoje, ano_hoje, dia_nasc, mes_nasc, ano_nasc;

    printf("Digite sua data de nascimento (formato dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Digite a data de hoje (formato ddmm/aaaa): ");
    scanf(" %d/%d/%d", &dia_hoje, &mes_hoje, &ano_hoje);

    // calculando a diferença de dias, para evitar bugs (por exemplo, quando o dia do aniversario é maior que o dia de hoje)
    long int dias_ate_hoje = dia_hoje + mes_hoje * 30 + ano_hoje * 365,
             dias_ate_nasc = dia_nasc + mes_nasc * 30 + ano_nasc * 365;

    int diff_dias = dias_ate_hoje - dias_ate_nasc;

    int anos = diff_dias / 365;
    diff_dias %= 365;

    int meses = diff_dias / 30;
    diff_dias %= 30;

    int dias = diff_dias;

    printf("Você tem %d anos, %d meses e %d dias\n", anos, meses, dias);

    if (mes_nasc < 3)
    {
        mes_nasc += 12;
        ano_nasc -= 1;
    }

    int j = ano_nasc / 100, 
        k = ano_nasc % 100,
        q = dia_nasc,
        m = mes_nasc;

    int dia_da_semana = (q + ((m + 1) * 26) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;

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