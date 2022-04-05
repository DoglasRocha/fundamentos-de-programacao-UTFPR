/* DESAFIO: Conta de água (OBI2010): Para incentivar mais ainda a economia de água, a empresa local de
abastecimento de água, a Saneamento Básico da Cidade (SBC), alterou os preços de seu fornecimento de forma que,
proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo metro cúbico. Todo cliente paga
mensalmente uma assinatura de R$ 7, que inclui uma franquia de 10 m 3 de água. Isto é, para qualquer consumo entre
0 e 10 m 3 , o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da assinatura deve ser pago mesmo que
o consumidor não tenha consumido água). Acima de 10 m 3 , cada metro cúbico subsequente tem um valor diferente,
dependendo da faixa de consumo. A SBC cobra apenas por quantidades inteiras de metros cúbicos consumidos. A
tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:
Faixa de Consumo (m 3 )
até 10
11 a 30
31 a 100
101 em diante
Preço (por m 3 )
incluído na franquia
R$ 1
R$ 2
R$ 5
Assim, por exemplo, se o consumo foi de 120 m 3 , o valor da conta é: R$7 (assinatura básica) + R$20 (consumo no
intervalo 11-30 m 3 ) + R$140 (consumo no intervalo 31-100 m 3 ) + R$ 100 (consumo no intervalo 101 - 120 m 3 ). Logo,
o valor total da conta de água é R$ 267. Tarefa: Escreva um programa que, dado o consumo de uma residência em
m 3 , calcula o valor da conta de água daquela residência. A entrada é composta por um número inteiro positivo, C,
que indica o consumo em m 3. */

#include <stdio.h>

int main(void)
{
    int consumo, intervalo, auxiliar, preco = 0;

    printf("Digite seu consumo em m3: ");
    scanf("%d", &consumo);

    auxiliar = consumo;
	// calcula o consumo na faixa > 100
    if (consumo >= 101)
    {
        intervalo = consumo - 100;
        preco += intervalo * 5;

        auxiliar = 100;
    }
	// calcula o consumo na faixa 30 < x <= 100
    if (consumo >= 31)
    {
        intervalo = auxiliar - 30;
        preco += intervalo * 2;

        auxiliar = 30;
    }
	// calcula o consumo na faixa 10 < x <= 30
    if (consumo >= 11)
    {
        intervalo = auxiliar - 10;
        preco += intervalo * 1;

        auxiliar = 10;
    }

	// preco base, adicionado em qualquer faixa de consumo
    preco += 7;

    printf("O preco da sua conta de agua eh de: R$ %d\n\n", preco);

    return 0;
}
