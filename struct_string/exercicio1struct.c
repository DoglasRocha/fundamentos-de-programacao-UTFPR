/* Considerando o tipo a seguir (as duas formas de definição de tipo em struct são possíveis - escolha uma delas)
...
Implemente uma função que recebe como parâmetro de entrada um valor representando o tempo em segundos e retorna
uma struct tipo Tempo, contendo tais segundos divididos em horas, minutos e segundos. */

#include <stdio.h>

typedef struct
{
    int horas;
    int minutos;
    int segundos;
} Tempo;

Tempo converte_segundos(int total_segundos);

int main(void)
{
    int total_seg;
    Tempo relogio;

    printf("Digite a quantidade de segundos que você deseja converter: ");
    scanf("%d", &total_seg);

    relogio = converte_segundos(total_seg);

    printf("Segundos convertidos: %02d:%02d:%02d\n", relogio.horas, relogio.minutos, relogio.segundos);
    return 0;
}

Tempo converte_segundos(int total_segundos)
{
    Tempo relogio;

    relogio.horas = total_segundos / (60 * 60);
    total_segundos %= (60 * 60);

    relogio.minutos = total_segundos / 60;
    total_segundos %= 60;

    relogio.segundos = total_segundos;

    return relogio;
}