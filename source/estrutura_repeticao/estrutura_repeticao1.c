#include <stdio.h>
/*Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja
inválido e continue pedindo até que o usuário informe um valor válido.*/

int main(void) {
    int nota;

    do
    {
        printf("\nInforme um numero entre zero e dez.\n");
        scanf("%d", &nota);
        if (nota < 0 || nota > 10) {
            printf("Erro. Sua nota é inválida. Tente novamente.\n");
        }
    }
    while (nota < 0 || nota > 10);

    printf("A nota válida.");

    return 0;
}

