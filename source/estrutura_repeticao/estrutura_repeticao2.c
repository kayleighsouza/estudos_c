#include <stdio.h>
#include <string.h>

/*Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário,
mostrando uma mensagem de erro e voltando a pedir as informações.*/

int main(void) {

    char senha[60];
    char usuario[60];

    do
    {
        printf("\nInforme seu nome de usuario:\n");
        scanf("%s",usuario);
        printf("\nInforme sua senha:\n");
        scanf("%s", senha);

        if (strcmp(usuario, senha) == 0){
            printf("Erro, senha e usuario não podem ser iguais. Por favor, informe os dados novamente.\n");
        }
    } while (strcmp(usuario, senha) == 0);

    printf("Cadastro realizado com sucesso.");

    return 0;
}
