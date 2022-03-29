/* OBI - Exercício do Bondinho. A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão
tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no máximo,
contando alunos e monitores, durante uma viagem até o pico. Neste problema, dado como entrada o número de alunos
e o núnero de monitores, você deve implementar um programa que diga se é possível ou não levar todos os alunos e
monitores em apenas uma viagem */

#include <stdio.h>

int main(void)
{
    int alunos, monitores, ocupantes;

    printf("Digite o número de alunos: ");
    scanf("%d", &alunos);

    printf("Digite o número de monitores: ");
    scanf("%d", &monitores);

    ocupantes = alunos + monitores;

    if (ocupantes > 50)
    {
        printf("Não é possível levar todos os ocupantes em uma viagem!");
    }
    else
    {
        printf("É possível levar todos os ocupantes em uma viagem.");
    }

    printf("\n\n");
    return 0;
}