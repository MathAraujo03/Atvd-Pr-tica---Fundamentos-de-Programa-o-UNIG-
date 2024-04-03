#include <stdio.h>

int main() {
    char nome[50];
    double salario_fixo, total_vendas, salario_total;

    // Lendo o nome do vendedor, seu salário fixo e o total de vendas
    scanf("%s %lf %lf", nome, &salario_fixo, &total_vendas);

    // Calculando a comissão sobre as vendas (15%)
    double comissao = total_vendas * 0.15;

    // Calculando o salário total
    salario_total = salario_fixo + comissao;

    // Imprimindo o total a receber no final do mês
    printf("TOTAL = R$ %.2lf\n", salario_total);

    return 0;
}
