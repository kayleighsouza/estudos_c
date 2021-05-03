#include <stdio.h>

/*Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento
de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%.
Faça um programa que calcule e escreva o número de anos necessários para que a população do país A
ultrapasseou iguale a população do país B, mantidas as taxas de crescimento.*/

int main(void) {
    int A = 80000, B = 200000, cont = 0;

    while (A < B) {
        A = A + (A* 0.03);
        B = B + (B * 0.015);
        cont++;
    }
    printf("O país A ultrapassou o país B em %d anos", cont);

    return 0;
}
