/*
Faça um Programa que peça os 3 lados de um triângulo.
O programa deverá informar se os valores podem ser um triângulo.
Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
*/

#include <stdio.h>

int main(void) {
    int ladoA, ladoB, ladoC;

    printf("Informe o primeiro lado: \n");
    scanf("%d", &ladoA);
    printf("Informe o segundo lado: \n");
    scanf("%d", &ladoB);
    printf("Informe o terceiro lado: \n");
    scanf("%d", &ladoC);

    if (ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoA + ladoC > ladoB){
        printf("É um triângulo.\n");
        if (ladoA == ladoB && ladoA == ladoC) {
            printf("O tipo do triângulo é equilátero.\n");
        } else if (ladoA != ladoB && ladoA != ladoC && ladoB !=     ladoC){
            printf("O tipo do triângulo é escaleno.");
        } else {
            printf("O tipo do triângulo é isósceles.");
        }
    } else {
        printf("Não é um triângulo.\n");
    }
    return 0;
}

