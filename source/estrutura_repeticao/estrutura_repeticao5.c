#include <stdio.h>

/*Permita ao usuário informar as populações e as taxas de crescimento iniciais.
Valide a entrada e permita repetir a operação.*/

int main(void) {

    int entrada = 0;

    while (entrada == 0) {

        int A = 80000, B = 200000, cont = 0;
        int populacaoA, populacaoB, maior, menor;
        float taxaA, taxaB, taxaMenor, taxaMaior;

        do {
            printf("Informe a populacao do país A: ");
            scanf("%d", &populacaoA);
        } while (populacaoA < 0);

        do {
            printf("Informe a taxa de crescimento do país A: ");
            scanf("%f", &taxaA);
        } while (taxaA < 0);

        do {
            printf("Informe a populacao do país B: ");
            scanf("%d", &populacaoB);
        } while (populacaoB < 0);

        do {
            printf("Informe a taxa de crescimento do país B: ");
            scanf("%f", &taxaB);
        } while (taxaB < 0);

        if (populacaoA < populacaoB) {
            menor = populacaoA;
            taxaMenor = taxaA;
            maior = populacaoB;
            taxaMaior = taxaB;
        } else {
            menor = populacaoB;
            taxaMenor = taxaB;
            maior = populacaoA;
            taxaMaior = taxaA;
        }

        while (menor < maior) {
            menor = menor + (menor * taxaMenor);
            maior = maior + (maior * taxaMaior);
            cont++;
        }
        printf("O país de população menor ultrapassou o país de população maior em %d anos\n\n", cont);

        printf("Digite 0 para repetir a operação e 1 para sair");
        scanf("%d", &entrada);

    }
    return 0;
}


