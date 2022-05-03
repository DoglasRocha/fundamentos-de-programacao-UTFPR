/* . O IMC (Índice de Massa Corporal) é uma medida que foi criada para dar uma indicação sobre a condição de peso de
uma população. Por sua simplicidade, ele é usado - com críticas - para avaliar a condição de indivíduos adultos. A
fórmula é: IMC = peso / (altura2
).
(a) Escreva uma função que leia o peso e a altura de um adulto e retorne o IMC.
Protótipo:
float calculaIMC(float altura, float peso);
(b) Escreva uma função do tipo void que receba como parâmetro um valor representando o IMC e mostre uma
mensagem de acordo com a sua condição:
IMC Mensagem
abaixo de 18.5 Você está abaixo do peso.
entre 18.5 e 25 Você está com o peso normal.
entre 25 e 30 Você está acima do peso.
acima de 30 Você está obeso.
Protótipo:
void imprimeMsgIMC(float imc);
(c) Na função main(), leia os dados de entrada adequados e invoque as duas funções criadas acima. */

#include <stdio.h>

float calcula_IMC(float altura, float peso);
void imprime_msg_IMC(float imc);

int main(void)
{
    float altura, peso, imc;

    printf("Digite sua altura e seu peso, separados por espacos: ");
    scanf("%f %f", &altura, &peso);

    imc = calcula_IMC(altura, peso);
    imprime_msg_IMC(imc);

    return 0;
}

float calcula_IMC(float altura, float peso)
{
    return (peso / (altura * altura));
}

void imprime_msg_IMC(float imc)
{
    if (imc > 30)
        printf("Você está obeso.");

    else if (imc >= 25)
        printf("Você está acima do peso.");

    else if (imc >= 18.5)
        printf("Você está com o peso normal.");

    else
        printf("Você está abaixo do peso.");

    printf("\n");
}