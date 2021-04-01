/*
 * CalculadoraIMC.c
 *
 *  Created on: 1 de abr. de 2021
 *      Author: Kayleigh Souza
 */

#include <stdio.h>

int main(void) {
	setbuf(stdout, NULL);
	float peso;
	float altura;
	float imc;
	printf("Informe o peso: \n");
	scanf("%f", &peso);

	while (peso <= 0) {
		printf("Erro, o peso deve ser maior que zero.\n");
		printf("\nInforme o peso: \n");
		scanf("%f", &peso);
	}

	printf("Informe a altura (escreva em formato decimal, exemplo: 1.80) \n");
	scanf("%f", &altura);

	while (altura <= 0) {
		printf("Erro, a altura deve ser maior que zero.\n");
		printf("\nInforme a altura: \n");
		scanf("%f", &altura);
	}

	imc = peso / (altura * altura);
	printf("O IMC é: %f,\n", imc);
	return 0;
}
