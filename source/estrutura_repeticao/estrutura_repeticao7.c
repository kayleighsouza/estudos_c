#include<stdio.h>

/*
Faça um programa que leia 5 números e informe o maior número.
*/

int main ()
{
    int n = 0, maior = 0;

    printf("Informe cinco números:\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &n);
        if (n > maior) {
            maior = n;
        }
    }
    printf("O maior número é: %d", maior);
}
