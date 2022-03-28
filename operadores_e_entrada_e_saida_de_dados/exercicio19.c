/* Faça um programa que leia 3 valores que correspondem às três notas de um aluno. A seguir, calcule a média do aluno,
sabendo que a primeira nota tem peso 2, a segunda nota tem peso 3 e a terceira nota tem peso 5. Considere que cada
nota pode ir de 0 até 10.0. Imprima a média com 1 dígito após o ponto decimal. */

#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    printf("A média de suas notas é de: %.1f\n\n", media);

    return 0;
}