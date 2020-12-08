#include <stdio.h>

int main() {

    char nome[61];
    double salarioFixo, vendas, salario, comissao;

    scanf("%s %lf %lf", &nome, &salarioFixo, &vendas);

    comissao = (vendas * 15) / 100;
    salario = salarioFixo + comissao;

    printf("TOTAL = R$ %.2f\n", salario);

    return 0;
}

