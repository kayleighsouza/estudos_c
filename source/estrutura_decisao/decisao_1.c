/*Faça um programa para a leitura de duas notas parciais de um aluno. O programa devecalcular a média alcançada por aluno e apresentar:
A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
A mensagem "Reprovado", se a média for menor do que sete;
A mensagem "Aprovado com Distinção", se a média for igual a dez.*/

#include <stdio.h>

int main(void) {
    float nota1, nota2, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("\t\nDigite a segunda nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media == 10) {
        printf("Parabéns, aprovado(a) com distinção.");
    }

    else if (media >= 7) {
        printf("\nParabéns! Você foi aprovado(a).");

    } else {
        printf("\nInfelizmente você foi reprovado(a).");
    }

    return 0;
}