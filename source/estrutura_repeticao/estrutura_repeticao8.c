#include <stdio.h>

/*
Faça um programa que leia 5 números e informe a soma e a média dos números.
*/

int main(void) {
    int n = 0, soma = 0, media = 0;

    printf("Informe cinco números:\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &n);
        soma = soma + n;
    }

    media = soma/5;
    printf("A soma dos números é: %d\n", soma);
    printf("A média é: %d\n", media);

    return 0;
}