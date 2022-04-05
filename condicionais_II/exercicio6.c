/* Tira-Teima (OBI2012): Uma quadra de tênis tem o formato de um retângulo, cujos lados medem 35 ˆ 78 pés, que
correspondem a um retângulo de 432 polegadas por 936 polegadas. No último GrandSlam da Austrália Rafael Nadal
perdeu para Novak Djokovic, num dos jogos mais bonitos de tênis dos últimos tempos.Muitas vezes, uma jogada é tão rápida, e a bola tão próxima da borda da quadra, que o juiz pode tomar uma decisão
que pode ser contestada por um dos jogadores. Para isso existe o Tira-Teima, que utiliza a imagem gravada do jogo
para decidir se a bolsa estava dentro ou fora da metade da quadra correspondente a um dos jogadores.
Considere que a semi-quadra de Rafael Nadal corresponde a um retângulo em que dois vértices têm coordenadas (0,0) e
(432,468), onde todos os números são em polegadas. Você deve implementar um programa para, dadas as coordenadas
(x,y) do ponto de contato da bola com o solo, determinar se uma bola bateu no solo, dentro ou fora de semi-quadra.
Note que se a bola bate na linha divisória ela é considerada uma bola dentro.
• Entrada
A entrada é dada em uma única linha, que contém dois inteiros x e y, que correspondem às coordenadas do ponto
(x,y) de contato da bola com o solo, em polegadas.
• Saída
Seu programa deve imprimir uma única linha, contendo a letra d se a bola bateu dentro da semi-quadra e a letra
f caso contrário. */

#include <stdio.h>

#define LIMITE_MIN_X 0
#define LIMITE_MIN_Y 0
#define LIMITE_MAX_X 432
#define LIMITE_MAX_Y 468

int main(void)
{
    int x_contato, y_contato;
    int x_limite = 432, y_limite = 468;

    printf("Digite as coordenadas do ponto de contato separadas por virgula (x,y): ");
    scanf("%d,%d", &x_contato, &y_contato);

	if ((x_contato < LIMITE_MIN_X || x_contato > LIMITE_MAX_X)
		|| (y_contato < LIMITE_MIN_Y || y_contato > LIMITE_MAX_Y))
    {
        printf("Bola fora da quadra");
    }
    else
        printf("Bola dentro da quadra");

    printf("\n\n");

    return 0;
    
}
