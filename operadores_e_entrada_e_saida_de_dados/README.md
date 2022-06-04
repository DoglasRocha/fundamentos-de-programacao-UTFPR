# Lista de Exercícios - Operadores, Entrada e Saída de Dados
1. Complete o programa abaixo de forma a ler do teclado dois valores em ponto flutuante, armazenando-os nas variáveis
n1 e n2. Efetue a soma de n1 e n2, atribuindo o resultado na variável aux. Imprima o valor de aux com apenas duas
casas decimais - dica: a função printf possui opções de formatação para esta finalidade! Atenção, não há espaço
entre o nome do arquivo e a sua extensão. Portanto, na linha 1, em stdio.h não há espaço entre a letra
’o’ e o ponto, embora a cópia direta do código aqui listado para a IDE possa introduzir este espaço
incorretamente. Lembre-se de retirar o espaço se isso ocorrer.
``` C
1 # include < stdio .h >
2 int main () {
3 float n1 , n2 , aux ;
4
5 printf (" Digite o primeiro valor : ") ;
6 scanf ("%f", & n1 );
7
8 .......... COMPLETAR ..........
9
10 printf ("%f", aux );
11 return 0;
12 }
```
2. Modifique o programa anterior para imprimir também os valores de n1 e n2 e rode novamente. Atenção!!! Você deve
considerar que está correto somente quando não houver nenhum aviso (warning) nem erro (error).
O que acontece se você eliminar os comandos de leitura (scanf) do programa e tentar imprimir o conteúdo das variáveis
mesmo assim? Compile, rode e veja as mensagens e resultados.
3. Implemente um programa que leia três variáveis do teclado, uma de cada tipo: char, int e float (o programa deve
ler nesta ordem, ou seja, primeiro variável tipo char, depois int e depois float). Lembre-se de que uma variável
tipo char armazena um único caractere (letra, símbolo ou dígito), então ao fornecer o seu valor via teclado evite uma
sequência de caracteres (forneça apenas um caractere). Ao final, imprima o conteúdo de cada variável. Lembre-se de
usar nomes significativos e de imprimir mensagens adequadas!
4. Modifique o programa anterior para que leia primeiro o tipo int e depois os outros. Veja que a nova ordem vai dar
problema na leitura do tipo char. Você consegue corrigir o erro de forma que a ordem int, char e float possa ser
respeitada?
5. Implemente um programa que leia 2 valores inteiros e armazene-os nas variáveis i1 e i2. Calcule a divisão de i1 por i2
atribuindo o seu resultado na variável divis e o resto da divisão entre i1 e i2, atribuindo o seu resultado na variável
rest. Verifique os resultados para os seguintes valores fornecidos pelo teclado: i1=10 e i2=5 e depois i1=12 e i2=5.
Você consegue explicar a diferença?
6. Implemente um programa que leia 2 valores inteiros e armazene-os nas variáveis n1 e n2. Calcule a média entre n1 e
n2, atribuindo o seu resultado na variável media. Imprima o valor de media. Qual a saída do seu programa para n1=2
e n2=4? E para n1=2 e n2=3? Modifique o programa para que possa calcular e imprimir a média corretamente.
7. Considere o trecho de código abaixo. Ele lê um número inteiro do teclado e o imprime como se fosse um número em
ponto flutuante. Implemente o programa e observe se ocorre um erro de compilação ou um erro de execução. Qual a
correção necessária para que o programa execute sem erros?
```C
1 # include < stdio .h >
2 int main () {
3 int aux ;
4
5 printf (" Digite um numero inteiro : ");
6 scanf ("%d", & aux );
7 printf ("%f", aux );
8 return 0;
9 }
```
8. Considere o programa abaixo. Ele lê um caractere e o imprime como se fosse um número inteiro. Que número é esse
exibido pelo programa? É um erro de execução ou ele tem algum significado?
``` C
1 # include < stdio .h >
2 int main () {
3 char aux ;
4
5 printf (" Digite um caracter : ");
6 scanf ("%c", & aux );
7 printf ("%d", aux );
8
9 return 0;
10 }
```
9. Faça um programa que calcule o perímetro (2ˆbase + 2ˆaltura) de um retângulo.
10. Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (r). A fórmula
para calcular o volume é: p4{3q ˚ P I ˚ r
3
. Considere (atribua) para a constante PI o valor 3.14159. Dica: cuidado com
o resultado de 4/3 ;-)
Exemplos de Entrada Exemplos de Saída
3 VOLUME = 113.097
15 VOLUME = 14137.155
1523 VOLUME = 14797486501.627
11. Faça um programa que leia três valores inteiros e apresente o máximo dos três valores lidos seguido da mensagem “eh
o maior”. Utilize a fórmula:
maxAB “
a ` b ` abspa ´ bq
2
Obs. abs() é uma função da biblioteca stdlib.h! Para isso lembre de incluir stdlib.h de forma similar stdio.h.
12. Modifique o programa anterior para imprimir também o menor (NÃO use o condicional if - veja se consegue abstrair
como deve ser a fórmula do menor a partir do entendimento de como funciona a fórmula do maior).
13. Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km, representada como
um inteiro) e o total de combustível gasto (em litros, representado por um valor real). Apresente o valor que representa
o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
Exemplo de Entrada Exemplo de Saída
500 14.286 km/l
35.0
14. Faça um programa que leia um número inteiro e informe com quais cédulas podemos representá-lo. Suponha que
estejam disponíveis apenas notas de R\$ 50, R\$5 e R\$1. Exemplo de resposta: R$ 218 = 4 cédulas de 50, 3 cédulas de
5 e 3 cédulas de 1.
15. Faça um algoritmo que dado um número de segundos, converta para dias, horas, minutos e segundos. Por exemplo,
7322 segundos correspondem a 0 dias, 2 horas, 2 minutos e 2 segundos.
16. Faça um programa que, dado um número inteiro como entrada, retorne seu último dígito.
17. Construa um programa que receba o valor de uma temperatura em graus Celsius (C) e calcule a sua temperatura
correspondente em graus Farenheit (F):
C “
pF ´ 32q ˆ 5
9
18. Construa um programa que calcule o gasto de uma viagem de carro de uma cidade a outra, sabendo:
• O carro utilizado roda 15 Km com 1 litro de gasolina.
• O preço da gasolina é de R\$2,60.
• O valor de cada pedágio é de R$8,00.
Seu programa deve receber a distância e a quantidade de pedágios entre as cidades.
19. Faça um programa que leia 3 valores que correspondem às três notas de um aluno. A seguir, calcule a média do aluno,
sabendo que a primeira nota tem peso 2, a segunda nota tem peso 3 e a terceira nota tem peso 5. Considere que cada
nota pode ir de 0 até 10.0. Imprima a média com 1 dígito após o ponto decima