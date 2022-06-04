# Lista de Exercícios - Condicionais Parte II
1. Faça um programa que leia do teclado um ano e imprima na tela se ele é ou não bissexto. Obs.: um ano será bissexto
se: (a) for divisível por 400 OU (b) se for divisível por 4 e não o for por 100. Você deve fazer este exercício usando
apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores lógicos!
2. Faça um programa que
a) recebe como entrada via teclado uma opção e três valores. O programa deve calcular e imprimir uma média
correspondente a uma das seguintes opções:
• A = média aritmética.
• P = média ponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor, respectivamente.
• G = média geométrica.
• H = média harmônica.
O programa deve aceitar as opções tanto em caracteres maiúsculos como minúsculos. O programa deve exibir uma
mensagem de erro caso a opção escolhida seja inválida.
b) Modifique o programa anterior para que a leitura dos valores seja feita antes da leitura das operações. Lembre-se
do exercício da lista de variáveis que alterna a ordem de leitura dos tipos char com os tipos tipos int ou float.
3. Um número n no intervalo de 100 a 999 é chamado número de Armstrong (número narcisista) se obedece à seguinte
regra:
n = centena3 + dezena3 + unidade3
Exemplo:
153 “ 1
3 ` 5
3 ` 3
3
Escreva um programa que leia um número inteiro no intervalo [100;999] e verifique se é um número Armstrong. O programa deve imprimir uma mensagem de erro caso o número fornecido esteja fora do intervalo. Para mais detalhes sobre
esses números acesse https://everything2.net/index.pl?node_id=1407017&displaytype=printable&lastnode_
id=1407017 (em inglês).
4. Dados 3 valores A, B, C (lados do triângulo) fornecidos pelo usuário via teclado, implemente um programa para verificar
se estes valores formam um triângulo, e em caso afirmativo, classificá-lo como equilátero, isósceles ou escaleno (imprimir
mensagem informando o tipo ou uma mensagem específica caso não formem um triângulo).
Estruturas condicionais e problemas da OBI (Olimpíada Brasileira de Informática)
5. Frota de Táxi (OBI2005): A Companhia de Táxi Tabajara (CTT) é uma das maiores empresas de transporte
do país. Possui uma vasta frota de carros e opera em todas as grandes cidades. Recentemente a CTT modernizou
a sua frota, adquirindo um lote de 500 carros bi-combustíveis (carros que podem utilizar como combustível tanto
álcool quanto gasolina). Além do maior conforto para os passageiros e o menor gasto com manutenção, com os novos
carros é possível uma redução adicional de custo: como o preço da gasolina está sujeito a variações muito bruscas e
pode ser vantagem, em certos momentos, utilizar álcool como combustível. Entretanto, os carros possuem um melhor
desempenho utilizando gasolina, ou seja, em geral, um carro percorre mais quilômetros por litro de gasolina do que por
litro de álcool.
• Tarefa: Você deve escrever um programa que, dados o preço do litro de álcool, o preço do litro de gasolina e os
quilômetros por litro que um carro bi-combustível realiza com cada um desses combustíveis, determine se é mais
econômico abastecer os carros da CTT com álcool ou com gasolina. No caso de não haver diferença de custo entre
abastecer com álcool ou gasolina a CTT prefere utilizar gasolina.
• Entrada: A entrada é composta por quatro números reais, A, G, Ra e Rg, representando respectivamente o preço
por litro do álcool, o preço por litro da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento
(km/l) do carro utilizando gasolina.
• Saída: Escrever o caractere ’A’ se é mais econômico abastecer a frota com álcool ou o caractere ’G’ se é mais
econômico ou indiferente abastecer a frota com gasolina.
6. Tira-Teima (OBI2012): Uma quadra de tênis tem o formato de um retângulo, cujos lados medem 35 ˆ 78 pés, que
correspondem a um retângulo de 432 polegadas por 936 polegadas. No último GrandSlam da Austrália Rafael Nadal
perdeu para Novak Djokovic, num dos jogos mais bonitos de tênis dos últimos tempos.

Muitas vezes, uma jogada é tão rápida, e a bola tão próxima da borda da quadra, que o juiz pode tomar uma decisão
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
f caso contrário.
7. DESAFIO: Conta de água (OBI2010): Para incentivar mais ainda a economia de água, a empresa local de
abastecimento de água, a Saneamento Básico da Cidade (SBC), alterou os preços de seu fornecimento de forma que,
proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo metro cúbico. Todo cliente paga
mensalmente uma assinatura de R\$ 7, que inclui uma franquia de 10 m3 de água. Isto é, para qualquer consumo entre
0 e 10 m3
, o consumidor paga a mesma quantia de R\$ 7 reais (note que o valor da assinatura deve ser pago mesmo que
o consumidor não tenha consumido água). Acima de 10 m3
, cada metro cúbico subsequente tem um valor diferente,
dependendo da faixa de consumo. A SBC cobra apenas por quantidades inteiras de metros cúbicos consumidos. A
tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:
Faixa de Consumo (m3
) Preço (por m3
)
até 10 incluído na franquia
11 a 30 R\$ 1
31 a 100 R\$ 2
101 em diante R\$ 5
Assim, por exemplo, se o consumo foi de 120 m3
, o valor da conta é: R\$7 (assinatura básica) + R\$20 (consumo no
intervalo 11-30 m3
) + R\$140 (consumo no intervalo 31-100 m3
) + R\$ 100 (consumo no intervalo 101 - 120 m3
). Logo,
o valor total da conta de água é R$ 267. Tarefa: Escreva um programa que, dado o consumo de uma residência em
m3
, calcula o valor da conta de água daquela residência. A entrada é composta por um número inteiro positivo, C,
que indica o consumo em m3
.
8. Drone de Entrega: (OBI2017) A loja do Pará, especializada em vendas pela internet, está desenvolvendo drones
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
• 1 ď H, L ď 100;