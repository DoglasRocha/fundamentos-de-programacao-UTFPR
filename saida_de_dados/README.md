# Lista de Exercícios - Saída de Dados
1. Implemente um programa em C que exiba na tela o seguinte padrão:
``` C
Oi ! Esse eh um programa teste !
2 *
3 ***
4 ***** 
```
Depois, altere o programa para imprimir
``` C
1 Oi ! Esse eh um programa teste !
2 *
3 ***
4 *****
```
2. O trecho de código abaixo possui mais de um erro de sintaxe. Identifique quais são e somente depois implemente no
computador o código correto. O programa correto deve ter como mensagem de saída na tela de Logs: 0 Error(s), 0
Warning(s).
``` C
1
2 # include < studio .h >
3 int main () {
4
5   printf (" Esse eh um programa de saida de dados !!!\ n");
6   printf ("A seguir alguns exemplos com a funcao printf :\n);
7   printf ("%d\n", 65);
8   printf ("%c\n", 65);
9   printf ("%d\n", &65) ;
10  printf ("%c\n", ’A ’);
11  printf ("%d\n", ’A ’);
12  printf ("%d\n", 10)
13  printf ("\n\n \n");
14  pritf (" Fim do Programa !!!");
15  return 0;
16 }
```
1. Faça um programa que mostre na tela uma constante com pelo menos três dígitos. Exemplo:
• valor da constante:7 - valor exibido: 007
• valor da constante:17 - valor exibido: 017
• valor da constante:1024 - valor exibido: 1024
Dica: a função printf possui opções de formatação para esta finalidade!
4. (desafio I) Faça um programa que imprima na tela o códico ASCII das letras de ’A’ a ’D’.
5. (desafio II) Faça um programa que converta as letras de ’A’ a ’D’ para minúsculo e imprima o resultado na tela.