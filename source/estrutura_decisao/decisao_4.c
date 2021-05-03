/*Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um
semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
Média de Aproveitamento  Conceito
Entre 9.0 e 10.0        A
        Entre 7.5 e 9.0         B
        Entre 6.0 e 7.5         C
        Entre 4.0 e 6.0         D
        Entre 4.0 e zero        E

        O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem
        “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
        */

#include <stdio.h>

int main(void) {
    float nota1, nota2, media;
    printf("Informe a primeira parte da nota.\n");
    scanf("%f", &nota1);
    printf("A primeira parte da nota é: %.1f\n", nota1);
    printf("\nInforme a segunda parte da nota.\n");
    scanf("%f", &nota2);
    printf("A segunda parte da nota é : %.1f\n", nota2);

    media = (nota1 + nota2) / 2;
    printf("\nA média é: %.1f\n", media);

    if(media >= 9.0 && media <= 10.0) {
        printf("Conceito A \n\t APROVADO");
    } else if (media >= 7.5 && media < 9.0) {
        printf("Conceito B \n\t APROVADO");
    } else if (media >= 6.0 && media < 7.5) {
        printf("Conceito C \n\t APROVADO");
    } else if (media >= 4.0 && media < 6.0) {
        printf("Conceito D \n\t REPROVADO");
    } else if (media < 4 && media >= 0) {
        printf("Conceito E \n\t REPROVADO");

    }

    return 0;
}
