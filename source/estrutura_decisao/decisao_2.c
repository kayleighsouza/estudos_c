/*Faça um Programa que pergunte em que turno você estuda.
Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!",
"Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/

#include <stdio.h>

int main(void) {
    char opcao;
    printf("Em qual turno você estuda? Digite M para manhã, T para tarde e N para noite.\n");
    scanf("%c", &opcao);

    if (opcao == 'M' || opcao == 'm') {
        printf("Bom dia!");
    } else if (opcao == 'T' || opcao == 't')  {
        printf("Boa tarde!");
    } else if (opcao == 'N' || opcao == 'n') {
        printf("Boa noite!");
    } else {
        printf("Desculpe, sua opção é inválida.");
    }
    return 0;
}
