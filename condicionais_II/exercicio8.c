/* Drone de Entrega: (OBI2017) A loja do Pará, especializada em vendas pela internet, está desenvolvendo drones
para entrega de caixas com as compras dos clientes. Cada caixa tem a forma de um paralelepípedo reto retângulo (ou
seja, no formato de um tijolo). O drone entregará uma caixa de cada vez, e colocará a caixa diretamente dentro da casa
do cliente, através de uma janela. Todas as janelas dos clientes têm o formato retangular e estão sempre totalmente
abertas.
O drone tem um aplicativo de visão computacional que calcula extamente as dimenões H e L da janela. O drone
consegue colocar a caixa através da janela somente quando uma das faces da caixa está paralela à janela, mas consegue
virar e rotacionar a caixa antes de passá-la pela janela.
O aplicativo de controle do drone está quase pronto, mas falta um pequeno detalhes: um programa que, dadas as
dimensões da maior janela do cliente e as dimensões da caixa que deve ser entregue, determine se o drone vai ser capaz
de entregar a compra (pela janela) ou se a compra terá que ser entregue por meios normais.
Entrada
A entrada é composta por cinco lihas, cada uma contendo um número inteiro. As três primeiras linhas contêm os
valores A,B,C, indicando as três dimensoes da caixa, em centímeros. As duas últimas linhas contêm os valores H e L,
indicando a altura e a largura da janela, em centímetros.
Saída
Seu programa deve escrever uma única linha, contendo apenas a letra S se a caixa passa pela janela e apenas a letra N
em caso contrário.
Restrições
• 1 ď A, B, C ď 100;
• 1 ď H, L ď 100; */

#include <stdio.h>

int main(void)
{
    int a, b, c, h, l;

    printf("Digite as dimensoes da caixa separadas por espacos (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Digite as dimensoes da janela separadas por espacos (h l): ");
    scanf("%d %d", &h, &l);

    if ((h >= a && l >= b)
        || (h >= a && l >= c)
        || (h >= b && l >= c)
        || (h >= b && l >= a)
        || (h >= c && l >= a)
        || (h >= c && l >= b))
    {
        printf("S");
    }
    else
    {
        printf("N");
    }

    printf("\n\n");
    
    return 0;
}