/*
 * Calculo_SalarioLiquido.c
 *
 *  C�lculo de sal�rio bruto, sal�rio l�quido e descontos (11% Imposto de Renda, 8% INSS, 5% Sindicato).
 */
#include <stdio.h>

int main(void) {
    float valorHora;
    int qtdHorasTrabalhadas;
    float salarioBruto;
    float impostoRenda;
    float inss;
    float sindicato;
    float salarioLiquido;

    printf("Quanto voc� ganha por hora?\n");
    scanf("%f", &valorHora);
    printf("Qual o n�mero de horas trabalhadas no m�s?\n");
    scanf("%d", &qtdHorasTrabalhadas);

    salarioBruto = valorHora * qtdHorasTrabalhadas;
    impostoRenda = salarioBruto * 0.11;
    inss = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;

    salarioLiquido = salarioBruto - impostoRenda - inss - sindicato;

    printf("+ Sal�rio Bruto: R$ %.2f\n", salarioBruto);
    printf("- IR (11%%): R$ %.2f\n", impostoRenda);
    printf("- INSS (8%%): R$ %.2f\n", inss);
    printf("- Sindicato (5%%): R$ %.2f\n", sindicato);
    printf("= Sal�rio Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}

