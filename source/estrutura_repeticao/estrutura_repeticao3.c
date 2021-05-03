#include <stdio.h>
#include <string.h>

/*Faça um programa que leia e valide as seguintes informações:
Nome: maior que 3 caracteres;
Idade: entre 0 e 150;
Salário: maior que zero;
Sexo: 'f' ou 'm';
Estado Civil: 's', 'c', 'v', 'd';*/

int main(void) {
    char nome[30];
    int idade, tamanho;
    float salario;
    char sexo, estado;

    printf("Informe seu nome:\n");
    scanf("%s", nome);

    tamanho = strlen(nome);

    while (strlen(nome) <= 3) {
        printf("Erro. Seu nome deve ter mais de três letras, informe novamente.\n");
        scanf("%s", nome);
    }
    printf("Seu nome é: %s\n", nome);

    printf("\nInforme sua idade: \n");
    scanf("%d", &idade);
    while (idade <= 0 || idade > 150) {
        printf("\nSua idade é inválida, informe novamente.\n");
        scanf("%d", &idade);
    }
    printf("Sua idade é: %d\n", idade);

    printf("\nInforme seu salário: \n");
    scanf("%f", &salario);
    while (salario <= 0) {
        printf("\nErro. Seu salário deve ser maior que zero, informe novamente.\n");
        scanf("%f", &salario);
    }
    printf("Seu salário é: %.2f\n", salario);

    printf("\nInforme seu sexo utilizando f para feminino e m para masculino.\n");
    scanf("%s", &sexo);
    while (sexo != 'f' && sexo != 'm') {
        printf("Sexo inválido. Informe novamente: \n");
        scanf("%s", &sexo);
    }
    if(sexo == 'f') {
        printf("Seu sexo é feminino.");
    } else {
        printf("Seu sexo é masculino.");

    }

    printf("\n\nInforme seu estado civil. Solteiro(s), Casado(c), Viúvo(v), Divorciado(d): \n");
    scanf("%s", &estado);
    while (estado != 's' && estado != 'c' && estado != 'v' && estado != 'd') {
        printf("\nInválido. Por favor, informe novamente utilizando as letras correspondentes. \n");
        scanf("%s", &estado);
    }
    if(estado == 'c'){
        printf("Seu estado civil: Casado(a)");
    } else if (estado == 's'){
        printf("Seu estado civil: Solteiro(a)");
    } else if(estado == 'd'){
        printf("Seu estado civil: Divorciado(a)");
    } else {
        printf("Seu estado civil: Viúvo(a)");
    }

    return 0;
}